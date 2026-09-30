/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0253c6e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 145
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
          (long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined4 in_stack_00000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined *puVar4;
  
  if ((DAT_03782b61 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11510);
    thunk_FUN_00d48444(System_Runtime_InteropServices_OutAttribute_var);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ObiDistanceField,_ObiDistanceFieldHandle>_TryGetValue__
                      );
    DAT_03782b61 = 1;
  }
  in_stack_00000108 = 0;
  uStack000000000000010c = 0;
  in_stack_00000110 = 0;
  uStack0000000000000114 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  uVar1 = FUN_02689f60(param_1,0);
  if ((uVar1 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar2 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = 
    Method_Meta_WitAi_Json_WitResponseNode_<get_DeepChilds>d__21_System_Collections_IEnumerator_Reset__
    ;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        uStack00000000000000a4 = *(undefined8 *)((long)param_2 + 0x14);
        in_stack_00000090 = *param_2;
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
        uStack0000000000000098 = (undefined4)param_2[1];
        uStack000000000000009c = (undefined4)((ulong)param_2[1] >> 0x20);
        FUN_0253c880(&stack0x00000100,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
                     &stack0x00000090);
        uStack0000000000000064 = CONCAT44(in_stack_00000118,uStack0000000000000114);
        uStack0000000000000078 = in_stack_00000108;
        in_stack_00000070 = in_stack_00000100;
        uStack000000000000007c = uStack000000000000010c;
        uStack0000000000000080 = in_stack_00000110;
        uStack0000000000000084 = uStack0000000000000064;
        if (*(long *)(param_1 + 0x18) != 0) {
          in_stack_00000058 = in_stack_00000108;
          in_stack_00000050 = in_stack_00000100;
          uStack000000000000005c = uStack000000000000010c;
          in_stack_00000060 = in_stack_00000110;
          uVar1 = FUN_02545d10(*(long *)(param_1 + 0x18),&stack0x00000050,&stack0x000000b0,0);
          puVar4 = StringLiteral_11510;
          uVar2 = 0;
          if ((uVar1 & 1) != 0) {
            memcpy(&stack0x00000008,&stack0x000000b0,0x48);
            uVar2 = FUN_011bf638(param_1,&stack0x00000008,*(undefined8 *)puVar4);
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


