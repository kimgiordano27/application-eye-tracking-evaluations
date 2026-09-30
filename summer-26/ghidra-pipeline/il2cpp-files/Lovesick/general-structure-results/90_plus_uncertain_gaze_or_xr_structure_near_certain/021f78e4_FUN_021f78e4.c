/*
FUNCTION_NAME: FUN_021f78e4
ENTRY_POINT: 021f78e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


bool FUN_021f78e4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_24;
  
  if ((DAT_03781838 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_75__);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass37_0_TypeInfo);
    DAT_03781838 = 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = FUN_0214cc58(*(long *)(param_1 + 0x78),0);
  if ((uVar2 & 1) != 0) {
    pfVar3 = (float *)FUN_012f9a10(param_1,*(undefined8 *)
                                            DG_Tweening_ShortcutExtensions_<>c__DisplayClass37_0_TypeInfo
                                  );
    fVar5 = *pfVar3;
    if ((DAT_03781834 & 1) == 0) {
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                        );
      DAT_03781834 = 1;
    }
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
    ;
    fVar4 = *(float *)(param_1 + 300);
    if (fVar4 <= 0.0) {
      fVar4 = **(float **)
                (*(long *)
                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                + 0xb8);
    }
    if (fVar5 < fVar4) {
      FUN_012f9e50(param_1,&local_24,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_75__);
      if ((DAT_03781834 & 1) == 0) {
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                          );
        DAT_03781834 = 1;
      }
      fVar5 = *(float *)(param_1 + 300);
      if (fVar5 <= 0.0) {
        fVar5 = **(float **)(*(long *)puVar1 + 0xb8);
      }
      return fVar5 <= local_24;
    }
  }
  return false;
}


