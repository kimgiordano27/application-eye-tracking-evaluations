/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 05652268
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__remove_HSWDismissed(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x26;
  long *unaff_x27;
  
  FUN_02d965b8();
  FUN_02d965b8(
              System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
              );
  *(undefined1 *)(unaff_x26 + 0x340) = 1;
  puVar1 = 
  System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo;
  uVar2 = FUN_055339fc();
                    /* try { // try from 056522a0 to 057522a7 has its CatchHandler @ 056523e8 */
  uVar3 = FUN_055339fc();
  uVar4 = FUN_055339fc();
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
                    /* try { // try from 056522c4 to 057522cf has its CatchHandler @ 056523cc */
    thunk_FUN_02df485c(*unaff_x27);
  }
                    /* try { // try from 056522e4 to 057522ef has its CatchHandler @ 056523d8 */
  uVar2 = FUN_05652310(unaff_w22,unaff_w21,unaff_w20,uVar2,uVar3,uVar4,unaff_w19);
  FUN_055efebc(uVar2,*(undefined8 *)puVar1,0,0);
  return;
}


