/*
FUNCTION_NAME: OVRVignette$$OnPostRender
ENTRY_POINT: 069d298c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x069d2ccc) */
/* WARNING: Removing unreachable block (ram,0x069d2dc8) */
/* WARNING: Removing unreachable block (ram,0x069d3090) */
/* WARNING: Removing unreachable block (ram,0x069d3084) */

void OVRVignette__OnPostRender(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x19;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  int *unaff_x20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  int *in_stack_00000040;
  long *in_stack_00000048;
  int in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int iStack00000000000000dc;
  undefined4 *in_stack_000000e8;
  
  FUN_03a8a718(PTR_DAT_08488e30);
  FUN_03a8a718(PTR_DAT_084b96a8);
  FUN_03a8a718(PTR_DAT_084b96b0);
  FUN_03a8a718(PTR_DAT_084b96b8);
  FUN_03a8a718(PTR_DAT_084b96c0);
  FUN_03a8a718(PTR_DAT_084b96c8);
  FUN_03a8a718(PTR_DAT_084b96d0);
  FUN_03a8a718(PTR_DAT_084b96d8);
  FUN_03a8a718(PTR_DAT_08491338);
  FUN_03a8a718(PTR_DAT_084b96e0);
  FUN_03a8a718(PTR_DAT_084b96e8);
  FUN_03a8a718(PTR_DAT_084b96f0);
  FUN_03a8a718(PTR_DAT_084b96f8);
  FUN_03a8a718(PTR_DAT_084b94f8);
  FUN_03a8a718(PTR_DAT_084b9700);
  *(undefined1 *)(unaff_x19 + 0x29a) = 1;
  iStack00000000000000dc = *unaff_x20;
  lVar15 = *(long *)(unaff_x20 + 10);
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  auVar19 = ZEXT816(0);
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  auVar18 = ZEXT816(0);
  in_stack_000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (undefined1 *)0x0;
  in_stack_00000070 = (undefined8 *)0x0;
  in_stack_00000058 = 0;
  if (iStack00000000000000dc == 0) {
    _in_stack_000000c0 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
    unaff_x20[0x10] = 0;
    unaff_x20[0x11] = 0;
    unaff_x20[0x12] = 0;
    unaff_x20[0x13] = 0;
    iStack00000000000000dc = -1;
    *unaff_x20 = -1;
LAB_069d2b10:
    _in_stack_000000b0 = auVar18;
    uVar12 = FUN_0543e074(&stack0x000000c0,*(undefined8 *)PTR_DAT_084b9660);
    *(undefined8 *)(in_stack_000000e8 + 0xe) = uVar12;
    thunk_FUN_03afed3c(in_stack_000000e8 + 0xe,0);
    in_stack_00000040 = &stack0x000000dc;
    in_stack_00000038 = 0;
    in_stack_00000048 = (long *)&stack0x000000e8;
    auVar18 = _in_stack_000000b0;
    auVar19 = _in_stack_000000c0;
    if (iStack00000000000000dc == 1) goto LAB_069d2b54;
    in_stack_00000020 = 0;
    in_stack_00000028 = (int *)0x0;
    FUN_0589eadc(&stack0x00000020,&stack0x000000a8,in_stack_000000e8 + 0x14,
                 *(undefined8 *)PTR_DAT_084b96f8);
    *(int **)(in_stack_000000e8 + 0x18) = in_stack_00000028;
    *(long *)(in_stack_000000e8 + 0x16) = in_stack_00000020;
    thunk_FUN_03afed3c(in_stack_000000e8 + 0x16,0);
    lVar10 = in_stack_000000a8;
    in_stack_00000028 = &stack0x000000dc;
    in_stack_00000020 = 0;
    in_stack_00000030 = (long *)&stack0x000000e8;
    if (iStack00000000000000dc == 1) goto OVRWaitCursor__Update;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    auVar18 = FUN_069d1700(lVar15,*(undefined1 *)(in_stack_000000e8 + 0xc));
    if (lVar10 == 0) {
LAB_069d309c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar15 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)PTR_DAT_084b9698;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_069d309c;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar15 + (long)(int)uVar1 * 0x10 + 0x20) = auVar18;
    }
    else {
      FUN_04c7ca04(lVar10,auVar18._0_8_,auVar18._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    _in_stack_00000080 =
         FUN_046571b8(in_stack_000000a8,*(undefined8 *)(in_stack_000000e8 + 0x14),
                      *(undefined8 *)PTR_DAT_084b96e0);
    if (*(int *)(*(long *)PTR_DAT_084b96d8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084b96d8);
    }
    _in_stack_00000090 = FUN_052ee3fc(&stack0x00000080,*(undefined8 *)PTR_DAT_084b96d0);
    uVar11 = FUN_0543d970(&stack0x00000090,*(undefined8 *)PTR_DAT_084b9670);
    if ((uVar11 & 1) == 0) {
      iStack00000000000000dc = 1;
      *in_stack_000000e8 = 1;
      uVar12 = *(undefined8 *)PTR_DAT_084b96b8;
      *(undefined1 (*) [16])(in_stack_000000e8 + 0x1a) = _in_stack_00000090;
      FUN_04502418(in_stack_000000e8 + 2,&stack0x00000090,in_stack_000000e8,uVar12);
      auVar18 = ZEXT816(0);
      iVar17 = 5;
      goto LAB_069d2dd0;
    }
  }
  else {
    if (iStack00000000000000dc != 1) {
      _in_stack_000000b0 = FUN_069d1ec4(lVar15);
      if (*(int *)(*(long *)PTR_DAT_08491338 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08491338);
      }
      _in_stack_000000c0 = FUN_052fb650(&stack0x000000b0,*(undefined8 *)PTR_DAT_084b96c8);
      uVar11 = FUN_0543df74(&stack0x000000c0,*(undefined8 *)PTR_DAT_084b9678);
      auVar18 = _in_stack_000000b0;
      if ((uVar11 & 1) == 0) {
        iStack00000000000000dc = 0;
        *in_stack_000000e8 = 0;
        uVar12 = *(undefined8 *)PTR_DAT_084b96b0;
        *(undefined1 (*) [16])(in_stack_000000e8 + 0x10) = _in_stack_000000c0;
        FUN_04502594(in_stack_000000e8 + 2,&stack0x000000c0,in_stack_000000e8,uVar12);
        return;
      }
      goto LAB_069d2b10;
    }
LAB_069d2b54:
    in_stack_00000038 = 0;
    in_stack_00000048 = (long *)&stack0x000000e8;
    in_stack_00000040 = &stack0x000000dc;
    _in_stack_000000b0 = auVar18;
    _in_stack_000000c0 = auVar19;
OVRWaitCursor__Update:
    in_stack_00000030 = (long *)&stack0x000000e8;
    in_stack_00000028 = &stack0x000000dc;
    in_stack_00000020 = 0;
    iStack00000000000000dc = -1;
    _in_stack_00000090 = *(undefined1 (*) [16])(in_stack_000000e8 + 0x1a);
    *(undefined8 *)(in_stack_000000e8 + 0x1a) = 0;
    *(undefined8 *)(in_stack_000000e8 + 0x1c) = 0;
    *in_stack_000000e8 = 0xffffffff;
  }
  FUN_0543da70(&stack0x00000090,*(undefined8 *)PTR_DAT_084b9668);
  puVar6 = PTR_DAT_084b96a0;
  if (*(long *)(in_stack_000000e8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04d8f4b4(&stack0x00000008,*(long *)(in_stack_000000e8 + 0x14),*(undefined8 *)PTR_DAT_084b96a0)
  ;
  puVar8 = PTR_DAT_084b9700;
  puVar7 = PTR_DAT_084b96e8;
  puVar5 = PTR_DAT_084b9688;
  puVar4 = PTR_DAT_084b94f8;
  puVar3 = PTR_DAT_08488e30;
  puVar2 = PTR_DAT_08486be8;
  in_stack_00000068 = in_stack_00000010;
  in_stack_00000060 = in_stack_00000008;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000010 = (undefined1 *)&stack0x000000dc;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000060;
  while( true ) {
    uVar11 = FUN_061ae064(&stack0x00000060,*(undefined8 *)puVar5);
    puVar9 = in_stack_00000070;
    if ((uVar11 & 1) == 0) break;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = FUN_06a3c31c((ulong)puVar9 & 0xffffffff,0);
    if ((uVar11 & 1) == 0) {
      in_stack_00000000._4_1_ = *(undefined1 *)(in_stack_000000e8 + 0xc);
      uVar12 = thunk_FUN_03ac70f4(*(undefined8 *)puVar4,(long)&stack0x00000000 + 4);
      uVar13 = thunk_FUN_03ac70f4(*(undefined8 *)puVar7);
      uVar12 = FUN_065ce754(*(undefined8 *)puVar8,uVar12,uVar13,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4fb40(uVar12,0);
    }
  }
  if (iStack00000000000000dc < 0) {
    FUN_061ae060(in_stack_00000018,*(undefined8 *)PTR_DAT_084b9680);
  }
  if (*(long *)(in_stack_000000e8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04d8f4b4(&stack0x00000008,*(long *)(in_stack_000000e8 + 0x14),*(undefined8 *)puVar6);
  in_stack_00000060 = in_stack_00000008;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000060;
  in_stack_00000068 = in_stack_00000010;
  in_stack_00000010 = (undefined1 *)&stack0x000000dc;
  do {
    uVar11 = FUN_061ae064(&stack0x00000060,*(undefined8 *)puVar5);
    puVar9 = in_stack_00000070;
    if ((uVar11 & 1) == 0) {
      auVar18 = ZEXT816(0);
      iVar17 = 0xf;
      goto LAB_069d2d74;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = FUN_06a3c31c((ulong)puVar9 & 0xffffffff,0);
  } while ((uVar11 & 1) != 0);
  auVar18 = FUN_04654094((ulong)puVar9 & 0xffffffff,*(undefined8 *)PTR_DAT_084b96a8);
  iVar17 = 0xe;
LAB_069d2d74:
  if (iStack00000000000000dc < 0) {
    FUN_061ae060(in_stack_00000018,*(undefined8 *)PTR_DAT_084b9680);
  }
  if ((iVar17 == 0xf) || (iVar17 == 0)) {
    auVar19 = FUN_04654094(0,*(undefined8 *)PTR_DAT_084b96a8);
    iVar17 = 0xe;
    auVar18._8_8_ = auVar19._8_8_ & 0xffffffff;
    auVar18._0_8_ = auVar19._0_8_;
  }
LAB_069d2dd0:
  if (*in_stack_00000028 < 0) {
    FUN_0589eb8c(*in_stack_00000030 + 0x58,*(undefined8 *)PTR_DAT_084b96f0);
  }
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if (*in_stack_00000040 < 0) {
    lVar15 = *(long *)(*in_stack_00000048 + 0x38);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + -1;
  }
  puVar6 = PTR_DAT_084b96c0;
  if (in_stack_00000038 == 0) {
    if (iVar17 == 0xe) {
      *in_stack_000000e8 = 0xfffffffe;
      Unity_Collections_LowLevel_Unsafe_UnsafeList_ParallelWriter<ConnectionDataMap_ConnectionSlot<SimpleConnectionLayer_SimpleConnectionData>>__AddRangeNoResize
                (in_stack_000000e8 + 2,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,
                 *(undefined8 *)puVar6);
    }
    else if (iVar17 == 0) {
      uVar13 = *(undefined8 *)(&stack0x00000050 + (long)(in_stack_00000058 + -1) * 8);
      puVar16 = in_stack_000000e8 + 2;
      *in_stack_000000e8 = 0xfffffffe;
      uVar12 = thunk_FUN_03af1434(PTR_DAT_084b9708);
      FUN_052c8594(puVar16,uVar13,uVar12);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}


