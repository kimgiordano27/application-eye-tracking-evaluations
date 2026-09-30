/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.ClientServerVersionMismatchData>
ENTRY_POINT: 044b7e20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_ClientServerVersionMismatchData>
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x21;
  
                    /* try { // try from 044b7e24 to 045b7e4b has its CatchHandler @ 044b7f78 */
  if (param_1 == (long *)0x0) {
    FUN_03ac40ec();
    param_1 = *(long **)(unaff_x19 + 0x38);
  }
  if ((*(ushort *)(*param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
  FUN_048b9e5c(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
                    /* try { // try from 044b7e5c to 045b7e73 has its CatchHandler @ 044b7f68 */
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar1 + 0x18) = param_2;
                    /* try { // try from 044b7e7c to 045b7e8b has its CatchHandler @ 044b7f70 */
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x18),param_2);
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
    UnityEngine_InputSystem_InputControl<Pose>__CompareValue
              (uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
               *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


