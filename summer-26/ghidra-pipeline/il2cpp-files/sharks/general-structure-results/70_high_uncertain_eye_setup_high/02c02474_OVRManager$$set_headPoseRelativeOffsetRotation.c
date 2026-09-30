/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 02c02474
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  char unaff_w19;
  long *unaff_x20;
  undefined *puVar4;
  
  uVar1 = FUN_02be66d0();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_0380a198);
    FUN_02b3cbec(uVar3,uVar5,0);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_0380ad08);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar3,uVar5);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar1 = (**(code **)(*unaff_x20 + 0x568))();
  puVar4 = PTR_DAT_0380a190;
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)PTR_DAT_037f87b8;
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      unaff_x20 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) !=
             lVar2) {
      unaff_x20 = (long *)0x0;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    puVar4 = PTR_DAT_03804850;
    if (unaff_x20 != (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_017f830c(unaff_x20,(long)unaff_w19);
      return;
    }
  }
  uVar3 = thunk_FUN_01851c08(puVar4);
  uVar3 = FUN_02c108dc(uVar3,0);
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar5 = thunk_FUN_01861bbc();
  uVar6 = thunk_FUN_01851c08(PTR_DAT_0380a198);
  FUN_02b3cc64(uVar5,uVar3,uVar6,0);
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380ad08);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar5,uVar3);
}


