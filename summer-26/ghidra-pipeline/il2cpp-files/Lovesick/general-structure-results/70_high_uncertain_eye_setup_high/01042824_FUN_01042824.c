/*
FUNCTION_NAME: FUN_01042824
ENTRY_POINT: 01042824
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01042824(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long local_18;
  
  if ((DAT_03775fdf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4842);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_65_0_TypeInfo);
    DAT_03775fdf = 1;
  }
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (FUN_0132138c(*(long *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xbc),&local_18,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__),
     local_18 != 0)) {
    FUN_0268ace8(local_18,0,0);
    lVar2 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0xbc) + 1;
    *(int *)(param_1 + 0xbc) = iVar3;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        iVar3 = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      FUN_0132138c(lVar2,iVar3,&local_18,*(undefined8 *)puVar1);
      if (local_18 != 0) {
        FUN_0268ace8(local_18,1,0);
        if (0.0 < *(float *)(param_1 + 0xb8)) {
          FUN_0268ea48(param_1,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo,0);
          if (*(long *)(param_1 + 0xd0) == 0) goto LAB_01042924;
          FUN_02659e4c(*(long *)(param_1 + 0xd0),0);
        }
        return;
      }
    }
  }
LAB_01042924:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


