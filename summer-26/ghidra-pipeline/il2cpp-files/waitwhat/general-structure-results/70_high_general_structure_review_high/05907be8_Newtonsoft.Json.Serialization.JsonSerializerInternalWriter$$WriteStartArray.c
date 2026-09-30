/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 05907be8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(undefined8 param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int in_w9;
  long lVar10;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined1 auVar11 [16];
  
  if (in_w9 == 0) {
    thunk_FUN_031e5338(param_1);
  }
  lVar6 = FUN_05905d28();
  puVar4 = PTR_DAT_070d31f8;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05907ccc to 05a07cdb has its CatchHandler @ 05907db0 */
    FUN_03188cd8();
  }
  iVar1 = *(int *)(lVar6 + 0x10);
  uVar3 = (uint)unaff_x20;
  lVar6 = 0;
  lVar5 = unaff_x20 << 0x20;
  do {
    lVar10 = lVar5;
    lVar9 = lVar6;
    uVar8 = (uVar3 - 1) + (int)lVar9;
    if ((int)uVar8 < 0) goto LAB_05907ca4;
    if ((int)uVar8 < iVar1) break;
    if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar2 = *(undefined2 *)(unaff_x19 + (((unaff_x20 & 0xffffffff) - 1) + lVar9 & 0xffffffff) * 2);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = FUN_05906bd4(uVar2);
    lVar6 = lVar9 + -1;
    lVar5 = lVar10 + -0x100000000;
  } while ((uVar7 & 1) == 0);
  lVar6 = *(long *)puVar4;
  if (uVar3 < uVar3 + (int)lVar9) {
    FUN_05950030(0);
  }
  if ((*(ushort *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  unaff_x19 = unaff_x19 + (lVar10 >> 0x1f);
  unaff_x20 = -lVar9;
LAB_05907ca4:
  auVar11._8_8_ = unaff_x20;
  auVar11._0_8_ = unaff_x19;
  return auVar11;
}


