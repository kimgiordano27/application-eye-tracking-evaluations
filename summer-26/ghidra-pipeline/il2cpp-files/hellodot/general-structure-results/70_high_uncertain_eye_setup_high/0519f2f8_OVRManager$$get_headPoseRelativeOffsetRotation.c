/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 0519f2f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066084b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066084b8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066084c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608428);
  *(undefined1 *)(unaff_x21 + 0x21d) = 1;
  puVar1 = PTR_DAT_066084c0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar6 = *(long *)puVar1;
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  puVar2 = PTR_DAT_066084b8;
  puVar1 = PTR_DAT_066084b0;
  if ((long *)**(long **)(lVar3 + 0xb8) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar3 + 0xb8) + 0x198))();
    lVar3 = *(long *)(unaff_x19 + 0x180);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x128);
    uVar4 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_0519f45c();
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),uVar7,uVar4,uVar5,unaff_x19 + 0x148,
                 *(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


