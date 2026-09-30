/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 027649c8
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator
               (undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  void *unaff_x23;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x24;
  long unaff_x25;
  code *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  uint uVar5;
  ulong unaff_x29;
  ulong uVar6;
  ulong in_stack_00000008;
  
  do {
    memcpy(param_1,param_2,0x50);
    iVar2 = (*unaff_x26)(unaff_x24,&stack0x00000290,&stack0x00000240,
                         *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      uVar5 = (uint)unaff_x29;
      if (uVar1 <= uVar5) goto LAB_02764ad4;
      memcpy(&stack0x000001a0,unaff_x23,0x50);
      if (uVar1 <= uVar5 + 1) goto LAB_02764ad4;
      lVar3 = unaff_x22 + (int)(uVar5 + 1) * unaff_x27;
      memcpy((void *)(lVar3 + 0x20),&stack0x000001a0,0x50);
      thunk_FUN_0188fd20(lVar3 + 0x28,0);
      uVar5 = uVar5 - 1;
      unaff_x29 = (ulong)uVar5;
      if ((int)uVar5 < unaff_w21) goto LAB_02764a60;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      memcpy(&stack0x00000150,&stack0x000001f0,0x50);
      if (uVar1 <= uVar5) goto LAB_02764ad4;
    }
    else {
LAB_02764a60:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x29;
      do {
        unaff_x29 = unaff_x28;
        memcpy(&stack0x00000010,&stack0x000001f0,0x50);
        uVar1 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar1) goto LAB_02764ad4;
        lVar3 = unaff_x22 + (int)uVar1 * unaff_x27;
        memcpy((void *)(lVar3 + 0x20),&stack0x00000010,0x50);
        thunk_FUN_0188fd20(lVar3 + 0x28,0);
        if (unaff_x29 == in_stack_00000008) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x28 = unaff_x29 + 1;
        if ((uint)uVar4 <= (uint)unaff_x28) goto LAB_02764ad4;
        memcpy(&stack0x000001f0,(void *)(unaff_x22 + unaff_x28 * unaff_x27 + 0x20),0x50);
        uVar6 = unaff_x29;
      } while ((long)unaff_x29 < unaff_x25);
      memcpy(&stack0x00000150,&stack0x000001f0,0x50);
      if ((uint)uVar4 <= (uint)unaff_x29) {
LAB_02764ad4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
    }
    unaff_x23 = (void *)(unaff_x22 + (long)(int)unaff_x29 * (long)(int)unaff_x27 + 0x20);
    memcpy(&stack0x00000100,unaff_x23,0x50);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    memcpy(&stack0x000000b0,&stack0x00000150,0x50);
    memcpy(&stack0x00000060,&stack0x00000100,0x50);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    unaff_x26 = *(code **)(unaff_x20 + 0x18);
    unaff_x24 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000290,&stack0x000000b0,0x50);
    param_1 = &stack0x00000240;
    param_2 = &stack0x00000060;
  } while( true );
}


