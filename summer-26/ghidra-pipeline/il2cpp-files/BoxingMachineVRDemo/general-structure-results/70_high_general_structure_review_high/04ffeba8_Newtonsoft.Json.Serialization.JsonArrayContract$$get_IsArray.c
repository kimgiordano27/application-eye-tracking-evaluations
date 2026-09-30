/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsArray
ENTRY_POINT: 04ffeba8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__get_IsArray(long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int in_w9;
  undefined1 (*unaff_x19) [16];
  long unaff_x21;
  uint unaff_w22;
  undefined2 unaff_w23;
  long lVar4;
  ulong unaff_x24;
  undefined1 auVar5 [16];
  
  while( true ) {
    uVar1 = *(undefined2 *)(param_1 + unaff_x24 * 2);
    if (in_w9 == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_04f80ed4(uVar1,0);
    unaff_x24 = unaff_x24 - 1;
    if ((uVar2 & 1) == 0) break;
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 1) {
      unaff_w22 = 0;
      break;
    }
    if (*(uint *)(*unaff_x19 + 8) <= unaff_x24) goto LAB_04ffec94;
    param_1 = *(long *)*unaff_x19;
    in_w9 = *(int *)(*(long *)(unaff_x21 + 0x88) + 0xe4);
  }
  uVar3 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,unaff_w22 + 1);
  auVar5 = FUN_041a0a9c(uVar3,*(undefined8 *)PTR_DAT_067712e8);
  if (unaff_w22 < auVar5._8_4_) {
    *(undefined2 *)(auVar5._0_8_ + (ulong)unaff_w22 * 2) = unaff_w23;
    lVar4 = *(long *)PTR_DAT_06776280;
    if (*(uint *)(*unaff_x19 + 8) < unaff_w22) {
      FUN_05027268(0);
    }
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    FUN_040f5050();
    auVar5 = FUN_041a06b8(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)PTR_DAT_06770800);
    *unaff_x19 = auVar5;
    return;
  }
LAB_04ffec94:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


