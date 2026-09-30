/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 0177ed08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
          (long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long unaff_x19;
  int unaff_w21;
  int iVar3;
  long unaff_x22;
  long lVar4;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long in_stack_00000098;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(unaff_x27 + 0x618) = 1;
  if (unaff_x22 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_015fd038();
    iVar3 = *(int *)(unaff_x22 + 0x10);
  }
  if (DAT_03778aee == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033eb120);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    DAT_03778aee = '\x01';
  }
  if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_00bd738c(), (uVar1 & 1) != 0)))) {
    uVar2 = 0x7f800000;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x78);
    if (*(char *)(unaff_x27 + 0x618) == '\0') {
                    /* try { // try from 0177edb0 to 0187edb7 has its CatchHandler @ 0177ee90 */
      thunk_FUN_00d48444(PTR_DAT_033ee010);
                    /* try { // try from 0177edb8 to 0187eea7 has its CatchHandler @ 0177ed04 */
      *(undefined1 *)(unaff_x27 + 0x618) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_015fd038(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (DAT_03778aee == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033eb120);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      DAT_03778aee = '\x01';
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_00bd738c(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xff800000;
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x68);
      if (*(char *)(unaff_x27 + 0x618) == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        *(undefined1 *)(unaff_x27 + 0x618) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        FUN_015fd038(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (DAT_03778aee == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033eb120);
        thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
        DAT_03778aee = '\x01';
      }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177edb0 with catch @ 0177ee90
                        */
                    /* try { // try from 0177eea8 to 0187eebf has its CatchHandler @ 0177ef80 */
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_00bd738c(), (uVar1 & 1) == 0))))
      {
        FUN_00acb0a4(*unaff_x25);
                    /* WARNING: Subroutine does not return */
        FUN_0177b870(0,0);
      }
      uVar2 = 0x7fc00000;
    }
  }
                    /* try { // try from 0177eec0 to 0187ef6f has its CatchHandler @ 0177ed04 */
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


