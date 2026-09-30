/*
FUNCTION_NAME: FUN_0597caf0
ENTRY_POINT: 0597caf0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0597caf0(undefined4 param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
                    /* try { // try from 0597cb00 to 05a7cb0b has its CatchHandler @ 0597cbec */
  if ((DAT_06bc19e3 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_GetEnumerator__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count__
                );
                    /* try { // try from 0597cb38 to 05a7cb43 has its CatchHandler @ 0597cbe4 */
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Item__
                );
                    /* try { // try from 0597cb44 to 05a7cbff has its CatchHandler @ 0597c9b0 */
    DAT_06bc19e3 = 1;
  }
  uVar4 = (**(code **)(*param_2 + 0xbc8))
                    (param_1,*(undefined4 *)((long)param_2 + 900),(int)param_2[0x70],param_2,
                     *(undefined8 *)(*param_2 + 0xbd0));
  lVar3 = param_2[0x74];
  *(undefined4 *)((long)param_2 + 0x38c) = uVar4;
  puVar1 = 
  Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Item__;
  if (lVar3 != 0) {
    uVar2 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    FUN_0424da08(param_2,(uVar2 ^ 0xffffffff) & 1,*(undefined8 *)puVar1);
  }
  FUN_0597cbb4(param_2);
  return;
}


