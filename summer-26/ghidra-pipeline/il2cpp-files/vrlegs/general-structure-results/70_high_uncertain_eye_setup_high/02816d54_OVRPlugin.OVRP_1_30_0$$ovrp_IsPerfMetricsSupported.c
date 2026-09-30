/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_IsPerfMetricsSupported
ENTRY_POINT: 02816d54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_IsPerfMetricsSupported(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lStack0000000000000000;
  long lStack0000000000000008;
  ulong uStack0000000000000010;
  long lStack0000000000000020;
  long lStack0000000000000028;
  undefined4 uStack0000000000000030;
  long lStack0000000000000040;
  long lStack0000000000000048;
  ulong uStack0000000000000050;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  
code_r0x02816d54:
  lVar3 = thunk_FUN_01a89d6c(param_1,*unaff_x21);
  if (lVar3 != 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    goto LAB_02816d44;
  }
  if (in_stack_00000060 != (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cfdb78);
    FUN_01876390();
    uVar9 = FUN_028169c0();
    uVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cfe5b0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,uVar10);
  }
  goto switchD_02816da0_caseD_29;
LAB_02816d44:
  FUN_02817d2c(lVar3,(long)&stack0x00000068 + 4,&stack0x00000060);
  plVar4 = in_stack_00000060;
  puVar1 = PTR_DAT_03cc4168;
  uVar2 = in_stack_00000090._4_4_;
  param_1 = in_stack_00000060;
  switch(in_stack_00000068._4_4_) {
  case 2:
    goto switchD_02816da0_caseD_2;
  case 3:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)uVar2 << 0x20;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc02b0 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined2 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT62(in_stack_000000a8._2_6_,*puVar7);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe590);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x478);
    break;
  case 4:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb20 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x338);
    goto LAB_0281756c;
  case 5:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)in_stack_00000090._2_6_ << 0x10;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb20 + 0x40))
      goto LAB_02817c40;
      puVar6 = (undefined1 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,*puVar6);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbffe8);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x448);
    break;
  case 6:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5370 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x388);
    goto LAB_0281756c;
  case 7:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)in_stack_00000090._2_6_ << 0x10;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5370 + 0x40))
      goto LAB_02817c40;
      puVar6 = (undefined1 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,*puVar6);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe588);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x498);
    break;
  case 8:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5368 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x348);
    goto LAB_0281756c;
  case 9:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)uVar2 << 0x20;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5368 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined2 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT62(in_stack_000000a8._2_6_,*puVar7);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe580);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x458);
    break;
  case 10:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5378 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x358);
    goto LAB_0281756c;
  case 0xb:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)uVar2 << 0x20;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5378 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined2 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT62(in_stack_000000a8._2_6_,*puVar7);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe570);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x468);
    break;
  case 0xc:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeda8 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x2d8);
    goto LAB_0281756c;
  case 0xd:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeda8 + 0x40))
      goto LAB_02817c40;
      puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,*puVar8);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc1828);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 1000);
    break;
  case 0xe:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb28 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x378);
    goto LAB_0281756c;
  case 0xf:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)in_stack_00000090._2_6_ << 0x10;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb28 + 0x40))
      goto LAB_02817c40;
      puVar6 = (undefined1 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,*puVar6);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe5a0);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x488);
    break;
  case 0x10:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4ad8 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x2e8);
    goto LAB_0281756c;
  case 0x11:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4ad8 + 0x40))
      goto LAB_02817c40;
      puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,*puVar8);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe568);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x3f8);
    break;
  case 0x12:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbf0c0 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x2f8);
    break;
  case 0x13:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbf0c0 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc17c8);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x408);
    goto LAB_02817bf4;
  case 0x14:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03ccc8c0 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x308);
    break;
  case 0x15:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03ccc8c0 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cee018);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x418);
    goto LAB_02817bf4;
  case 0x16:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb38 + 0x40))
    goto LAB_02817c40;
    puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
    (**(code **)(*unaff_x19 + 0x318))(*puVar8);
    goto LAB_02817c18;
  case 0x17:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb38 + 0x40))
      goto LAB_02817c40;
      puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,*puVar8);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbfd58);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x428);
    break;
  case 0x18:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbece8 + 0x40))
    goto LAB_02817c40;
    puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
    (**(code **)(*unaff_x19 + 0x328))(*puVar5);
    goto LAB_02817c18;
  case 0x19:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbece8 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cce258);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x438);
    goto LAB_02817bf4;
  case 0x1a:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeeb0 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x3a8);
    break;
  case 0x1b:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeeb0 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfddf8);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x4b8);
    goto LAB_02817bf4;
  case 0x1c:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbf088 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x3b8);
    goto LAB_02817bf4;
  case 0x1d:
    if (in_stack_00000060 == (long *)0x0) {
      lStack0000000000000040 = 0;
      lStack0000000000000048 = 0;
      uStack0000000000000050 = 0;
    }
    else {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbf088 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      in_stack_000000b0 = puVar5[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfde20);
      lStack0000000000000048 = in_stack_00000098;
      lStack0000000000000040 = in_stack_00000090;
      uStack0000000000000050 = _uStack00000000000000a0;
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x4c8);
    in_stack_00000098 = lStack0000000000000048;
    in_stack_00000090 = lStack0000000000000040;
    _uStack00000000000000a0 = uStack0000000000000050;
    goto FUN_02817bcc;
  case 0x1e:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5358 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x398);
    goto LAB_02817bf4;
  case 0x1f:
    if (in_stack_00000060 == (long *)0x0) {
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = 0;
    }
    else {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5358 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      in_stack_000000b0 = puVar5[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfddc8);
      in_stack_00000078 = in_stack_00000098;
      in_stack_00000070 = in_stack_00000090;
      in_stack_00000080 = _uStack00000000000000a0;
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x4a8);
    in_stack_00000098 = in_stack_00000078;
    in_stack_00000090 = in_stack_00000070;
    _uStack00000000000000a0 = in_stack_00000080;
    goto FUN_02817bcc;
  case 0x20:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbed58 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x3c8);
    goto LAB_02817bf4;
  case 0x21:
    if (in_stack_00000060 == (long *)0x0) {
      lStack0000000000000020 = 0;
      lStack0000000000000028 = 0;
      uStack0000000000000030 = 0;
    }
    else {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = _uStack00000000000000a0 & 0xffffffff00000000;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbed58 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      in_stack_000000b0 = puVar5[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe598);
      lStack0000000000000028 = in_stack_00000098;
      lStack0000000000000020 = in_stack_00000090;
      uStack0000000000000030 = uStack00000000000000a0;
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x4d8);
    in_stack_00000098 = lStack0000000000000028;
    in_stack_00000090 = lStack0000000000000020;
    _uStack00000000000000a0 = CONCAT44(uStack00000000000000a4,uStack0000000000000030);
FUN_02817bcc:
    (*pcVar11)();
    goto LAB_02817c18;
  case 0x22:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4b20 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar11 = *(code **)(*unaff_x19 + 0x3d8);
    break;
  case 0x23:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4b20 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cf5f18);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x4e8);
LAB_02817bf4:
    (*pcVar11)();
    goto LAB_02817c18;
  case 0x24:
    if (in_stack_00000060 == (long *)0x0) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4168 + 0x40))
    goto LAB_02817c40;
    plVar4 = (long *)thunk_FUN_01a89fbc();
    in_stack_00000098 = plVar4[1];
    in_stack_00000090 = *plVar4;
    uVar9 = *(undefined8 *)puVar1;
    goto LAB_028179e4;
  case 0x25:
    if (in_stack_00000060 == (long *)0x0) {
      lStack0000000000000000 = 0;
      lStack0000000000000008 = 0;
      uStack0000000000000010 = 0;
    }
    else {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      _uStack00000000000000a0 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4168 + 0x40))
      goto LAB_02817c40;
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar5;
      in_stack_000000b0 = puVar5[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe578);
      lStack0000000000000008 = in_stack_00000098;
      lStack0000000000000000 = in_stack_00000090;
      uStack0000000000000010 = _uStack00000000000000a0;
    }
    in_stack_00000098 = lStack0000000000000008;
    in_stack_00000090 = lStack0000000000000000;
    _uStack00000000000000a0 = uStack0000000000000010;
    uVar9 = *(undefined8 *)PTR_DAT_03cfe5a8;
LAB_028179e4:
    thunk_FUN_01a89a98(uVar9,&stack0x00000090);
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar11 = *(code **)(*unaff_x19 + 0x518);
    break;
  case 0x26:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    if (in_stack_00000060 != (long *)0x0) {
      lVar3 = *(long *)PTR_DAT_03cbede8;
      if ((*(byte *)(*in_stack_00000060 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*in_stack_00000060 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8)
          != lVar3)) goto LAB_02817c44;
    }
    pcVar11 = *(code **)(*unaff_x19 + 0x508);
    break;
  case 0x27:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    if ((in_stack_00000060 != (long *)0x0) &&
       (lVar3 = *(long *)PTR_DAT_03cbebc0, *in_stack_00000060 != lVar3)) {
LAB_02817c44:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(in_stack_00000060,lVar3);
    }
    pcVar11 = *(code **)(*unaff_x19 + 0x2c8);
    break;
  case 0x28:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    if (in_stack_00000060 != (long *)0x0) {
      uVar9 = *(undefined8 *)PTR_DAT_03cbfb98;
      lVar3 = thunk_FUN_01a89d6c(in_stack_00000060,uVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar4,uVar9);
      }
    }
    pcVar11 = *(code **)(*unaff_x19 + 0x4f8);
    break;
  case 0x29:
switchD_02816da0_caseD_29:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    (**(code **)(*unaff_x19 + 0x288))();
    goto LAB_02817c18;
  default:
    goto code_r0x02816d54;
  }
  (*pcVar11)();
  goto LAB_02817c18;
switchD_02816da0_caseD_2:
  if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) {
LAB_02817c3c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc02b0 + 0x40)) {
LAB_02817c40:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  thunk_FUN_01a89fbc();
  pcVar11 = *(code **)(*unaff_x19 + 0x368);
LAB_0281756c:
  (*pcVar11)();
LAB_02817c18:
  if (*(long *)(unaff_x22 + 0x28) != in_stack_000000b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


