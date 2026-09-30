/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 01f99f78
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  char unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined *puVar4;
  
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x21 + 0xf37) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar1 = FUN_01f7f404();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar3 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1218);
    FUN_01e75914(uVar3,uVar5,0);
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1d48);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,uVar5);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar1 = (**(code **)(*unaff_x20 + 0x568))();
  puVar4 = PTR_DAT_027c1210;
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)PTR_DAT_027b3ec0;
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      unaff_x20 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) !=
             lVar2) {
      unaff_x20 = (long *)0x0;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    puVar4 = PTR_DAT_027bcb60;
    if (unaff_x20 != (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_011f6bec(unaff_x20,(long)unaff_w19);
      return;
    }
  }
  uVar3 = thunk_FUN_01279b34(puVar4);
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar5 = thunk_FUN_0124bba8();
  uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1218);
  FUN_01e7598c(uVar5,uVar3,uVar6,0);
  uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1d48);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar5,uVar3);
}


