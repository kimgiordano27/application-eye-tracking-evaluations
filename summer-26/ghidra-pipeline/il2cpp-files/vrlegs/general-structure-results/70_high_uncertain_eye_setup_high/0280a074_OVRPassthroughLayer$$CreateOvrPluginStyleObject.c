/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 0280a074
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar15;
  long unaff_x24;
  long *unaff_x26;
  long lStack0000000000000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x90));
  *(undefined1 *)(unaff_x24 + 0x305) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_0282fd5c();
  in_stack_00000050 = 0;
  plVar15 = unaff_x20 + 0xf;
  lVar7 = *(long *)(*unaff_x26 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8();
  }
  puVar2 = PTR_DAT_03cfdf30;
  pcVar8 = (char *)thunk_FUN_01a59484(plVar15,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    in_stack_00000028 = *plVar15;
    iVar6 = *(int *)(unaff_x19 + 0x34);
    FUN_01ba9478(&stack0x00000028,(long)&stack0x00000058 + 4,*(undefined8 *)puVar2);
    iVar5 = in_stack_00000058._4_4_;
    lVar7 = *(long *)(*unaff_x26 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000028,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(int *)(unaff_x19 + 0x34);
                    /* try { // try from 0280a160 to 0290a1c7 has its CatchHandler @ 0280a160
                       catch() { ... } // from try @ 0280a160 with catch @ 0280a160
                       catch() { ... } // from try @ 0280a1e0 with catch @ 0280a160
                       catch() { ... } // from try @ 0280a26c with catch @ 0280a160
                       catch() { ... } // from try @ 0280a308 with catch @ 0280a160 */
      FUN_02241190(&stack0x00000050,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfdf38);
      FUN_01ba9478(plVar15,(long)&stack0x00000058 + 4,*(undefined8 *)puVar2);
      FUN_02813a70();
    }
  }
  puVar2 = PTR_DAT_03cfdfa0;
  in_stack_00000048 = 0;
  plVar15 = unaff_x20 + 0x10;
  lVar7 = *(long *)(*(long *)PTR_DAT_03cfdfa0 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8();
  }
  puVar3 = PTR_DAT_03cfe0a8;
  pcVar8 = (char *)thunk_FUN_01a59484(plVar15,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    in_stack_00000020 = *plVar15;
    iVar6 = *(int *)(unaff_x19 + 0x3c);
    FUN_01ba9478(&stack0x00000020,(long)&stack0x00000058 + 4,*(undefined8 *)puVar3);
    iVar5 = in_stack_00000058._4_4_;
    lVar7 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000020,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(int *)(unaff_x19 + 0x3c);
      FUN_02241190(&stack0x00000048,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0c8);
      FUN_01ba9478(plVar15,(long)&stack0x00000058 + 4,*(undefined8 *)puVar3);
      FUN_02813ad8();
    }
  }
  puVar3 = PTR_DAT_03cfdfc8;
  in_stack_00000040 = 0;
  plVar15 = unaff_x20 + 0x11;
  lVar7 = *(long *)(*(long *)PTR_DAT_03cfdfc8 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8();
  }
  puVar4 = PTR_DAT_03cfe068;
  pcVar8 = (char *)thunk_FUN_01a59484(plVar15,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    in_stack_00000018 = *plVar15;
    iVar6 = *(int *)(unaff_x19 + 0x40);
    FUN_01ba9478(&stack0x00000018,(long)&stack0x00000058 + 4,*(undefined8 *)puVar4);
    iVar5 = in_stack_00000058._4_4_;
    lVar7 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000018,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(int *)(unaff_x19 + 0x40);
      FUN_02241190(&stack0x00000040,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe070);
      FUN_01ba9478(plVar15,(long)&stack0x00000058 + 4,*(undefined8 *)puVar4);
      FUN_02813b40();
    }
  }
  in_stack_00000038 = 0;
  plVar15 = unaff_x20 + 0x13;
  lVar7 = *(long *)(*(long *)PTR_DAT_03cfdf68 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8();
  }
  pcVar8 = (char *)thunk_FUN_01a59484(plVar15,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    iVar6 = *(int *)(unaff_x19 + 0x48);
    in_stack_00000010 = *plVar15;
    FUN_01ba9478(&stack0x00000010,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0a0);
    iVar5 = in_stack_00000058._4_4_;
    lVar7 = *(long *)(*(long *)PTR_DAT_03cfdf68 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000010,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(int *)(unaff_x19 + 0x48);
      FUN_02241190(&stack0x00000038,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0c0);
      FUN_01ba9478(plVar15,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0a0);
      FUN_02813c1c();
    }
  }
  in_stack_00000030 = 0;
  plVar15 = unaff_x20 + 0x15;
  lVar7 = *(long *)(*(long *)PTR_DAT_03cfdf78 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01a46ff8();
  }
  pcVar8 = (char *)thunk_FUN_01a59484(plVar15,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    iVar6 = *(int *)(unaff_x19 + 0x44);
    in_stack_00000008 = *plVar15;
    FUN_01ba9478(&stack0x00000008,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0b0);
    iVar5 = in_stack_00000058._4_4_;
    lVar7 = *(long *)(*(long *)PTR_DAT_03cfdf78 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80));
    if ((iVar6 != iVar5) || (*pcVar8 == '\0')) {
      in_stack_00000058._4_4_ = *(int *)(unaff_x19 + 0x44);
      FUN_02241190(&stack0x00000030,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0b8);
      FUN_01ba9478(plVar15,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0b0);
      FUN_02813ba8();
    }
  }
  plVar15 = (long *)unaff_x20[0x16];
  if (plVar15 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    uVar9 = FUN_02813c8c();
    uVar10 = (**(code **)(*plVar15 + 0x138))(plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x140));
    lVar7 = 0;
    if ((uVar10 & 1) == 0) {
      lVar7 = FUN_02813c8c();
      *(long *)(unaff_x19 + 0x58) = unaff_x20[0x16];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
  }
  if ((char)unaff_x20[0x1a] == '\0') {
    lStack0000000000000000 = 0;
  }
  else {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    plVar15 = (long *)(unaff_x19 + 0x50);
    uVar10 = FUN_025bd4ac(*plVar15,unaff_x20[0x19],0);
    lStack0000000000000000 = 0;
    if ((uVar10 & 1) != 0) {
      lStack0000000000000000 = *plVar15;
      *plVar15 = unaff_x20[0x19];
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15);
    }
  }
  puVar3 = PTR_DAT_03cfe048;
  lVar11 = (**(code **)(*unaff_x20 + 0x1b8))();
  if (lVar11 == 0) {
LAB_0280a6b8:
    lVar11 = 0;
  }
  else {
    plVar15 = (long *)(**(code **)(*unaff_x20 + 0x1b8))();
    if (plVar15 == (long *)0x0) goto LAB_0280a9d0;
    lVar13 = *plVar15;
    lVar11 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0280a678;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar15,lVar11,0);
LAB_0280a678:
    iVar6 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    if (iVar6 < 4) goto LAB_0280a6b8;
    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfe0d0);
    FUN_02856f08();
  }
  lVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfe098);
  FUN_0284d6a4();
  if (lVar13 == 0) {
LAB_0280a9d0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = unaff_x19;
  if (lVar11 != 0) {
    lVar1 = lVar11;
  }
  FUN_0284d734(lVar13,lVar1,unaff_x22,unaff_x21,0);
  if (lVar11 != 0) {
    plVar15 = (long *)(**(code **)(*unaff_x20 + 0x1b8))();
    uVar9 = FUN_02857110(lVar11,0);
    if (plVar15 == (long *)0x0) goto LAB_0280a9d0;
    lVar13 = *plVar15;
    lVar11 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0280a788;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar15,lVar11,1);
LAB_0280a788:
    (*(code *)*puVar12)(plVar15,4,uVar9,0,puVar12[1]);
  }
  lVar11 = *(long *)(*unaff_x26 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  puVar3 = PTR_DAT_03cfdfc8;
  pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000050,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    FUN_01ba9478(&stack0x00000050,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfdf30);
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    FUN_02813a70();
  }
  lVar11 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000048,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    FUN_01ba9478(&stack0x00000048,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0a8);
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    FUN_02813ad8();
  }
  lVar11 = *(long *)(*(long *)puVar3 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000040,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    FUN_01ba9478(&stack0x00000040,(long)&stack0x00000058 + 4,*(undefined8 *)puVar4);
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    FUN_02813b40();
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_03cfdf68 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000038,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    FUN_01ba9478(&stack0x00000038,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0a0);
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    FUN_02813c1c();
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_03cfdf78 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01a46ff8();
  }
  pcVar8 = (char *)thunk_FUN_01a59484(&stack0x00000030,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  if (*pcVar8 != '\0') {
    FUN_01ba9478(&stack0x00000030,(long)&stack0x00000058 + 4,*(undefined8 *)PTR_DAT_03cfe0b0);
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    FUN_02813ba8();
  }
  if ((char)unaff_x20[0x1a] != '\0') {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    *(long *)(unaff_x19 + 0x50) = lStack0000000000000000;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  if (lVar7 != 0) {
    if (unaff_x19 == 0) goto LAB_0280a9d0;
    *(long *)(unaff_x19 + 0x58) = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(unaff_x19 + 0x58),lVar7);
  }
  return;
}


