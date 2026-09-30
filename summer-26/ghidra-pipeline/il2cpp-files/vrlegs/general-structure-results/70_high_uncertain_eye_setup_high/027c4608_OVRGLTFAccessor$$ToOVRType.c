/*
FUNCTION_NAME: OVRGLTFAccessor$$ToOVRType
ENTRY_POINT: 027c4608
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027c4c94) */

void OVRGLTFAccessor__ToOVRType(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x20;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  char cStack000000000000000c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cc9bc8);
  FUN_01ab69ac(PTR_DAT_03cbdee0);
  FUN_01ab69ac(PTR_DAT_03cc76f0);
  FUN_01ab69ac(PTR_DAT_03cf75b8);
  FUN_01ab69ac(PTR_DAT_03cfc6d0);
  FUN_01ab69ac(PTR_DAT_03cfc6d8);
  FUN_01ab69ac(PTR_DAT_03cfc6e0);
  FUN_01ab69ac(PTR_DAT_03cfc6e8);
  FUN_01ab69ac(PTR_DAT_03cfc6f0);
  FUN_01ab69ac(PTR_DAT_03cfc6f8);
  FUN_01ab69ac(PTR_DAT_03cfc3f8);
  FUN_01ab69ac(PTR_DAT_03cfc400);
  FUN_01ab69ac(PTR_DAT_03cfc700);
  FUN_01ab69ac(PTR_DAT_03cfc708);
  *(undefined1 *)(unaff_x19 + 0xf4d) = 1;
  if (*(char *)(unaff_x20 + 0xa0) != '\0') {
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa8);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000000c,0);
  puVar2 = PTR_DAT_03cf75b0;
  if (*(char *)(unaff_x20 + 0xa0) != '\0') goto LAB_027c4bf4;
  if (*(int *)(*(long *)PTR_DAT_03cf75b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027b9a5c();
  if ((uVar5 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cc1658);
    uVar9 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfc710);
    System_Attribute___ctor(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfc718);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,uVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_01a3cfc8(0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x59,0);
  plVar10 = (long *)(unaff_x20 + 0x90);
  *plVar10 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x58,0);
  plVar11 = (long *)(unaff_x20 + 0x98);
  *plVar11 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11);
  if (*plVar10 == 0) {
LAB_027c47a0:
    uVar7 = 0;
  }
  else {
    FUN_027c45a0();
    if (*plVar11 == 0) goto LAB_027c47a0;
    uVar7 = FUN_025b1328(0,*plVar11,0);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x129,0);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x12a,0);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x167,0);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x168,0);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = FUN_027ca8bc(*(long *)(unaff_x20 + 0x10),0xd,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar4;
  if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_0276c214(uVar4,0x10,0);
  uVar4 = FUN_0276c0cc(uVar8,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar4;
  lVar6 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar6 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar6) != 0) {
    uVar7 = FUN_025b1328(uVar7,*(long *)(unaff_x20 + lVar6),0);
  }
  puVar3 = PTR_DAT_03cf75b8;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)PTR_DAT_03cf75b8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar5 = FUN_01a3ce88(uVar8,uVar7,puVar1,*(undefined8 *)(*(long *)puVar3 + 0xb8));
  if ((uVar5 & 1) == 0) {
    uVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,0x11);
    *puVar1 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar3;
    }
    **(undefined8 **)(lVar6 + 0xb8) = 0;
  }
  puVar2 = PTR_DAT_03cc9bc8;
  if (*(int *)(*(long *)PTR_DAT_03cc9bc8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_027b9b9c(0);
  if (DAT_04124f73 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cc9bc8);
    DAT_04124f73 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc76f0);
  FUN_0269e104(uVar8,uVar7,uVar12,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x60),uVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),5,0);
  plVar10 = (long *)(unaff_x20 + 0x48);
  *plVar10 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),1,0);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*plVar10 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xc,0);
    *plVar10 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),7,0);
    lVar6 = FUN_025b1328(uVar8,uVar7,0);
    *plVar10 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x10,0);
  plVar10 = (long *)(unaff_x20 + 0x38);
  *plVar10 = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  if (*plVar10 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0x14,0);
    *plVar10 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),0xd,0);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc708,0);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc400,0
                                ), (uVar5 & 1) == 0)) {
    uVar7 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar5 = FUN_025bd594(*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc3f8,0);
      if ((uVar5 & 1) != 0) goto LAB_027c4b8c;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar5 = thunk_FUN_025bd1c0(uVar7,*(undefined8 *)PTR_DAT_03cfc700,0);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6e8
                                   ,0), (uVar5 & 1) != 0)) goto LAB_027c4b8c;
    uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6f8,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = thunk_FUN_025bd1c0(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_03cfc6d8,0
                                );
      if ((uVar5 & 1) != 0) {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_03cfc6e0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
    }
    else {
      *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_03cfc6f0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
  }
  else {
LAB_027c4b8c:
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)PTR_DAT_03cfc6d0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = FUN_027ca91c(*(long *)(unaff_x20 + 0x10),10,0);
  *(undefined8 *)(unaff_x20 + 200) = uVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  FUN_027c4eb4();
  if (*(char *)(unaff_x20 + 0xec) != '\0') {
    FUN_027c45a0();
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
LAB_027c4bf4:
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return;
}


