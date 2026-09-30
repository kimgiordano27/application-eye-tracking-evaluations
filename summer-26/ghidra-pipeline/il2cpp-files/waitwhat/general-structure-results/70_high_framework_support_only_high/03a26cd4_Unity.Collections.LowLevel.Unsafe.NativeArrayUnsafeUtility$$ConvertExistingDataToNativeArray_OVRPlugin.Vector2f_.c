/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector2f>
ENTRY_POINT: 03a26cd4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x23;
  long unaff_x29;
  
  plVar4 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (**(undefined8 **)(param_1 + 0x8c8));
  FUN_057c92b0(plVar4,0);
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
  puVar1 = PTR_DAT_070c9d50;
  if (iVar2 < 1) {

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Painter2D_Painter2DJobData>
    :
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto 
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
      ;
    }
  }
  else if (plVar4 != (long *)0x0) {
    iVar2 = 0;
    do {
      FUN_057cac1c(plVar4,*(undefined8 *)puVar1,0);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      *(int *)(unaff_x29 + -0xc) = iVar2;
      puVar6 = *(undefined8 **)(lVar7 + 0x10);
      uVar5 = *puVar6;
      pcVar8 = (code *)puVar6[2];
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x21;
      (*pcVar8)(uVar5);
      uVar5 = thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18));
      FUN_057cbce0(plVar4,uVar5,0);
      iVar2 = iVar2 + 1;
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
    } while (iVar2 < iVar3);
    goto 
    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Painter2D_Painter2DJobData>
    ;
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }

  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


