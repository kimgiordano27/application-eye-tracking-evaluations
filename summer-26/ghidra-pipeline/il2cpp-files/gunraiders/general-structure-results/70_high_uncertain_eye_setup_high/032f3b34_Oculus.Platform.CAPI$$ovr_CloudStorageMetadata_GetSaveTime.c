/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_CloudStorageMetadata_GetSaveTime
ENTRY_POINT: 032f3b34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_CloudStorageMetadata_GetSaveTime(void)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  undefined *puVar6;
  
  if (0xff < *(int *)(unaff_x19 + 0x18)) {
    thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
    uVar7 = thunk_FUN_01c496e0();
    FUN_03314458(uVar7,0);
    goto LAB_032f3d28;
  }
  plVar2 = (long *)(**(code **)(*unaff_x20 + 0x318))();
  if (plVar2 == (long *)0x0) {
LAB_032f3b78:
    plVar2 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo +
                     0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) goto LAB_032f3b78;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo) {
      plVar2 = (long *)0x0;
    }
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (plVar2 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar7 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(PurchaseLevelSpawner_<StartBuyCoroutine>d__9_TypeInfo);
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<string,_Material>_get_Values__
                              );
    FUN_0323fce4(uVar7,uVar5,uVar4,0);
  }
  else {
    uVar7 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032e04b8(uVar7);
    uVar3 = (**(code **)(*plVar2 + 0x918))(plVar2,uVar7,*(undefined8 *)(*plVar2 + 0x920));
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
      if ((uVar3 & 1) == 0) {
        FUN_01c5c2f0(plVar2);
        return;
      }
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar7 = thunk_FUN_01c496e0();
      puVar6 = 
      Method_System_Collections_Generic_Dictionary<string,_NativeFeatureRuntimeConfiguration>__ctor__
      ;
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar7 = thunk_FUN_01c496e0();
      puVar6 = Method_System_Collections_Generic_Dictionary<string,_Material>_set_Item__;
    }
    uVar5 = thunk_FUN_01c273e8(puVar6);
    FUN_032cd310(uVar7,uVar5,0);
  }
LAB_032f3d28:
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<string,_NativeFeatureRuntimeConfiguration>_Add__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar7,uVar5);
}


