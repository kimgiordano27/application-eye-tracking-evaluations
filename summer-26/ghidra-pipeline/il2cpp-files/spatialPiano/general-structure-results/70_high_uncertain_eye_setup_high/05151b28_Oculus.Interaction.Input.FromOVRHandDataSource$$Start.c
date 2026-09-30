/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHandDataSource$$Start
ENTRY_POINT: 05151b28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Oculus_Interaction_Input_FromOVRHandDataSource__Start(uint param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
                    /* catch() { ... } // from try @ 05151a9c with catch @ 05151b28 */
                    /* catch() { ... } // from try @ 05151a8c with catch @ 05151b2c */
  if ((param_2 & 1) == 0) {
LAB_05151b3c:
    if (param_1 < 0x20) {
                    /* try { // try from 05151b44 to 05251b5b has its CatchHandler @ 05151ba8 */
      return;
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
                    /* try { // try from 05151b5c to 05251b97 has its CatchHandler @ 051517b8 */
    uVar1 = thunk_FUN_02f45270();
    uVar2 = thunk_FUN_02f6ef30(
                              System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                              );
    FUN_05056bc4(uVar1,uVar2,0);
  }
  else {
    if ((param_1 >> 1 & 1) == 0) {
      if ((param_1 & 1) == 0) goto LAB_05151b3c;
                    /* catch() { ... } // from try @ 05151b10 with catch @ 05151bb8
                       catch() { ... } // from try @ 05151bac with catch @ 05151bb8 */
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar1 = thunk_FUN_02f45270();
      uVar2 = thunk_FUN_02f6ef30(
                                System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                );
      puVar4 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<RenderGraphUtils_BlitMaterialPassData,_UnsafeGraphContext>_TypeInfo
      ;
    }
    else {
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar1 = thunk_FUN_02f45270();
                    /* try { // try from 05151b98 to 05251ba7 has its CatchHandler @ 05151ba8 */
      uVar2 = thunk_FUN_02f6ef30(
                                System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                );
      puVar4 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<RenderGraph_ProfilingScopePassData,_RenderGraphContext>_TypeInfo
      ;
                    /* catch() { ... } // from try @ 05151b44 with catch @ 05151ba8
                       catch() { ... } // from try @ 05151b98 with catch @ 05151ba8 */
                    /* try { // try from 05151bac to 05251baf has its CatchHandler @ 05151bb8 */
                    /* try { // try from 05151bb0 to 05251bbb has its CatchHandler @ 051517b8 */
    }
    uVar3 = thunk_FUN_02f6ef30(puVar4);
    FUN_0505262c(uVar1,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_02f6ef30(
                            UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<RenderGraphUtils_BlitPassData,_UnsafeGraphContext>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar1,uVar2);
}


