/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03a26cc8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x23;
  long unaff_x29;
  
  iVar2 = (*param_1)();
  if (iVar2 == 0) {
    uVar4 = 0;
LAB_03a26db0:
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    plVar3 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_070c48c8);
    FUN_057c92b0(plVar3,0);
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
    puVar1 = PTR_DAT_070c9d50;
    if ((int)uVar4 < 1) {

      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Painter2D_Painter2DJobData>
      :
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        goto LAB_03a26db0;
      }
    }
    else if (plVar3 != (long *)0x0) {
      iVar2 = 0;
      do {
        FUN_057cac1c(plVar3,*(undefined8 *)puVar1,0);
        lVar6 = *(long *)(unaff_x19 + 0x38);
        *(int *)(unaff_x29 + -0xc) = iVar2;
        puVar5 = *(undefined8 **)(lVar6 + 0x10);
        uVar4 = *puVar5;
        pcVar7 = (code *)puVar5[2];
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x21;
        (*pcVar7)(uVar4);
        uVar4 = thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18));
        FUN_057cbce0(plVar3,uVar4,0);
        iVar2 = iVar2 + 1;
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
      } while (iVar2 < (int)uVar4);
      goto 
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Painter2D_Painter2DJobData>
      ;
    }
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


