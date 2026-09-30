/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4f>
ENTRY_POINT: 03a26cec
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


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4f>
               (void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x29;
  
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
  if (iVar1 < 1) {

    Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<Painter2D_Painter2DJobData>
    :
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x168))();
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto 
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeBufferPointerWithoutChecks<float>
      ;
    }
  }
  else if (unaff_x22 != (long *)0x0) {
    iVar1 = 0;
    do {
      FUN_057cac1c();
      lVar5 = *(long *)(unaff_x19 + 0x38);
      *(int *)(unaff_x29 + -0xc) = iVar1;
      puVar4 = *(undefined8 **)(lVar5 + 0x10);
      uVar3 = *puVar4;
      pcVar6 = (code *)puVar4[2];
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x21;
      (*pcVar6)(uVar3);
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18));
      FUN_057cbce0();
      iVar1 = iVar1 + 1;
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
    } while (iVar1 < iVar2);
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


