/*
FUNCTION_NAME: Common.Utils.JSONArray.<get_Children>d__18$$System.Collections.Generic.IEnumerable<Common.Utils.JSONNode>.GetEnumerator
ENTRY_POINT: 0418eb4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Common_Utils_JSONArray_<get_Children>d__18__System_Collections_Generic_IEnumerable<Common_Utils_JSONNode>_GetEnumerator
          (void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xf67) = in_w8;
                    /* catch() { ... } // from try @ 0418eb04 with catch @ 0418eb54 */
  lVar2 = FUN_0419c370();
  if (lVar2 != 0) {
    iVar1 = FUN_04c0b1d8(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 == -1) {
      return 0;
    }
    if ((unaff_x21 != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
      uVar3 = FUN_04348818(*(long *)(unaff_x19 + 0x28),unaff_w20,(long)*(int *)(unaff_x21 + 0x28),0)
      ;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 0418ebe4 with catch @ 0418ebb4 */
        FUN_04348444(*(long *)(unaff_x19 + 0x28),unaff_w20,(long)*(int *)(unaff_x21 + 0x28),
                     *(undefined8 *)PTR_DAT_08f68a50,0,0);
                    /* try { // try from 0418ebd8 to 0428ebe3 has its CatchHandler @ 0418ec0c */
        FUN_0419c6c8();
        return 1;
                    /* try { // try from 0418ebe4 to 0428ec2f has its CatchHandler @ 0418ebb4 */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


