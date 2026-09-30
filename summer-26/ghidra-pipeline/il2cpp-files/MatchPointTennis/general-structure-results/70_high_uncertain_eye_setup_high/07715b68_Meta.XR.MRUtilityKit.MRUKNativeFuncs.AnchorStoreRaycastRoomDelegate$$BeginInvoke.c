/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$BeginInvoke
ENTRY_POINT: 07715b68
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__BeginInvoke
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_078a7764(*unaff_x19,param_1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000028,0);
  FUN_078a7764(*unaff_x29,uVar1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000060,0);
  FUN_078a7764(*unaff_x28,uVar1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000058,0);
  FUN_078a7764(*unaff_x27,uVar1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000050,0);
  FUN_078a7764(*unaff_x26,uVar1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000048,0);
  FUN_078a7764(*unaff_x25,uVar1,0);
  FUN_078c335c();
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000020,0);
  FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b20,uVar1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000018,0);
  FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b28,uVar1,0);
  FUN_078c335c();
  uVar1 = FUN_07a2565c(&stack0x00000010,0);
  FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b08,uVar1,0);
  FUN_078c335c();
  uVar1 = (**(code **)(*unaff_x20 + 0x168))();
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c652c(uVar1,0);
  return;
}


