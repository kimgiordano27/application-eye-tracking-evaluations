/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_time_start_set
ENTRY_POINT: 08570a68
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_time_start_set
               (long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 extraout_x1;
  long unaff_x19;
  long *unaff_x20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 uVar24;
  undefined1 auVar25 [12];
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined1 uStack00000000000000c0;
  undefined7 uStack00000000000000c1;
  long in_stack_000000c8;
  long in_stack_000000d0;
  
  if (param_1 != 0) {
    uVar16 = FUN_08457294(*(undefined8 *)(param_1 + 0x20),0);
    *(undefined8 *)(unaff_x19 + 0x2e0) = uVar16;
    thunk_FUN_040ec700(unaff_x19 + 0x2e0,uVar16);
    if (in_stack_000000d0 != 0) {
      uVar16 = FUN_08457294(*(undefined8 *)(in_stack_000000d0 + 0x38),0);
      *(undefined8 *)(unaff_x19 + 0x2e8) = uVar16;
      thunk_FUN_040ec700(unaff_x19 + 0x2e8,uVar16);
      puVar8 = PTR_DAT_0932ef18;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar17 = FUN_0500dc84(&stack0x000000c8,*(undefined8 *)puVar8);
      if ((uVar17 & 1) == 0) {
        uVar16 = 0;
      }
      else {
        if (in_stack_000000c8 == 0) goto LAB_08571948;
        uVar16 = *(undefined8 *)(in_stack_000000c8 + 0x18);
        uVar23 = *(undefined8 *)(in_stack_000000c8 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_092b79b8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar23 = FUN_08457294(uVar23,0);
        *(undefined8 *)(unaff_x19 + 0x2f0) = uVar23;
        thunk_FUN_040ec700(unaff_x19 + 0x2f0,uVar23);
        if (in_stack_000000c8 == 0) goto LAB_08571948;
        uVar23 = FUN_08457294(*(undefined8 *)(in_stack_000000c8 + 0x20),0);
        *(undefined8 *)(unaff_x19 + 0x2f8) = uVar23;
        thunk_FUN_040ec700(unaff_x19 + 0x2f8,uVar23);
      }
      if (unaff_x20 != (long *)0x0) {
        lVar22 = unaff_x20[0xd];
        pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0x2b5);
        auVar25 = FUN_08a03ea0(0);
        *pauVar1 = auVar25;
        puVar8 = PTR_DAT_092871d8;
        if (lVar22 != 0) {
          FUN_08a084e4(pauVar1,*(undefined1 *)(lVar22 + 0x10),0);
          FUN_08a08570(pauVar1,*(undefined4 *)(lVar22 + 0x18),0);
          FUN_08a0858c(pauVar1,*(undefined4 *)(lVar22 + 0x1c),0);
          FUN_08a085a8(pauVar1,*(undefined4 *)(lVar22 + 0x20),0);
          FUN_08a085c4(pauVar1,*(undefined4 *)(lVar22 + 0x24),0);
          lVar18 = *(long *)puVar8;
          *(undefined4 *)(unaff_x19 + 0x2d0) = *(undefined4 *)((long)unaff_x20 + 0x8c);
          *(undefined4 *)(unaff_x19 + 0x340) = *(undefined4 *)((long)unaff_x20 + 0x5c);
          *(int *)(unaff_x19 + 0x344) = (int)unaff_x20[0xc];
          *(char *)(unaff_x19 + 0x348) = (char)unaff_x20[0xe];
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          puVar7 = PTR_DAT_09285bb0;
          lVar18 = FUN_08581e30(0);
          if ((lVar18 != 0) && (*(char *)(lVar18 + 0xf7) != '\0')) {
            FUN_0851e644(&stack0x00000030,0);
            in_stack_000000a8 = in_stack_00000038;
            in_stack_000000a0 = _uStack0000000000000030;
            in_stack_000000b0 = in_stack_00000040;
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar18 = FUN_08581e30(0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)puVar7);
            }
            uVar17 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(lVar18,0);
            if ((uVar17 & 1) != 0) {
              if (lVar18 == 0) goto LAB_08571948;
              uVar14 = FUN_084dff4c(lVar18,0);
              in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,uVar14);
              in_stack_000000a0 = FUN_084e0174(lVar18,0);
            }
            uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932d5a8);
            FUN_0851ba7c(uVar23,&stack0x000000a0,0);
            *(undefined8 *)(unaff_x19 + 0x2c8) = uVar23;
            thunk_FUN_040ec700(unaff_x19 + 0x2c8,uVar23);
          }
          bVar13 = (**(code **)(*unaff_x20 + 0x178))();
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*unaff_x25);
          }
          *(byte *)(unaff_x19 + 0x141) = bVar13 & 1;
          bVar13 = (**(code **)(*unaff_x20 + 0x198))();
          lVar18 = *unaff_x24;
          *(byte *)(unaff_x19 + 0x142) = bVar13 & 1;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (DAT_0989d8a8 == '\0') {
            FUN_04077588(PTR_DAT_0932d1e8);
            DAT_0989d8a8 = '\x01';
          }
          puVar11 = PTR_DAT_0932ef38;
          puVar9 = PTR_DAT_0932eef8;
          puVar7 = PTR_DAT_0932e408;
          puVar8 = PTR_DAT_0932e400;
          lVar18 = *unaff_x24;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar18 = *unaff_x24;
          }
          puVar10 = PTR_DAT_0932eed0;
          in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x2c8);
          *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar18 + 0xb8) + 8) ^ 1;
          thunk_FUN_040ec700(&stack0x000000b8);
          uVar20 = in_stack_000000b8;
          uVar19 = *(undefined8 *)puVar9;
          uStack00000000000000c0 = *(int *)((long)unaff_x20 + 0x74) == 2;
          uVar23 = CONCAT71(uStack00000000000000c1,uStack00000000000000c0);
          *(undefined1 *)(unaff_x19 + 0x143) = uStack00000000000000c0;
          uVar19 = thunk_FUN_040b4efc(uVar19);
          FUN_0859c040(uVar19,uVar20,uVar23,0);
          *(undefined8 *)(unaff_x19 + 0x290) = uVar19;
          thunk_FUN_040ec700(unaff_x19 + 0x290,uVar19);
          *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)((long)unaff_x20 + 0x74);
          *(undefined4 *)(unaff_x19 + 0x2a8) = *(undefined4 *)((long)unaff_x20 + 0x7c);
          uVar14 = FUN_08516590();
          *(undefined4 *)(unaff_x19 + 0x2ac) = uVar14;
          uVar14 = FUN_085166e8();
          uVar23 = *(undefined8 *)puVar8;
          *(undefined4 *)(unaff_x19 + 0x2b0) = uVar14;
          lVar18 = unaff_x20[8];
          *(undefined1 *)(unaff_x19 + 0x2b4) = 0;
          *(char *)(unaff_x19 + 0x134) = (char)lVar18;
          uVar23 = thunk_FUN_040b4efc(uVar23);
          FUN_085afbe4(uVar23,0x32,0);
          *(undefined8 *)(unaff_x19 + 0x168) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x168,uVar23);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_set_mic_level_t_base__set
                    (uVar23,0x32,0);
          *(undefined8 *)(unaff_x19 + 0x170) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x170,uVar23);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)puVar11);
          FUN_0854d7c8(uVar23,0xfa,0);
          *(undefined8 *)(unaff_x19 + 0x1e8) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1e8,uVar23);
          puVar8 = PTR_DAT_0932eeb0;
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb0);
          FUN_085a36cc(uVar23,0x3ea,uVar16,0,0,0,0,0);
          *(undefined8 *)(unaff_x19 + 0x1f0) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1f0,uVar23);
          if (*(int *)(*(long *)PTR_DAT_092ba880 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar23 = FUN_08a03c40(0);
          uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
          uVar20 = thunk_FUN_040b4efc(*(undefined8 *)puVar10);
          FUN_085a7674(uVar20,0x96,uVar23,uVar14,0);
          *(undefined8 *)(unaff_x19 + 0x148) = uVar20;
          thunk_FUN_040ec700(unaff_x19 + 0x148,uVar20);
          uVar23 = FUN_08a03c40(0);
          uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
          uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eec8);
          FUN_085a5bec(uVar20,0x96,uVar23,uVar14,0);
          *(undefined8 *)(unaff_x19 + 0x150) = uVar20;
          thunk_FUN_040ec700(unaff_x19 + 0x150,uVar20);
          uVar15 = *(uint *)(unaff_x19 + 0x2a0);
          if ((uVar15 | 2) == 2) {
            uVar23 = thunk_FUN_040b4efc(*(undefined8 *)puVar8);
            FUN_085a36cc(uVar23,200,uVar16,1,1,0,0,0);
            *(undefined8 *)(unaff_x19 + 0x158) = uVar23;
            thunk_FUN_040ec700(unaff_x19 + 0x158,uVar23);
            uVar15 = *(uint *)(unaff_x19 + 0x2a0);
          }
          if (uVar15 == 1) {
            in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x2f0);
            in_stack_00000098 = 0;
            thunk_FUN_040ec700(&stack0x00000090);
            in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x2c8);
            thunk_FUN_040ec700(&stack0x00000098);
            uVar20 = in_stack_00000098;
            uVar23 = in_stack_00000090;
            uVar5 = *(undefined1 *)(unaff_x19 + 0x134);
            uVar19 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb8);
            FUN_08590108(uVar19,uVar23,uVar20,uVar5,0);
            *(undefined8 *)(unaff_x19 + 0x298) = uVar19;
            thunk_FUN_040ec700(unaff_x19 + 0x298,uVar19);
            puVar8 = PTR_DAT_092ba880;
            if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_08571948;
            *(char *)(*(long *)(unaff_x19 + 0x298) + 0x1a) = (char)unaff_x20[0x11];
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar23 = FUN_08a03c40(0);
            uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
            uVar19 = *(undefined8 *)*pauVar1;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x2bd);
            uVar3 = *(undefined4 *)(lVar22 + 0x14);
            uVar24 = *(undefined8 *)(unaff_x19 + 0x298);
            uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef08);
            FUN_085adc28(uVar20,0xd2,uVar23,uVar14,uVar19,uVar2,uVar3,uVar24);
            *(undefined8 *)(unaff_x19 + 0x178) = uVar20;
            thunk_FUN_040ec700(unaff_x19 + 0x178,uVar20);
            uVar23 = *(undefined8 *)*pauVar1;
            uVar14 = *(undefined4 *)(unaff_x19 + 0x2bd);
            if (*(int *)(*(long *)PTR_DAT_0932eeb8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_08592070(uVar23,uVar14,0x60,0);
            lVar22 = FUN_04077674(*(undefined8 *)PTR_DAT_0932e980,3);
            _uStack0000000000000030 = _uStack0000000000000030 & 0xffffffff00000000;
            FUN_08a07820(&stack0x00000030,*(undefined8 *)PTR_DAT_0932e258,0);
            puVar8 = PTR_DAT_0932e250;
            if (lVar22 == 0) goto LAB_08571948;
            if (*(int *)(lVar22 + 0x18) == 0) {
LAB_0857194c:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined4 *)(lVar22 + 0x20) = uStack0000000000000030;
            uStack000000000000007c = 0;
            FUN_08a07820((long)&stack0x00000078 + 4,*(undefined8 *)puVar8,0);
            puVar8 = PTR_DAT_0932ef48;
            if ((*(uint *)(lVar22 + 0x18) & 0xfffffffe) == 0) goto LAB_0857194c;
            *(undefined4 *)(lVar22 + 0x24) = uStack000000000000007c;
            uStack0000000000000078 = 0;
            FUN_08a07820(&stack0x00000078,*(undefined8 *)puVar8,0);
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_0857194c;
            *(undefined4 *)(lVar22 + 0x28) = uStack0000000000000078;
            uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb0);
            FUN_085a36cc(uVar23,0xd3,uVar16,1,0,0,*(undefined8 *)PTR_DAT_0932ef50,0);
            *(undefined8 *)(unaff_x19 + 0x180) = uVar23;
            thunk_FUN_040ec700(unaff_x19 + 0x180,uVar23);
            uVar20 = *(undefined8 *)(unaff_x19 + 0x298);
            uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eec0);
            FUN_085a5024(uVar23,0xe6,uVar20,0);
            *(undefined8 *)(unaff_x19 + 0x188) = uVar23;
            thunk_FUN_040ec700(unaff_x19 + 0x188,uVar23);
            uVar23 = FUN_08a03c40(0);
            uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
            uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eed8);
            FUN_085a8844(uVar20,*(undefined8 *)PTR_DAT_0932ef70,lVar22,1,0xfa,uVar23,uVar14);
            *(undefined8 *)(unaff_x19 + 400) = uVar20;
            thunk_FUN_040ec700(unaff_x19 + 400,uVar20);
          }
          puVar8 = PTR_DAT_0932eee0;
          if (*(int *)(*(long *)PTR_DAT_092ba880 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar23 = FUN_08a03c40(0);
          uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
          uVar19 = *(undefined8 *)*pauVar1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x2bd);
          uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eed8);
          FUN_085a8cfc(uVar20,10,1,0xfa,uVar23,uVar14,uVar19,uVar2);
          *(undefined8 *)(unaff_x19 + 0x198) = uVar20;
          thunk_FUN_040ec700(unaff_x19 + 0x198,uVar20);
          uVar23 = FUN_08a03c40(0);
          uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
          uVar19 = *(undefined8 *)*pauVar1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x2bd);
          uVar20 = thunk_FUN_040b4efc(*(undefined8 *)puVar8);
          FUN_085aa7ec(uVar20,10,1,0xfa,uVar23,uVar14,uVar19,uVar2);
          *(undefined8 *)(unaff_x19 + 0x1a0) = uVar20;
          thunk_FUN_040ec700(unaff_x19 + 0x1a0,uVar20);
          iVar4 = *(int *)(unaff_x19 + 0x2a8);
          uVar15 = 500;
          if (iVar4 != 1) {
            uVar15 = 400;
          }
          if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          puVar8 = PTR_DAT_0932d918;
          bVar13 = FUN_0855a324(0);
          puVar7 = PTR_DAT_0932eeb0;
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eeb0);
          FUN_085a36cc(uVar23,uVar15,uVar16,1,0,iVar4 == 1 & bVar13,0,0);
          *(undefined8 *)(unaff_x19 + 0x1b0) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1b0,uVar23);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x2f8);
          uVar14 = *(undefined4 *)((long)unaff_x20 + 0x5c);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932dae0);
          FUN_0852a314(uVar23,uVar15 | 1,uVar20,uVar14,0);
          *(undefined8 *)(unaff_x19 + 0x160) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x160,uVar23);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eee8);
          FUN_08526df8(uVar23,0x15e,0);
          *(undefined8 *)(unaff_x19 + 0x1a8) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1a8,uVar23);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x2e8);
          uVar19 = *(undefined8 *)(unaff_x19 + 0x2d8);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eea8);
          FUN_085a23d4(uVar23,400,uVar20,uVar19,0,0);
          *(undefined8 *)(unaff_x19 + 0x1b8) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1b8,uVar23);
          lVar22 = unaff_x20[0xe];
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef30);
          FUN_0854bd4c(uVar23,0x1c2,(char)lVar22,0);
          *(undefined8 *)(unaff_x19 + 0x1c0) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1c0,uVar23);
          if (*(int *)(*(long *)PTR_DAT_092ba880 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar23 = FUN_08a03c48(0);
          lVar22 = unaff_x20[0xc];
          uVar19 = *(undefined8 *)*pauVar1;
          uVar14 = *(undefined4 *)(unaff_x19 + 0x2bd);
          uVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eed8);
          FUN_085a8cfc(uVar20,0xb,0,0x1c2,uVar23,(int)lVar22,uVar19,uVar14);
          *(undefined8 *)(unaff_x19 + 0x1c8) = uVar20;
          thunk_FUN_040ec700(unaff_x19 + 0x1c8,uVar20);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ef20);
          FUN_08529c70(uVar23,0x226,0);
          *(undefined8 *)(unaff_x19 + 0x1d0) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x1d0,uVar23);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x2e8);
          uVar19 = *(undefined8 *)(unaff_x19 + 0x2d8);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932eea8);
          FUN_085a23d4(uVar23,0x226,uVar20,uVar19,*(undefined8 *)PTR_DAT_0932ef58,0);
          *(undefined8 *)(unaff_x19 + 0x210) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x210,uVar23);
          uVar15 = FUN_0855a324(0);
          uVar23 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
          FUN_085a36cc(uVar23,0x226,uVar16,0,uVar15 & 1,0,*(undefined8 *)PTR_DAT_0932ef68,0);
          *(undefined8 *)(unaff_x19 + 0x218) = uVar23;
          thunk_FUN_040ec700(unaff_x19 + 0x218,uVar23);
          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar8);
          FUN_08524c38(uVar16,0x226,1,0);
          *(undefined8 *)(unaff_x19 + 0x200) = uVar16;
          thunk_FUN_040ec700(unaff_x19 + 0x200,uVar16);
          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar8);
          FUN_08524c38(uVar16,0x3ea,0,0);
          *(undefined8 *)(unaff_x19 + 0x208) = uVar16;
          thunk_FUN_040ec700(unaff_x19 + 0x208,uVar16);
          FUN_0854e164(0);
          in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x2d8);
          in_stack_00000088 = extraout_x1;
          thunk_FUN_040ec700(&stack0x00000080,in_stack_00000080);
          puVar8 = PTR_DAT_092871d8;
          in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0x4a);
          if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar22 = FUN_08581e30(0);
          puVar7 = PTR_DAT_09288658;
          if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
          }
          uVar17 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(lVar22,0);
          if ((uVar17 & 1) != 0) {
            if (lVar22 == 0) goto LAB_08571948;
            cVar6 = *(char *)(lVar22 + 0x4d);
            uVar14 = *(undefined4 *)(lVar22 + 0x50);
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar14 = FUN_08589f6c(cVar6 != '\0',uVar14,0,0);
            in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,uVar14);
          }
          puVar12 = PTR_DAT_0932ef60;
          puVar10 = PTR_DAT_0932ef28;
          puVar11 = PTR_DAT_0932eef0;
          puVar9 = PTR_DAT_0932eea0;
          puVar8 = PTR_DAT_0932d130;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          in_stack_00000038 = 0;
          _uStack0000000000000030 = 0;
          FUN_0854e218(&stack0x00000030,unaff_x20[10],&stack0x00000080,0);
          *(undefined8 *)(unaff_x19 + 0x308) = in_stack_00000038;
          *(ulong *)(unaff_x19 + 0x300) = _uStack0000000000000030;
          *(undefined8 *)(unaff_x19 + 0x318) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x310) = in_stack_00000040;
          *(undefined8 *)(unaff_x19 + 0x328) = in_stack_00000058;
          *(undefined8 *)(unaff_x19 + 800) = in_stack_00000050;
          *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000068;
          *(undefined8 *)(unaff_x19 + 0x330) = in_stack_00000060;
          thunk_FUN_040ec700(unaff_x19 + 0x300,0);
          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar9);
          FUN_08524154(uVar16,1000,0);
          *(undefined8 *)(unaff_x19 + 0x1e0) = uVar16;
          thunk_FUN_040ec700(unaff_x19 + 0x1e0,uVar16);
          uVar23 = *(undefined8 *)(unaff_x19 + 0x2d8);
          uVar20 = *(undefined8 *)(unaff_x19 + 0x2e0);
          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar11);
          FUN_085abb2c(uVar16,0x3e9,uVar23,uVar20,0);
          *(undefined8 *)(unaff_x19 + 0x1d8) = uVar16;
          thunk_FUN_040ec700(unaff_x19 + 0x1d8,uVar16);
          uVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar10);
          FUN_085b2ad8(uVar16,*(undefined8 *)puVar12,0);
          *(undefined8 *)(unaff_x19 + 0x220) = uVar16;
          thunk_FUN_040ec700(unaff_x19 + 0x220,uVar16);
          lVar22 = thunk_FUN_040b4efc(*(undefined8 *)puVar8);
          FUN_085153c4(lVar22,0);
          puVar8 = PTR_DAT_0932d040;
          if (*(int *)(*(long *)PTR_DAT_0932d040 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          plVar21 = (long *)(unaff_x19 + 0xf0);
          *plVar21 = lVar22;
          thunk_FUN_040ec700(plVar21,lVar22);
          if (*(int *)(unaff_x19 + 0x2a0) == 1) {
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            if (*plVar21 == 0) goto LAB_08571948;
            *(undefined1 *)(*plVar21 + 0x11) = 0;
          }
          puVar8 = PTR_DAT_09326d30;
          lVar22 = *(long *)PTR_DAT_09326d30;
          if (*(int *)(lVar22 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar22 = *(long *)puVar8;
          }
          *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x24) = DAT_01aedc50;
          FUN_08437344(0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          bVar13 = FUN_089eaf28(0x1d,0);
          *(byte *)(unaff_x19 + 0x2d4) = bVar13 & 1;
          return;
        }
      }
    }
  }
LAB_08571948:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


