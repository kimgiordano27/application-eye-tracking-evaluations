/*
FUNCTION_NAME: OVRGLTFAccessor$$Seek
ENTRY_POINT: 027c476c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027c4c94) */

void OVRGLTFAccessor__Seek(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  long *plVar8;
  long *unaff_x22;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*unaff_x21 == 0) {
LAB_027c47a0:
    uVar4 = 0;
  }
  else {
    FUN_027c45a0();
    if (*unaff_x22 == 0) goto LAB_027c47a0;
    uVar4 = FUN_025b1328(0,*unaff_x22,0);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x129,0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x12a,0);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x167,0);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x168,0);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = FUN_027ca8bc(*(long *)(unaff_x20 + 0x10),0xd,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                    /* try { // try from 027c4864 to 028c48af has its CatchHandler @ 027c4864
                       catch() { ... } // from try @ 027c4864 with catch @ 027c4864
                       catch() { ... } // from try @ 027c4918 with catch @ 027c4864
                       catch() { ... } // from try @ 027c4990 with catch @ 027c4864
                       catch() { ... } // from try @ 027c49d4 with catch @ 027c4864 */
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_0276c214(uVar3,0x10,0);
  uVar3 = FUN_0276c0cc(uVar5,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  lVar7 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar7 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar7) != 0) {
    uVar4 = FUN_025b1328(uVar4,*(long *)(unaff_x20 + lVar7),0);
                    /* try { // try from 027c48b0 to 028c48b3 has its CatchHandler @ 027c491c */
  }
                    /* try { // try from 027c48b4 to 028c48bf has its CatchHandler @ 027c4928 */
  puVar2 = PTR_DAT_03cf75b8;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)PTR_DAT_03cf75b8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
                    /* try { // try from 027c48d4 to 028c48f3 has its CatchHandler @ 027c4924 */
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar6 = FUN_01a3ce88(uVar5,uVar4,puVar1,*(undefined8 *)(*(long *)puVar2 + 0xb8));
  if ((uVar6 & 1) == 0) {
                    /* try { // try from 027c490c to 028c4917 has its CatchHandler @ 027c4920 */
    uVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,0x11);
                    /* try { // try from 027c4918 to 028c493f has its CatchHandler @ 027c4864 */
    *puVar1 = uVar4;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027c48b0 with catch @ 027c491c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027c490c with catch @ 027c4920
                        */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027c48d4 with catch @ 027c4924
                        */
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar7 + 0xb8) = 0;
  }
  puVar2 = PTR_DAT_03cc9bc8;
  if (*(int *)(*(long *)PTR_DAT_03cc9bc8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_027b9b9c(0);
  if (DAT_04124f73 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cc9bc8);
    DAT_04124f73 = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc76f0);
  FUN_0269e104(uVar5,uVar4,uVar9,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x60),uVar5);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),5,0);
  plVar8 = (long *)(unaff_x20 + 0x48);
  *plVar8 = lVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),1,0);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xc,0);
    *plVar8 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),7,0);
    lVar7 = FUN_025b1328(uVar5,uVar4,0);
    *plVar8 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x10,0);
  plVar8 = (long *)(unaff_x20 + 0x38);
  *plVar8 = lVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8);
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x14,0);
    *plVar8 = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xd,0);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar6 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc708,0);
  if (((uVar6 & 1) == 0) &&
     (uVar6 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc400,0
                                ), (uVar6 & 1) == 0)) {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar6 = FUN_025bd594(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc3f8,0);
      if ((uVar6 & 1) != 0) goto LAB_027c4b8c;
      uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar6 = thunk_FUN_025bd1c0(uVar4,*(undefined8 *)PTR_DAT_03cfc700,0);
    if (((uVar6 & 1) == 0) &&
       (uVar6 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6e8
                                   ,0), (uVar6 & 1) == 0)) {
      uVar6 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6f8,0
                                );
      if ((uVar6 & 1) == 0) {
        uVar6 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6d8
                                   ,0);
        if ((uVar6 & 1) != 0) {
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
    uVar4 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),10,0);
    *(undefined8 *)(unaff_x20 + 200) = uVar4;
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


