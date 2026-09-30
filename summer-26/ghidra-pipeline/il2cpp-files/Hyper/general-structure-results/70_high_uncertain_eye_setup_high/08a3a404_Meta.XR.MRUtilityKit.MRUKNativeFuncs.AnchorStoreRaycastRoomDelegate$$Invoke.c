/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$Invoke
ENTRY_POINT: 08a3a404
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__Invoke(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x23;
  
  uVar1 = FUN_08bd8f34();
  uVar2 = FUN_08bd8f34();
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)PTR_DAT_0ac52de0;
    if ((uVar2 & 1) == 0) goto LAB_08a3a444;
  }
  else {
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_0ac52df0;
      goto LAB_08a3a460;
    }
LAB_08a3a444:
    puVar4 = (undefined8 *)PTR_DAT_0ac52de8;
  }
  uVar6 = FUN_08bcc3c0(*puVar4);
LAB_08a3a460:
  uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar3 = thunk_FUN_04983f60(*unaff_x23);
  Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate___ctor(uVar3,uVar5,uVar6);
  return uVar3;
}


