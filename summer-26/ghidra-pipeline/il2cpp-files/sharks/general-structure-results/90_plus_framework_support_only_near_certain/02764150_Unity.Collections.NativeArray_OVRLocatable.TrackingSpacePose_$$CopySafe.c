/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRLocatable.TrackingSpacePose>$$CopySafe
ENTRY_POINT: 02764150
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


uint Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__CopySafe
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  uStack00000000000001e8 = 0;
  uStack00000000000001e0 = 0;
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  uVar4 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_02763ab4(param_1,param_4,param_2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_02763ab4(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_02763ab4(param_1,param_4,uVar4,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_027644a4:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    memcpy(&stack0x000001e0,(void *)(param_1 + (long)(int)uVar4 * 0x50 + 0x20),0x50);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_02763c6c(param_1,uVar4,uVar1);
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_0276442c:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02763c6c(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      memcpy(&stack0x00000190,(void *)(param_1 + (long)(int)param_2 * 0x50 + 0x20),0x50);
      memcpy(&stack0x00000140,&stack0x000001e0,0x50);
      if (param_4 == 0) goto LAB_027644a4;
      memcpy(&stack0x000000f0,&stack0x00000190,0x50);
      memcpy(&stack0x000000a0,&stack0x00000140,0x50);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      pcVar6 = *(code **)(param_4 + 0x18);
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      memcpy(&stack0x00000280,&stack0x000000f0,0x50);
      memcpy(&stack0x00000230,&stack0x000000a0,0x50);
      iVar2 = (*pcVar6)(uVar5,&stack0x00000280,&stack0x00000230,*(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          memcpy(&stack0x00000190,&stack0x000001e0,0x50);
          uVar4 = uVar4 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar4)
          goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor;
          memcpy(&stack0x00000000,(void *)(param_1 + (long)(int)uVar4 * 0x50 + 0x20),0x50);
          memcpy(&stack0x00000050,&stack0x00000190,0x50);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          pcVar6 = *(code **)(param_4 + 0x18);
          uVar5 = *(undefined8 *)(param_4 + 0x40);
          memcpy(&stack0x00000280,&stack0x00000050,0x50);
          memcpy(&stack0x00000230,&stack0x00000000,0x50);
          iVar2 = (*pcVar6)(uVar5,&stack0x00000280,&stack0x00000230,*(undefined8 *)(param_4 + 0x28))
          ;
        } while (iVar2 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_0276442c;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_02763c6c(param_1,param_2,uVar4);
      }
    }
  }
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


