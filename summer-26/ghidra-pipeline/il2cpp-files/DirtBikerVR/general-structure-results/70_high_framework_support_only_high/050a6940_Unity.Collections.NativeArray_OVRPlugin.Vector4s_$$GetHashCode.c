/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetHashCode
ENTRY_POINT: 050a6940
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetHashCode(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while ((in_w10 < (uint)param_1 && (in_w9 < (uint)param_1))) {
    if (unaff_x23 == 0) {
LAB_050a6a78:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar1 = unaff_x19 + (long)(int)in_w10 * 0x10;
    lVar2 = unaff_x19 + (long)(int)in_w9 * 0x10;
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar6 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),uVar10,uVar4,uVar3,uVar5,
                       *(undefined8 *)(unaff_x23 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    uVar6 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar9 = unaff_w20 + unaff_w21;
      if ((uint)param_1 <= uVar9) goto LAB_050a6a74;
      if (unaff_x23 == 0) goto LAB_050a6a78;
      lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      iVar7 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000020,in_stack_00000028,
                         uVar10,uVar3,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar7) {
        uVar9 = unaff_w20 + uVar6;
LAB_050a6a38:
        if (uVar9 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
          puVar8 = (undefined8 *)(lVar1 + 0x20);
          *puVar8 = in_stack_00000020;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
          thunk_FUN_03afed3c(puVar8,0);
          return;
        }
        goto LAB_050a6a74;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) ||
         (uVar6 = unaff_w20 + uVar6, *(uint *)(unaff_x19 + 0x18) <= uVar6)) goto LAB_050a6a74;
      lVar2 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar10 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar10;
      thunk_FUN_03afed3c(in_stack_00000010 + (long)(int)uVar6 * 0x10,0);
      if (in_stack_00000018._4_4_ < (int)unaff_w21) goto LAB_050a6a38;
      unaff_w26 = unaff_w21 * 2;
      param_1 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar6 = unaff_w21;
    } while (unaff_w25 <= (int)unaff_w26);
    in_w9 = unaff_w26 + in_stack_00000008._4_4_;
    in_w10 = in_w9 - 1;
  }
LAB_050a6a74:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


