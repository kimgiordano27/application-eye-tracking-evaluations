/*
FUNCTION_NAME: FUN_06dd44f8
ENTRY_POINT: 06dd44f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06dd44f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  
                    /* try { // try from 06dd44f8 to 06ed44ff has its CatchHandler @ 06dd4568 */
                    /* try { // try from 06dd4500 to 06ed4503 has its CatchHandler @ 06dd41e0 */
                    /* try { // try from 06dd4504 to 06ed4507 has its CatchHandler @ 06dd4510 */
                    /* try { // try from 06dd4508 to 06ed4527 has its CatchHandler @ 06dd41e0 */
  if ((DAT_076ea03f & 1) == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06dd448c with catch @ 06dd4510
                       catch(type#1 @ 06e40658) { ... } // from try @ 06dd4504 with catch @ 06dd4510
                        */
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_JsonTextWriter_WriteEnd__);
                    /* try { // try from 06dd4528 to 06ed452b has its CatchHandler @ 06dd4538 */
    thunk_FUN_032e1da0(OVRPlugin_BodyJointLocation___TypeInfo);
                    /* catch() { ... } // from try @ 06dd4528 with catch @ 06dd4538 */
    DAT_076ea03f = 1;
  }
                    /* try { // try from 06dd453c to 06ed4567 has its CatchHandler @ 06dd45d4 */
  plVar4 = (long *)thunk_FUN_032f70fc(param_1,0);
  puVar3 = Method_Newtonsoft_Json_JsonTextWriter_WriteEnd__;
  puVar2 = OVRPlugin_BodyJointLocation___TypeInfo;
  puVar1 = PTR_DAT_072798f8;
  if (plVar4 != (long *)0x0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06dd44f8 with catch @ 06dd4568
                       try { // try from 06dd4568 to 06ed458b has its CatchHandler @ 06dd41e0 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06dd4334 with catch @ 06dd456c
                        */
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06dd4378 with catch @ 06dd4570
                        */
    uVar5 = FUN_057aaeec(*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar3,0);
                    /* try { // try from 06dd458c to 06ed458f has its CatchHandler @ 06dd45b0 */
                    /* try { // try from 06dd4590 to 06ed45b7 has its CatchHandler @ 06dd41e0 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
                    /* catch() { ... } // from try @ 06dd458c with catch @ 06dd45b0 */
    FUN_06bb23f0(uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


