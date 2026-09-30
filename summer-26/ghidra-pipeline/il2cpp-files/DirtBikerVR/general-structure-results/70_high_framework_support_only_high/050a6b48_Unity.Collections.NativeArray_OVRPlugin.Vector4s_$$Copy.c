/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 050a6b48
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
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x27;
  uint uVar5;
  ulong unaff_x28;
  ulong uVar6;
  long unaff_x29;
  undefined8 uVar7;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  while( true ) {
    uVar5 = (int)unaff_x28 + 1;
    if (in_w9 <= uVar5) break;
    lVar1 = unaff_x22 + (long)(int)uVar5 * 0x10;
    uVar7 = *unaff_x21;
    *(undefined8 *)(lVar1 + 0x28) = unaff_x21[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar5 * 0x10,0);
    uVar5 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar5;
    if (in_stack_00000018 <= (int)uVar5) goto LAB_050a6aec;
    do {
      uVar5 = *(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar2 = (int)uVar6 + 1;
        if (uVar5 <= uVar2) goto LAB_050a6bd0;
        lVar1 = unaff_x22 + (long)(int)uVar2 * 0x10;
        *(undefined8 *)(lVar1 + 0x20) = unaff_x23;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
        thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar2 * 0x10,0);
        if (unaff_x28 == in_stack_00000008) {
          return;
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if (uVar5 <= (uint)unaff_x27) goto LAB_050a6bd0;
        lVar1 = unaff_x22 + unaff_x27 * 0x10;
        unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
        unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
        uVar6 = unaff_x28;
      } while ((long)unaff_x28 < in_stack_00000010);
LAB_050a6aec:
      uVar5 = (uint)unaff_x28;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_050a6bd0;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar1 = unaff_x22 + (long)(int)uVar5 * 0x10;
      unaff_x21 = (undefined8 *)(lVar1 + 0x20);
      uVar7 = *unaff_x21;
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      iVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar7,uVar3,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while (-1 < iVar4);
    in_w9 = *(uint *)(unaff_x22 + 0x18);
    if (in_w9 <= uVar5) break;
  }
LAB_050a6bd0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


