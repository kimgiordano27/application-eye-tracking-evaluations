/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRLocatable.TrackingSpacePose>$$CopySafe
ENTRY_POINT: 027642ec
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


uint Unity_Collections_NativeArray<OVRLocatable_TrackingSpacePose>__CopySafe(void)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  undefined8 uVar3;
  int unaff_w26;
  code *pcVar4;
  
  while( true ) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    pcVar4 = *(code **)(unaff_x22 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    memcpy(&stack0x00000280,&stack0x000000f0,0x50);
    memcpy(&stack0x00000230,&stack0x000000a0,0x50);
    iVar1 = (*pcVar4)(uVar3,&stack0x00000280,&stack0x00000230,*(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
      do {
        memcpy(&stack0x00000190,&stack0x000001e0,0x50);
        unaff_w24 = unaff_w24 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24)
        goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor;
        memcpy(&stack0x00000000,(void *)(unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w26 + 0x20),
               0x50);
        memcpy(&stack0x00000050,&stack0x00000190,0x50);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        pcVar4 = *(code **)(unaff_x22 + 0x18);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
        memcpy(&stack0x00000280,&stack0x00000050,0x50);
        memcpy(&stack0x00000230,&stack0x00000000,0x50);
        iVar1 = (*pcVar4)(uVar3,&stack0x00000280,&stack0x00000230,*(undefined8 *)(unaff_x22 + 0x28))
        ;
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_02763c6c();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02763c6c();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    memcpy(&stack0x00000190,(void *)(unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w26 + 0x20),0x50
          );
    memcpy(&stack0x00000140,&stack0x000001e0,0x50);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    memcpy(&stack0x000000f0,&stack0x00000190,0x50);
    memcpy(&stack0x000000a0,&stack0x00000140,0x50);
  }
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


