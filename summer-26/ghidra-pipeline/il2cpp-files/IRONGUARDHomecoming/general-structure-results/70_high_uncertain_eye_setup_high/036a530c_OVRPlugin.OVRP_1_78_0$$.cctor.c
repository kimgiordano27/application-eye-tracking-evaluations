/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$.cctor
ENTRY_POINT: 036a530c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_78_0___cctor
               (float param_1,float param_2,float param_3,undefined8 param_4,float param_5,
               long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
                    /* try { // try from 036a5310 to 037a5333 has its CatchHandler @ 036a5348 */
                    /* catch() { ... } // from try @ 036a52b0 with catch @ 036a5318 */
                    /* catch() { ... } // from try @ 036a52ec with catch @ 036a5324 */
                    /* try { // try from 036a5334 to 037a533f has its CatchHandler @ 036a5050 */
                    /* try { // try from 036a5340 to 037a5347 has its CatchHandler @ 036a5348 */
                    /* catch() { ... } // from try @ 036a52c4 with catch @ 036a5348
                       catch() { ... } // from try @ 036a5310 with catch @ 036a5348
                       catch() { ... } // from try @ 036a5340 with catch @ 036a5348 */
  fVar6 = param_2;
  fVar5 = param_3;
  if ((DAT_04833fa9 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_<>c__DisplayClass7_0_<AddAndCreate>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    DAT_04833fa9 = 1;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar2,param_7,0);
  if (((lVar2 != 0) &&
      (lVar2 = FUN_023360e0(lVar2,*(undefined8 *)
                                   Method_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_<>c__DisplayClass7_0_<AddAndCreate>b__0__
                           ), lVar2 != 0)) &&
     (FUN_040c1b7c(lVar2,*(undefined1 *)(param_6 + 0x38),0), param_8 != 0)) {
    fVar4 = (float)FUN_0407d3c8(param_8,0);
    param_1 = param_1 - fVar4;
    param_2 = param_2 - fVar6;
    param_3 = param_3 - fVar5;
    FUN_0406761c(param_1,param_2,param_3,0);
    if (DAT_0482f03e == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03e = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar6 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2) - ABS(param_5);
    FUN_040c256c(param_4,lVar2,0);
    FUN_040c25f4((float)param_4 + (float)param_4 + fVar6,lVar2,0);
    FUN_040c2640(lVar2,2,0);
    if (DAT_0482ee1d == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee1d = '\x01';
    }
    param_5 = param_5 + fVar6 * 0.5;
    lVar3 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    FUN_040c2498(param_5 * *(float *)(lVar3 + 0x48),param_5 * *(float *)(lVar3 + 0x4c),
                 param_5 * *(float *)(lVar3 + 0x50),lVar2,0);
    lVar3 = FUN_04070398(lVar2,0);
    if (lVar3 != 0) {
      FUN_0407dcf4(lVar3,param_8,0,0);
      FUN_0407d3c8(param_8,0);
      FUN_0407de3c(lVar3,0);
      lVar3 = FUN_040703d4(lVar2,0);
      if (lVar3 != 0) {
        FUN_040732d0(lVar3,*(undefined4 *)(param_6 + 0x3c),0);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


