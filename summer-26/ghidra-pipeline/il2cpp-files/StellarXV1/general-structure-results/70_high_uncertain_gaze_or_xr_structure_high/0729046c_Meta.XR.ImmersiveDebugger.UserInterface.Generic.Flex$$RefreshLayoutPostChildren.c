/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 0729046c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 *puVar3;
  long unaff_x21;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c1fa0);
  FUN_04077588(PTR_DAT_092c1fa8);
  FUN_04077588(PTR_DAT_092a0ca0);
  FUN_04077588(PTR_DAT_092c1fb0);
  FUN_04077588(PTR_DAT_092c1fb8);
  FUN_04077588(PTR_DAT_092c1fc0);
  *(undefined1 *)(unaff_x21 + 0x7ff) = 1;
  puVar2 = (undefined8 *)PTR_DAT_092c1f88;
  puVar3 = (undefined8 *)PTR_DAT_092a0ca0;
  if (0xfffffff8 < unaff_w20) {
    puVar2 = (undefined8 *)(&PTR_DAT_08de0b68)[(long)(int)unaff_w20 + 7];
    puVar3 = (undefined8 *)(&PTR_DAT_08de0ba0)[(int)((long)(int)unaff_w20 + 7)];
  }
  uVar1 = thunk_FUN_040b4efc(*puVar2);
  FUN_072905f0(uVar1,*puVar3);
  return uVar1;
}


