/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 05184840
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0
               (undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_067829b0;
                    /* try { // try from 05184844 to 0528484f has its CatchHandler @ 05184888 */
  if ((DAT_06b7af40 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067829b0);
                    /* try { // try from 05184864 to 0528486b has its CatchHandler @ 05184884 */
    DAT_06b7af40 = 1;
  }
                    /* try { // try from 0518486c to 0528487b has its CatchHandler @ 051847fc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
                    /* try { // try from 0518487c to 0528487f has its CatchHandler @ 0518488c */
                    /* try { // try from 05184880 to 05284883 has its CatchHandler @ 05184884 */
  FUN_05184890(param_1);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05184864 with catch @ 05184884
                       catch(type#1 @ 0638da48) { ... } // from try @ 05184880 with catch @ 05184884
                       try { // try from 05184884 to 052848a3 has its CatchHandler @ 051847fc */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05184844 with catch @ 05184888
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0518487c with catch @ 0518488c
                        */
  FUN_0517386c();
  return;
}


