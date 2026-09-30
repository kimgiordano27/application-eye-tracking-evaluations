/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 0749e5f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar5;
  long unaff_x25;
  undefined8 *puVar6;
  long unaff_x26;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x26 + 0xcb0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xcb8);
  puVar6 = *(undefined8 **)(unaff_x25 + 0xca0);
  puVar5 = *(undefined8 **)(unaff_x24 + 0xca8);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    param_2 = *unaff_x21;
  }
  uVar3 = **(undefined8 **)(param_2 + 0xb8);
  uVar1 = thunk_FUN_03d2ef40(*puVar7);
  FUN_054b7910(uVar1,uVar3,*puVar4,0);
  uVar2 = FUN_04f0fabc(uVar2,uVar1,*puVar6);
  uVar2 = FUN_04f1efa0(uVar2,*puVar5);
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    thunk_FUN_03d1023c();
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_03d1023c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


