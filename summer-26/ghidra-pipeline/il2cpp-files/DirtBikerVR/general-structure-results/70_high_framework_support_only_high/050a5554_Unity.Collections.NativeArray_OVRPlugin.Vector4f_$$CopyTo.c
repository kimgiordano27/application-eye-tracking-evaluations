/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 050a5554
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(void)

{
  uint uVar1;
  int iVar2;
  uint in_w9;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int iVar5;
  long unaff_x26;
  ulong unaff_x27;
  uint uVar6;
  ulong unaff_x28;
  ulong uVar7;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  while( true ) {
    uVar6 = (int)unaff_x28 + 1;
    if (in_w9 <= uVar6) break;
    iVar5 = (int)unaff_x26;
    lVar3 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
    uVar8 = *(undefined8 *)(unaff_x29 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x29 + 0x30);
                    /* try { // try from 050a5574 to 051a55b3 has its CatchHandler @ 050a5574
                       catch() { ... } // from try @ 050a5574 with catch @ 050a5574
                       catch() { ... } // from try @ 050a55c8 with catch @ 050a5574
                       catch() { ... } // from try @ 050a5604 with catch @ 050a5574
                       catch() { ... } // from try @ 050a5644 with catch @ 050a5574 */
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x29 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar8;
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar6 * (long)iVar5 + 8,0);
    uVar6 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar6;
    if (unaff_w21 <= (int)uVar6) goto LAB_050a54d8;
    do {
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar1 = (int)uVar7 + 1;
        if (uVar6 <= uVar1) goto LAB_050a55f8;
        lVar3 = unaff_x22 + (long)(int)uVar1 * (long)iVar5;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar1 * (long)iVar5 + 8,0);
        if (unaff_x28 == unaff_x24) {
          return;
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if (uVar6 <= (uint)unaff_x27) goto LAB_050a55f8;
        lVar3 = unaff_x22 + unaff_x27 * unaff_x26;
        in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
        in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
        uVar7 = unaff_x28;
      } while ((long)unaff_x28 < unaff_x23);
LAB_050a54d8:
      uVar6 = (uint)unaff_x28;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_050a55f8;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      unaff_x29 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
      uVar9 = *(undefined8 *)(unaff_x29 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x29 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x29 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000040 = uVar8;
      in_stack_00000048 = uVar9;
      in_stack_00000050 = uVar4;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while (-1 < iVar2);
    in_w9 = *(uint *)(unaff_x22 + 0x18);
    if (in_w9 <= uVar6) break;
  }
LAB_050a55f8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


