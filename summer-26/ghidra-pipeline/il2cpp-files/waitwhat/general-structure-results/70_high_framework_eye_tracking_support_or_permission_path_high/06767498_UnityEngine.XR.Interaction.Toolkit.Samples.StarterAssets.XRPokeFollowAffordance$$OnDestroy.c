/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance$$OnDestroy
ENTRY_POINT: 06767498
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance__OnDestroy
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  short sVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  byte bVar15;
  long lVar16;
  long unaff_x24;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  long in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000030;
  long *in_stack_00000038;
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
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  ulong in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined1 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  ulong in_stack_000002b0;
  undefined4 uVar32;
  undefined8 in_stack_000002d0;
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
  
  FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
  FUN_03188a78(OVREyeGaze_TypeInfo);
                    /* try { // try from 067674b0 to 068674fb has its CatchHandler @ 06767794 */
  FUN_03188a78(System_Data_LookupNode_TypeInfo);
  FUN_03188a78(Oculus_Platform_Models_LinkedAccount_TypeInfo);
  FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x5cc) = 1;
  memset(&stack0x00000470,0,0x1c8);
  puVar6 = OVRGLTFAnimatinonNode_TypeInfo;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001b0 = 0;
  if ((*in_stack_00000038 == 0) || (lVar13 = *(long *)(*in_stack_00000038 + 0x70), lVar13 == 0)) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  lVar12 = *(long *)(lVar13 + 0x20);
  uVar2 = *(undefined8 *)(lVar13 + 0x28);
  FUN_03b9c340(3,*(undefined8 *)System_Data_LookupNode_TypeInfo);
  FUN_065e0fb0(&stack0x0000029c);
  in_stack_00000190 = 0;
  in_stack_00000198 = &stack0x0000029c;
  if ((in_stack_00000030 & 0x100000000) == 0) {
    lVar13 = *in_stack_00000038;
    if (lVar13 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    in_stack_000002a8 = *(undefined8 *)(lVar13 + 0x20);
    in_stack_000002a0 = *(undefined8 *)(lVar13 + 0x18);
    uVar22 = *(undefined8 *)(lVar13 + 0x30);
    in_stack_000002b0 = *(ulong *)(lVar13 + 0x28);
    uVar25 = *(undefined8 *)(lVar13 + 0x40);
    uVar23 = *(undefined8 *)(lVar13 + 0x38);
    uVar10 = *(undefined8 *)(lVar13 + 0x50);
    in_stack_000002d0 = *(undefined8 *)(lVar13 + 0x48);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    in_stack_00000150 = in_stack_000002a0;
    in_stack_00000158 = in_stack_000002a8;
    in_stack_00000160 = in_stack_000002b0;
    in_stack_00000168 = uVar22;
    in_stack_00000170 = uVar23;
    in_stack_00000178 = uVar25;
    in_stack_00000180 = in_stack_000002d0;
    in_stack_00000188 = uVar10;
    FUN_06730de8();
  }
  if (*(long *)(unaff_x20 + 0x120) == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  uVar3 = *(uint *)(*(long *)(unaff_x20 + 0x120) + 0x18);
  if ((int)uVar3 < 1) {
    bVar19 = 0;
    bVar15 = 0;
  }
  else {
    if (unaff_x24 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    FUN_065c6740();
    uVar27 = 0xc1200000;
    uVar28 = 0xc1200000;
    uVar17 = 0;
    uVar29 = 0xc1200000;
    uVar30 = 0xc1200000;
    bVar15 = 0;
    bVar19 = 0;
    lVar16 = 0x20;
    lVar18 = 0x20;
    lVar13 = 0x20;
    do {
      uVar32 = (undefined4)in_stack_000002d0;
      if (*(long *)(unaff_x20 + 0x120) == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      sVar8 = FUN_0427f774(*(long *)(unaff_x20 + 0x120),uVar17 & 0xffffffff,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
      lVar14 = *(long *)(unaff_x20 + 0x100);
      if (lVar14 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      uVar5 = (uint)sVar8;
      if (*(uint *)(lVar14 + 0x18) <= uVar5) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
      lVar21 = (long)sVar8;
      uVar31 = *(undefined4 *)(lVar14 + lVar21 * 0x10 + 0x20);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar9 = FUN_06731bb4(uVar31,0,0);
      if ((uVar9 & 1) == 0) {
        lVar14 = *(long *)(unaff_x20 + 0x100);
        if (lVar14 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar5) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        uVar31 = *(undefined4 *)(lVar14 + lVar21 * 0x10 + 0x2c);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar9 = FUN_06731bb4(uVar31,0xbf800000,0);
        if ((uVar9 & 1) != 0) goto LAB_067679e0;
        lVar14 = *(long *)(unaff_x20 + 0xf8);
        if (lVar14 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar5) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        iVar20 = (int)*(short *)(lVar14 + lVar21 * 2 + 0x20);
        uVar10 = FUN_03b26540(lVar12,uVar2,iVar20,*(undefined8 *)OVREyeGaze_TypeInfo);
        lVar14 = *(long *)(unaff_x20 + 0x110);
        if (lVar14 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar17) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        memmove(&stack0x00000470,(void *)(lVar14 + lVar13),0x1c8);
        if (*in_stack_00000038 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        uVar22 = *(undefined8 *)(*in_stack_00000038 + 0x78);
        memcpy(&stack0x000002a0,&stack0x00000470,0x1c8);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar9 = in_stack_00000300;
        uVar24 = in_stack_000002f0;
        uVar26 = in_stack_00000310;
        in_stack_00000110 = in_stack_000002e0;
        in_stack_00000118 = in_stack_000002e8;
        in_stack_00000120 = in_stack_000002f0;
        in_stack_00000128 = in_stack_000002f8;
        in_stack_00000130 = in_stack_00000300;
        in_stack_00000138 = in_stack_00000308;
        in_stack_00000140 = in_stack_00000310;
        in_stack_00000148 = in_stack_00000318;
        uVar31 = FUN_06730854((float)in_stack_00000538,uVar10,iVar20,uVar22,&stack0x00000110,0);
        if (lVar13 == 0x20) {
LAB_0676780c:
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          Unity_XR_CoreUtils_XROrigin__OnBeforeRender
                    (uVar31,uVar9 & 0xffffffff,uVar24 & 0xffffffff,uVar26 & 0xffffffff,unaff_x24,0);
          uVar27 = uVar31;
          uVar28 = (int)uVar26;
          uVar29 = (int)uVar24;
          uVar30 = (int)uVar9;
        }
        else {
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar11 = FUN_06731bcc(uVar31,uVar9 & 0xffffffff,uVar24 & 0xffffffff,uVar26 & 0xffffffff,
                                uVar27,uVar30,uVar29,uVar28,0);
          if ((uVar11 & 1) == 0) goto LAB_0676780c;
        }
        FUN_06a1540c(&stack0x000002a0,uVar10,0);
        uVar9 = in_stack_000002b0;
        uVar31 = FUN_069c28f8(&stack0x00000240,3,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06730cb8(uVar31,uVar9 & 0xffffffff,uVar32,unaff_x24,0);
        lVar14 = *in_stack_00000038;
        if ((in_stack_00000030 & 0x100000000) == 0) {
          if (lVar14 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          lVar14 = *(long *)(lVar14 + 0x88);
          if (lVar14 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar17) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_06767fb4;
          }
          puVar1 = (undefined8 *)(lVar14 + lVar18);
          in_stack_000001a8 = puVar1[1];
          in_stack_000001a0 = *puVar1;
          in_stack_000001b0 = puVar1[2];
        }
        else {
          if (lVar14 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          lVar14 = *(long *)(lVar14 + 0x90);
          if (lVar14 == 0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar17) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_06767fb4;
          }
          in_stack_00000018 =
               in_stack_00000018 & 0xffffffff00000000 |
               (ulong)*(uint *)((undefined8 *)(lVar14 + lVar16) + 1);
          FUN_0665f57c(&stack0x000002a0,*(undefined8 *)(lVar14 + lVar16),in_stack_00000018,0);
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
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
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
        FUN_067301f0(unaff_x24,&stack0x00000470,&stack0x00000280,&stack0x00000090,&stack0x00000050,0
                    );
        lVar14 = FUN_06a1536c(uVar10,0);
        if (lVar14 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        iVar20 = FUN_069a958c(lVar14,0);
        bVar19 = 1;
        bVar15 = bVar15 | iVar20 == 2;
      }
LAB_067679e0:
      uVar17 = uVar17 + 1;
      lVar13 = lVar13 + 0x1c8;
      lVar18 = lVar18 + 0x18;
      lVar16 = lVar16 + 0xc;
    } while (uVar3 != uVar17);
  }
  lVar13 = *in_stack_00000038;
  if (lVar13 == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  if (*(long *)(lVar13 + 0x78) == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  if (*(char *)(*(long *)(lVar13 + 0x78) + 0x10) == '\0') {
LAB_06767a94:
    bVar7 = false;
  }
  else {
    if (*(long *)(lVar13 + 0x70) == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    iVar20 = *(int *)(*(long *)(lVar13 + 0x70) + 0x10);
    if (iVar20 == -1) goto LAB_06767a94;
    memmove(&stack0x000001c0,(void *)(lVar12 + (long)iVar20 * 0x74),0x74);
    lVar13 = FUN_06a1536c(&stack0x000001c0,0);
    if (lVar13 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    iVar20 = FUN_069a958c(lVar13,0);
    bVar7 = iVar20 == 2;
    lVar13 = *in_stack_00000038;
    if (lVar13 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
  }
  if (*(long *)(lVar13 + 0x78) == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    bVar4 = *(byte *)(lVar13 + 0x17) | bVar19;
    *(byte *)(*(long *)(lVar13 + 0x78) + 0x58) = bVar4;
    if (unaff_x24 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      FUN_065c6740(unaff_x24,
                   *(long *)(*(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo + 0xb8) + 0x70,
                   bVar4 != 0,0);
      if (*in_stack_00000038 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      else {
        lVar13 = *(long *)(*in_stack_00000038 + 0x78);
        if (lVar13 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
        }
        else {
          lVar12 = *(long *)puVar6;
          bVar15 = *(char *)(lVar13 + 0x3c) != '\0' & (bVar15 | bVar7);
          *(byte *)(lVar13 + 0x59) = bVar15;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_067317d4(unaff_x24,lVar13,0);
          if (bVar19 != 0) {
            lVar13 = *in_stack_00000038;
            if (lVar13 == 0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06767fb4;
            }
            FUN_0676801c(unaff_x20,unaff_x24,*(undefined8 *)(lVar13 + 0x58),
                         *(undefined1 *)(lVar13 + 0x16),bVar15);
          }
          FUN_065e0fb4(&stack0x0000029c,0);
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000638) {
            return;
          }
        }
      }
    }
  }
LAB_06767fb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


