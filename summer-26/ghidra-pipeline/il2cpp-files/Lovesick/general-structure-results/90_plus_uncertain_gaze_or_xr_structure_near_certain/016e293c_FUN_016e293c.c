/*
FUNCTION_NAME: FUN_016e293c
ENTRY_POINT: 016e293c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_016e293c(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 016e2944 to 017e2967 has its CatchHandler @ 016e2a38 */
  if ((DAT_037787d9 & 1) == 0) {
    thunk_FUN_00d48444(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_00d48444(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var);
    DAT_037787d9 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 016e2a50 with catch @ 016e2a60 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar3 = thunk_FUN_00d62348();
                    /* try { // try from 016e2a6c to 017e2a77 has its CatchHandler @ 016e2a8c */
    FUN_00ac2be8();
                    /* try { // try from 016e2a78 to 017e2a83 has its CatchHandler @ 016e28e8 */
    uVar4 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
                    /* try { // try from 016e2a84 to 017e2a8b has its CatchHandler @ 016e2a8c */
    FUN_016ec5b8(uVar3,uVar4,0);
  }
  else {
                    /* try { // try from 016e2980 to 017e2987 has its CatchHandler @ 016e2a30 */
    if (*(char *)(param_1 + 0x55) == '\0') {
      System_Threading_SpinWait___cctor(param_1,param_2);
      return;
    }
    lVar6 = *param_2;
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo + 300);
                    /* try { // try from 016e29a4 to 017e29ab has its CatchHandler @ 016e2a34 */
                    /* try { // try from 016e29ac to 017e29eb has its CatchHandler @ 016e28e8 */
    if ((((bVar1 <= *(byte *)(lVar6 + 300)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo)) &&
        (plVar2 = (long *)(**(code **)(lVar6 + 0x238))(param_2,*(undefined8 *)(lVar6 + 0x240)),
        plVar2 != (long *)0x0)) &&
       (*plVar2 == *(long *)System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var)) {
                    /* try { // try from 016e29ec to 017e2a2b has its CatchHandler @ 016e2a2c */
      thunk_FUN_00d3590c(param_2,0);
      return;
    }
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016e29ec with catch @ 016e2a2c
                       try { // try from 016e2a2c to 017e2a4f has its CatchHandler @ 016e28e8 */
    uVar4 = thunk_FUN_00d48444(StringLiteral_4155);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016e2980 with catch @ 016e2a30
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016e29a4 with catch @ 016e2a34
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016e2944 with catch @ 016e2a38
                        */
    uVar5 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
                    /* try { // try from 016e2a50 to 017e2a53 has its CatchHandler @ 016e2a60 */
    FUN_016ec624(uVar3,uVar4,uVar5,0);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 016e2a6c with catch @ 016e2a8c
                       catch(type#2 @ 00000000) { ... } // from try @ 016e2a84 with catch @ 016e2a8c
                        */
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List<SoccerBlockerCannon>_GetEnumerator__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar4);
}


