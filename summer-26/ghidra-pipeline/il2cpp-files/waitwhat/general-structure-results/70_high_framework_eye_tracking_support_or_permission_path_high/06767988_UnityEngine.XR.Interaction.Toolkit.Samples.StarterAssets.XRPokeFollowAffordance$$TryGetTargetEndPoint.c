/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance$$TryGetTargetEndPoint
ENTRY_POINT: 06767988
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


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance__TryGetTargetEndPoint
               (ulong param_1,undefined1 param_2 [16],ulong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uVar17;
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong uStack00000000000000b0;
  ulong uStack00000000000000c0;
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
  
  uVar13 = in_stack_00000090;
  uVar4 = in_stack_00000098;
  uVar9 = in_stack_000000a0;
  uVar5 = in_stack_000000a8;
  do {
    in_stack_000000a8 = uVar5;
    in_stack_000000a0 = uVar9;
    in_stack_00000098 = uVar4;
    in_stack_00000090 = uVar13;
    uStack0000000000000058 = in_stack_000000d8;
    uStack0000000000000050 = in_stack_000000d0;
    uStack0000000000000068 = in_stack_000000e8;
    uStack0000000000000060 = in_stack_000000e0;
    uStack0000000000000078 = in_stack_000000f8;
    uStack0000000000000070 = in_stack_000000f0;
    uStack0000000000000088 = in_stack_00000108;
    uStack0000000000000080 = in_stack_00000100;
    uStack00000000000000b0 = param_1;
    uStack00000000000000c0 = param_3;
    FUN_067301f0(unaff_x24,&stack0x00000470,&stack0x00000280,&stack0x00000090,&stack0x00000050,0);
    lVar11 = FUN_06a1536c(in_stack_00000040,0);
    if (lVar11 == 0) {
                    /* catch() { ... } // from try @ 06767a5c with catch @ 06767c7c */
                    /* catch() { ... } // from try @ 06767a70 with catch @ 06767c80 */
                    /* catch() { ... } // from try @ 06767c5c with catch @ 06767c84 */
                    /* catch() { ... } // from try @ 06767974 with catch @ 06767c88
                       catch() { ... } // from try @ 06767c00 with catch @ 06767c88 */
                    /* catch() { ... } // from try @ 06767a28 with catch @ 06767c8c */
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06767c58 with catch @ 06767c90 */
        FUN_03188cd8();
      }
LAB_06767fb4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar8 = FUN_069a958c(lVar11,0);
    unaff_w21 = unaff_w21 | iVar8 == 2;
    do {
      do {
        unaff_x25 = unaff_x25 + 1;
        unaff_x19 = unaff_x19 + 0x1c8;
        unaff_x26 = unaff_x26 + 0x18;
        unaff_x22 = unaff_x22 + 0xc;
        if (in_stack_00000048 == unaff_x25) {
                    /* try { // try from 06767a0c to 06867a17 has its CatchHandler @ 06767c94 */
          lVar11 = *in_stack_00000038;
          if (lVar11 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          if (*(long *)(lVar11 + 0x78) == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          if (*(char *)(*(long *)(lVar11 + 0x78) + 0x10) == '\0') {
LAB_06767a94:
            bVar6 = false;
          }
          else {
                    /* try { // try from 06767a28 to 06867a2b has its CatchHandler @ 06767c8c */
            if (*(long *)(lVar11 + 0x70) == 0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06767fb4;
            }
            iVar8 = *(int *)(*(long *)(lVar11 + 0x70) + 0x10);
            if (iVar8 == -1) goto LAB_06767a94;
            memmove(&stack0x000001c0,(void *)(in_stack_00000028 + (long)iVar8 * 0x74),0x74);
            lVar11 = FUN_06a1536c(&stack0x000001c0,0);
                    /* try { // try from 06767a5c to 06867a5f has its CatchHandler @ 06767c7c */
            if (lVar11 == 0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06767fb4;
            }
            iVar8 = FUN_069a958c(lVar11,0);
            bVar6 = iVar8 == 2;
                    /* try { // try from 06767a70 to 06867a77 has its CatchHandler @ 06767c80 */
            lVar11 = *in_stack_00000038;
            if (lVar11 == 0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06767a90 to 06867ae7 has its CatchHandler @ 06767ca4 */
                FUN_03188cd8();
              }
              goto LAB_06767fb4;
            }
          }
          if (*(long *)(lVar11 + 0x78) == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          }
          else {
            bVar2 = *(byte *)(lVar11 + 0x17) | 1;
            *(byte *)(*(long *)(lVar11 + 0x78) + 0x58) = bVar2;
            if (unaff_x24 == 0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
            }
            else {
              FUN_065c6740(unaff_x24,
                           *(long *)(*(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo + 0xb8)
                           + 0x70,bVar2 != 0,0);
              if (*in_stack_00000038 == 0) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
              }
              else {
                lVar11 = *(long *)(*in_stack_00000038 + 0x78);
                if (lVar11 == 0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                }
                else {
                  lVar12 = *unaff_x23;
                  bVar2 = *(char *)(lVar11 + 0x3c) != '\0' & (unaff_w21 | bVar6);
                  *(byte *)(lVar11 + 0x59) = bVar2;
                    /* try { // try from 06767b14 to 06867b1f has its CatchHandler @ 06767cb0 */
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  FUN_067317d4(unaff_x24,lVar11,0);
                    /* try { // try from 06767b30 to 06867b33 has its CatchHandler @ 06767ca8 */
                  lVar11 = *in_stack_00000038;
                  if (lVar11 == 0) {
                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                  }
                  else {
                    /* try { // try from 06767b50 to 06867b53 has its CatchHandler @ 06767c9c */
                    FUN_0676801c(unaff_x20,unaff_x24,*(undefined8 *)(lVar11 + 0x58),
                                 *(undefined1 *)(lVar11 + 0x16),bVar2);
                    FUN_065e0fb4(&stack0x0000029c,0);
                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                      return;
                    }
                  }
                }
              }
            }
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
        sVar7 = FUN_0427f774(*(long *)(unaff_x20 + 0x120),unaff_x25 & 0xffffffff,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
        lVar11 = *(long *)(unaff_x20 + 0x100);
        if (lVar11 == 0) {
                    /* try { // try from 06767bcc to 06867bd3 has its CatchHandler @ 06767ca4 */
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        uVar3 = (uint)sVar7;
        if (*(uint *)(lVar11 + 0x18) <= uVar3) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        lVar12 = (long)sVar7;
        uVar17 = *(undefined4 *)(lVar11 + lVar12 * 0x10 + 0x20);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar9 = FUN_06731bb4(uVar17,0,0);
      } while ((uVar9 & 1) != 0);
      lVar11 = *(long *)(unaff_x20 + 0x100);
      if (lVar11 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar3) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
      uVar17 = *(undefined4 *)(lVar11 + lVar12 * 0x10 + 0x2c);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar9 = FUN_06731bb4(uVar17,0xbf800000,0);
    } while ((uVar9 & 1) != 0);
    lVar11 = *(long *)(unaff_x20 + 0xf8);
    if (lVar11 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar3) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      goto LAB_06767fb4;
    }
    iVar8 = (int)*(short *)(lVar11 + lVar12 * 2 + 0x20);
    in_stack_00000040 =
         FUN_03b26540(in_stack_00000028,in_stack_00000020,iVar8,*(undefined8 *)OVREyeGaze_TypeInfo);
    lVar11 = *(long *)(unaff_x20 + 0x110);
    if (lVar11 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      goto LAB_06767fb4;
    }
    memmove(&stack0x00000470,(void *)(lVar11 + unaff_x19),0x1c8);
    if (*in_stack_00000038 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    uVar13 = *(undefined8 *)(*in_stack_00000038 + 0x78);
    memcpy(&stack0x000002a0,&stack0x00000470,0x1c8);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar9 = in_stack_00000300;
    uVar15 = in_stack_000002f0;
    uVar16 = in_stack_00000310;
    in_stack_00000110 = in_stack_000002e0;
    in_stack_00000118 = in_stack_000002e8;
    in_stack_00000120 = in_stack_000002f0;
    in_stack_00000128 = in_stack_000002f8;
    in_stack_00000130 = in_stack_00000300;
    in_stack_00000138 = in_stack_00000308;
    in_stack_00000140 = in_stack_00000310;
    in_stack_00000148 = in_stack_00000318;
    uVar17 = FUN_06730854((float)in_stack_00000538,in_stack_00000040,iVar8,uVar13,&stack0x00000110,0
                         );
    if (unaff_x19 == 0x20) {
LAB_0676780c:
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      Unity_XR_CoreUtils_XROrigin__OnBeforeRender
                (uVar17,uVar9 & 0xffffffff,uVar15 & 0xffffffff,uVar16 & 0xffffffff,unaff_x24,0);
      unaff_s8 = uVar17;
      unaff_s11 = (int)uVar9;
      unaff_s10 = (int)uVar15;
      unaff_s9 = (int)uVar16;
    }
    else {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar10 = FUN_06731bcc(uVar17,uVar9 & 0xffffffff,uVar15 & 0xffffffff,uVar16 & 0xffffffff,
                            unaff_s8,unaff_s11,unaff_s10,unaff_s9,0);
      if ((uVar10 & 1) == 0) goto LAB_0676780c;
    }
    FUN_06a1540c(&stack0x000002a0,in_stack_00000040,0);
    uVar9 = in_stack_000002b0;
    uVar17 = in_stack_000002d0;
    uVar14 = FUN_069c28f8(&stack0x00000240,3,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06730cb8(uVar14,uVar9 & 0xffffffff,uVar17,unaff_x24,0);
    lVar11 = *in_stack_00000038;
    if ((in_stack_00000030 & 0x100000000) == 0) {
      if (lVar11 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      lVar11 = *(long *)(lVar11 + 0x88);
      if (lVar11 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
      puVar1 = (undefined8 *)(lVar11 + unaff_x26);
      in_stack_000001a8 = puVar1[1];
      in_stack_000001a0 = *puVar1;
      in_stack_000001b0 = puVar1[2];
    }
    else {
      if (lVar11 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      lVar11 = *(long *)(lVar11 + 0x90);
      if (lVar11 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
      in_stack_00000018 =
           in_stack_00000018 & 0xffffffff00000000 |
           (ulong)*(uint *)((undefined8 *)(lVar11 + unaff_x22) + 1);
      FUN_0665f57c(&stack0x000002a0,*(undefined8 *)(lVar11 + unaff_x22),in_stack_00000018,0);
      in_stack_000001b0 = in_stack_000002b0;
      in_stack_000001a0 = in_stack_000002a0;
      in_stack_000001a8 = in_stack_000002a8;
    }
    memcpy(&stack0x000002a0,&stack0x00000470,0x1c8);
    param_1 = in_stack_00000300;
    param_3 = in_stack_00000310;
    uVar13 = in_stack_000002e0;
    uVar4 = in_stack_000002e8;
    uVar9 = in_stack_000002f0;
    uVar5 = in_stack_000002f8;
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
      uVar13 = in_stack_000002e0;
      uVar4 = in_stack_000002e8;
      uVar9 = in_stack_000002f0;
      uVar5 = in_stack_000002f8;
    }
  } while( true );
}


