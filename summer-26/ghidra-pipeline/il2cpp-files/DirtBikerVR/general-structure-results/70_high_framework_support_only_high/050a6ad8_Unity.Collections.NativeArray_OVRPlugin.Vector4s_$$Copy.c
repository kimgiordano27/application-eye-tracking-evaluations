/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 050a6ad8
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x27;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 uVar10;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  do {
    uVar8 = unaff_x27;
    lVar3 = unaff_x22 + uVar8 * 0x10;
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    if (in_stack_00000010 <= (long)unaff_x28) {
      do {
        uVar9 = (uint)unaff_x28;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_050a6bd0;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar3 = unaff_x22 + (long)(int)uVar9 * 0x10;
        uVar10 = *(undefined8 *)(lVar3 + 0x20);
        uVar6 = *(undefined8 *)(lVar3 + 0x28);
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        iVar7 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),uVar4,uVar5,uVar10,uVar6,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar7) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_050a6bd0;
        uVar2 = uVar9 + 1;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_050a6bd0;
        lVar1 = unaff_x22 + (long)(int)uVar2 * 0x10;
        uVar10 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar1 + 0x20) = uVar10;
        thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar2 * 0x10,0);
        unaff_x28 = (ulong)(uVar9 - 1);
      } while (in_stack_00000018 <= (int)(uVar9 - 1));
      in_w8 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar9 = (int)unaff_x28 + 1;
    if (in_w8 <= uVar9) break;
    lVar3 = unaff_x22 + (long)(int)uVar9 * 0x10;
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar9 * 0x10,0);
    if (uVar8 == in_stack_00000008) {
      return;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    unaff_x27 = uVar8 + 1;
    unaff_x28 = uVar8;
  } while ((uint)(uVar8 + 1) < in_w8);
LAB_050a6bd0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


