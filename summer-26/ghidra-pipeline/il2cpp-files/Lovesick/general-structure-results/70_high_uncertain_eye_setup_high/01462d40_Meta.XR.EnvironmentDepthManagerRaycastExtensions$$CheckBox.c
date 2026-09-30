/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$CheckBox
ENTRY_POINT: 01462d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__CheckBox(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  undefined8 uVar9;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  if (param_1 == 0) {
    FUN_00d59478();
    param_1 = *(long *)(unaff_x23 + 0x38);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x23 + 0x38) + 0x10) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  FUN_013f38b0();
  puVar4 = StringLiteral_302;
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  puVar2 = Method_System_Data_DataTable_Merge__;
  if (1 < unaff_w21) {
    uVar9 = *unaff_x24;
    uVar7 = (**(code **)(*unaff_x20 + 0x168))();
    uVar7 = FUN_01600424(uVar9,uVar7,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    FUN_02661754(uVar7,0);
  }
  uVar5 = FUN_02665480();
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar5);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined8 *)(lVar6 + 0x20 + uVar8 * 8) = *(undefined8 *)(unaff_x19 + 0x10);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


