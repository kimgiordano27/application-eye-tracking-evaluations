/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0253c750
PROGRAM: Lovesick-libil2cpp.so
SCORE: 143
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled
          (undefined1 param_1 [16])

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined *puVar4;
  
  unaff_x21[5] = param_1._8_8_;
  unaff_x21[4] = param_1._0_8_;
  unaff_x21[7] = param_1._8_8_;
  unaff_x21[6] = param_1._0_8_;
  uVar1 = FUN_02689f60();
  if ((uVar1 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = 
    Method_Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21_System_Collections_IEnumerator_Reset__
    ;
  }
  else {
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar3 = *(undefined8 *)((long)unaff_x20 + 0xc);
        uVar6 = unaff_x20[1];
        uVar5 = *unaff_x20;
        uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20);
        *(undefined8 *)((long)unaff_x21 + 0x14) = *(undefined8 *)((long)unaff_x20 + 0x14);
        *(undefined8 *)((long)unaff_x21 + 0xc) = uVar3;
        unaff_x21[1] = uVar6;
        *unaff_x21 = uVar5;
        FUN_0253c880(&stack0x00000100,uVar2,&stack0x00000090);
        in_stack_00000070 = unaff_x21[0xe];
        uStack0000000000000064 = *(undefined8 *)((long)unaff_x21 + 0x84);
        uStack0000000000000078 = (undefined4)unaff_x21[0xf];
        uStack000000000000007c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0x7c);
        uStack0000000000000080 =
             (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0x7c) >> 0x20);
        uStack0000000000000084 = uStack0000000000000064;
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          in_stack_00000058 = uStack0000000000000078;
          in_stack_00000050 = in_stack_00000070;
          uStack000000000000005c = uStack000000000000007c;
          in_stack_00000060 = uStack0000000000000080;
          uVar1 = FUN_02545d10(*(long *)(unaff_x19 + 0x18),&stack0x00000050,&stack0x000000b0,0);
          uVar2 = 0;
          if ((uVar1 & 1) != 0) {
            memcpy(&stack0x00000008,&stack0x000000b0,0x48);
            uVar2 = FUN_011bf638();
          }
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = UnityEngine_XR_ARSubsystems_TrackingState_TypeInfo;
  }
  uVar3 = thunk_FUN_00d48444(puVar4);
  FUN_017713a8(uVar2,uVar3,0);
  uVar3 = thunk_FUN_00d48444(System_Func<InteractionGroupUnregisteredEventArgs>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar3);
}


