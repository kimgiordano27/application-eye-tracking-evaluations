/*
FUNCTION_NAME: OVRGLTFAccessor$$ReadFloat
ENTRY_POINT: 027c49f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027c4c94) */

void OVRGLTFAccessor__ReadFloat(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long *unaff_x21;
  long *plVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),1,0);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*unaff_x21 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xc,0);
    *unaff_x21 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),7,0);
    lVar2 = FUN_025b1328(uVar5,uVar1,0);
    *unaff_x21 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x10,0);
  plVar4 = (long *)(unaff_x20 + 0x38);
  *plVar4 = lVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
  if (*plVar4 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x14,0);
    *plVar4 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xd,0);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar3 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc708,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc400,0
                                ), (uVar3 & 1) == 0)) {
    uVar1 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar3 = FUN_025bd594(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc3f8,0);
      if ((uVar3 & 1) != 0) goto LAB_027c4b8c;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar3 = thunk_FUN_025bd1c0(uVar1,*(undefined8 *)PTR_DAT_03cfc700,0);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6e8
                                   ,0), (uVar3 & 1) == 0)) {
      uVar3 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6f8,0
                                );
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6d8
                                   ,0);
        if ((uVar3 & 1) != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_03cfc6e0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        }
      }
      else {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_03cfc6f0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      goto LAB_027c4ba4;
    }
  }
LAB_027c4b8c:
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_03cfc6d0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_027c4ba4:
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar1 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),10,0);
    *(undefined8 *)(unaff_x20 + 200) = uVar1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    FUN_027c4eb4();
    if (*(char *)(unaff_x20 + 0xec) != '\0') {
      FUN_027c45a0();
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


