/*
FUNCTION_NAME: FUN_054fdab4
ENTRY_POINT: 054fdab4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_054fdab4(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_06bbf534 & 1) == 0) {
    FUN_02f08768(OVRManager_XrApi_TypeInfo);
    FUN_02f08768(OVRMesh_IOVRMeshDataProvider_TypeInfo);
    FUN_02f08768(OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo);
    FUN_02f08768(OVRMicrogestureEventSource_<>c_TypeInfo);
    DAT_06bbf534 = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lVar6 = param_2;
  if (param_2 == 0) {
    FUN_054fdd04(param_1,0);
  }
  else {
    do {
      uVar3 = FUN_054fdca4(lVar6,*(undefined8 *)(param_1 + 0x10));
      if ((uVar3 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        FUN_02a7da48(lVar6);
        uVar5 = FUN_054dd654(*(undefined8 *)(lVar6 + 0x10),0);
        goto LAB_054fdc00;
      }
      plVar1 = (long *)(lVar6 + 0x20);
      lVar6 = *plVar1;
    } while (*plVar1 != 0);
    FUN_054fdd04(param_1,param_2);
    if (param_2 != 0) {
      FUN_054fde2c(param_2,*(undefined8 *)(param_1 + 0x10),param_1);
      if ((*(long *)(param_1 + 0x20) == 0) || (uVar3 = FUN_054fdedc(param_1), (uVar3 & 1) != 0)) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          lVar6 = *(long *)(param_1 + 0x10);
          FUN_02a7da48(lVar6);
          uVar5 = FUN_054dd94c(*(undefined8 *)(lVar6 + 0x10),0);
LAB_054fdc00:
          uVar4 = thunk_FUN_02f6ef30(OVRMicrogesturesSample_<HighlightIconCoroutine>d__22_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar5,uVar4);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_054fdc28;
        FUN_03ac039c(&local_38,*(long *)(param_1 + 0x28),
                     *(undefined8 *)OVRMicrogestureEventSource_<>c_TypeInfo);
        puVar2 = OVRMesh_IOVRMeshDataProvider_TypeInfo;
        while (uVar3 = FUN_04aff1b0(&local_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
          FUN_054fd838(param_1,local_28);
        }
        FUN_04aff1ac(&local_38,*(undefined8 *)OVRManager_XrApi_TypeInfo);
      }
      return;
    }
  }
LAB_054fdc28:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


