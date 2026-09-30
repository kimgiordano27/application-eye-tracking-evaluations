/*
FUNCTION_NAME: TMPro.TMP_Text$$ReplaceTagWithCharacter
ENTRY_POINT: 05d5dc40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void TMPro_TMP_Text__ReplaceTagWithCharacter(undefined1 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long lVar11;
  undefined8 uVar12;
  uint unaff_w26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  uint in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000170;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_00000340;
  undefined8 in_stack_00000348;
  int in_stack_000003b8;
  undefined4 in_stack_000003cc;
  
  do {
    FUN_06120f38(param_1,param_2,0);
    FUN_06120f38(unaff_x23 + 0x48,*(undefined4 *)(unaff_x23 + 0xd0),0);
                    /* try { // try from 05d5dc60 to 05e5dc7f has its CatchHandler @ 05d5dfe8 */
    lVar11 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
    do {
      memcpy(&stack0x000001d0,&stack0x00000420,0x78);
      uVar12 = *(undefined8 *)(unaff_x23 + 0x40);
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
      }
      memcpy(&stack0x00000048,&stack0x000001d0,0x78);
                    /* try { // try from 05d5dca0 to 05e5dcbf has its CatchHandler @ 05d5dfe4 */
      uVar6 = FUN_05d5df78(in_stack_00000038,&stack0x00000048,uVar12);
      if (uVar6 == 0xffffffff) {
        **(uint **)(unaff_x28 + 0x58) = in_stack_00000038;
        lVar11 = *(long *)(unaff_x23 + 0x40);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(uint *)(lVar11 + 0x18) <= in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        memmove((void *)(lVar11 + (long)(int)in_stack_00000038 * 0x78 + 0x20),&stack0x00000420,0x78)
        ;
        lVar11 = *(long *)(unaff_x23 + 0x30);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar4 = FUN_048155b4(lVar11,in_stack_00000018,in_stack_00000010,
                             *(undefined8 *)
                              Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
        Unity_Collections_ArrayOfArrays<IntPtr>__get_BlockSizeInElements
                  (lVar11,in_stack_00000018,in_stack_00000010,iVar4 + 1,
                   *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
        in_stack_00000038 = in_stack_00000038 + 1;
      }
      else {
        **(uint **)(unaff_x28 + 0x58) = uVar6;
      }
      unaff_w26 = unaff_w26 + 1;
      if ((int)*(uint *)(in_stack_00000028 + 0x18) <= (int)unaff_w26) {
TMPro_TMP_Text__GetTextElement:
        FUN_05c5cb50(in_stack_00000348,0);
        if (in_stack_00000340 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0(in_stack_00000340);
      }
      if (*(uint *)(in_stack_00000028 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      iVar4 = *(int *)(in_stack_00000028 + (long)(int)unaff_w26 * 4 + 0x20);
      if (iVar4 == -1) goto TMPro_TMP_Text__GetTextElement;
      if (*(long *)(unaff_x23 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      unaff_x28 = FUN_03abf644(*(long *)(unaff_x23 + 0x108),iVar4,
                               *(undefined8 *)
                                Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (0 < *(int *)(unaff_x28 + 0x60)) {
        lVar8 = *(long *)(unaff_x28 + 0x58);
        lVar11 = 0;
        do {
          *(undefined4 *)(lVar8 + lVar11 * 4) = unaff_w27;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(unaff_x28 + 0x60));
      }
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar12 = *(undefined8 *)(in_stack_00000040 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      bVar3 = FUN_060f078c(uVar12,0,0);
      lVar11 = FUN_05d5a36c(unaff_x28);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar7 = FUN_060f078c(*(undefined8 *)(lVar11 + 0x18),0,0);
      if ((uVar7 & 1) == 0) {
        if ((bVar3 & 1) != 0) goto LAB_05d5d69c;
        bVar2 = false;
      }
      else {
        lVar11 = FUN_05d5a36c(unaff_x28);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar4 = FUN_060d3708(*(long *)(lVar11 + 0x18),0);
        bVar2 = iVar4 == 0;
        if ((!bVar2 & bVar3) != 0) {
LAB_05d5d69c:
          if (*(long *)(in_stack_00000040 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar4 = FUN_060d3708(*(long *)(in_stack_00000040 + 0xf0),0);
          bVar2 = iVar4 == 0;
        }
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar12 = *in_stack_00000030;
      uVar13 = in_stack_00000030[3];
      uVar10 = in_stack_00000030[2];
      *(undefined8 *)(unaff_x21 + 600) = in_stack_00000030[1];
      *(undefined8 *)(unaff_x21 + 0x250) = uVar12;
      *(undefined8 *)(unaff_x21 + 0x268) = uVar13;
      *(undefined8 *)(unaff_x21 + 0x260) = uVar10;
      *(undefined8 *)(unaff_x21 + 0x118) = 0;
      *(undefined8 *)(unaff_x21 + 0x110) = 0;
      *(undefined8 *)(unaff_x21 + 0x128) = 0;
      *(undefined8 *)(unaff_x21 + 0x120) = 0;
      FUN_0610ceb0(&stack0x000001d0,&stack0x00000310,0,0xffffffff,0,0);
      if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0610d14c(&stack0x000002e0,2,0);
      *(undefined8 *)(unaff_x21 + 0x1c8) = *(undefined8 *)(unaff_x21 + 0x228);
      *(undefined8 *)(unaff_x21 + 0x1c0) = *(undefined8 *)(unaff_x21 + 0x220);
      *(undefined8 *)(unaff_x21 + 0x1d8) = *(undefined8 *)(unaff_x21 + 0x238);
      *(undefined8 *)(unaff_x21 + 0x1d0) = *(undefined8 *)(unaff_x21 + 0x230);
      *(undefined8 *)(unaff_x21 + 0x1f8) = *(undefined8 *)(unaff_x21 + 0x118);
      *(undefined8 *)(unaff_x21 + 0x1f0) = *(undefined8 *)(unaff_x21 + 0x110);
      *(undefined8 *)(unaff_x21 + 0x208) = *(undefined8 *)(unaff_x21 + 0x128);
      *(undefined8 *)(unaff_x21 + 0x200) = *(undefined8 *)(unaff_x21 + 0x120);
      uVar7 = FUN_0610d678(&stack0x000002b0,&stack0x00000280,0);
      if ((uVar7 & 1) == 0) {
        lVar11 = *(long *)(unaff_x28 + 0x78);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        iVar4 = *(int *)(lVar11 + 0x20);
        if (iVar4 == 0) {
          cVar1 = *(char *)(in_stack_00000040 + 0x18d);
          uVar5 = *(undefined4 *)(in_stack_00000040 + 0x180);
          if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar6 = FUN_060b2158(0);
          if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          iVar4 = FUN_05dddafc(cVar1 != '\0',uVar5,uVar6 & 1,0);
          unaff_x19 = in_stack_00000020;
        }
        FUN_06121030(&stack0x00000420,iVar4,0);
        iVar4 = *(int *)(in_stack_00000040 + 0x100);
        if ((bVar3 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0610d14c(&stack0x000001d0,2,0);
        }
        else {
          uVar12 = *(undefined8 *)(in_stack_00000040 + 0xf0);
          *(undefined8 *)(unaff_x21 + 0x118) = 0;
          *(undefined8 *)(unaff_x21 + 0x110) = 0;
          *(undefined8 *)(unaff_x21 + 0x128) = 0;
          *(undefined8 *)(unaff_x21 + 0x120) = 0;
          FUN_0610cedc(&stack0x000001d0,uVar12,0);
        }
        puVar9 = (undefined8 *)&stack0x00000380;
        *(undefined8 *)(unaff_x21 + 0x2c8) = *(undefined8 *)(unaff_x21 + 0x118);
        *(undefined8 *)(unaff_x21 + 0x2c0) = *(undefined8 *)(unaff_x21 + 0x110);
        *(undefined8 *)(unaff_x21 + 0x2d8) = *(undefined8 *)(unaff_x21 + 0x128);
        *(undefined8 *)(unaff_x21 + 0x2d0) = *(undefined8 *)(unaff_x21 + 0x120);
      }
      else {
        lVar11 = *(long *)(unaff_x19 + 0x18);
        if (bVar2) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_060d597c(&stack0x000001d0,lVar11,0);
          *(undefined8 *)(unaff_x21 + 0x2f8) = *(undefined8 *)(unaff_x21 + 0x118);
          *(undefined8 *)(unaff_x21 + 0x2f0) = *(undefined8 *)(unaff_x21 + 0x110);
          *(undefined8 *)(unaff_x21 + 0x308) = *(undefined8 *)(unaff_x21 + 0x128);
          *(undefined8 *)(unaff_x21 + 0x300) = *(undefined8 *)(unaff_x21 + 0x120);
          *(undefined8 *)(unaff_x21 + 0x318) = *(undefined8 *)(unaff_x21 + 0x138);
          *(undefined8 *)(unaff_x21 + 0x310) = *(undefined8 *)(unaff_x21 + 0x130);
          uVar5 = in_stack_000003cc;
        }
        else {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_060d597c(&stack0x000001d0,lVar11,0);
          *(undefined8 *)(unaff_x21 + 0x318) = *(undefined8 *)(unaff_x21 + 0x138);
          *(undefined8 *)(unaff_x21 + 0x310) = *(undefined8 *)(unaff_x21 + 0x130);
          *(undefined8 *)(unaff_x21 + 0x2f8) = *(undefined8 *)(unaff_x21 + 0x118);
          *(undefined8 *)(unaff_x21 + 0x2f0) = *(undefined8 *)(unaff_x21 + 0x110);
          *(undefined8 *)(unaff_x21 + 0x308) = *(undefined8 *)(unaff_x21 + 0x128);
          *(undefined8 *)(unaff_x21 + 0x300) = *(undefined8 *)(unaff_x21 + 0x120);
          uVar5 = FUN_060d65a4(&stack0x000003b0,0);
        }
        FUN_06121030(&stack0x00000420,uVar5,0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_060d597c(&stack0x000001d0,*(long *)(unaff_x19 + 0x18),0);
        *(undefined8 *)(unaff_x21 + 0x318) = *(undefined8 *)(unaff_x21 + 0x138);
        *(undefined8 *)(unaff_x21 + 0x310) = *(undefined8 *)(unaff_x21 + 0x130);
        *(undefined8 *)(unaff_x21 + 0x2f8) = *(undefined8 *)(unaff_x21 + 0x118);
        *(undefined8 *)(unaff_x21 + 0x2f0) = *(undefined8 *)(unaff_x21 + 0x110);
        *(undefined8 *)(unaff_x21 + 0x308) = *(undefined8 *)(unaff_x21 + 0x128);
        *(undefined8 *)(unaff_x21 + 0x300) = *(undefined8 *)(unaff_x21 + 0x120);
        puVar9 = in_stack_00000030;
        iVar4 = in_stack_000003b8;
      }
      uVar13 = puVar9[1];
      uVar10 = *puVar9;
      uVar15 = puVar9[3];
      uVar14 = puVar9[2];
      uVar12 = puVar9[4];
      *(undefined8 *)(unaff_x21 + 0x338) = uVar13;
      *(undefined8 *)(unaff_x21 + 0x330) = uVar10;
      *(undefined8 *)(unaff_x21 + 0x348) = uVar15;
      *(undefined8 *)(unaff_x21 + 0x340) = uVar14;
      *(undefined8 *)(unaff_x21 + 0x198) = uVar13;
      *(undefined8 *)(unaff_x21 + 400) = uVar10;
      *(undefined8 *)(unaff_x21 + 0x1a8) = uVar15;
      *(undefined8 *)(unaff_x21 + 0x1a0) = uVar14;
      FUN_06120fa4(&stack0x00000420,&stack0x00000250,(unaff_w22 & 1) == 0,1,0);
      if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) ==
          0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_05d5cfdc(unaff_x28);
      if ((uVar7 & 1) != 0) {
        FUN_05d5d018();
      }
      uVar5 = FUN_060fbd98(2,0);
      *(undefined8 *)(unaff_x21 + 0x128) = 0;
      *(undefined8 *)(unaff_x21 + 0x120) = 0;
      *(undefined8 *)(unaff_x21 + 0x138) = 0;
      *(undefined8 *)(unaff_x21 + 0x130) = 0;
      *(undefined8 *)(unaff_x21 + 0x148) = 0;
      *(undefined8 *)(unaff_x21 + 0x140) = 0;
      *(undefined8 *)(unaff_x21 + 0x158) = 0;
      *(undefined8 *)(unaff_x21 + 0x150) = 0;
      *(undefined8 *)(unaff_x21 + 0x168) = 0;
      *(undefined8 *)(unaff_x21 + 0x160) = 0;
      *(undefined8 *)(unaff_x21 + 0x178) = 0;
      *(undefined8 *)(unaff_x21 + 0x170) = 0;
      *(undefined8 *)(unaff_x21 + 0x118) = 0;
      *(undefined8 *)(unaff_x21 + 0x110) = 0;
      FUN_06121030(&stack0x000001d0,uVar5,0);
      memcpy((void *)(unaff_x23 + 0x48),&stack0x000001d0,0x78);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar11 = *(long *)PTR_DAT_067c97a8;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
      *(undefined8 *)(unaff_x21 + 0x228) = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(unaff_x21 + 0x220) = uVar13;
      *(undefined8 *)(unaff_x21 + 0x238) = uVar15;
      *(undefined8 *)(unaff_x21 + 0x230) = uVar14;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0610d14c(&stack0x000001a8,2,0);
      *(undefined8 *)(unaff_x21 + 0x98) = in_stack_000001b0;
      *(undefined8 *)(unaff_x21 + 0x90) = in_stack_000001a8;
      *(undefined8 *)(unaff_x21 + 0xa8) = in_stack_000001c0;
      *(undefined8 *)(unaff_x21 + 0xa0) = in_stack_000001b8;
      in_stack_00000170 = in_stack_000001c8;
      *(undefined8 *)(unaff_x21 + 200) = *(undefined8 *)(unaff_x21 + 0x228);
      *(undefined8 *)(unaff_x21 + 0xc0) = *(undefined8 *)(unaff_x21 + 0x220);
      *(undefined8 *)(unaff_x21 + 0xd8) = *(undefined8 *)(unaff_x21 + 0x238);
      *(undefined8 *)(unaff_x21 + 0xd0) = *(undefined8 *)(unaff_x21 + 0x230);
      in_stack_000001a0 = uVar10;
      uVar7 = FUN_0610d678(&stack0x00000180,&stack0x00000150,0);
      if ((uVar7 & 1) == 0) {
        if ((bVar3 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0610d14c(&stack0x000001d0,3,0);
        }
        else {
          if (*(long *)(in_stack_00000040 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          auVar16 = UnityEngine_Font__Internal_CreateFont(*(long *)(in_stack_00000040 + 0xf0),0);
          *(undefined8 *)(unaff_x21 + 0x118) = 0;
          *(undefined8 *)(unaff_x21 + 0x110) = 0;
          *(undefined8 *)(unaff_x21 + 0x128) = 0;
          *(undefined8 *)(unaff_x21 + 0x120) = 0;
          FUN_0610d12c(&stack0x000001d0,auVar16._0_8_,auVar16._8_8_,0,0xffffffff,0,0);
        }
        uVar13 = *(undefined8 *)(unaff_x21 + 0x118);
        uVar10 = *(undefined8 *)(unaff_x21 + 0x110);
        uVar15 = *(undefined8 *)(unaff_x21 + 0x128);
        uVar14 = *(undefined8 *)(unaff_x21 + 0x120);
        in_stack_00000140 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
        in_stack_00000140 = *(undefined8 *)(unaff_x20 + 0x48);
      }
      *(undefined8 *)(unaff_x21 + 0x298) = uVar13;
      *(undefined8 *)(unaff_x21 + 0x290) = uVar10;
      *(undefined8 *)(unaff_x21 + 0x2a8) = uVar15;
      *(undefined8 *)(unaff_x21 + 0x2a0) = uVar14;
      *(undefined8 *)(unaff_x21 + 0x68) = *(undefined8 *)(unaff_x21 + 0x298);
      *(undefined8 *)(unaff_x21 + 0x60) = *(undefined8 *)(unaff_x21 + 0x290);
      *(undefined8 *)(unaff_x21 + 0x78) = *(undefined8 *)(unaff_x21 + 0x2a8);
      *(undefined8 *)(unaff_x21 + 0x70) = *(undefined8 *)(unaff_x21 + 0x2a0);
      FUN_06120fa4(unaff_x23 + 0x48,&stack0x00000120,(unaff_w22 & 2) == 0,1,0);
      if (unaff_w22 != 0) {
        bVar2 = (bool)(bVar2 ^ 1);
        if ((unaff_w22 & 1) == 0) {
          bVar2 = true;
        }
        if ((*(int *)(in_stack_00000040 + 0xe8) != 1) || (!bVar2)) {
          FUN_06121014(unaff_s11,unaff_s10,unaff_s9,&stack0x00000420,0,0);
        }
        if ((unaff_w22 >> 1 & 1) != 0) {
          FUN_06121014(0,0,0,0x3f800000,0x3f800000,unaff_x23 + 0x48,0,0);
        }
      }
      if (1 < iVar4) {
        *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x21 + 0x338);
        *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)(unaff_x21 + 0x330);
        *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0x348);
        *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)(unaff_x21 + 0x340);
        in_stack_00000110 = uVar12;
        FUN_06120fe8(&stack0x00000420,&stack0x000000f0,0);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_05dadd80(0);
        if ((uVar7 & 1) != 0) {
          FUN_06120f48(&stack0x000001d0,unaff_x23 + 0x48,0);
          in_stack_000000c8 = *(undefined8 *)(unaff_x21 + 0x118);
          in_stack_000000c0 = *(undefined8 *)(unaff_x21 + 0x110);
          in_stack_000000e0 = 0;
          *(undefined8 *)(unaff_x21 + 0x18) = *(undefined8 *)(unaff_x21 + 0x128);
          *(undefined8 *)(unaff_x21 + 0x10) = *(undefined8 *)(unaff_x21 + 0x120);
          FUN_06120fe8(unaff_x23 + 0x48,&stack0x000000c0,0);
        }
      }
      lVar11 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
        lVar11 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
      }
    } while (*(char *)(*(long *)(lVar11 + 0xb8) + 8) == '\0');
    lVar11 = *(long *)(unaff_x23 + 200);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    param_2 = (ulong)*(uint *)(lVar11 + 0x20);
    param_1 = &stack0x00000420;
  } while( true );
}


