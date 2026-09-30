/*
FUNCTION_NAME: OVREyeGaze_OnEnable_mF0B2E6904B17EACB79CF69FC53DD756C363EA401
ENTRY_POINT: 02d444d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze_OnEnable_mF0B2E6904B17EACB79CF69FC53DD756C363EA401(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar1 = Method_TiradorArcade_<colliderCapsuleActivo>d__25_System_Collections_IEnumerator_Reset__;
  if ((OVREyeGaze_OnEnable_mF0B2E6904B17EACB79CF69FC53DD756C363EA401::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TiradorArcade_<colliderCapsuleActivo>d__25_System_Collections_IEnumerator_Reset__
              );
    OVREyeGaze_OnEnable_mF0B2E6904B17EACB79CF69FC53DD756C363EA401::s_Il2CppMethodInitialized = 1;
  }
  piVar4 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  uVar3 = il2cpp_codegen_add<int,int>(*piVar4,1);
  puVar5 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *puVar5 = uVar3;
  bVar2 = OVREyeGaze_StartEyeTracking_m867ECFBFE39BE0F96982305ADED2641E7BA9CC71(param_1,0);
  if ((bVar2 & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0,0);
  }
  return;
}


