/*
FUNCTION_NAME: UniGLTF.AnimationImporterUtil.<>c$$<SetBlendShapeAnimationCurve>b__12_1
ENTRY_POINT: 02f7421c
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

void UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 02f74220 to 0307422b has its CatchHandler @ 02f73e18 */
  FUN_02f786f4();
  if (in_stack_00000028._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar1 = PTR_DAT_03d1fee8;
  if (*(int *)(*(long *)PTR_DAT_03d1fee8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_02f651a8();
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,2);
  if (plVar3 != (long *)0x0) {
    lVar6 = *unaff_x20;
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_02f74480:
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar6);
      if (*unaff_x20 == 0) goto LAB_02f74478;
      lVar6 = *(long *)(*unaff_x20 + 0x20);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_02f74480;
      if (1 < *(uint *)(plVar3 + 3)) {
        plVar3[5] = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 5,lVar6);
        FUN_026780b0(*(undefined8 *)PTR_DAT_03d25090,plVar3,0);
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
LAB_02f74478:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


