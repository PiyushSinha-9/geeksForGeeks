
class TreeNode:
    int id;
    TreeNode parent;
    TreeNode[] children;

 function treeAreIsomorphic(tree1,tree2):
    tree1_center=treeCenter(tree1)
    tree2_center=treeCenter(tree2)

    tree1_rooted = rootTree(tree1,tree1_centers[0])
    tree1_encoded = encode(tree1_rooted)

    for center in tree2_centers:      // tree moght have multiple center (2 max)
        tree2_rooted =rootTree(tree2,center)
        tree2_encoded = encode(tree2_rooted)

        if tree1_encoded == tree2_encoded:
            return true

    return False


function endoe(node ):
    if node ==null:
        return ""
    labels =[] 
    for child in node.children():
        labels.add(encode(child))

    sort(labels)

    result =""
    for label in labels:
        result += __USER_LABEL_PREFIX__

    return "(" + result + ")"