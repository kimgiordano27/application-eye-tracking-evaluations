/*
FUNCTION_NAME: FUN_034ccaa0
ENTRY_POINT: 034ccaa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_034ccaa0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_04832d00 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_04832d00 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = FUN_035de31c(*(long *)(param_1 + 0x68),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_01bc4c70(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
    FUN_034ccb04();
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Sirenix_Serialization_UnitySerializationUtility_ApplyPrefabModifications__
                              );
    FUN_0356adc8(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Mono_Unity_UnityTlsContext_ReadCallback__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


