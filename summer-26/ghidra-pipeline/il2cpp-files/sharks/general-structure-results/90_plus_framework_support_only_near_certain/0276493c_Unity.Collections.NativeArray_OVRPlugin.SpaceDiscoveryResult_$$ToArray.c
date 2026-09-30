/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 0276493c
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(void)

{
  void *__src;
  uint uVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar3;
  undefined8 uVar4;
  long unaff_x25;
  code *pcVar5;
  long unaff_x27;
  ulong unaff_x28;
  ulong uVar6;
  uint uVar7;
  ulong unaff_x29;
  ulong in_stack_00000008;
  
  do {
    uVar6 = unaff_x28;
    uVar7 = (uint)unaff_x23;
    if (unaff_x25 <= (long)unaff_x29) {
      memcpy(&stack0x00000150,&stack0x000001f0,0x50);
      if (uVar7 <= (uint)unaff_x29) {
LAB_02764ad4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      while( true ) {
        uVar7 = (uint)unaff_x29;
        __src = (void *)(unaff_x22 + (long)(int)uVar7 * (long)(int)unaff_x27 + 0x20);
        memcpy(&stack0x00000100,__src,0x50);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        memcpy(&stack0x000000b0,&stack0x00000150,0x50);
        memcpy(&stack0x00000060,&stack0x00000100,0x50);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        pcVar5 = *(code **)(unaff_x20 + 0x18);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
        memcpy(&stack0x00000290,&stack0x000000b0,0x50);
        memcpy(&stack0x00000240,&stack0x00000060,0x50);
        iVar2 = (*pcVar5)(uVar4,&stack0x00000290,&stack0x00000240,*(undefined8 *)(unaff_x20 + 0x28))
        ;
        if (-1 < iVar2) break;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 <= uVar7) goto LAB_02764ad4;
        memcpy(&stack0x000001a0,__src,0x50);
        if (uVar1 <= uVar7 + 1) goto LAB_02764ad4;
        lVar3 = unaff_x22 + (int)(uVar7 + 1) * unaff_x27;
        memcpy((void *)(lVar3 + 0x20),&stack0x000001a0,0x50);
        thunk_FUN_0188fd20(lVar3 + 0x28,0);
        uVar7 = uVar7 - 1;
        unaff_x29 = (ulong)uVar7;
        if ((int)uVar7 < unaff_w21) break;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        memcpy(&stack0x00000150,&stack0x000001f0,0x50);
        if (uVar1 <= uVar7) goto LAB_02764ad4;
      }
      uVar7 = *(uint *)(unaff_x22 + 0x18);
    }
    memcpy(&stack0x00000010,&stack0x000001f0,0x50);
    uVar1 = (int)unaff_x29 + 1;
    if (uVar7 <= uVar1) goto LAB_02764ad4;
    lVar3 = unaff_x22 + (int)uVar1 * unaff_x27;
    memcpy((void *)(lVar3 + 0x20),&stack0x00000010,0x50);
    thunk_FUN_0188fd20(lVar3 + 0x28,0);
    if (uVar6 == in_stack_00000008) {
      return;
    }
    unaff_x23 = *(undefined8 *)(unaff_x22 + 0x18);
    unaff_x28 = uVar6 + 1;
    if ((uint)unaff_x23 <= (uint)unaff_x28) goto LAB_02764ad4;
    memcpy(&stack0x000001f0,(void *)(unaff_x22 + unaff_x28 * unaff_x27 + 0x20),0x50);
    unaff_x29 = uVar6;
  } while( true );
}


