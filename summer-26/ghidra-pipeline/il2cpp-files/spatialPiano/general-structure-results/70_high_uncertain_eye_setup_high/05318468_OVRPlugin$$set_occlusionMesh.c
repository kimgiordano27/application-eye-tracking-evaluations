/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 05318468
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_occlusionMesh(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    param_1 = *unaff_x22;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
                    /* try { // try from 05318498 to 0541849b has its CatchHandler @ 053184c4 */
                    /* try { // try from 0531849c to 054184df has its CatchHandler @ 05318454 */
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05318498 with catch @ 053184c4
                        */
    FUN_0476105c(lVar3,uVar4,
                 *(undefined8 *)UnityEngine_Rendering_Universal_DecalUpdateCulledSystem_TypeInfo,0);
    param_1 = *unaff_x22;
    *(long *)(*(long *)(param_1 + 0xb8) + 8) = lVar3;
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  *(long *)(unaff_x19 + 0x178) = lVar3;
  if (iVar1 == 0) {
                    /* try { // try from 053184e0 to 054184e3 has its CatchHandler @ 053184e8 */
    thunk_FUN_02f6670c();
    param_1 = *unaff_x22;
  }
                    /* catch() { ... } // from try @ 053184e0 with catch @ 053184e8 */
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
                    /* try { // try from 053184ec to 054184f3 has its CatchHandler @ 053184fc */
  lVar3 = puVar2[2];
                    /* try { // try from 053184f4 to 054184ff has its CatchHandler @ 05318454 */
  if (lVar3 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053184ec with catch @ 053184fc
                        */
                    /* try { // try from 05318500 to 054185c7 has its CatchHandler @ 05318500
                       catch() { ... } // from try @ 05318500 with catch @ 05318500
                       catch() { ... } // from try @ 053188c4 with catch @ 05318500
                       catch() { ... } // from try @ 0531890c with catch @ 05318500
                       catch() { ... } // from try @ 05318930 with catch @ 05318500 */
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
    FUN_0476105c(lVar3,uVar4,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_DecalUpdateCullingGroupSystem_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar3;
  }
  *(long *)(unaff_x19 + 0x180) = lVar3;
  FUN_037dda24();
  return;
}


