/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04d52278
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iStack000000000000000c;
  
  FUN_04482014();
  iStack000000000000000c = 0;
  plVar2 = (long *)*unaff_x19;
  if (plVar2 != (long *)0x0) {
    FUN_094b5338(&stack0x0000000c,(long)(int)plVar2[1] + *plVar2,4,0);
    iVar1 = iStack000000000000000c;
    lVar3 = *unaff_x19;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 4;
      lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      lVar3 = FUN_04447c90(lVar3,iVar1);
      *unaff_x20 = lVar3;
      thunk_FUN_044bb4b4();
      lVar3 = *unaff_x20;
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar3 + 0x20;
      }
      plVar2 = (long *)*unaff_x19;
      if (plVar2 != (long *)0x0) {
        iVar1 = iVar1 * 4;
        FUN_094b5338(lVar3,(long)(int)plVar2[1] + *plVar2,(long)iVar1,0);
        lVar3 = *unaff_x19;
        if (lVar3 != 0) {
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + iVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


