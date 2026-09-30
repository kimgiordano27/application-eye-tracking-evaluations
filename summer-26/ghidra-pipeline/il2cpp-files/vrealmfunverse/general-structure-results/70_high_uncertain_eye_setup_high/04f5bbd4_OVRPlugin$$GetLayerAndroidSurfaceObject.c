/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 04f5bbd4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerAndroidSurfaceObject(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_02b3c81c();
  FUN_02b3c81c(
              System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
              );
  FUN_02b3c81c(PTR_DAT_06314ab8);
  FUN_02b3c81c(OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo);
  FUN_02b3c81c(
              System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
              );
  FUN_02b3c81c(
              System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
              );
  *(undefined1 *)(unaff_x22 + 0xab1) = 1;
  thunk_FUN_02b79644(*unaff_x23);
  FUN_04cf4310();
  FUN_04e83350();
  if (**(long **)(*unaff_x21 + 0xb8) == 0) {
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
                              );
    FUN_03fdc044(uVar2,*(undefined8 *)
                        System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_TypeInfo
                );
    **(undefined8 **)(*unaff_x21 + 0xb8) = uVar2;
    thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x21 + 0xb8),uVar2);
    (**(code **)(*unaff_x19 + 0x368))();
  }
  if (unaff_x19[0x19] != 0) {
    lVar3 = FUN_031734d8(unaff_x19[0x19],*(undefined8 *)PTR_DAT_06314ab8);
    unaff_x19[0x27] = lVar3;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x27,lVar3);
    if (unaff_x19[0x24] == 0) {
      lVar3 = FUN_05c89410();
      if (lVar3 == 0) goto LAB_04f5bd8c;
      FUN_031d8020(lVar3,*(undefined8 *)
                          OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_var);
      FUN_04f5bd90();
    }
    puVar1 = System_Collections_Generic_Dictionary<uint,_TMP_Character>_TypeInfo;
    if (unaff_x19[0x19] != 0) {
      lVar4 = unaff_x19[0x26];
      uVar2 = FUN_05c89340(unaff_x19[0x19],0);
      lVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_04f5a894(lVar3,lVar4,uVar2);
      unaff_x19[0x28] = lVar3;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x28,lVar3);
      FUN_04e833f4();
      return;
    }
  }
LAB_04f5bd8c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


