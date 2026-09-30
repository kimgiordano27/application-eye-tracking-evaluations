/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 08a10488
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *puVar6;
  long unaff_x23;
  undefined8 *puVar7;
  undefined8 *unaff_x24;
  
  puVar2 = PTR_DAT_0ac51ad8;
  puVar1 = PTR_DAT_0ac4e130;
  puVar6 = *(undefined8 **)(unaff_x20 + 0xae8);
  lVar3 = *unaff_x19;
  puVar7 = *(undefined8 **)(unaff_x23 + 0xae0);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *unaff_x19;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  uVar4 = thunk_FUN_04983f60(*unaff_x24);
  FUN_063d4f5c(uVar4,uVar5,*puVar6,0);
  uVar5 = thunk_FUN_04983f60(*puVar7);
  FUN_06ec46b8(uVar5,uVar4,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
  thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
  return;
}


