/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 02816c7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
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
  
  FUN_01ab69ac(PTR_DAT_03cee018);
  FUN_01ab69ac(PTR_DAT_03cfe5a0);
  FUN_01ab69ac(PTR_DAT_03cbfd58);
  FUN_01ab69ac(PTR_DAT_03cfe5a8);
  FUN_01ab69ac(PTR_DAT_03cc5370);
  FUN_01ab69ac(PTR_DAT_03cbeb38);
  FUN_01ab69ac(PTR_DAT_03cbebc0);
  FUN_01ab69ac(PTR_DAT_03cc4b20);
  FUN_01ab69ac(PTR_DAT_03cc5378);
  FUN_01ab69ac(PTR_DAT_03cc4ad8);
  FUN_01ab69ac(PTR_DAT_03ccc8c0);
  FUN_01ab69ac(PTR_DAT_03cbede8);
  *(undefined1 *)(unaff_x21 + 0x37d) = 1;
  puVar3 = PTR_DAT_03cfdb78;
  puVar2 = PTR_DAT_03ce64d8;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
LAB_02816d44:
  plVar6 = in_stack_00000060;
  puVar1 = PTR_DAT_03cc4168;
  uVar4 = in_stack_00000090._4_4_;
  switch(unaff_w20) {
  case 2:
    goto switchD_02816da0_caseD_2;
  case 3:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)uVar4 << 0x20;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc02b0 + 0x40))
      goto LAB_02817c40;
      puVar9 = (undefined2 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT62(in_stack_000000a8._2_6_,*puVar9);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe590);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x478);
    break;
  case 4:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb20 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x338);
    goto LAB_0281756c;
  case 5:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)in_stack_00000090._2_6_ << 0x10;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb20 + 0x40))
      goto LAB_02817c40;
      puVar8 = (undefined1 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,*puVar8);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbffe8);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x448);
    break;
  case 6:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5370 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x388);
    goto LAB_0281756c;
  case 7:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)in_stack_00000090._2_6_ << 0x10;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5370 + 0x40))
      goto LAB_02817c40;
      puVar8 = (undefined1 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,*puVar8);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe588);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x498);
    break;
  case 8:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5368 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x348);
    goto LAB_0281756c;
  case 9:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)uVar4 << 0x20;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5368 + 0x40))
      goto LAB_02817c40;
      puVar9 = (undefined2 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT62(in_stack_000000a8._2_6_,*puVar9);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe580);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x458);
    break;
  case 10:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5378 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x358);
    goto LAB_0281756c;
  case 0xb:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)uVar4 << 0x20;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc5378 + 0x40))
      goto LAB_02817c40;
      puVar9 = (undefined2 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT62(in_stack_000000a8._2_6_,*puVar9);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe570);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x468);
    break;
  case 0xc:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeda8 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x2d8);
    goto LAB_0281756c;
  case 0xd:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeda8 + 0x40))
      goto LAB_02817c40;
      puVar10 = (undefined4 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,*puVar10);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc1828);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 1000);
    break;
  case 0xe:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb28 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x378);
    goto LAB_0281756c;
  case 0xf:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = (ulong)in_stack_00000090._2_6_ << 0x10;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb28 + 0x40))
      goto LAB_02817c40;
      puVar8 = (undefined1 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT71(in_stack_000000a8._1_7_,*puVar8);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe5a0);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x488);
    break;
  case 0x10:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4ad8 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x2e8);
    goto LAB_0281756c;
  case 0x11:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4ad8 + 0x40))
      goto LAB_02817c40;
      puVar10 = (undefined4 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,*puVar10);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe568);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x3f8);
    break;
  case 0x12:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbf0c0 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x2f8);
    break;
  case 0x13:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbf0c0 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cc17c8);
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x408);
      goto LAB_02817bf4;
    }
    goto LAB_02817c3c;
  case 0x14:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03ccc8c0 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x308);
    break;
  case 0x15:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03ccc8c0 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cee018);
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x418);
      goto LAB_02817bf4;
    }
    goto LAB_02817c3c;
  case 0x16:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb38 + 0x40))
    goto LAB_02817c40;
    puVar10 = (undefined4 *)thunk_FUN_01a89fbc();
    (**(code **)(*unaff_x19 + 0x318))(*puVar10);
    goto LAB_02817c18;
  case 0x17:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeb38 + 0x40))
      goto LAB_02817c40;
      puVar10 = (undefined4 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,*puVar10);
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cbfd58);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x428);
    break;
  case 0x18:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbece8 + 0x40))
    goto LAB_02817c40;
    puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
    (**(code **)(*unaff_x19 + 0x328))(*puVar7);
    goto LAB_02817c18;
  case 0x19:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbece8 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cce258);
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x438);
      goto LAB_02817bf4;
    }
    goto LAB_02817c3c;
  case 0x1a:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeeb0 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x3a8);
    break;
  case 0x1b:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cbeeb0 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfddf8);
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x4b8);
      goto LAB_02817bf4;
    }
    goto LAB_02817c3c;
  case 0x1c:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbf088 + 0x40)) {
      thunk_FUN_01a89fbc();
      pcVar13 = *(code **)(*unaff_x19 + 0x3b8);
      goto LAB_02817bf4;
    }
    goto LAB_02817c40;
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
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      in_stack_000000b0 = puVar7[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfde20);
      lStack0000000000000048 = in_stack_00000098;
      lStack0000000000000040 = in_stack_00000090;
      uStack0000000000000050 = _uStack00000000000000a0;
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x4c8);
      in_stack_00000098 = lStack0000000000000048;
      in_stack_00000090 = lStack0000000000000040;
      _uStack00000000000000a0 = uStack0000000000000050;
      goto FUN_02817bcc;
    }
    goto LAB_02817c3c;
  case 0x1e:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc5358 + 0x40)) {
      thunk_FUN_01a89fbc();
      pcVar13 = *(code **)(*unaff_x19 + 0x398);
      goto LAB_02817bf4;
    }
    goto LAB_02817c40;
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
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      in_stack_000000b0 = puVar7[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfddc8);
      in_stack_00000078 = in_stack_00000098;
      in_stack_00000070 = in_stack_00000090;
      in_stack_00000080 = _uStack00000000000000a0;
    }
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x4a8);
      in_stack_00000098 = in_stack_00000078;
      in_stack_00000090 = in_stack_00000070;
      _uStack00000000000000a0 = in_stack_00000080;
      goto FUN_02817bcc;
    }
    goto LAB_02817c3c;
  case 0x20:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbed58 + 0x40)) {
      thunk_FUN_01a89fbc();
      pcVar13 = *(code **)(*unaff_x19 + 0x3c8);
      goto LAB_02817bf4;
    }
    goto LAB_02817c40;
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
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      in_stack_000000b0 = puVar7[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe598);
      lStack0000000000000028 = in_stack_00000098;
      lStack0000000000000020 = in_stack_00000090;
      uStack0000000000000030 = uStack00000000000000a0;
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x4d8);
    in_stack_00000098 = lStack0000000000000028;
    in_stack_00000090 = lStack0000000000000020;
    _uStack00000000000000a0 = CONCAT44(uStack00000000000000a4,uStack0000000000000030);
FUN_02817bcc:
    (*pcVar13)();
    goto LAB_02817c18;
  case 0x22:
    if ((unaff_x19 == (long *)0x0) || (in_stack_00000060 == (long *)0x0)) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4b20 + 0x40))
    goto LAB_02817c40;
    thunk_FUN_01a89fbc();
    pcVar13 = *(code **)(*unaff_x19 + 0x3d8);
    break;
  case 0x23:
    if (in_stack_00000060 != (long *)0x0) {
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if (*(long *)(*in_stack_00000060 + 0x40) != *(long *)(*(long *)PTR_DAT_03cc4b20 + 0x40))
      goto LAB_02817c40;
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cf5f18);
    }
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x4e8);
LAB_02817bf4:
    (*pcVar13)();
    goto LAB_02817c18;
  case 0x24:
    if (in_stack_00000060 == (long *)0x0) goto LAB_02817c3c;
    if (*(long *)(*in_stack_00000060 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc4168 + 0x40)) {
      plVar6 = (long *)thunk_FUN_01a89fbc();
      in_stack_00000098 = plVar6[1];
      in_stack_00000090 = *plVar6;
      uVar11 = *(undefined8 *)puVar1;
      goto LAB_028179e4;
    }
    goto LAB_02817c40;
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
      puVar7 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_000000a8 = *puVar7;
      in_stack_000000b0 = puVar7[1];
      FUN_02241190(&stack0x00000090,&stack0x000000a8,*(undefined8 *)PTR_DAT_03cfe578);
      lStack0000000000000008 = in_stack_00000098;
      lStack0000000000000000 = in_stack_00000090;
      uStack0000000000000010 = _uStack00000000000000a0;
    }
    in_stack_00000098 = lStack0000000000000008;
    in_stack_00000090 = lStack0000000000000000;
    _uStack00000000000000a0 = uStack0000000000000010;
    uVar11 = *(undefined8 *)PTR_DAT_03cfe5a8;
LAB_028179e4:
    thunk_FUN_01a89a98(uVar11,&stack0x00000090);
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    pcVar13 = *(code **)(*unaff_x19 + 0x518);
    break;
  case 0x26:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    if (in_stack_00000060 != (long *)0x0) {
      lVar5 = *(long *)PTR_DAT_03cbede8;
      if ((*(byte *)(*in_stack_00000060 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*in_stack_00000060 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8)
          != lVar5)) goto LAB_02817c44;
    }
    pcVar13 = *(code **)(*unaff_x19 + 0x508);
    break;
  case 0x27:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    if ((in_stack_00000060 != (long *)0x0) &&
       (lVar5 = *(long *)PTR_DAT_03cbebc0, *in_stack_00000060 != lVar5)) {
LAB_02817c44:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(in_stack_00000060,lVar5);
    }
    pcVar13 = *(code **)(*unaff_x19 + 0x2c8);
    break;
  case 0x28:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    if (in_stack_00000060 != (long *)0x0) {
      uVar11 = *(undefined8 *)PTR_DAT_03cbfb98;
      lVar5 = thunk_FUN_01a89d6c(in_stack_00000060,uVar11);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6,uVar11);
      }
    }
    pcVar13 = *(code **)(*unaff_x19 + 0x4f8);
    break;
  case 0x29:
switchD_02816da0_caseD_29:
    if (unaff_x19 == (long *)0x0) goto LAB_02817c3c;
    (**(code **)(*unaff_x19 + 0x288))();
    goto LAB_02817c18;
  default:
    lVar5 = thunk_FUN_01a89d6c(in_stack_00000060,*(undefined8 *)puVar2);
    if (lVar5 == 0) {
      if (in_stack_00000060 != (long *)0x0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cfdb78);
        FUN_01876390();
        uVar11 = FUN_028169c0();
        uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03cfe5b0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,uVar12);
      }
      goto switchD_02816da0_caseD_29;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02817d2c(lVar5,(long)&stack0x00000068 + 4,&stack0x00000060);
    unaff_w20 = in_stack_00000068._4_4_;
    goto LAB_02816d44;
  }
  (*pcVar13)();
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
  pcVar13 = *(code **)(*unaff_x19 + 0x368);
LAB_0281756c:
  (*pcVar13)();
LAB_02817c18:
  if (*(long *)(unaff_x22 + 0x28) != in_stack_000000b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


