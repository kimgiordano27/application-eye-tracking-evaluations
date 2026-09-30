/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 027648f8
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (undefined8 param_1,int param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  long unaff_x22;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uStack0000000000000008;
  
  uStack0000000000000008 = (ulong)param_3;
  uVar8 = (long)param_2;
  while( true ) {
    uVar1 = uVar8 + 1;
    uVar4 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar4 <= (uint)uVar1) break;
    memcpy(&stack0x000001f0,(void *)(unaff_x22 + uVar1 * 0x50 + 0x20),0x50);
    if ((long)param_2 <= (long)uVar8) {
      memcpy(&stack0x00000150,&stack0x000001f0,0x50);
      if (uVar4 <= (uint)uVar8) break;
      while( true ) {
        uVar4 = (uint)uVar8;
        __src = (void *)(unaff_x22 + (long)(int)uVar4 * 0x50 + 0x20);
        memcpy(&stack0x00000100,__src,0x50);
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        memcpy(&stack0x000000b0,&stack0x00000150,0x50);
        memcpy(&stack0x00000060,&stack0x00000100,0x50);
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        pcVar7 = *(code **)(param_4 + 0x18);
        uVar6 = *(undefined8 *)(param_4 + 0x40);
        memcpy(&stack0x00000290,&stack0x000000b0,0x50);
        memcpy(&stack0x00000240,&stack0x00000060,0x50);
        iVar3 = (*pcVar7)(uVar6,&stack0x00000290,&stack0x00000240,*(undefined8 *)(param_4 + 0x28));
        if (-1 < iVar3) break;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 <= uVar4) goto LAB_02764ad4;
        memcpy(&stack0x000001a0,__src,0x50);
        if (uVar2 <= uVar4 + 1) goto LAB_02764ad4;
        lVar5 = unaff_x22 + (long)(int)(uVar4 + 1) * 0x50;
        memcpy((void *)(lVar5 + 0x20),&stack0x000001a0,0x50);
        thunk_FUN_0188fd20(lVar5 + 0x28,0);
        uVar4 = uVar4 - 1;
        uVar8 = (ulong)uVar4;
        if ((int)uVar4 < param_2) break;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        memcpy(&stack0x00000150,&stack0x000001f0,0x50);
        if (uVar2 <= uVar4) goto LAB_02764ad4;
      }
      uVar4 = *(uint *)(unaff_x22 + 0x18);
    }
    memcpy(&stack0x00000010,&stack0x000001f0,0x50);
    uVar2 = (int)uVar8 + 1;
    if (uVar4 <= uVar2) break;
    lVar5 = unaff_x22 + (long)(int)uVar2 * 0x50;
    memcpy((void *)(lVar5 + 0x20),&stack0x00000010,0x50);
    thunk_FUN_0188fd20(lVar5 + 0x28,0);
    uVar8 = uVar1;
    if (uVar1 == uStack0000000000000008) {
      return;
    }
  }
LAB_02764ad4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


