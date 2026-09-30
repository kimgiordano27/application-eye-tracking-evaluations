/*
FUNCTION_NAME: FUN_0275857c
ENTRY_POINT: 0275857c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_0275857c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_037884d2 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_Add__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_037884d2 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar2 = FUN_0129eff4(*(long *)(param_1 + 0x10),param_2,&local_40,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_Add__
                          ), (uVar2 & 1) != 0)) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar2 = FUN_02791030(*(undefined4 *)(param_1 + 0x18),local_40,uStack_38,&local_60,0);
    uVar1 = uStack_58;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_02681b9c(uVar1,0,0);
      if ((uVar2 & 1) != 0) {
        *param_3 = uStack_58;
        return 1;
      }
    }
  }
  *param_3 = 0;
  return 0;
}


