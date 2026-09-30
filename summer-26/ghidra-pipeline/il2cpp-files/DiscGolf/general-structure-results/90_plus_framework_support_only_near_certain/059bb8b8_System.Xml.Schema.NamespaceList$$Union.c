/*
FUNCTION_NAME: System.Xml.Schema.NamespaceList$$Union
ENTRY_POINT: 059bb8b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long System_Xml_Schema_NamespaceList__Union(long param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 059bb8c8 to 05abb8d3 has its CatchHandler @ 059bba48 */
  if ((DAT_06dc14e8 & 1) == 0) {
    FUN_02d965b8(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    DAT_06dc14e8 = 1;
  }
                    /* try { // try from 059bb8ec to 05abb8fb has its CatchHandler @ 059bba30 */
  plVar1 = (long *)(param_1 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
                    /* try { // try from 059bb908 to 05abb90b has its CatchHandler @ 059bba68 */
                    /* try { // try from 059bb90c to 05abb95f has its CatchHandler @ 059bb5d0 */
    FUN_0400f984(lVar2,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo);
    *plVar1 = lVar2;
    LeanTween__value(plVar1,lVar2);
  }
  return lVar2;
}


