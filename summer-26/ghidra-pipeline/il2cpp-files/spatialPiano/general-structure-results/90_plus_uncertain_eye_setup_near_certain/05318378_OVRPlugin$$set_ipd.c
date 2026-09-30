/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 05318378
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


void OVRPlugin__set_ipd(ulong param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *plVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  plVar8 = *(long **)(unaff_x22 + 0xf08);
  if ((param_1 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
    FUN_02f08768(System_Xml_Schema_Datatype_timeTimeZone_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<IInteractionAttachController,_Object>_TypeInfo
                );
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalUpdateCachedSystem_TypeInfo);
    FUN_02f08768(PTR_DAT_067cc450);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalUpdateCulledSystem_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalUpdateCullingGroupSystem_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_DecalSettings_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x219) = 1;
  }
  uVar3 = thunk_FUN_02f45270(*unaff_x24);
  FUN_05315310();
  uVar4 = *unaff_x24;
  *(undefined8 *)(param_2 + 0x138) = uVar3;
  uVar3 = thunk_FUN_02f45270(uVar4);
  FUN_05315310();
  uVar4 = *unaff_x24;
  *(undefined8 *)(param_2 + 0x140) = uVar3;
  uVar3 = thunk_FUN_02f45270(uVar4);
  FUN_05315310();
  uVar4 = *unaff_x24;
  *(undefined8 *)(param_2 + 0x148) = uVar3;
  uVar3 = thunk_FUN_02f45270(uVar4);
  FUN_05315310();
  uVar4 = *unaff_x23;
  *(undefined8 *)(param_2 + 0x150) = uVar3;
  uVar3 = FUN_02f0880c(uVar4,5);
  uVar4 = *unaff_x21;
  *(undefined8 *)(param_2 + 0x160) = uVar3;
  uVar3 = thunk_FUN_02f45270(uVar4);
  FUN_05310398();
  lVar5 = *plVar8;
  *(undefined8 *)(param_2 + 0x170) = uVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *plVar8;
  }
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar6 = *(undefined8 **)(*plVar8 + 0xb8);
    }
    uVar3 = *puVar6;
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
    FUN_0476105c(lVar7,uVar3,
                 *(undefined8 *)UnityEngine_Rendering_Universal_DecalUpdateCulledSystem_TypeInfo,0);
    lVar5 = *plVar8;
    *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar7;
  }
  iVar1 = *(int *)(lVar5 + 0xe4);
  *(long *)(param_2 + 0x178) = lVar7;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *plVar8;
  }
  puVar2 = UnityEngine_Rendering_Universal_DecalUpdateCachedSystem_TypeInfo;
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar6 = *(undefined8 **)(*plVar8 + 0xb8);
    }
    uVar3 = *puVar6;
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_Rendering_Universal_DecalSkipCulledSystem_TypeInfo);
    FUN_0476105c(lVar7,uVar3,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_DecalUpdateCullingGroupSystem_TypeInfo,0);
    *(long *)(*(long *)(*plVar8 + 0xb8) + 0x10) = lVar7;
  }
  uVar3 = *(undefined8 *)puVar2;
  *(long *)(param_2 + 0x180) = lVar7;
  FUN_037dda24(param_2,uVar3);
  return;
}


