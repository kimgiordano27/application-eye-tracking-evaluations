/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 050a3758
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality(void)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if (unaff_x20 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (unaff_w24 < *(uint *)(unaff_x20 + 0x18)) {
    uVar3 = unaff_w23 - 1;
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x20;
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar10 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a3190();
    if ((int)uVar3 <= (int)unaff_w19) {
LAB_050a38cc:
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a3190();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x20;
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar11 = *(undefined8 *)(lVar2 + 0x38);
      uVar9 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_00000060 = uVar4;
      in_stack_00000068 = uVar6;
      in_stack_00000070 = uVar8;
      in_stack_00000078 = uVar10;
      in_stack_00000080 = uVar5;
      in_stack_00000088 = uVar7;
      in_stack_00000090 = uVar9;
      in_stack_00000098 = uVar11;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_050a3944;
          lVar2 = unaff_x20 + (long)(int)uVar3 * 0x20;
          uVar7 = *(undefined8 *)(lVar2 + 0x28);
          uVar5 = *(undefined8 *)(lVar2 + 0x20);
          uVar11 = *(undefined8 *)(lVar2 + 0x38);
          uVar9 = *(undefined8 *)(lVar2 + 0x30);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          in_stack_00000060 = uVar5;
          in_stack_00000068 = uVar7;
          in_stack_00000070 = uVar9;
          in_stack_00000078 = uVar11;
          in_stack_00000080 = uVar4;
          in_stack_00000088 = uVar6;
          in_stack_00000090 = uVar8;
          in_stack_00000098 = uVar10;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)unaff_w19) goto LAB_050a38cc;
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a3190();
      }
    }
  }
LAB_050a3944:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


