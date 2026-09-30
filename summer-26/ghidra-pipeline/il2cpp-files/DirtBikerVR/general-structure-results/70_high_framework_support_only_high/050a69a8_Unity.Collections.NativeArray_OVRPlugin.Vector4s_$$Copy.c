/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 050a69a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_CY;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint uVar10;
  uint unaff_w28;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar10 = unaff_w26;
    if ((bool)in_CY) {
LAB_050a6a74:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x23 == 0) {
LAB_050a6a78:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar1 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000020,in_stack_00000028,uVar11,
                       uVar5,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w28 = unaff_w20 + unaff_w21;
LAB_050a6a38:
      if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
        lVar1 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
        puVar8 = (undefined8 *)(lVar1 + 0x20);
        *puVar8 = in_stack_00000020;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
        thunk_FUN_03afed3c(puVar8,0);
        return;
      }
      goto LAB_050a6a74;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
       (uVar9 = unaff_w20 + unaff_w21, *(uint *)(unaff_x19 + 0x18) <= uVar9)) goto LAB_050a6a74;
    lVar2 = unaff_x19 + (long)(int)uVar9 * 0x10;
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar11;
    thunk_FUN_03afed3c(in_stack_00000010 + (long)(int)uVar9 * 0x10,0);
    if (in_stack_00000018._4_4_ < (int)uVar10) goto LAB_050a6a38;
    unaff_w26 = uVar10 * 2;
    uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w26 < unaff_w25) {
      uVar6 = unaff_w26 + in_stack_00000008._4_4_;
      if ((uVar9 <= uVar6 - 1) || (uVar9 <= uVar6)) goto LAB_050a6a74;
      if (unaff_x23 == 0) goto LAB_050a6a78;
      lVar1 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar2 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar11,uVar3,uVar5,uVar4,
                         *(undefined8 *)(unaff_x23 + 0x28));
      uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      unaff_w26 = unaff_w26 | uVar6 >> 0x1f;
    }
    unaff_w28 = unaff_w20 + unaff_w26;
    in_CY = uVar9 <= unaff_w28;
    unaff_w21 = uVar10;
  } while( true );
}


