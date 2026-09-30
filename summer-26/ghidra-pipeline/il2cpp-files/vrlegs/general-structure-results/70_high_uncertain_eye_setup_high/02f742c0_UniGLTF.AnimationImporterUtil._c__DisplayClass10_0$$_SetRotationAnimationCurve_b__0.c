/*
FUNCTION_NAME: UniGLTF.AnimationImporterUtil.<>c__DisplayClass10_0$$<SetRotationAnimationCurve>b__0
ENTRY_POINT: 02f742c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f7435c) */
/* WARNING: Removing unreachable block (ram,0x02f7448c) */

void UniGLTF_AnimationImporterUtil_<>c__DisplayClass10_0__<SetRotationAnimationCurve>b__0(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long unaff_x24;
  undefined8 in_stack_00000028;
  
  plVar2 = *(long **)(unaff_x24 + 0xb0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  }
  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
  FUN_02f78434();
  *unaff_x20 = lVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (in_stack_00000028._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar1 = PTR_DAT_03d1fee8;
  if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_02f651a8();
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar2 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
  if (plVar2 == (long *)0x0) {
LAB_02f74478:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *unaff_x20;
  if ((lVar3 != 0) &&
     (lVar5 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_02f74480:
    uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 4,lVar3);
    if (*unaff_x20 == 0) goto LAB_02f74478;
    lVar3 = *(long *)(*unaff_x20 + 0x20);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_02f74480;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 5,lVar3);
      FUN_026780b0(*(undefined8 *)PTR_DAT_03d25090,plVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar1);
      }
      FUN_02f6520c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


