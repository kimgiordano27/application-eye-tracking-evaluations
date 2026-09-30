/*
FUNCTION_NAME: FUN_069983c8
ENTRY_POINT: 069983c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_069983c8(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined4 param_5
                 ,long param_6,long param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Create__
  ;
                    /* try { // try from 069983cc to 06a983cf has its CatchHandler @ 069983e0 */
                    /* try { // try from 069983d0 to 06a98407 has its CatchHandler @ 06998234 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0699831c with catch @ 069983d4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06998328 with catch @ 069983d8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06998300 with catch @ 069983dc
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 069983cc with catch @ 069983e0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06998388 with catch @ 069983e4
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 069982f0 with catch @ 069983e8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0699835c with catch @ 069983ec
                        */
                    /* try { // try from 06998408 to 06a9840b has its CatchHandler @ 06998424 */
                    /* try { // try from 0699840c to 06a98427 has its CatchHandler @ 06998234 */
  if ((DAT_0755b208 & 1) == 0) {
                    /* catch() { ... } // from try @ 06998408 with catch @ 06998424 */
                    /* try { // try from 06998428 to 06a9842f has its CatchHandler @ 06998438 */
    FUN_03188a78(PTR_DAT_070f2fb0);
                    /* try { // try from 06998430 to 06a9843b has its CatchHandler @ 06998234 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06998428 with catch @ 06998438
                        */
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<StartGameResult>_AwaitUnsafeOnCompleted<TaskAwaiter,_NetworkRunner_<StartGameModeCloud>d__428>__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Create__
                );
    FUN_03188a78(
                Method_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_get_FingerFeatures__
                );
    DAT_0755b208 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_031c0a30();
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
               + 0x38) == 0) {
    FUN_031c0a30();
  }
  uVar3 = 0;
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<StartGameResult>_AwaitUnsafeOnCompleted<TaskAwaiter,_NetworkRunner_<StartGameModeCloud>d__428>__
               + 0x38) == 0) {
    FUN_031c0a30();
  }
  uVar5 = 0;
  if (param_6 != 0) {
    uVar5 = *(undefined8 *)(param_6 + 0x10);
  }
  uVar4 = 0;
  if (param_7 != 0) {
    uVar4 = *(undefined8 *)(param_7 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_get_FingerFeatures__
               + 0x38) == 0) {
    FUN_031c0a30();
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
               + 0x38) == 0) {
    FUN_031c0a30();
  }
  if (*(int *)(*(long *)PTR_DAT_070f2fb0 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0755b268 == (code *)0x0) {
    DAT_0755b268 = (code *)FUN_03188a3c(
                                       "UnityEngine.Graphics::Internal_DrawMesh_Injected(System.IntPtr,System.Int32,UnityEngine.Matrix4x4&,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.IntPtr,UnityEngine.Rendering.LightProbeUsage,System.IntPtr)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x069985a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0755b268)(uVar2,param_2,param_3,uVar3,param_5,uVar5,uVar4,param_8);
  return;
}


