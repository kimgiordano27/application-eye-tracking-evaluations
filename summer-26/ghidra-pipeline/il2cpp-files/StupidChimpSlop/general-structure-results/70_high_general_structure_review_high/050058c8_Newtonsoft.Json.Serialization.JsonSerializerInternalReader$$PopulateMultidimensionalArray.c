/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 050058c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (undefined1 param_1 [16])

{
  undefined4 uVar1;
  undefined4 unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar3 = param_1._8_8_;
  uVar2 = param_1._0_8_;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
  *(undefined8 *)(unaff_x27 + 0x72) = uVar3;
  *(undefined8 *)(unaff_x27 + 0x6a) = uVar2;
  FUN_05005aec();
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  FUN_04e98268(unaff_x29 + -0xd0,&uStack_40,0x20,0);
  if (unaff_w28 == 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050062f0(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -0xa4);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05005d24(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w24,uVar1);
  }
  FUN_04e982a0(unaff_x29 + -0xd0,0);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


