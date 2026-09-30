/*
FUNCTION_NAME: UnityEngine.Rendering.ProbeReferenceVolume$$HasActiveStreamingRequest
ENTRY_POINT: 064f48d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3;functionality_possible_biometrics_hits_2
*/


void UnityEngine_Rendering_ProbeReferenceVolume__HasActiveStreamingRequest(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int extraout_var;
  int in_w8;
  ulong uVar15;
  int *piVar16;
  uint in_w9;
  long in_x10;
  ulong uVar17;
  long lVar18;
  uint unaff_w20;
  undefined8 uVar19;
  long lVar20;
  int unaff_w21;
  int iVar21;
  ulong unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int iVar22;
  uint unaff_w26;
  int iVar23;
  long unaff_x28;
  byte unaff_w29;
  short sVar24;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  int *in_stack_00000030;
  long in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int in_stack_000000d0;
  uint uStack00000000000000d4;
  int iStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  int *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000228;
  undefined8 in_stack_00000230;
  int in_stack_000003c0;
  undefined4 in_stack_000003c4;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  char in_stack_000003e0;
  char in_stack_00000400;
  undefined4 in_stack_00000478;
  undefined4 in_stack_0000047c;
  int in_stack_00000480;
  undefined4 in_stack_00000484;
  int in_stack_00000488;
  int in_stack_0000048c;
  long in_stack_00000490;
  long in_stack_00000498;
  long in_stack_000004a0;
  long in_stack_000004c0;
  long in_stack_000004c8;
  long in_stack_000004d0;
  long in_stack_000004e8;
  long in_stack_00000568;
  
  _iStack00000000000000d8 = in_x10;
  uStack00000000000000d4 = in_w9;
  do {
    iVar10 = unaff_w24 + in_w8;
    uVar9 = 0xffffffff;
    if ((bool)in_ZR) {
      iVar10 = -1;
    }
LAB_064f48ec:
    FUN_064dbef0(&stack0x00000540,in_stack_000000c8._4_4_,0);
    FUN_064dbf88(&stack0x00000540,unaff_w23,0);
    FUN_064dc018(&stack0x00000540,unaff_w21,0);
    FUN_064dc0bc(&stack0x00000540,unaff_w20,0);
    FUN_064dc14c(&stack0x00000540,unaff_w25,0);
    FUN_064dc1f0(&stack0x00000540,in_stack_000000d0,0);
    FUN_064dc4dc(&stack0x00000540,unaff_w29 & 1,0);
    uVar11 = FUN_064d400c(in_stack_000000f0,0);
    FUN_064dc4fc(&stack0x00000540,uVar11 & 1,0);
    FUN_064dc544(&stack0x00000540,uVar9,0);
    FUN_064dc280(&stack0x00000540,iVar10,0);
    uVar11 = in_stack_00000088._4_4_;
    if ((unaff_w29 & 1) == 0) {
      uVar11 = unaff_w26;
    }
    FUN_064dc3b4(&stack0x00000540,uVar11,0);
    FUN_064dc324(&stack0x00000540,in_stack_000000e8[10],0);
    if (unaff_x28 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_064bafac(unaff_x28,0);
    }
    FUN_064dc51c(&stack0x00000540,uVar11 & 1,0);
    in_stack_000000c0[1] = 0;
    *in_stack_000000c0 = 0;
    in_stack_000000c0[3] = 0;
    in_stack_000000c0[2] = 0;
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == in_stack_00000050) {
      if (((in_stack_00000480 != in_stack_000000e8[2]) ||
          (in_stack_0000048c != in_stack_000000e8[1])) ||
         (in_stack_00000488 != in_stack_000000e8[0xe] + in_stack_000003c0)) {
        FUN_064dc6a0(&stack0x000002d0,in_stack_00000478,in_stack_0000047c,in_stack_00000484);
        memcpy(&stack0x000000f8,&stack0x00000470,0x80);
        FUN_064dc7d0(&stack0x000002d0,&stack0x000000f8,0);
        FUN_064d514c(&stack0x00000470,0);
        memcpy(&stack0x00000470,&stack0x000002d0,0x80);
      }
      in_stack_000001d0 = CONCAT44(in_stack_000003c4,in_stack_000003c0);
      in_stack_000001d8 = in_stack_000003c8;
      in_stack_000001e0 = in_stack_000003d0;
      in_stack_000001e8 = in_stack_000003d8;
      FUN_039bc210(in_stack_000000e8 + 6,&stack0x000003bc,&stack0x000001d0,10,
                   *(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
      _iStack00000000000000d8 = CONCAT44(uStack00000000000000dc,in_stack_000003c0);
      if (0 < (int)in_stack_00000078._4_4_) {
        uVar15 = 0;
        do {
          iVar10 = in_stack_000000e0._4_4_ + (int)uVar15;
          pbVar1 = (byte *)(in_stack_00000498 + (long)iVar10 * 0x20);
          uVar17 = (ulong)*pbVar1;
          if (uVar17 != 0) {
            lVar18 = (ulong)*(ushort *)(pbVar1 + 0xe) << 2;
            do {
              uVar17 = uVar17 - 1;
              *(int *)(lVar18 + in_stack_000004d0) = iVar10;
              lVar18 = lVar18 + 4;
            } while (uVar17 != 0);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != in_stack_00000078._4_4_);
      }
      lVar18 = (long)in_stack_000000e8[0xc];
      if (in_stack_000000e8[0xc] < in_stack_00000480) {
        lVar20 = lVar18 * 0x30;
        do {
          FUN_064d6e90(lVar20 + in_stack_000004a0,1,0);
          FUN_064d6e98(lVar20 + in_stack_000004a0,0xffffffff,0);
          lVar18 = lVar18 + 1;
          lVar20 = lVar20 + 0x30;
        } while (lVar18 < in_stack_00000480);
      }
      if (0 < (int)in_stack_00000068._4_4_) {
        if (in_stack_00000098 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        iVar10 = in_stack_000000e8[0xd];
        uVar11 = 0;
        do {
          if (*(uint *)(in_stack_00000098 + 0x18) <= uVar11) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_064f5614;
          }
          lVar18 = *(long *)(in_stack_00000098 + (ulong)uVar11 * 8 + 0x20);
          if (lVar18 == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_064f5614;
          }
          sVar24 = 0;
          iVar23 = 0;
          iVar8 = uVar11 + in_stack_000000b8._4_4_;
          *(int *)(lVar18 + 0xc0) = iVar8;
          *(short *)(in_stack_000004c0 + (long)(iVar8 * 2) * 2) = (short)iVar10;
          if ((int)in_stack_00000078._4_4_ < 1) {
            iVar22 = 0;
          }
          else {
            iVar21 = -1;
            uVar15 = (ulong)in_stack_00000078._4_4_;
            iVar22 = in_stack_000000e0._4_4_;
            sVar24 = 0;
            do {
              pbVar1 = (byte *)(in_stack_00000498 + (long)iVar22 * 0x20);
              iVar12 = FUN_064d6b44(pbVar1,0);
              if ((iVar12 == iVar8) && (uVar17 = FUN_064d4bf4(pbVar1,0), (uVar17 & 1) == 0)) {
                iVar12 = iVar22;
                if (iVar21 != -1) {
                  iVar12 = iVar21;
                }
                *(short *)(in_stack_000004c8 + (long)iVar10 * 2) = (short)iVar22;
                uVar17 = FUN_064d588c(pbVar1,0);
                iVar10 = iVar10 + 1;
                sVar24 = sVar24 + 1;
                iVar21 = iVar12;
                if ((uVar17 & 1) == 0) {
                  iVar23 = iVar23 + (uint)*pbVar1;
                }
                else if (*pbVar1 != 0) {
                  iVar23 = iVar23 + 1;
                }
              }
              uVar15 = uVar15 - 1;
              iVar22 = iVar22 + 1;
            } while (uVar15 != 0);
            iVar22 = 0;
            if (iVar21 != -1) {
              iVar22 = iVar21;
            }
          }
          *(short *)(in_stack_000004c0 + (long)(int)(iVar8 * 2 | 1) * 2) = sVar24;
          iVar21 = *(int *)(lVar18 + 0x18);
          FUN_064d6b3c(&stack0x000004f0,0,0);
          FUN_064d6f10(&stack0x000004f0,in_stack_00000060,0);
          FUN_064d6d90(&stack0x000004f0,0xffffffff,0);
          FUN_064d6e24(&stack0x000004f0,0xffffffff,0);
          FUN_064d89f0(&stack0x000004f0,iVar21 == 2,0);
          FUN_064d8a1c(&stack0x000004f0,iVar21 == 1,0);
          FUN_064dc618(&stack0x000004f0,(iVar21 != 2 && iVar23 != 1) && (iVar21 == 2 || 0 < iVar23),
                       0);
          FUN_064d6ae0(&stack0x000004f0,iVar22,0);
          memmove((void *)(in_stack_00000490 + (long)iVar8 * 0x44),&stack0x000004f0,0x44);
          uVar11 = uVar11 + 1;
        } while (uVar11 != in_stack_00000068._4_4_);
      }
      piVar16 = (int *)(in_stack_000004e8 + (long)(int)in_stack_00000060 * 0x30);
      iVar23 = *in_stack_000000e8;
      iVar10 = in_stack_000000e8[1];
      iVar8 = in_stack_000000e8[2];
      *piVar16 = in_stack_000000b8._4_4_;
      piVar16[1] = in_stack_00000068._4_4_;
      piVar16[2] = iStack0000000000000010;
      piVar16[3] = iStack00000000000000d8;
      piVar16[4] = in_stack_000000e0._4_4_;
      piVar16[5] = in_stack_00000078._4_4_;
      piVar16[6] = iStack000000000000001c;
      piVar16[7] = iVar8 - iStack000000000000001c;
      piVar16[8] = iStack0000000000000014;
      piVar16[9] = iVar23 - iStack0000000000000014;
      piVar16[10] = iStack0000000000000018;
      piVar16[0xb] = iVar10 - iStack0000000000000018;
      puVar5 = System_Collections_Generic_HashSet<CAPI_ovrAvatar2Id>_TypeInfo;
      *(int *)(in_stack_00000090 + 0x58) = (int)in_stack_00000060;
      FUN_039bd098(in_stack_000000e8 + 4,&stack0x000003b8,in_stack_00000090,4,*(undefined8 *)puVar5)
      ;
      FUN_064d514c(in_stack_000000e8 + 8,0);
      memcpy(in_stack_000000e8 + 8,&stack0x00000470,0x80);
      FUN_03f5dcc8(in_stack_00000230,*(undefined8 *)PTR_DAT_070f20c8);
      if (in_stack_00000228 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
          return;
        }
      }
      else if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd0(in_stack_00000228);
      }
LAB_064f5614:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(uint *)(in_stack_00000070 + 0x18) <= unaff_x22) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      goto LAB_064f5614;
    }
    in_stack_000000f0 = (undefined8 *)(in_stack_00000080 + unaff_x22 * 0x58);
    unaff_w29 = FUN_064d1d88(in_stack_000000f0,0);
    uVar11 = in_stack_000000e0._4_4_ + (int)unaff_x22;
    if ((unaff_w29 & 1) == 0) {
      uVar15 = FUN_064d400c(in_stack_000000f0,0);
      bVar6 = unaff_w26 != 0xffffffff;
      if (((uVar15 & 1) != 0) && (unaff_w26 == 0xffffffff)) {
        memcpy(&stack0x000001d0,in_stack_000000f0,0x58);
        memcpy(&stack0x00000178,&stack0x000001d0,0x58);
        uVar13 = thunk_FUN_031edd38(
                                   UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                   );
        uVar13 = thunk_FUN_031c39fc(uVar13,&stack0x00000178);
        uVar14 = thunk_FUN_031edd38(
                                   System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_TypeInfo
                                   );
        uVar13 = FUN_057b5e54(uVar14,uVar13,0);
        thunk_FUN_031edd38(PTR_DAT_070c4538);
        uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        FUN_0592f61c(uVar14,uVar13,0);
        uVar13 = thunk_FUN_031edd38(
                                   System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                   );
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar14,uVar13);
        }
        goto LAB_064f5614;
      }
      in_stack_000000c0 = (undefined8 *)(in_stack_00000498 + (long)(int)uVar11 * 0x20);
      if ((uVar15 & 1) == 0) goto LAB_064f4264;
      bVar4 = false;
      unaff_x28 = _iStack00000000000000d8;
      unaff_w24 = uStack00000000000000d4;
    }
    else {
      bVar6 = unaff_w26 != 0xffffffff;
      in_stack_000000c0 = (undefined8 *)(in_stack_00000498 + (long)(int)uVar11 * 0x20);
LAB_064f4264:
      if (in_stack_00000048 == 0) {
        uVar13 = *(undefined8 *)(in_stack_00000080 + unaff_x22 * 0x58 + 0x30);
        uVar15 = FUN_057bebf8(uVar13,0);
        if ((uVar15 & 1) == 0) {
          unaff_w24 = FUN_064c0e60(in_stack_00000090,uVar13,0);
          if (unaff_w24 != 0xffffffff) goto LAB_064f4274;
          unaff_x28 = 0;
        }
        else {
          unaff_x28 = 0;
          unaff_w24 = 0xffffffff;
        }
      }
      else {
        unaff_w24 = 0;
LAB_064f4274:
        if (in_stack_00000098 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        if (*(uint *)(in_stack_00000098 + 0x18) <= unaff_w24) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        unaff_x28 = *(long *)(in_stack_00000098 + (long)(int)unaff_w24 * 8 + 0x20);
      }
      bVar4 = true;
    }
    uVar2 = uVar11;
    uVar3 = unaff_w24;
    lVar18 = unaff_x28;
    if ((unaff_w29 & 1) == 0) {
      uVar2 = unaff_w26;
      uVar3 = uStack00000000000000d4;
      lVar18 = _iStack00000000000000d8;
    }
    uVar13 = FUN_064d5748(in_stack_000000f0,0);
    uVar15 = FUN_057bebf8(uVar13,0);
    if ((uVar15 & 1) == 0) {
      bVar7 = unaff_x28 != 0;
      if ((bool)bVar7 && (unaff_w29 & 1) == 0) {
        if ((char)in_stack_000000e8[0x2e] != '\0') {
          FUN_04666c20(&stack0x000001d0,in_stack_000000e8 + 0x2e,
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          uVar15 = FUN_064dd594(&stack0x00000360,in_stack_000000f0,1,0);
          if ((uVar15 & 1) == 0) goto LAB_064f4324;
        }
        if (in_stack_00000400 != '\0') {
          FUN_04666c20(&stack0x000001d0,&stack0x00000400,
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          uVar15 = FUN_064dd594(&stack0x00000360,in_stack_000000f0,1,0);
          if ((uVar15 & 1) == 0) goto LAB_064f4324;
        }
        if (*(char *)(unaff_x28 + 0x50) == '\0') {
          bVar7 = 1;
        }
        else {
          FUN_04666c20(&stack0x000001d0,(char *)(unaff_x28 + 0x50),
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          bVar7 = FUN_064dd594(&stack0x00000360,in_stack_000000f0,1,0);
        }
      }
      if (((unaff_w29 | bVar7 ^ 0xff) & 1) == 0) {
        in_stack_000000c8._4_4_ = in_stack_000003c0 + in_stack_000000e8[0xe];
        if (in_stack_000003e0 == '\0') {
          if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          unaff_w23 = FUN_03af2e24(uVar13,&stack0x000003c0,
                                   *(undefined8 *)
                                    System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                                  );
          goto joined_r0x064f46c8;
        }
        FUN_046610d4(&stack0x000003e0,
                     *(undefined8 *)
                      System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo);
        unaff_w23 = 0;
        if (0 < extraout_var) {
          iVar10 = 0;
          do {
            lVar20 = FUN_04884e1c(&stack0x00000350,iVar10,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                                 );
            if (lVar20 == 0) {
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_064f5614;
            }
            if (*(int *)(lVar20 + 0xe8) != -1) {
              iVar8 = FUN_03ae6f80(lVar20,uVar13,0,&stack0x000003c0,
                                   *(undefined8 *)
                                    System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                                  );
              unaff_w23 = iVar8 + unaff_w23;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < extraout_var);
        }
        if ((bVar7 & 1) == 0) goto LAB_064f445c;
LAB_064f4528:
        uVar13 = FUN_064dcd48(in_stack_000000f0,0);
        uVar15 = FUN_057bebf8(uVar13,0);
        if ((uVar15 & 1) == 0) {
          iVar10 = FUN_03ae3204(in_stack_000000e8,
                                **(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),uVar13,
                                in_stack_000000e8 + 0x2a,in_stack_000000e8,in_stack_00000090,
                                in_stack_000000f0,
                                *(undefined8 *)
                                 System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
          if (iVar10 == -1) {
            in_stack_000000d0 = 0;
          }
          else {
            in_stack_000000d0 = *in_stack_000000e8 - iVar10;
          }
        }
        else {
          in_stack_000000d0 = 0;
          iVar10 = -1;
        }
        if (unaff_x28 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        uVar15 = FUN_057bebf8(*(undefined8 *)(unaff_x28 + 0x30),0);
        unaff_w25 = iVar10;
        if (((uVar15 & 1) == 0) &&
           (iVar8 = FUN_03ae3204(in_stack_000000e8,
                                 **(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),
                                 *(undefined8 *)(unaff_x28 + 0x30),in_stack_000000e8 + 0x2a,
                                 in_stack_000000e8,in_stack_00000090,in_stack_000000f0,
                                 *(undefined8 *)
                                  System_Collections_Generic_HashSet<Event_Type>_TypeInfo),
           iVar8 != -1)) {
          unaff_w25 = iVar8;
          if (iVar10 != -1) {
            unaff_w25 = iVar10;
          }
          in_stack_000000d0 = (in_stack_000000d0 - iVar8) + *in_stack_000000e8;
        }
        if (bVar4) {
          uVar13 = FUN_064dcd30(in_stack_000000f0,0);
          uVar15 = FUN_057bebf8(uVar13,0);
          if ((uVar15 & 1) == 0) {
            iVar10 = FUN_03ae3204(in_stack_000000e8,
                                  **(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),uVar13,
                                  in_stack_000000e8 + 0x28,in_stack_00000030,in_stack_00000090,
                                  in_stack_000000f0,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                 );
            if (iVar10 == -1) {
              unaff_w20 = 0;
            }
            else {
              unaff_w20 = *in_stack_00000030 - iVar10;
            }
          }
          else {
            unaff_w20 = 0;
            iVar10 = -1;
          }
          uVar15 = FUN_057bebf8(*(undefined8 *)(unaff_x28 + 0x38),0);
          unaff_w21 = iVar10;
          if (((uVar15 & 1) == 0) &&
             (iVar8 = FUN_03ae3204(in_stack_000000e8,
                                   **(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),
                                   *(undefined8 *)(unaff_x28 + 0x38),in_stack_000000e8 + 0x28,
                                   in_stack_00000030,in_stack_00000090,in_stack_000000f0,
                                   *(undefined8 *)
                                    System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                  ), iVar8 != -1)) {
            unaff_w21 = iVar8;
            if (iVar10 != -1) {
              unaff_w21 = iVar10;
            }
            unaff_w20 = (unaff_w20 - iVar8) + *in_stack_00000030;
          }
        }
        else if (uVar2 == 0xffffffff) {
          unaff_w20 = 0;
          unaff_w21 = -1;
        }
        else {
          lVar18 = in_stack_00000498 + (long)(int)uVar2 * 0x20;
          unaff_w21 = FUN_064d5f0c(lVar18,0);
          unaff_w20 = (uint)*(byte *)(lVar18 + 1);
        }
        if ((unaff_w29 & 1) == 0) {
          if ((bool)(bVar4 & bVar6)) {
            _iStack00000000000000d8 = 0;
            unaff_w26 = 0xffffffff;
            uStack00000000000000d4 = 0xffffffff;
            in_stack_00000088._4_4_ = 0xffffffff;
            goto LAB_064f48cc;
          }
        }
        else {
          uVar13 = FUN_064f5630(in_stack_000000f0,in_stack_00000090);
          in_stack_00000088._4_4_ =
               FUN_039bd098(in_stack_000000e8 + 0x2c,in_stack_00000028,uVar13,10,
                            *(undefined8 *)
                             System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_TypeInfo);
          in_stack_000000c8._4_4_ = in_stack_000003c0 + in_stack_000000e8[0xe];
          uStack00000000000000d4 = unaff_w24;
          _iStack00000000000000d8 = unaff_x28;
          unaff_w26 = uVar11;
        }
      }
      else {
        unaff_w23 = 0;
        in_stack_000000c8._4_4_ = 0;
joined_r0x064f46c8:
        if ((bVar7 & 1) != 0) goto LAB_064f4528;
LAB_064f445c:
        unaff_w20 = 0;
        unaff_w25 = -1;
        unaff_w21 = -1;
        in_stack_000000d0 = 0;
        uStack00000000000000d4 = uVar3;
        _iStack00000000000000d8 = lVar18;
        unaff_w26 = uVar2;
      }
      if (unaff_w26 == 0xffffffff) {
        bVar4 = true;
      }
      if ((!bVar4) && (0 < unaff_w23)) {
        uVar15 = FUN_057bebf8(*in_stack_000000f0,0);
        if ((uVar15 & 1) != 0) {
          memcpy(&stack0x000001d0,in_stack_000000f0,0x58);
          memcpy(&stack0x00000178,&stack0x000001d0,0x58);
          uVar13 = thunk_FUN_031edd38(
                                     UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                     );
          uVar13 = thunk_FUN_031c39fc(uVar13,&stack0x00000178);
          lVar18 = *(long *)(in_stack_000000e8 + 0x2c);
          if (lVar18 == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          }
          else if (in_stack_00000088._4_4_ < *(uint *)(lVar18 + 0x18)) {
            uVar19 = *(undefined8 *)(lVar18 + (long)(int)in_stack_00000088._4_4_ * 8 + 0x20);
            uVar14 = thunk_FUN_031edd38(
                                       System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo
                                       );
            uVar13 = FUN_057c02e8(uVar14,uVar13,uVar19,0);
            thunk_FUN_031edd38(PTR_DAT_070c4538);
            uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
            FUN_0592f61c(uVar14,uVar13,0);
            uVar13 = thunk_FUN_031edd38(
                                       System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                       );
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188b9c(uVar14,uVar13);
            }
          }
          else if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        lVar18 = *(long *)(in_stack_000000e8 + 0x2c);
        if (lVar18 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        if (*(uint *)(lVar18 + 0x18) <= in_stack_00000088._4_4_) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        uVar9 = FUN_064f5890(*(undefined8 *)(lVar18 + (long)(int)in_stack_00000088._4_4_ * 8 + 0x20)
                             ,*in_stack_000000f0,&stack0x0000046c);
        pbVar1 = (byte *)(in_stack_00000498 + (long)(int)unaff_w26 * 0x20);
        FUN_064dbf88(pbVar1,unaff_w23 + (uint)*pbVar1,0);
        iVar10 = FUN_064d6b44(pbVar1,0);
        goto LAB_064f48ec;
      }
      goto LAB_064f48cc;
    }
LAB_064f4324:
    unaff_w20 = 0;
    in_stack_000000c8._4_4_ = 0;
    in_stack_000000d0 = 0;
    unaff_w23 = 0;
    unaff_w21 = -1;
    unaff_w25 = -1;
    _iStack00000000000000d8 = lVar18;
    uStack00000000000000d4 = uVar3;
    unaff_w26 = uVar2;
LAB_064f48cc:
    in_ZR = unaff_w24 == 0xffffffff;
    in_w8 = in_stack_000000b8._4_4_;
  } while( true );
}


