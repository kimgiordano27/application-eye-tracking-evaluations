/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 050a6a14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint in_w8;
  long in_x9;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint unaff_w26;
  uint unaff_w28;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar11 = param_1._8_8_;
  uVar10 = param_1._0_8_;
  do {
    *(undefined8 *)(in_x9 + 0x28) = uVar11;
    *(undefined8 *)(in_x9 + 0x20) = uVar10;
    thunk_FUN_03afed3c(in_x10 + (long)(int)in_w8 * 0x10,param_3);
    if (in_stack_00000018._4_4_ < (int)unaff_w26) {
LAB_050a6a38:
      if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
        lVar2 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
        puVar8 = (undefined8 *)(lVar2 + 0x20);
        *puVar8 = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
        thunk_FUN_03afed3c(puVar8,0);
        return;
      }
LAB_050a6a74:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar5 = unaff_w26 * 2;
    uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)uVar5 < unaff_w25) {
      uVar6 = uVar5 + in_stack_00000008._4_4_;
      if ((uVar9 <= uVar6 - 1) || (uVar9 <= uVar6)) goto LAB_050a6a74;
      if (unaff_x23 == 0) goto LAB_050a6a78;
      lVar2 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar1 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar10 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar10,uVar3,uVar11,uVar4,
                         *(undefined8 *)(unaff_x23 + 0x28));
      uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar5 = uVar5 | uVar6 >> 0x1f;
    }
    unaff_w28 = unaff_w20 + uVar5;
    if (uVar9 <= unaff_w28) goto LAB_050a6a74;
    if (unaff_x23 == 0) {
LAB_050a6a78:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
    uVar10 = *(undefined8 *)(lVar2 + 0x20);
    uVar11 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000020,in_stack_00000028,uVar10,
                       uVar11,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w28 = unaff_w20 + unaff_w26;
      goto LAB_050a6a38;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
       (in_w8 = unaff_w20 + unaff_w26, *(uint *)(unaff_x19 + 0x18) <= in_w8)) goto LAB_050a6a74;
    in_x9 = unaff_x19 + (long)(int)in_w8 * 0x10;
    uVar11 = *(undefined8 *)(lVar2 + 0x28);
    uVar10 = *(undefined8 *)(lVar2 + 0x20);
    param_3 = 0;
    in_x10 = in_stack_00000010;
    unaff_w26 = uVar5;
  } while( true );
}


