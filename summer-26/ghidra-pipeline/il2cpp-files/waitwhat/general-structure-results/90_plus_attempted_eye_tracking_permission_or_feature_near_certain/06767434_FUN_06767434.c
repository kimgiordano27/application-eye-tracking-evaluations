/*
FUNCTION_NAME: FUN_06767434
ENTRY_POINT: 06767434
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_06767434(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  short sVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  int iVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  ulong local_6c8;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  ulong uStack_640;
  undefined8 uStack_638;
  ulong local_630;
  undefined8 uStack_628;
  ulong uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  ulong local_5b0;
  undefined8 uStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  ulong uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined1 *puStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  ulong local_530;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined8 local_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  ulong local_450;
  undefined1 local_444 [4];
  undefined8 local_440;
  undefined8 uStack_438;
  ulong local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  ulong local_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  int local_1a8;
  long local_a8;
  
                    /* try { // try from 06767444 to 06867453 has its CatchHandler @ 067677c0 */
                    /* try { // try from 0676746c to 06867473 has its CatchHandler @ 067677b8 */
  lVar6 = tpidr_el0;
  local_a8 = *(long *)(lVar6 + 0x28);
  if ((DAT_075585cc & 1) == 0) {
                    /* try { // try from 06767490 to 06867497 has its CatchHandler @ 06767798 */
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_SelectEnterEvent_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(System_Data_LookupNode_TypeInfo);
    FUN_03188a78(Oculus_Platform_Models_LinkedAccount_TypeInfo);
    FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
    DAT_075585cc = 1;
  }
  local_444[0] = 0;
  memset(&local_270,0,0x1c8);
  puVar7 = OVRGLTFAnimatinonNode_TypeInfo;
  uStack_458 = 0;
  local_460 = 0;
  local_450 = 0;
  local_4b0 = 0;
  uStack_508 = 0;
  local_510 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  local_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  local_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  local_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_518 = 0;
  local_520 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_530 = 0;
  if ((*param_3 == 0) || (lVar15 = *(long *)(*param_3 + 0x70), lVar15 == 0)) {
    if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  lVar14 = *(long *)(lVar15 + 0x20);
  uVar2 = *(undefined8 *)(lVar15 + 0x28);
  uVar11 = FUN_03b9c340(3,*(undefined8 *)System_Data_LookupNode_TypeInfo);
  FUN_065e0fb0(local_444,param_2,uVar11,0);
  local_550 = 0;
  puStack_548 = local_444;
  if ((param_4 & 1) == 0) {
    lVar15 = *param_3;
    if (lVar15 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    uStack_438 = *(undefined8 *)(lVar15 + 0x20);
    local_440 = *(undefined8 *)(lVar15 + 0x18);
    uStack_428 = *(undefined8 *)(lVar15 + 0x30);
    local_430 = *(ulong *)(lVar15 + 0x28);
    uStack_418 = *(undefined8 *)(lVar15 + 0x40);
    local_420 = *(undefined8 *)(lVar15 + 0x38);
    uStack_408 = *(undefined8 *)(lVar15 + 0x50);
    uStack_410 = *(ulong *)(lVar15 + 0x48);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uStack_588 = uStack_438;
    local_590 = local_440;
    uStack_578 = uStack_428;
    uStack_580 = local_430;
    uStack_568 = uStack_418;
    local_570 = local_420;
    uStack_558 = uStack_408;
    uStack_560 = uStack_410;
    FUN_06730de8(param_2,&local_590,0);
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x120) + 0x18);
  if ((int)uVar3 < 1) {
    bVar21 = 0;
    bVar17 = 0;
  }
  else {
    if (param_2 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    FUN_065c6740(param_2,*(long *)(*(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo + 0xb8) +
                         0x30,1,0);
    uVar27 = 0xc1200000;
    uVar28 = 0xc1200000;
    uVar19 = 0;
    uVar29 = 0xc1200000;
    uVar30 = 0xc1200000;
    bVar17 = 0;
    bVar21 = 0;
    lVar18 = 0x20;
    lVar20 = 0x20;
    lVar15 = 0x20;
    do {
      if (*(long *)(param_1 + 0x120) == 0) {
        if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      sVar10 = FUN_0427f774(*(long *)(param_1 + 0x120),uVar19 & 0xffffffff,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
      lVar16 = *(long *)(param_1 + 0x100);
      if (lVar16 == 0) {
        if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_06767fb4;
      }
      uVar5 = (uint)sVar10;
      if (*(uint *)(lVar16 + 0x18) <= uVar5) {
        if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_06767fb4;
      }
      lVar23 = (long)sVar10;
      uVar31 = *(undefined4 *)(lVar16 + lVar23 * 0x10 + 0x20);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar12 = FUN_06731bb4(uVar31,0,0);
      if ((uVar12 & 1) == 0) {
        lVar16 = *(long *)(param_1 + 0x100);
        if (lVar16 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar5) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        uVar31 = *(undefined4 *)(lVar16 + lVar23 * 0x10 + 0x2c);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar12 = FUN_06731bb4(uVar31,0xbf800000,0);
        if ((uVar12 & 1) != 0) goto LAB_067679e0;
        lVar16 = *(long *)(param_1 + 0xf8);
        if (lVar16 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar5) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        iVar22 = (int)*(short *)(lVar16 + lVar23 * 2 + 0x20);
        uVar11 = FUN_03b26540(lVar14,uVar2,iVar22,*(undefined8 *)OVREyeGaze_TypeInfo);
        lVar16 = *(long *)(param_1 + 0x110);
        if (lVar16 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar19) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_06767fb4;
        }
        memmove(&local_270,(void *)(lVar16 + lVar15),0x1c8);
        if (*param_3 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        uVar24 = *(undefined8 *)(*param_3 + 0x78);
        memcpy(&local_440,&local_270,0x1c8);
        iVar8 = local_1a8;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uStack_5c8 = uStack_3f8;
        local_5d0 = local_400;
        uStack_5b8 = uStack_3e8;
        uStack_5c0 = uStack_3f0;
        uStack_5a8 = uStack_3d8;
        local_5b0 = local_3e0;
        uStack_598 = uStack_3c8;
        uStack_5a0 = uStack_3d0;
        uVar12 = local_3e0;
        uVar25 = uStack_3f0;
        uVar26 = uStack_3d0;
        uVar31 = FUN_06730854((float)iVar8,uVar11,iVar22,uVar24,&local_5d0,0);
        if (lVar15 == 0x20) {
LAB_0676780c:
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          Unity_XR_CoreUtils_XROrigin__OnBeforeRender
                    (uVar31,uVar12 & 0xffffffff,uVar25 & 0xffffffff,uVar26 & 0xffffffff,param_2,0);
          uVar27 = uVar31;
          uVar28 = (int)uVar26;
          uVar29 = (int)uVar25;
          uVar30 = (int)uVar12;
        }
        else {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar13 = FUN_06731bcc(uVar31,uVar12 & 0xffffffff,uVar25 & 0xffffffff,uVar26 & 0xffffffff,
                                uVar27,uVar30,uVar29,uVar28,0);
          if ((uVar13 & 1) == 0) goto LAB_0676780c;
        }
        FUN_06a1540c(&local_440,uVar11,0);
        uStack_498 = uStack_438;
        local_4a0 = local_440;
        uStack_488 = uStack_428;
        uStack_490 = local_430;
        uStack_478 = uStack_418;
        local_480 = local_420;
        uStack_468 = uStack_408;
        uStack_470 = uStack_410;
        uVar12 = local_430;
        uVar25 = uStack_410;
        uVar31 = FUN_069c28f8(&local_4a0,3,0);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06730cb8(uVar31,uVar12 & 0xffffffff,uVar25 & 0xffffffff,param_2,0);
        lVar16 = *param_3;
        if ((param_4 & 1) == 0) {
          if (lVar16 == 0) {
            if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          lVar16 = *(long *)(lVar16 + 0x88);
          if (lVar16 == 0) {
            if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar19) {
            if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_06767fb4;
          }
          puVar1 = (undefined8 *)(lVar16 + lVar20);
          uStack_538 = puVar1[1];
          local_540 = *puVar1;
          local_530 = puVar1[2];
        }
        else {
          if (lVar16 == 0) {
            if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          lVar16 = *(long *)(lVar16 + 0x90);
          if (lVar16 == 0) {
            if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_06767fb4;
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar19) {
            if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_06767fb4;
          }
          local_6c8 = local_6c8 & 0xffffffff00000000 |
                      (ulong)*(uint *)((undefined8 *)(lVar16 + lVar18) + 1);
          FUN_0665f57c(&local_440,*(undefined8 *)(lVar16 + lVar18),local_6c8,0);
          local_530 = local_430;
          local_540 = local_440;
          uStack_538 = uStack_438;
        }
        local_460 = local_540;
        uStack_458 = uStack_538;
        local_450 = local_530;
        memcpy(&local_440,&local_270,0x1c8);
        uStack_608 = uStack_268;
        local_610 = local_270;
        uStack_5f8 = uStack_258;
        uStack_600 = local_260;
        uStack_5e8 = uStack_248;
        local_5f0 = local_250;
        uStack_5d8 = uStack_238;
        uStack_5e0 = local_240;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uStack_648 = uStack_3f8;
        local_650 = local_400;
        uStack_638 = uStack_3e8;
        uStack_640 = uStack_3f0;
        uStack_628 = uStack_3d8;
        local_630 = local_3e0;
        uStack_618 = uStack_3c8;
        uStack_620 = uStack_3d0;
        uStack_688 = uStack_608;
        local_690 = local_610;
        uStack_678 = uStack_5f8;
        uStack_680 = uStack_600;
        uStack_668 = uStack_5e8;
        local_670 = local_5f0;
        uStack_658 = uStack_5d8;
        uStack_660 = uStack_5e0;
        FUN_067301f0(param_2,&local_270,&local_460,&local_650,&local_690,0);
        lVar16 = FUN_06a1536c(uVar11,0);
        if (lVar16 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_06767fb4;
        }
        iVar22 = FUN_069a958c(lVar16,0);
        bVar21 = 1;
        bVar17 = bVar17 | iVar22 == 2;
      }
LAB_067679e0:
      uVar19 = uVar19 + 1;
      lVar15 = lVar15 + 0x1c8;
      lVar20 = lVar20 + 0x18;
      lVar18 = lVar18 + 0xc;
    } while (uVar3 != uVar19);
  }
  lVar15 = *param_3;
  if (lVar15 == 0) {
    if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  if (*(long *)(lVar15 + 0x78) == 0) {
    if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    goto LAB_06767fb4;
  }
  if (*(char *)(*(long *)(lVar15 + 0x78) + 0x10) == '\0') {
LAB_06767a94:
    bVar9 = false;
  }
  else {
    if (*(long *)(lVar15 + 0x70) == 0) {
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    iVar22 = *(int *)(*(long *)(lVar15 + 0x70) + 0x10);
    if (iVar22 == -1) goto LAB_06767a94;
    memmove(&local_520,(void *)(lVar14 + (long)iVar22 * 0x74),0x74);
    lVar15 = FUN_06a1536c(&local_520,0);
    if (lVar15 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
    iVar22 = FUN_069a958c(lVar15,0);
    bVar9 = iVar22 == 2;
    lVar15 = *param_3;
    if (lVar15 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_06767fb4;
    }
  }
  if (*(long *)(lVar15 + 0x78) == 0) {
    if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    bVar4 = *(byte *)(lVar15 + 0x17) | bVar21;
    *(byte *)(*(long *)(lVar15 + 0x78) + 0x58) = bVar4;
    if (param_2 == 0) {
      if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      FUN_065c6740(param_2,*(long *)(*(long *)Oculus_Platform_Models_LinkedAccount_TypeInfo + 0xb8)
                           + 0x70,bVar4 != 0,0);
      if (*param_3 == 0) {
        if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
      }
      else {
        lVar15 = *(long *)(*param_3 + 0x78);
        if (lVar15 == 0) {
          if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
        }
        else {
          lVar14 = *(long *)puVar7;
          bVar17 = *(char *)(lVar15 + 0x3c) != '\0' & (bVar17 | bVar9);
          *(byte *)(lVar15 + 0x59) = bVar17;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_067317d4(param_2,lVar15,0);
          if (bVar21 != 0) {
            lVar15 = *param_3;
            if (lVar15 == 0) {
              if (*(long *)(lVar6 + 0x28) == local_a8) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_06767fb4;
            }
            FUN_0676801c(param_1,param_2,*(undefined8 *)(lVar15 + 0x58),
                         *(undefined1 *)(lVar15 + 0x16),bVar17);
          }
          FUN_065e0fb4(local_444,0);
          if (*(long *)(lVar6 + 0x28) == local_a8) {
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


