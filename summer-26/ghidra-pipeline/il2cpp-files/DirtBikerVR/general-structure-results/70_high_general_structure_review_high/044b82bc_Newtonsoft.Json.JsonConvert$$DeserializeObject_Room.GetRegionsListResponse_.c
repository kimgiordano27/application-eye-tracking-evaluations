/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Room.GetRegionsListResponse>
ENTRY_POINT: 044b82bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<Room_GetRegionsListResponse>(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  if (param_1 == (long *)0x0) {
    FUN_03ac40ec();
    param_1 = *(long **)(unaff_x19 + 0x38);
  }
  if ((*(ushort *)(*param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b82ec to 045b8303 has its CatchHandler @ 044b83f8 */
  FUN_048ba038(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b830c to 045b831b has its CatchHandler @ 044b8400 */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b8338 to 045b835f has its CatchHandler @ 044b8408 */
    FUN_0495f494(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


