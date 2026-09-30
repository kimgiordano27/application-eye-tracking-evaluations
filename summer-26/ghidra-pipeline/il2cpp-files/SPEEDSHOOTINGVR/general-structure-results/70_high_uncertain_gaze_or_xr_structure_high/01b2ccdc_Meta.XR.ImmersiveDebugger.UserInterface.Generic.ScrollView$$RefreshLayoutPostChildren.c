/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 01b2ccdc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0234d4e0);
  *(undefined1 *)(unaff_x21 + 0x75b) = 1;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244();
  }
  puVar1 = PTR_DAT_0234d9f0;
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0103c244();
  }
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000018 = *unaff_x19;
  in_stack_00000008 = (long *)lVar2;
  uVar3 = FUN_01d7bfd8(&stack0x00000008,0);
  in_stack_00000008 = *(long **)(unaff_x19 + 2);
  uVar5 = *(undefined8 *)puVar1;
  if (in_stack_00000008 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar4 = (**(code **)(*in_stack_00000008 + 0x168))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
  }
  FUN_01c51498(uVar3,uVar5,uVar4,*(undefined8 *)PTR_DAT_0234d4e0,0);
  return;
}


