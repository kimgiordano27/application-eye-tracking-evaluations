/*
FUNCTION_NAME: FUN_06dd45b8
ENTRY_POINT: 06dd45b8
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


undefined8 FUN_06dd45b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  
                    /* try { // try from 06dd45b8 to 06ed45bf has its CatchHandler @ 06dd45d4 */
                    /* try { // try from 06dd45c0 to 06ed45cb has its CatchHandler @ 06dd41e0 */
                    /* try { // try from 06dd45cc to 06ed45d3 has its CatchHandler @ 06dd45d4 */
  if ((DAT_076ea040 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06dd453c with catch @ 06dd45d4
                       catch(type#2 @ 00000000) { ... } // from try @ 06dd45b8 with catch @ 06dd45d4
                       catch(type#2 @ 00000000) { ... } // from try @ 06dd45cc with catch @ 06dd45d4
                        */
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(OVRPlugin_BodyJointLocation___TypeInfo);
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_JsonTextWriter_set_ArrayPool__);
    DAT_076ea040 = 1;
  }
  plVar4 = (long *)thunk_FUN_032f70fc(param_1,0);
  puVar3 = Method_Newtonsoft_Json_JsonTextWriter_set_ArrayPool__;
  puVar2 = OVRPlugin_BodyJointLocation___TypeInfo;
  puVar1 = PTR_DAT_072798f8;
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uVar5 = FUN_057aaeec(*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
    FUN_06bb23f0(uVar5,0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


