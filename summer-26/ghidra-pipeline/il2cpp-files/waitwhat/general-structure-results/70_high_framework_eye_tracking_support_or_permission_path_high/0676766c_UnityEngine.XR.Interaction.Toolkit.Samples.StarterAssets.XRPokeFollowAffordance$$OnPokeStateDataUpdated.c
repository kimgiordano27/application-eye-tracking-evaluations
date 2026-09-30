/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance$$OnPokeStateDataUpdated
ENTRY_POINT: 0676766c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance__OnPokeStateDataUpdated
               (long param_1,short param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 in_CY;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  byte unaff_w27;
  uint unaff_w28;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uVar14;
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long *in_stack_00000038;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  ulong in_stack_00000130;
  undefined8 in_stack_00000138;
  ulong in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  ulong in_stack_000002b0;
  undefined4 in_stack_000002d0;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  ulong in_stack_000002f0;
  undefined8 in_stack_000002f8;
  ulong in_stack_00000300;
  undefined8 in_stack_00000308;
  ulong in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  int in_stack_00000538;
  long in_stack_00000638;
  
  do {
    if ((bool)in_CY) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
LAB_06767fb4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar9 = (long)param_2;
    uVar14 = *(undefined4 *)(param_1 + lVar9 * 0x10 + 0x20);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_06731bb4(uVar14,0,0);
    if ((uVar4 & 1) == 0) {
      lVar7 = *(long *)(unaff_x20 + 0x100);
      if (lVar7 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_w28) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
                    /* try { // try from 067676c0 to 068676c7 has its CatchHandler @ 06767810 */
      uVar14 = *(undefined4 *)(lVar7 + lVar9 * 0x10 + 0x2c);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
                    /* try { // try from 067676d8 to 068676df has its CatchHandler @ 067677fc */
      uVar4 = FUN_06731bb4(uVar14,0xbf800000,0);
      if ((uVar4 & 1) != 0) goto LAB_067679e0;
      lVar7 = *(long *)(unaff_x20 + 0xf8);
      if (lVar7 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_w28) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
      iVar8 = (int)*(short *)(lVar7 + lVar9 * 2 + 0x20);
      uVar5 = FUN_03b26540(in_stack_00000028,in_stack_00000020,iVar8,
                           *(undefined8 *)OVREyeGaze_TypeInfo);
      lVar9 = *(long *)(unaff_x20 + 0x110);
      if (lVar9 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(uint *)(lVar9 + 0x18) <= unaff_x25) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
                    /* try { // try from 06767730 to 06867737 has its CatchHandler @ 06767794 */
                    /* try { // try from 06767738 to 06867767 has its CatchHandler @ 06766f24 */
      memmove(&stack0x00000470,(void *)(lVar9 + unaff_x19),0x1c8);
      if (*in_stack_00000038 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      uVar10 = *(undefined8 *)(*in_stack_00000038 + 0x78);
      memcpy(&stack0x000002a0,&stack0x00000470,0x1c8);
                    /* try { // try from 06767768 to 0686776b has its CatchHandler @ 0676780c */
                    /* try { // try from 0676776c to 0686776f has its CatchHandler @ 06767808 */
                    /* try { // try from 06767770 to 06867773 has its CatchHandler @ 06767804 */
                    /* try { // try from 06767774 to 06867777 has its CatchHandler @ 06767800 */
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    /* try { // try from 06767778 to 0686777b has its CatchHandler @ 067677d8 */
        thunk_FUN_031e5338();
      }
                    /* try { // try from 0676777c to 0686777f has its CatchHandler @ 067677c4 */
                    /* try { // try from 06767780 to 06867783 has its CatchHandler @ 06767784 */
                    /* catch() { ... } // from try @ 06767780 with catch @ 06767784
                       try { // try from 06767784 to 06867827 has its CatchHandler @ 06766f24 */
                    /* catch() { ... } // from try @ 067672dc with catch @ 06767788 */
                    /* catch() { ... } // from try @ 06767000 with catch @ 0676778c */
                    /* catch() { ... } // from try @ 06767118 with catch @ 06767790 */
                    /* catch() { ... } // from try @ 067674b0 with catch @ 06767794
                       catch() { ... } // from try @ 06767730 with catch @ 06767794 */
                    /* catch() { ... } // from try @ 06767334 with catch @ 06767798
                       catch() { ... } // from try @ 06767490 with catch @ 06767798 */
      uVar4 = in_stack_00000300;
      uVar12 = in_stack_000002f0;
      uVar13 = in_stack_00000310;
      in_stack_00000110 = in_stack_000002e0;
      in_stack_00000118 = in_stack_000002e8;
      in_stack_00000120 = in_stack_000002f0;
      in_stack_00000128 = in_stack_000002f8;
      in_stack_00000130 = in_stack_00000300;
      in_stack_00000138 = in_stack_00000308;
      in_stack_00000140 = in_stack_00000310;
      in_stack_00000148 = in_stack_00000318;
                    /* catch() { ... } // from try @ 06767190 with catch @ 0676779c
                       catch() { ... } // from try @ 067672b4 with catch @ 0676779c */
                    /* catch() { ... } // from try @ 0676704c with catch @ 067677a0
                       catch() { ... } // from try @ 06767170 with catch @ 067677a0 */
                    /* catch() { ... } // from try @ 067675bc with catch @ 067677a4 */
                    /* catch() { ... } // from try @ 06767404 with catch @ 067677a8 */
      uVar14 = FUN_06730854((float)in_stack_00000538,uVar5,iVar8,uVar10,&stack0x00000110,0);
                    /* catch() { ... } // from try @ 06767254 with catch @ 067677ac */
                    /* catch() { ... } // from try @ 067672f8 with catch @ 067677b0 */
                    /* catch() { ... } // from try @ 0676701c with catch @ 067677b4 */
                    /* catch() { ... } // from try @ 0676746c with catch @ 067677b8 */
                    /* catch() { ... } // from try @ 0676758c with catch @ 067677bc */
                    /* catch() { ... } // from try @ 06767444 with catch @ 067677c0 */
                    /* catch() { ... } // from try @ 0676777c with catch @ 067677c4 */
                    /* catch() { ... } // from try @ 067673d4 with catch @ 067677c8 */
                    /* catch() { ... } // from try @ 06767284 with catch @ 067677cc */
      if (unaff_x19 == 0x20) {
LAB_0676780c:
                    /* catch() { ... } // from try @ 06767768 with catch @ 0676780c */
                    /* catch() { ... } // from try @ 067676c0 with catch @ 06767810 */
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
                    /* try { // try from 06767828 to 0686782b has its CatchHandler @ 0676784c */
                    /* try { // try from 0676782c to 0686784f has its CatchHandler @ 06766f24 */
        Unity_XR_CoreUtils_XROrigin__OnBeforeRender
                  (uVar14,uVar4 & 0xffffffff,uVar12 & 0xffffffff,uVar13 & 0xffffffff,unaff_x24,0);
        unaff_s8 = uVar14;
        unaff_s11 = (int)uVar4;
        unaff_s10 = (int)uVar12;
        unaff_s9 = (int)uVar13;
      }
      else {
                    /* catch() { ... } // from try @ 067670f0 with catch @ 067677d0 */
                    /* catch() { ... } // from try @ 06767148 with catch @ 067677d4 */
                    /* catch() { ... } // from try @ 06767778 with catch @ 067677d8 */
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0676753c with catch @ 067677dc */
          thunk_FUN_031e5338();
        }
                    /* catch() { ... } // from try @ 0676755c with catch @ 067677e0 */
                    /* catch() { ... } // from try @ 067673a4 with catch @ 067677e4 */
                    /* catch() { ... } // from try @ 067670bc with catch @ 067677e8 */
                    /* catch() { ... } // from try @ 06767200 with catch @ 067677ec */
                    /* catch() { ... } // from try @ 06767658 with catch @ 067677f0 */
                    /* catch() { ... } // from try @ 06767600 with catch @ 067677f4 */
                    /* catch() { ... } // from try @ 06767668 with catch @ 067677f8 */
                    /* catch() { ... } // from try @ 067676d8 with catch @ 067677fc */
                    /* catch() { ... } // from try @ 06767774 with catch @ 06767800 */
                    /* catch() { ... } // from try @ 06767770 with catch @ 06767804 */
        uVar6 = FUN_06731bcc(uVar14,uVar4 & 0xffffffff,uVar12 & 0xffffffff,uVar13 & 0xffffffff,
                             unaff_s8,unaff_s11,unaff_s10,unaff_s9,0);
                    /* catch() { ... } // from try @ 0676776c with catch @ 06767808 */
        if ((uVar6 & 1) == 0) goto LAB_0676780c;
      }
                    /* catch() { ... } // from try @ 06767828 with catch @ 0676784c */
                    /* try { // try from 06767850 to 0686785b has its CatchHandler @ 06767870 */
      FUN_06a1540c(&stack0x000002a0,uVar5,0);
                    /* try { // try from 0676785c to 06867867 has its CatchHandler @ 06766f24 */
                    /* try { // try from 06767868 to 0686786f has its CatchHandler @ 06767870 */
      uVar4 = in_stack_000002b0;
      uVar14 = in_stack_000002d0;
                    /* catch() { ... } // from try @ 06767850 with catch @ 06767870
                       catch() { ... } // from try @ 06767868 with catch @ 06767870 */
      uVar11 = FUN_069c28f8(&stack0x00000240,3,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06730cb8(uVar11,uVar4 & 0xffffffff,uVar14,unaff_x24,0);
      lVar9 = *in_stack_00000038;
      if ((in_stack_00000030 & 0x100000000) == 0) {
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        lVar9 = *(long *)(lVar9 + 0x88);
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar9 + 0x18) <= unaff_x25) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        puVar1 = (undefined8 *)(lVar9 + unaff_x26);
        in_stack_000001a8 = puVar1[1];
        in_stack_000001a0 = *puVar1;
        in_stack_000001b0 = puVar1[2];
      }
      else {
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        lVar9 = *(long *)(lVar9 + 0x90);
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar9 + 0x18) <= unaff_x25) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        in_stack_00000018 =
             in_stack_00000018 & 0xffffffff00000000 |
             (ulong)*(uint *)((undefined8 *)(lVar9 + unaff_x22) + 1);
        FUN_0665f57c(&stack0x000002a0,*(undefined8 *)(lVar9 + unaff_x22),in_stack_00000018,0);
        in_stack_000001b0 = in_stack_000002b0;
        in_stack_000001a0 = in_stack_000002a0;
        in_stack_000001a8 = in_stack_000002a8;
      }
      memcpy(&stack0x000002a0,&stack0x00000470,0x1c8);
      in_stack_000000d0 = in_stack_00000470;
      in_stack_000000d8 = in_stack_00000478;
      in_stack_000000e0 = in_stack_00000480;
      in_stack_000000e8 = in_stack_00000488;
      in_stack_000000f0 = in_stack_00000490;
      in_stack_000000f8 = in_stack_00000498;
      in_stack_00000100 = in_stack_000004a0;
      in_stack_00000108 = in_stack_000004a8;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      in_stack_00000058 = in_stack_000000d8;
      in_stack_00000050 = in_stack_000000d0;
      in_stack_00000068 = in_stack_000000e8;
      in_stack_00000060 = in_stack_000000e0;
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      in_stack_00000088 = in_stack_00000108;
      in_stack_00000080 = in_stack_00000100;
      in_stack_00000090 = in_stack_000002e0;
      in_stack_00000098 = in_stack_000002e8;
      in_stack_000000a0 = in_stack_000002f0;
      in_stack_000000a8 = in_stack_000002f8;
      in_stack_000000b0 = in_stack_00000300;
      in_stack_000000b8 = in_stack_00000308;
      in_stack_000000c0 = in_stack_00000310;
      in_stack_000000c8 = in_stack_00000318;
      FUN_067301f0(unaff_x24,&stack0x00000470,&stack0x00000280,&stack0x00000090,&stack0x00000050,0);
      lVar9 = FUN_06a1536c(uVar5,0);
      if (lVar9 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      iVar8 = FUN_069a958c(lVar9,0);
      unaff_w27 = 1;
      unaff_w21 = unaff_w21 | iVar8 == 2;
    }
LAB_067679e0:
    unaff_x25 = unaff_x25 + 1;
    unaff_x19 = unaff_x19 + 0x1c8;
    unaff_x26 = unaff_x26 + 0x18;
    unaff_x22 = unaff_x22 + 0xc;
    if (in_stack_00000048 == unaff_x25) {
      lVar9 = *in_stack_00000038;
      if (lVar9 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(long *)(lVar9 + 0x78) == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(char *)(*(long *)(lVar9 + 0x78) + 0x10) == '\0') {
LAB_06767a94:
        bVar3 = false;
      }
      else {
        if (*(long *)(lVar9 + 0x70) == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        iVar8 = *(int *)(*(long *)(lVar9 + 0x70) + 0x10);
        if (iVar8 == -1) goto LAB_06767a94;
        memmove(&stack0x000001c0,(void *)(in_stack_00000028 + (long)iVar8 * 0x74),0x74);
        lVar9 = FUN_06a1536c(&stack0x000001c0,0);
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        iVar8 = FUN_069a958c(lVar9,0);
        bVar3 = iVar8 == 2;
        lVar9 = *in_stack_00000038;
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
      }
      if (*(long *)(lVar9 + 0x78) == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      bVar2 = *(byte *)(lVar9 + 0x17) | unaff_w27 & 1;
      *(byte *)(*(long *)(lVar9 + 0x78) + 0x58) = bVar2;
      if (unaff_x24 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      FUN_065c6740(unaff_x24,
                   *(long *)(*(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo + 0xb8) + 0x70,
                   bVar2 != 0,0);
      if (*in_stack_00000038 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      lVar9 = *(long *)(*in_stack_00000038 + 0x78);
      if (lVar9 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      lVar7 = *unaff_x23;
      bVar2 = *(char *)(lVar9 + 0x3c) != '\0' & (unaff_w21 | bVar3);
      *(byte *)(lVar9 + 0x59) = bVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_067317d4(unaff_x24,lVar9,0);
      if ((unaff_w27 & 1) != 0) {
        lVar9 = *in_stack_00000038;
        if (lVar9 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        FUN_0676801c(unaff_x20,unaff_x24,*(undefined8 *)(lVar9 + 0x58),*(undefined1 *)(lVar9 + 0x16)
                     ,bVar2);
      }
      FUN_065e0fb4(&stack0x0000029c,0);
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
        return;
      }
      goto LAB_06767fb4;
    }
    if (*(long *)(unaff_x20 + 0x120) == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    param_2 = FUN_0427f774(*(long *)(unaff_x20 + 0x120),unaff_x25 & 0xffffffff,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
    param_1 = *(long *)(unaff_x20 + 0x100);
    if (param_1 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    unaff_w28 = (uint)param_2;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w28;
  } while( true );
}


