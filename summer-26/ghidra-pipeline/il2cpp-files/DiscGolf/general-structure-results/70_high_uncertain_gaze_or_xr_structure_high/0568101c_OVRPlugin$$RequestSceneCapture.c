/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 0568101c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x22;
  
  FUN_02d965b8(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
  FUN_02d965b8(System_Func<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x724) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x22;
  }
  puVar1 = System_Collections_Generic_List<UserInputActionSet>_TypeInfo;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  do {
    plVar4 = (long *)FUN_0552e0f8(lVar3);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar4);
      }
    }
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *unaff_x22;
    }
    lVar5 = FUN_02dcf89c(*(long *)(lVar5 + 0xb8) + 8,plVar4,lVar3);
    bVar2 = lVar5 != lVar3;
    lVar3 = lVar5;
  } while (bVar2);
  return;
}


