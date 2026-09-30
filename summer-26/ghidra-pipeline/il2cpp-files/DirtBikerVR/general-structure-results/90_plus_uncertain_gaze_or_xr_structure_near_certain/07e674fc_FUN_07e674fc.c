/*
FUNCTION_NAME: FUN_07e674fc
ENTRY_POINT: 07e674fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07e674fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_SetResult__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_SetException__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_Create__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_Start<PlayerFilesApiClient_<GetUploadUrlAsync>d__9>__
  ;
  puVar5 = Method_Unity_Services_Vivox_AsyncResult<string>_get_Result__;
  puVar4 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo;
  puVar3 = OVRPlugin_TrackingConfidence_TypeInfo;
  puVar2 = System_Linq_Expressions_Interpreter_LabelInfo_<>c_TypeInfo;
  puVar1 = UnityEngine_UIElements_Label_UxmlFactory_TypeInfo;
                    /* try { // try from 07e67548 to 07f67557 has its CatchHandler @ 07e676ac */
                    /* try { // try from 07e67558 to 07f6756b has its CatchHandler @ 07e676a8 */
  if ((DAT_0899a8b5 & 1) == 0) {
    FUN_03a8a718(Method_Unity_Services_Vivox_AsyncResult<string>_get_Result__);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_LabelInfo_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_Label_UxmlFactory_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_Create__
                );
                    /* try { // try from 07e6759c to 07f6759f has its CatchHandler @ 07e676c4 */
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_SetStateMachine__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_get_Task__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_Start<PlayerFilesApiClient_<GetUploadUrlAsync>d__9>__
                );
                    /* try { // try from 07e675c4 to 07f675c7 has its CatchHandler @ 07e676c0 */
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_SetResult__
                );
    FUN_03a8a718(OVRPlugin_TrackingConfidence_TypeInfo);
                    /* try { // try from 07e675dc to 07f675e7 has its CatchHandler @ 07e676d4 */
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_SetException__
                );
                    /* try { // try from 07e675f0 to 07f675f7 has its CatchHandler @ 07e676cc */
    DAT_0899a8b5 = 1;
  }
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_07e31f64(uVar10,0);
                    /* try { // try from 07e6760c to 07f6760f has its CatchHandler @ 07e676b0 */
                    /* try { // try from 07e67610 to 07f6761f has its CatchHandler @ 07e676c8 */
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x10),uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                    /* try { // try from 07e6762c to 07f6762f has its CatchHandler @ 07e676b8 */
  FUN_049d8fb0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x18),uVar10);
                    /* try { // try from 07e67644 to 07f67657 has its CatchHandler @ 07e676ac */
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_049d8fb0(uVar10,*(undefined8 *)puVar2);
                    /* try { // try from 07e67658 to 07f6768f has its CatchHandler @ 07e67484 */
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x20),uVar10);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar6);
  FUN_04e4b7e4(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x28),uVar10);
  uVar10 = *(undefined8 *)puVar5;
                    /* try { // try from 07e67690 to 07f67693 has its CatchHandler @ 07e676d8 */
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
                    /* try { // try from 07e67694 to 07f67697 has its CatchHandler @ 07e676d0 */
  uVar10 = thunk_FUN_03ac74bc(uVar10);
                    /* try { // try from 07e67698 to 07f6769b has its CatchHandler @ 07e676bc */
                    /* try { // try from 07e6769c to 07f6769f has its CatchHandler @ 07e676b4 */
                    /* try { // try from 07e676a0 to 07f676f3 has its CatchHandler @ 07e67484 */
                    /* catch() { ... } // from try @ 07e67558 with catch @ 07e676a8 */
  FUN_05f22fd0(uVar10,0,*(undefined8 *)puVar8,0);
                    /* catch() { ... } // from try @ 07e67548 with catch @ 07e676ac
                       catch() { ... } // from try @ 07e67644 with catch @ 07e676ac */
                    /* catch() { ... } // from try @ 07e6760c with catch @ 07e676b0 */
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar9);
                    /* catch() { ... } // from try @ 07e6769c with catch @ 07e676b4 */
                    /* catch() { ... } // from try @ 07e6762c with catch @ 07e676b8 */
                    /* catch() { ... } // from try @ 07e67698 with catch @ 07e676bc */
  FUN_07e6782c(uVar11,uVar10);
                    /* catch() { ... } // from try @ 07e675c4 with catch @ 07e676c0 */
                    /* catch() { ... } // from try @ 07e6759c with catch @ 07e676c4 */
                    /* catch() { ... } // from try @ 07e67610 with catch @ 07e676c8 */
  *(undefined8 *)(param_1 + 0x38) = uVar11;
                    /* catch() { ... } // from try @ 07e675f0 with catch @ 07e676cc */
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x38),uVar11);
                    /* catch() { ... } // from try @ 07e67694 with catch @ 07e676d0 */
                    /* catch() { ... } // from try @ 07e675dc with catch @ 07e676d4 */
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 07e67690 with catch @ 07e676d8 */
  FUN_07eb3694(uVar10,0);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x40),uVar10);
                    /* try { // try from 07e676f4 to 07f676f7 has its CatchHandler @ 07e67700 */
                    /* catch() { ... } // from try @ 07e676f4 with catch @ 07e67700 */
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_get_Task__
                             );
                    /* try { // try from 07e67704 to 07f6770b has its CatchHandler @ 07e67714 */
                    /* try { // try from 07e6770c to 07f67717 has its CatchHandler @ 07e67484 */
                    /* catch() { ... } // from try @ 07e67704 with catch @ 07e67714 */
  FUN_04d8e144(uVar10,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_SetStateMachine__
              );
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x50),uVar10);
  FUN_07ea20f0(param_1,0);
  return;
}


