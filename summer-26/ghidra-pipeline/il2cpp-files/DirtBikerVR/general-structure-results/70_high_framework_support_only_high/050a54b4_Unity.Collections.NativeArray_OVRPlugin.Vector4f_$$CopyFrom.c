/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 050a54b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int iVar7;
  long unaff_x26;
  ulong unaff_x27;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x28;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  while (uVar8 = unaff_x27, (uint)uVar8 < in_w8) {
    lVar3 = unaff_x22 + uVar8 * unaff_x26;
    uVar12 = *(undefined8 *)(lVar3 + 0x28);
    uVar10 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    iVar7 = (int)unaff_x26;
    if (unaff_x23 <= (long)unaff_x28) {
      do {
        uVar9 = (uint)unaff_x28;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_050a55f8;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar3 = unaff_x22 + (long)(int)uVar9 * (long)iVar7;
        uVar13 = *(undefined8 *)(lVar3 + 0x28);
        uVar11 = *(undefined8 *)(lVar3 + 0x20);
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_00000040 = uVar11;
        in_stack_00000048 = uVar13;
        in_stack_00000050 = uVar5;
        in_stack_00000060 = uVar10;
        in_stack_00000068 = uVar12;
        in_stack_00000070 = uVar4;
        iVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar2) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar9) ||
           (uVar1 = uVar9 + 1, *(uint *)(unaff_x22 + 0x18) <= uVar1)) goto LAB_050a55f8;
        lVar6 = unaff_x22 + (long)(int)uVar1 * (long)iVar7;
        uVar11 = *(undefined8 *)(lVar3 + 0x20);
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar6 + 0x20) = uVar11;
        *(undefined8 *)(lVar6 + 0x30) = uVar5;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar1 * (long)iVar7 + 8,0);
        unaff_x28 = (ulong)(uVar9 - 1);
      } while (unaff_w21 <= (int)(uVar9 - 1));
      in_w8 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar9 = (int)unaff_x28 + 1;
    if (in_w8 <= uVar9) break;
    lVar3 = unaff_x22 + (long)(int)uVar9 * (long)iVar7;
    *(undefined8 *)(lVar3 + 0x28) = uVar12;
    *(undefined8 *)(lVar3 + 0x20) = uVar10;
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar9 * (long)iVar7 + 8,0);
    if (uVar8 == unaff_x24) {
      return;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    unaff_x28 = uVar8;
    unaff_x27 = uVar8 + 1;
  }
LAB_050a55f8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


