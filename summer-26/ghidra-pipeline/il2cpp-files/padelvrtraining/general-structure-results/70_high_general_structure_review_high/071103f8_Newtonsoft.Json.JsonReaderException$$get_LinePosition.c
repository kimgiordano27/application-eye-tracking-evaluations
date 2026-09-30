/*
FUNCTION_NAME: Newtonsoft.Json.JsonReaderException$$get_LinePosition
ENTRY_POINT: 071103f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReaderException__get_LinePosition(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  long *plVar3;
  
  if (param_1 == 0) {
    if (unaff_x21 == 0) goto LAB_07110524;
    *param_2 = *(undefined8 *)(unaff_x21 + 0x10);
    thunk_FUN_03d1023c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
    if (unaff_x21 == 0) goto LAB_07110524;
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x21 + 0x18);
    thunk_FUN_03d1023c();
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) {
    if (unaff_x21 == 0) goto LAB_07110524;
    *(long *)(unaff_x19 + 0x60) = *(long *)(unaff_x21 + 0x20);
    thunk_FUN_03d1023c();
  }
  plVar3 = (long *)(unaff_x19 + 0x48);
  if (*plVar3 == 0) {
    if (unaff_x21 == 0) goto LAB_07110524;
    lVar1 = FUN_0712dc20();
    *plVar3 = lVar1;
    thunk_FUN_03d1023c(plVar3,lVar1);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar2 = FUN_0712d73c(*(long *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0x118);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      uVar2 = FUN_0712d754(*(long *)(unaff_x19 + 0x10),0);
      *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
      thunk_FUN_03d1023c(unaff_x19 + 0x110);
      if (unaff_x21 != 0) {
        uVar2 = FUN_0712db08();
        *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
        thunk_FUN_03d1023c(unaff_x19 + 0x108);
        uVar2 = FUN_0712daec();
        *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
        thunk_FUN_03d1023c(unaff_x19 + 0x100);
        uVar2 = FUN_0712db24();
        *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
        thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0xf8),uVar2);
        return;
      }
    }
  }
LAB_07110524:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


