/*
FUNCTION_NAME: FUN_0213ee40
ENTRY_POINT: 0213ee40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_0213ee40(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 0213ee4c to 0223ee63 has its CatchHandler @ 0213ee94 */
  if ((DAT_037811c0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
                    /* try { // try from 0213ee64 to 0223ee83 has its CatchHandler @ 0213ed3c */
    DAT_037811c0 = 1;
  }
  uVar2 = FUN_015ff8a0(param_1,0);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  if ((uVar2 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_62__);
    FUN_016ec5b8(uVar4,uVar5,0);
    uVar5 = thunk_FUN_00d48444(System_Resources_ResourceSet_var);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
                    /* try { // try from 0213ee84 to 0223ee93 has its CatchHandler @ 0213ee94 */
  lVar3 = *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
                    /* catch() { ... } // from try @ 0213ee4c with catch @ 0213ee94
                       catch() { ... } // from try @ 0213ee84 with catch @ 0213ee94 */
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 0213ee98 to 0223ee9b has its CatchHandler @ 0213eea4 */
                    /* try { // try from 0213ee9c to 0223eea7 has its CatchHandler @ 0213ed3c */
  if (**(long **)(lVar3 + 0xb8) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0213ee98 with catch @ 0213eea4
                        */
    FUN_021974b4(**(long **)(lVar3 + 0xb8),param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


