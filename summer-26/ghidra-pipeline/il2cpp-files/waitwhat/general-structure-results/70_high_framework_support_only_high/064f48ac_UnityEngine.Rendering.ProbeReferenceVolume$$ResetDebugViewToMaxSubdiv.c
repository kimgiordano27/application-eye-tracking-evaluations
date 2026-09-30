/*
FUNCTION_NAME: UnityEngine.Rendering.ProbeReferenceVolume$$ResetDebugViewToMaxSubdiv
ENTRY_POINT: 064f48ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_Rendering_ProbeReferenceVolume__ResetDebugViewToMaxSubdiv(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int extraout_var;
  uint in_w8;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  uint unaff_w20;
  undefined8 uVar18;
  long lVar19;
  int unaff_w21;
  int iVar20;
  ulong unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int iVar21;
  uint unaff_w26;
  long unaff_x27;
  int iVar22;
  long unaff_x28;
  byte unaff_w29;
  short sVar23;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  int *in_stack_00000030;
  long in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
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
  int iStack00000000000000d0;
  uint uStack00000000000000d4;
  long in_stack_000000d8;
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
  
code_r0x064f48ac:
  uVar10 = unaff_w26;
  if (in_w8 != 1) goto LAB_064f47fc;
  in_stack_00000088._4_4_ = 0xffffffff;
  in_stack_000000d8 = 0;
  uStack00000000000000d4 = 0xffffffff;
  unaff_w26 = 0xffffffff;
LAB_064f48cc:
  do {
    iVar9 = unaff_w24 + in_stack_000000b8._4_4_;
    uVar8 = 0xffffffff;
    if (unaff_w24 == 0xffffffff) {
      iVar9 = -1;
    }
LAB_064f48ec:
    FUN_064dbef0(&stack0x00000540,in_stack_000000c8._4_4_,0);
    FUN_064dbf88(&stack0x00000540,unaff_w23,0);
    FUN_064dc018(&stack0x00000540,unaff_w21,0);
    FUN_064dc0bc(&stack0x00000540,unaff_w20,0);
    FUN_064dc14c(&stack0x00000540,unaff_w25,0);
    FUN_064dc1f0(&stack0x00000540,iStack00000000000000d0,0);
    FUN_064dc4dc(&stack0x00000540,unaff_w29 & 1,0);
    uVar10 = FUN_064d400c(in_stack_000000f0,0);
    FUN_064dc4fc(&stack0x00000540,uVar10 & 1,0);
    FUN_064dc544(&stack0x00000540,uVar8,0);
    FUN_064dc280(&stack0x00000540,iVar9,0);
    uVar10 = in_stack_00000088._4_4_;
    if ((unaff_w29 & 1) == 0) {
      uVar10 = unaff_w26;
    }
    FUN_064dc3b4(&stack0x00000540,uVar10,0);
    FUN_064dc324(&stack0x00000540,in_stack_000000e8[10],0);
    if (unaff_x28 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_064bafac(unaff_x28,0);
    }
    FUN_064dc51c(&stack0x00000540,uVar10 & 1,0);
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
      if (0 < (int)in_stack_00000078._4_4_) {
        uVar14 = 0;
        do {
          iVar9 = in_stack_000000e0._4_4_ + (int)uVar14;
          pbVar1 = (byte *)(in_stack_00000498 + (long)iVar9 * 0x20);
          uVar16 = (ulong)*pbVar1;
          if (uVar16 != 0) {
            lVar17 = (ulong)*(ushort *)(pbVar1 + 0xe) << 2;
            do {
              uVar16 = uVar16 - 1;
              *(int *)(lVar17 + in_stack_000004d0) = iVar9;
              lVar17 = lVar17 + 4;
            } while (uVar16 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != in_stack_00000078._4_4_);
      }
      lVar17 = (long)in_stack_000000e8[0xc];
      if (in_stack_000000e8[0xc] < in_stack_00000480) {
        lVar19 = lVar17 * 0x30;
        do {
          FUN_064d6e90(lVar19 + in_stack_000004a0,1,0);
          FUN_064d6e98(lVar19 + in_stack_000004a0,0xffffffff,0);
          lVar17 = lVar17 + 1;
          lVar19 = lVar19 + 0x30;
        } while (lVar17 < in_stack_00000480);
      }
      if (0 < (int)in_stack_00000068._4_4_) {
        if (in_stack_00000098 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        iVar9 = in_stack_000000e8[0xd];
        uVar10 = 0;
        do {
          if (*(uint *)(in_stack_00000098 + 0x18) <= uVar10) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            goto LAB_064f5614;
          }
          lVar17 = *(long *)(in_stack_00000098 + (ulong)uVar10 * 8 + 0x20);
          if (lVar17 == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto LAB_064f5614;
          }
          sVar23 = 0;
          iVar22 = 0;
          iVar7 = uVar10 + in_stack_000000b8._4_4_;
          *(int *)(lVar17 + 0xc0) = iVar7;
          *(short *)(in_stack_000004c0 + (long)(iVar7 * 2) * 2) = (short)iVar9;
          if ((int)in_stack_00000078._4_4_ < 1) {
            iVar21 = 0;
          }
          else {
            iVar20 = -1;
            uVar14 = (ulong)in_stack_00000078._4_4_;
            iVar21 = in_stack_000000e0._4_4_;
            sVar23 = 0;
            do {
              pbVar1 = (byte *)(in_stack_00000498 + (long)iVar21 * 0x20);
              iVar11 = FUN_064d6b44(pbVar1,0);
              if ((iVar11 == iVar7) && (uVar16 = FUN_064d4bf4(pbVar1,0), (uVar16 & 1) == 0)) {
                iVar11 = iVar21;
                if (iVar20 != -1) {
                  iVar11 = iVar20;
                }
                *(short *)(in_stack_000004c8 + (long)iVar9 * 2) = (short)iVar21;
                uVar16 = FUN_064d588c(pbVar1,0);
                iVar9 = iVar9 + 1;
                sVar23 = sVar23 + 1;
                iVar20 = iVar11;
                if ((uVar16 & 1) == 0) {
                  iVar22 = iVar22 + (uint)*pbVar1;
                }
                else if (*pbVar1 != 0) {
                  iVar22 = iVar22 + 1;
                }
              }
              uVar14 = uVar14 - 1;
              iVar21 = iVar21 + 1;
            } while (uVar14 != 0);
            iVar21 = 0;
            if (iVar20 != -1) {
              iVar21 = iVar20;
            }
          }
          *(short *)(in_stack_000004c0 + (long)(int)(iVar7 * 2 | 1) * 2) = sVar23;
          iVar20 = *(int *)(lVar17 + 0x18);
          FUN_064d6b3c(&stack0x000004f0,0,0);
          FUN_064d6f10(&stack0x000004f0,in_stack_00000060,0);
          FUN_064d6d90(&stack0x000004f0,0xffffffff,0);
          FUN_064d6e24(&stack0x000004f0,0xffffffff,0);
          FUN_064d89f0(&stack0x000004f0,iVar20 == 2,0);
          FUN_064d8a1c(&stack0x000004f0,iVar20 == 1,0);
          FUN_064dc618(&stack0x000004f0,(iVar20 != 2 && iVar22 != 1) && (iVar20 == 2 || 0 < iVar22),
                       0);
          FUN_064d6ae0(&stack0x000004f0,iVar21,0);
          memmove((void *)(in_stack_00000490 + (long)iVar7 * 0x44),&stack0x000004f0,0x44);
          uVar10 = uVar10 + 1;
        } while (uVar10 != in_stack_00000068._4_4_);
      }
      piVar15 = (int *)(in_stack_000004e8 + (long)(int)in_stack_00000060 * 0x30);
      iVar22 = *in_stack_000000e8;
      iVar9 = in_stack_000000e8[1];
      iVar7 = in_stack_000000e8[2];
      *piVar15 = in_stack_000000b8._4_4_;
      piVar15[1] = in_stack_00000068._4_4_;
      piVar15[2] = iStack0000000000000010;
      piVar15[3] = in_stack_000003c0;
      piVar15[4] = in_stack_000000e0._4_4_;
      piVar15[5] = in_stack_00000078._4_4_;
      piVar15[6] = iStack000000000000001c;
      piVar15[7] = iVar7 - iStack000000000000001c;
      piVar15[8] = iStack0000000000000014;
      piVar15[9] = iVar22 - iStack0000000000000014;
      piVar15[10] = iStack0000000000000018;
      piVar15[0xb] = iVar9 - iStack0000000000000018;
      puVar4 = System_Collections_Generic_HashSet<CAPI_ovrAvatar2Id>_TypeInfo;
      *(int *)(in_stack_00000090 + 0x58) = (int)in_stack_00000060;
      FUN_039bd098(in_stack_000000e8 + 4,&stack0x000003b8,in_stack_00000090,4,*(undefined8 *)puVar4)
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
    uVar10 = in_stack_000000e0._4_4_ + (int)unaff_x22;
    if ((unaff_w29 & 1) == 0) {
      uVar14 = FUN_064d400c(in_stack_000000f0,0);
      bVar5 = unaff_w26 != 0xffffffff;
      if (((uVar14 & 1) != 0) && (unaff_w26 == 0xffffffff)) {
        memcpy(&stack0x000001d0,in_stack_000000f0,0x58);
        memcpy(&stack0x00000178,&stack0x000001d0,0x58);
        uVar12 = thunk_FUN_031edd38(
                                   UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                   );
        uVar12 = thunk_FUN_031c39fc(uVar12,&stack0x00000178);
        uVar13 = thunk_FUN_031edd38(
                                   System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_TypeInfo
                                   );
        uVar12 = FUN_057b5e54(uVar13,uVar12,0);
        thunk_FUN_031edd38(PTR_DAT_070c4538);
        uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        FUN_0592f61c(uVar13,uVar12,0);
        uVar12 = thunk_FUN_031edd38(
                                   System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                   );
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar13,uVar12);
        }
        goto LAB_064f5614;
      }
      in_stack_000000c0 = (undefined8 *)(in_stack_00000498 + (long)(int)uVar10 * 0x20);
      if ((uVar14 & 1) == 0) goto LAB_064f4264;
      in_stack_00000058._4_4_ = 0;
      unaff_x28 = in_stack_000000d8;
      unaff_w24 = uStack00000000000000d4;
    }
    else {
      bVar5 = unaff_w26 != 0xffffffff;
      in_stack_000000c0 = (undefined8 *)(in_stack_00000498 + (long)(int)uVar10 * 0x20);
LAB_064f4264:
      if (in_stack_00000048 == 0) {
        uVar12 = *(undefined8 *)(in_stack_00000080 + unaff_x22 * 0x58 + 0x30);
        uVar14 = FUN_057bebf8(uVar12,0);
        if ((uVar14 & 1) == 0) {
          unaff_w24 = FUN_064c0e60(in_stack_00000090,uVar12,0);
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
      in_stack_00000058._4_4_ = 1;
    }
    uVar2 = uVar10;
    uVar3 = unaff_w24;
    lVar17 = unaff_x28;
    if ((unaff_w29 & 1) == 0) {
      uVar2 = unaff_w26;
      uVar3 = uStack00000000000000d4;
      lVar17 = in_stack_000000d8;
    }
    uVar12 = FUN_064d5748(in_stack_000000f0,0);
    uVar14 = FUN_057bebf8(uVar12,0);
    if ((uVar14 & 1) == 0) {
      bVar6 = unaff_x28 != 0;
      if ((bool)bVar6 && (unaff_w29 & 1) == 0) {
        if ((char)in_stack_000000e8[0x2e] != '\0') {
          FUN_04666c20(&stack0x000001d0,in_stack_000000e8 + 0x2e,
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          uVar14 = FUN_064dd594(&stack0x00000360,in_stack_000000f0,1,0);
          if ((uVar14 & 1) == 0) goto LAB_064f4324;
        }
        if (in_stack_00000400 != '\0') {
          FUN_04666c20(&stack0x000001d0,&stack0x00000400,
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          uVar14 = FUN_064dd594(&stack0x00000360,in_stack_000000f0,1,0);
          if ((uVar14 & 1) == 0) goto LAB_064f4324;
        }
        if (*(char *)(unaff_x28 + 0x50) == '\0') {
          bVar6 = 1;
        }
        else {
          FUN_04666c20(&stack0x000001d0,(char *)(unaff_x28 + 0x50),
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          bVar6 = FUN_064dd594(&stack0x00000360,in_stack_000000f0,1,0);
        }
      }
      unaff_x27 = in_stack_00000498;
      if (((unaff_w29 | bVar6 ^ 0xff) & 1) == 0) {
        in_stack_000000c8._4_4_ = in_stack_000003c0 + in_stack_000000e8[0xe];
        if (in_stack_000003e0 == '\0') {
          if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          unaff_w23 = FUN_03af2e24(uVar12,&stack0x000003c0,
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
          iVar9 = 0;
          do {
            lVar19 = FUN_04884e1c(&stack0x00000350,iVar9,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                                 );
            if (lVar19 == 0) {
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_064f5614;
            }
            if (*(int *)(lVar19 + 0xe8) != -1) {
              iVar7 = FUN_03ae6f80(lVar19,uVar12,0,&stack0x000003c0,
                                   *(undefined8 *)
                                    System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                                  );
              unaff_w23 = iVar7 + unaff_w23;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < extraout_var);
        }
        if ((bVar6 & 1) == 0) goto LAB_064f445c;
LAB_064f4528:
        uVar12 = FUN_064dcd48(in_stack_000000f0,0);
        uVar14 = FUN_057bebf8(uVar12,0);
        if ((uVar14 & 1) == 0) {
          iVar9 = FUN_03ae3204(in_stack_000000e8,**(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8)
                               ,uVar12,in_stack_000000e8 + 0x2a,in_stack_000000e8,in_stack_00000090,
                               in_stack_000000f0,
                               *(undefined8 *)
                                System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
          if (iVar9 == -1) {
            iStack00000000000000d0 = 0;
          }
          else {
            iStack00000000000000d0 = *in_stack_000000e8 - iVar9;
          }
        }
        else {
          iStack00000000000000d0 = 0;
          iVar9 = -1;
        }
        if (unaff_x28 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        uVar14 = FUN_057bebf8(*(undefined8 *)(unaff_x28 + 0x30),0);
        unaff_w25 = iVar9;
        if (((uVar14 & 1) == 0) &&
           (iVar7 = FUN_03ae3204(in_stack_000000e8,
                                 **(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),
                                 *(undefined8 *)(unaff_x28 + 0x30),in_stack_000000e8 + 0x2a,
                                 in_stack_000000e8,in_stack_00000090,in_stack_000000f0,
                                 *(undefined8 *)
                                  System_Collections_Generic_HashSet<Event_Type>_TypeInfo),
           iVar7 != -1)) {
          unaff_w25 = iVar7;
          if (iVar9 != -1) {
            unaff_w25 = iVar9;
          }
          iStack00000000000000d0 = (iStack00000000000000d0 - iVar7) + *in_stack_000000e8;
        }
        if (in_stack_00000058._4_4_ == 0) {
          if (uVar2 == 0xffffffff) {
            unaff_w20 = 0;
            unaff_w21 = -1;
          }
          else {
            lVar17 = in_stack_00000498 + (long)(int)uVar2 * 0x20;
            unaff_w21 = FUN_064d5f0c(lVar17,0);
            unaff_w20 = (uint)*(byte *)(lVar17 + 1);
          }
        }
        else {
          uVar12 = FUN_064dcd30(in_stack_000000f0,0);
          uVar14 = FUN_057bebf8(uVar12,0);
          if ((uVar14 & 1) == 0) {
            iVar9 = FUN_03ae3204(in_stack_000000e8,
                                 **(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),uVar12,
                                 in_stack_000000e8 + 0x28,in_stack_00000030,in_stack_00000090,
                                 in_stack_000000f0,
                                 *(undefined8 *)
                                  System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                );
            if (iVar9 == -1) {
              unaff_w20 = 0;
            }
            else {
              unaff_w20 = *in_stack_00000030 - iVar9;
            }
          }
          else {
            unaff_w20 = 0;
            iVar9 = -1;
          }
          uVar14 = FUN_057bebf8(*(undefined8 *)(unaff_x28 + 0x38),0);
          unaff_w21 = iVar9;
          if (((uVar14 & 1) == 0) &&
             (iVar7 = FUN_03ae3204(in_stack_000000e8,
                                   **(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),
                                   *(undefined8 *)(unaff_x28 + 0x38),in_stack_000000e8 + 0x28,
                                   in_stack_00000030,in_stack_00000090,in_stack_000000f0,
                                   *(undefined8 *)
                                    System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                  ), iVar7 != -1)) {
            unaff_w21 = iVar7;
            if (iVar9 != -1) {
              unaff_w21 = iVar9;
            }
            unaff_w20 = (unaff_w20 - iVar7) + *in_stack_00000030;
          }
        }
        if ((unaff_w29 & 1) == 0) {
          in_w8 = in_stack_00000058._4_4_ & bVar5;
          goto code_r0x064f48ac;
        }
        uVar12 = FUN_064f5630(in_stack_000000f0,in_stack_00000090);
        in_stack_00000088._4_4_ =
             FUN_039bd098(in_stack_000000e8 + 0x2c,in_stack_00000028,uVar12,10,
                          *(undefined8 *)
                           System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_TypeInfo);
        in_stack_000000c8._4_4_ = in_stack_000003c0 + in_stack_000000e8[0xe];
        uStack00000000000000d4 = unaff_w24;
        in_stack_000000d8 = unaff_x28;
      }
      else {
        unaff_w23 = 0;
        in_stack_000000c8._4_4_ = 0;
joined_r0x064f46c8:
        if ((bVar6 & 1) != 0) goto LAB_064f4528;
LAB_064f445c:
        unaff_w20 = 0;
        unaff_w25 = -1;
        unaff_w21 = -1;
        iStack00000000000000d0 = 0;
        uStack00000000000000d4 = uVar3;
        in_stack_000000d8 = lVar17;
        uVar10 = uVar2;
      }
LAB_064f47fc:
      if (uVar10 == 0xffffffff) {
        in_stack_00000058._4_4_ = 1;
      }
      unaff_w26 = uVar10;
      if (((in_stack_00000058._4_4_ & 1) == 0) && (0 < unaff_w23)) {
        uVar14 = FUN_057bebf8(*in_stack_000000f0,0);
        if ((uVar14 & 1) != 0) {
          memcpy(&stack0x000001d0,in_stack_000000f0,0x58);
          memcpy(&stack0x00000178,&stack0x000001d0,0x58);
          uVar12 = thunk_FUN_031edd38(
                                     UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                     );
          uVar12 = thunk_FUN_031c39fc(uVar12,&stack0x00000178);
          lVar17 = *(long *)(in_stack_000000e8 + 0x2c);
          if (lVar17 == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
          }
          else if (in_stack_00000088._4_4_ < *(uint *)(lVar17 + 0x18)) {
            uVar18 = *(undefined8 *)(lVar17 + (long)(int)in_stack_00000088._4_4_ * 8 + 0x20);
            uVar13 = thunk_FUN_031edd38(
                                       System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo
                                       );
            uVar12 = FUN_057c02e8(uVar13,uVar12,uVar18,0);
            thunk_FUN_031edd38(PTR_DAT_070c4538);
            uVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
            FUN_0592f61c(uVar13,uVar12,0);
            uVar12 = thunk_FUN_031edd38(
                                       System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                       );
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
              FUN_03188b9c(uVar13,uVar12);
            }
          }
          else if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        lVar17 = *(long *)(in_stack_000000e8 + 0x2c);
        if (lVar17 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        if (*(uint *)(lVar17 + 0x18) <= in_stack_00000088._4_4_) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        uVar8 = FUN_064f5890(*(undefined8 *)(lVar17 + (long)(int)in_stack_00000088._4_4_ * 8 + 0x20)
                             ,*in_stack_000000f0,&stack0x0000046c);
        pbVar1 = (byte *)(unaff_x27 + (long)(int)uVar10 * 0x20);
        FUN_064dbf88(pbVar1,unaff_w23 + (uint)*pbVar1,0);
        iVar9 = FUN_064d6b44(pbVar1,0);
        goto LAB_064f48ec;
      }
      goto LAB_064f48cc;
    }
LAB_064f4324:
    unaff_w20 = 0;
    in_stack_000000c8._4_4_ = 0;
    iStack00000000000000d0 = 0;
    unaff_w23 = 0;
    unaff_w21 = -1;
    unaff_w25 = -1;
    in_stack_000000d8 = lVar17;
    uStack00000000000000d4 = uVar3;
    unaff_w26 = uVar2;
  } while( true );
}


