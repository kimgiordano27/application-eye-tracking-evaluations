/*
FUNCTION_NAME: UniGLTF.AnimationImporterUtil.ReverseFunc$$Invoke
ENTRY_POINT: 02f74170
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f7435c) */
/* WARNING: Removing unreachable block (ram,0x02f7448c) */

void UniGLTF_AnimationImporterUtil_ReverseFunc__Invoke(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *in_x10;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 in_stack_00000028;
  
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74090 with catch @ 02f74170
                        */
  uVar2 = (*in_x10)();
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74164 with catch @ 02f74174
                        */
  if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f7401c with catch @ 02f74178
                        */
    plVar3 = *(long **)(unaff_x19 + 0xd0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f73fc0 with catch @ 02f7417c
                        */
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02f74158 with catch @ 02f74180
                        */
    uVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(unaff_x19 + 0xd0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar3 + 0x228))
                (plVar3,*(undefined4 *)(unaff_x19 + 0xf0),*(undefined8 *)(*plVar3 + 0x230));
      plVar3 = *(long **)(unaff_x19 + 0xd0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar3 + 0x248))
                (plVar3,*(undefined4 *)(unaff_x19 + 0xf0),*(undefined8 *)(*plVar3 + 0x250));
    }
  }
  lVar6 = *(long *)(unaff_x19 + 200);
  if (lVar6 == 0) {
    if (*unaff_x20 != 0)
    goto UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1;
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02745d28(0);
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
    FUN_02f78434();
    *unaff_x20 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  else if (*unaff_x20 == 0) {
    plVar3 = *(long **)(lVar6 + 0xa0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    plVar3 = *(long **)(lVar6 + 0xa8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    plVar3 = *(long **)(lVar6 + 0xb0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24f30);
    FUN_02f78434();
    *unaff_x20 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  else {
UniGLTF_AnimationImporterUtil_<>c__<SetBlendShapeAnimationCurve>b__12_1:
    FUN_02f786f4();
  }
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


