/*
FUNCTION_NAME: OVRGLTFAccessor$$SeekStride
ENTRY_POINT: 027c4928
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027c4c94) */

void OVRGLTFAccessor__SeekStride(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027c48b4 with catch @ 027c4928
                        */
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x25;
  }
  **(undefined8 **)(param_1 + 0xb8) = 0;
  puVar1 = PTR_DAT_03cc9bc8;
                    /* try { // try from 027c4940 to 028c498f has its CatchHandler @ 027c49cc */
  if (*(int *)(*(long *)PTR_DAT_03cc9bc8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_027b9b9c(0);
  if (DAT_04124f73 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cc9bc8);
    DAT_04124f73 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 027c4990 to 028c49bb has its CatchHandler @ 027c4864 */
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc76f0);
                    /* try { // try from 027c49bc to 028c49cb has its CatchHandler @ 027c49cc */
  FUN_0269e104(uVar4,uVar2,uVar7,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar4;
                    /* catch() { ... } // from try @ 027c4940 with catch @ 027c49cc
                       catch() { ... } // from try @ 027c49bc with catch @ 027c49cc */
                    /* try { // try from 027c49d0 to 028c49d3 has its CatchHandler @ 027c49dc */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x60),uVar4);
                    /* try { // try from 027c49d4 to 028c49df has its CatchHandler @ 027c4864 */
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027c49d0 with catch @ 027c49dc
                        */
  lVar3 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),5,0);
  plVar6 = (long *)(unaff_x20 + 0x48);
  *plVar6 = lVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),1,0);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*plVar6 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xc,0);
    *plVar6 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),7,0);
    lVar3 = FUN_025b1328(uVar4,uVar2,0);
    *plVar6 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x10,0);
  plVar6 = (long *)(unaff_x20 + 0x38);
  *plVar6 = lVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
  if (*plVar6 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x14,0);
    *plVar6 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xd,0);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc708,0);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc400,0
                                ), (uVar5 & 1) == 0)) {
    uVar2 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar5 = FUN_025bd594(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc3f8,0);
      if ((uVar5 & 1) != 0) goto LAB_027c4b8c;
      uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar5 = thunk_FUN_025bd1c0(uVar2,*(undefined8 *)PTR_DAT_03cfc700,0);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6e8
                                   ,0), (uVar5 & 1) == 0)) {
      uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6f8,0
                                );
      if ((uVar5 & 1) == 0) {
        uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6d8
                                   ,0);
        if ((uVar5 & 1) != 0) {
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
    uVar2 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),10,0);
    *(undefined8 *)(unaff_x20 + 200) = uVar2;
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


