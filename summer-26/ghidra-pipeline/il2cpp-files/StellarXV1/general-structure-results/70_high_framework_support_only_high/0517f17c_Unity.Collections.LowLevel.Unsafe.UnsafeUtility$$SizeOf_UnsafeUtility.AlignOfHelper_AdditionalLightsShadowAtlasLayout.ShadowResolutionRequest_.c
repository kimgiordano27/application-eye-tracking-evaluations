/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<AdditionalLightsShadowAtlasLayout.ShadowResolutionRequest>>
ENTRY_POINT: 0517f17c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>
          (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *in_stack_00000018;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0xd88)) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector3f>>
        ;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00();

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_Vector3f>>
  :
  (*(code *)*puVar1)();
  lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  if (in_stack_00000018 != (long *)0x0) {
    if (*(long *)(*in_stack_00000018 + 0x40) == *(long *)(lVar2 + 0x40)) {
      puVar1 = (undefined8 *)thunk_FUN_040b5044();
      *unaff_x20 = *puVar1;
      *unaff_x19 = 0;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(in_stack_00000018);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


