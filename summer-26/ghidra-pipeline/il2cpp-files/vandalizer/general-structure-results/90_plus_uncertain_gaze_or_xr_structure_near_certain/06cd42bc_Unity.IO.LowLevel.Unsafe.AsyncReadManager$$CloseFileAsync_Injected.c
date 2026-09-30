/*
FUNCTION_NAME: Unity.IO.LowLevel.Unsafe.AsyncReadManager$$CloseFileAsync_Injected
ENTRY_POINT: 06cd42bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_IO_LowLevel_Unsafe_AsyncReadManager__CloseFileAsync_Injected(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 06cd42c0 to 06dd42c3 has its CatchHandler @ 06cd42e8 */
                    /* try { // try from 06cd42c4 to 06dd42f7 has its CatchHandler @ 06cd3f0c */
  thunk_FUN_03257e30(PTR_DAT_0759b238);
  FUN_02d65908();
  puVar1 = System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo;
  uVar2 = thunk_FUN_03257e30(
                            System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                            );
                    /* catch() { ... } // from try @ 06cd42c0 with catch @ 06cd42e8 */
  FUN_06deee2c(uVar2,param_1,0);
                    /* try { // try from 06cd42f8 to 06dd430b has its CatchHandler @ 06cd437c */
  thunk_FUN_03257e30(PTR_DAT_0759b208);
  uVar2 = thunk_FUN_0322f148();
  uVar3 = thunk_FUN_03257e30(puVar1);
                    /* catch() { ... } // from try @ 06cd40a4 with catch @ 06cd430c
                       try { // try from 06cd430c to 06dd4323 has its CatchHandler @ 06cd3f0c */
  FUN_05dfcbd0(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03257e30(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,uVar3);
}


