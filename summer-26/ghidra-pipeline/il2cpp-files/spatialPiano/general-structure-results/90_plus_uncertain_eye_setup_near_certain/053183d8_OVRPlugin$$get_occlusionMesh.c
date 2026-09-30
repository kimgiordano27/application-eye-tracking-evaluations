/*
FUNCTION_NAME: OVRPlugin$$get_occlusionMesh
ENTRY_POINT: 053183d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_occlusionMesh(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_02f08768(UnityEngine_Rendering_Universal_DecalSettings_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x219) = 1;
  uVar2 = thunk_FUN_02f45270(*unaff_x24);
  FUN_05315310();
  uVar3 = *unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
  uVar2 = thunk_FUN_02f45270(uVar3);
  FUN_05315310();
  uVar3 = *unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
  uVar2 = thunk_FUN_02f45270(uVar3);
  FUN_05315310();
  uVar3 = *unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
  uVar2 = thunk_FUN_02f45270(uVar3);
  FUN_05315310();
  uVar3 = *unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
  uVar2 = FUN_02f0880c(uVar3,5);
  uVar3 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x160) = uVar2;
                    /* catch() { ... } // from try @ 0531849c with catch @ 05318454
                       catch() { ... } // from try @ 053184f4 with catch @ 05318454 */
  uVar2 = thunk_FUN_02f45270(uVar3);
  FUN_05310398();
  lVar4 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x170) = uVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar2 = *puVar5;
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
    FUN_0476105c(lVar6,uVar2,
                 *(undefined8 *)UnityEngine_Rendering_Universal_DecalUpdateCulledSystem_TypeInfo,0);
    lVar4 = *unaff_x22;
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar6;
  }
  iVar1 = *(int *)(lVar4 + 0xe4);
  *(long *)(unaff_x19 + 0x178) = lVar6;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[2];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar2 = *puVar5;
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
    FUN_0476105c(lVar6,uVar2,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_DecalUpdateCullingGroupSystem_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar6;
  }
  *(long *)(unaff_x19 + 0x180) = lVar6;
  FUN_037dda24();
  return;
}


