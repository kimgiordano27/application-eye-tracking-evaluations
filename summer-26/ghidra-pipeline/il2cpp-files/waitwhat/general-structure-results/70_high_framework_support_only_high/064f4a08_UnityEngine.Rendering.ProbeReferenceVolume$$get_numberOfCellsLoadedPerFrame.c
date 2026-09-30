/*
FUNCTION_NAME: UnityEngine.Rendering.ProbeReferenceVolume$$get_numberOfCellsLoadedPerFrame
ENTRY_POINT: 064f4a08
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


void UnityEngine_Rendering_ProbeReferenceVolume__get_numberOfCellsLoadedPerFrame
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 *__src;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  int extraout_var;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong unaff_x22;
  uint unaff_w26;
  int *unaff_x27;
  short sVar28;
  undefined8 uVar29;
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
  undefined8 *puStack00000000000000c0;
  int iStack00000000000000cc;
  int iStack00000000000000d0;
  uint uStack00000000000000d4;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  int *in_stack_000000e8;
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
  
  uVar29 = param_3._8_8_;
  uVar26 = param_3._0_8_;
  uVar19 = param_2._8_8_;
  uVar17 = param_2._0_8_;
  puStack00000000000000c0 = param_1;
  while( true ) {
    puStack00000000000000c0[1] = uVar29;
    *puStack00000000000000c0 = uVar26;
    puStack00000000000000c0[3] = uVar19;
    puStack00000000000000c0[2] = uVar17;
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == in_stack_00000050) break;
    if (*(uint *)(in_stack_00000070 + 0x18) <= unaff_x22) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      goto LAB_064f5614;
    }
    __src = (undefined8 *)(in_stack_00000080 + unaff_x22 * 0x58);
    bVar8 = FUN_064d1d88(__src,0);
    uVar15 = in_stack_000000e0._4_4_ + (int)unaff_x22;
    if ((bVar8 & 1) == 0) {
      uVar20 = FUN_064d400c(__src,0);
      bVar6 = unaff_w26 != 0xffffffff;
      if (((uVar20 & 1) != 0) && (unaff_w26 == 0xffffffff)) {
        memcpy(&stack0x000001d0,__src,0x58);
        memcpy(&stack0x00000178,&stack0x000001d0,0x58);
        uVar17 = thunk_FUN_031edd38(
                                   UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                   );
        uVar17 = thunk_FUN_031c39fc(uVar17,&stack0x00000178);
        uVar19 = thunk_FUN_031edd38(
                                   System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_TypeInfo
                                   );
        uVar17 = FUN_057b5e54(uVar19,uVar17,0);
        thunk_FUN_031edd38(PTR_DAT_070c4538);
        uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        FUN_0592f61c(uVar19,uVar17,0);
        uVar17 = thunk_FUN_031edd38(
                                   System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                   );
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar19,uVar17);
        }
        goto LAB_064f5614;
      }
      puStack00000000000000c0 = (undefined8 *)(in_stack_00000498 + (long)(int)uVar15 * 0x20);
      if ((uVar20 & 1) == 0) goto LAB_064f4264;
      bVar4 = false;
      lVar23 = in_stack_000000d8;
      uVar9 = uStack00000000000000d4;
    }
    else {
      bVar6 = unaff_w26 != 0xffffffff;
      puStack00000000000000c0 = (undefined8 *)(in_stack_00000498 + (long)(int)uVar15 * 0x20);
LAB_064f4264:
      if (in_stack_00000048 == 0) {
        uVar17 = *(undefined8 *)(in_stack_00000080 + unaff_x22 * 0x58 + 0x30);
        uVar20 = FUN_057bebf8(uVar17,0);
        if ((uVar20 & 1) == 0) {
          uVar9 = FUN_064c0e60(in_stack_00000090,uVar17,0);
          if (uVar9 != 0xffffffff) goto LAB_064f4274;
          lVar23 = 0;
        }
        else {
          lVar23 = 0;
          uVar9 = 0xffffffff;
        }
      }
      else {
        uVar9 = 0;
LAB_064f4274:
        if (in_stack_00000098 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        if (*(uint *)(in_stack_00000098 + 0x18) <= uVar9) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          goto LAB_064f5614;
        }
        lVar23 = *(long *)(in_stack_00000098 + (long)(int)uVar9 * 8 + 0x20);
      }
      bVar4 = true;
    }
    uVar2 = uVar15;
    uVar3 = uVar9;
    lVar27 = lVar23;
    if ((bVar8 & 1) == 0) {
      uVar2 = unaff_w26;
      uVar3 = uStack00000000000000d4;
      lVar27 = in_stack_000000d8;
    }
    uVar17 = FUN_064d5748(__src,0);
    uVar20 = FUN_057bebf8(uVar17,0);
    if ((uVar20 & 1) == 0) {
      bVar7 = lVar23 != 0;
      if ((bool)bVar7 && (bVar8 & 1) == 0) {
        if ((char)in_stack_000000e8[0x2e] != '\0') {
          FUN_04666c20(&stack0x000001d0,in_stack_000000e8 + 0x2e,
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          uVar20 = FUN_064dd594(&stack0x00000360,__src,1,0);
          if ((uVar20 & 1) == 0) goto LAB_064f4324;
        }
        if (in_stack_00000400 != '\0') {
          FUN_04666c20(&stack0x000001d0,&stack0x00000400,
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          uVar20 = FUN_064dd594(&stack0x00000360,__src,1,0);
          if ((uVar20 & 1) == 0) goto LAB_064f4324;
        }
        if (*(char *)(lVar23 + 0x50) == '\0') {
          bVar7 = 1;
        }
        else {
          FUN_04666c20(&stack0x000001d0,(char *)(lVar23 + 0x50),
                       *(undefined8 *)
                        System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo
                      );
          memcpy(&stack0x00000360,&stack0x000001d0,0x58);
          bVar7 = FUN_064dd594(&stack0x00000360,__src,1,0);
        }
      }
      if (((bVar8 | bVar7 ^ 0xff) & 1) == 0) {
        iStack00000000000000cc = in_stack_000003c0 + in_stack_000000e8[0xe];
        if (in_stack_000003e0 == '\0') {
          if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          iVar11 = FUN_03af2e24(uVar17,&stack0x000003c0,
                                *(undefined8 *)
                                 System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                               );
          goto joined_r0x064f46c8;
        }
        FUN_046610d4(&stack0x000003e0,
                     *(undefined8 *)
                      System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo);
        iVar11 = 0;
        if (0 < extraout_var) {
          iVar24 = 0;
          do {
            lVar18 = FUN_04884e1c(&stack0x00000350,iVar24,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                                 );
            if (lVar18 == 0) {
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              goto LAB_064f5614;
            }
            if (*(int *)(lVar18 + 0xe8) != -1) {
              iVar10 = FUN_03ae6f80(lVar18,uVar17,0,&stack0x000003c0,
                                    *(undefined8 *)
                                     System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                                   );
              iVar11 = iVar10 + iVar11;
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 < extraout_var);
        }
        if ((bVar7 & 1) == 0) goto LAB_064f445c;
LAB_064f4528:
        uVar17 = FUN_064dcd48(__src,0);
        uVar20 = FUN_057bebf8(uVar17,0);
        if ((uVar20 & 1) == 0) {
          iVar10 = FUN_03ae3204(in_stack_000000e8,
                                **(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),uVar17,
                                in_stack_000000e8 + 0x2a,in_stack_000000e8,in_stack_00000090,__src,
                                *(undefined8 *)
                                 System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
          if (iVar10 == -1) {
            iStack00000000000000d0 = 0;
          }
          else {
            iStack00000000000000d0 = *in_stack_000000e8 - iVar10;
          }
        }
        else {
          iStack00000000000000d0 = 0;
          iVar10 = -1;
        }
        if (lVar23 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_064f5614;
        }
        uVar20 = FUN_057bebf8(*(undefined8 *)(lVar23 + 0x30),0);
        iVar24 = iVar10;
        if (((uVar20 & 1) == 0) &&
           (iVar14 = FUN_03ae3204(in_stack_000000e8,
                                  **(undefined8 **)(*(long *)PTR_DAT_070f1eb8 + 0xb8),
                                  *(undefined8 *)(lVar23 + 0x30),in_stack_000000e8 + 0x2a,
                                  in_stack_000000e8,in_stack_00000090,__src,
                                  *(undefined8 *)
                                   System_Collections_Generic_HashSet<Event_Type>_TypeInfo),
           iVar14 != -1)) {
          iVar24 = iVar14;
          if (iVar10 != -1) {
            iVar24 = iVar10;
          }
          iStack00000000000000d0 = (iStack00000000000000d0 - iVar14) + *in_stack_000000e8;
        }
        if (bVar4) {
          uVar17 = FUN_064dcd30(__src,0);
          uVar20 = FUN_057bebf8(uVar17,0);
          if ((uVar20 & 1) == 0) {
            iVar14 = FUN_03ae3204(in_stack_000000e8,
                                  **(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),uVar17,
                                  in_stack_000000e8 + 0x28,in_stack_00000030,in_stack_00000090,__src
                                  ,*(undefined8 *)
                                    System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                 );
            if (iVar14 == -1) {
              uVar25 = 0;
            }
            else {
              uVar25 = *in_stack_00000030 - iVar14;
            }
          }
          else {
            uVar25 = 0;
            iVar14 = -1;
          }
          uVar20 = FUN_057bebf8(*(undefined8 *)(lVar23 + 0x38),0);
          iVar10 = iVar14;
          if (((uVar20 & 1) == 0) &&
             (iVar12 = FUN_03ae3204(in_stack_000000e8,
                                    **(undefined8 **)(*(long *)PTR_DAT_070f1ea8 + 0xb8),
                                    *(undefined8 *)(lVar23 + 0x38),in_stack_000000e8 + 0x28,
                                    in_stack_00000030,in_stack_00000090,__src,
                                    *(undefined8 *)
                                     System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_TypeInfo
                                   ), iVar12 != -1)) {
            iVar10 = iVar12;
            if (iVar14 != -1) {
              iVar10 = iVar14;
            }
            uVar25 = (uVar25 - iVar12) + *in_stack_00000030;
          }
        }
        else if (uVar2 == 0xffffffff) {
          uVar25 = 0;
          iVar10 = -1;
        }
        else {
          lVar27 = in_stack_00000498 + (long)(int)uVar2 * 0x20;
          iVar10 = FUN_064d5f0c(lVar27,0);
          uVar25 = (uint)*(byte *)(lVar27 + 1);
        }
        if ((bVar8 & 1) == 0) {
          if ((bool)(bVar4 & bVar6)) {
            in_stack_000000d8 = 0;
            unaff_w26 = 0xffffffff;
            uStack00000000000000d4 = 0xffffffff;
            in_stack_00000088._4_4_ = 0xffffffff;
            goto LAB_064f48cc;
          }
        }
        else {
          uVar17 = FUN_064f5630(__src,in_stack_00000090);
          in_stack_00000088._4_4_ =
               FUN_039bd098(in_stack_000000e8 + 0x2c,in_stack_00000028,uVar17,10,
                            *(undefined8 *)
                             System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_TypeInfo);
          iStack00000000000000cc = in_stack_000003c0 + in_stack_000000e8[0xe];
          uStack00000000000000d4 = uVar9;
          in_stack_000000d8 = lVar23;
          unaff_w26 = uVar15;
        }
      }
      else {
        iVar11 = 0;
        iStack00000000000000cc = 0;
joined_r0x064f46c8:
        if ((bVar7 & 1) != 0) goto LAB_064f4528;
LAB_064f445c:
        uVar25 = 0;
        iVar24 = -1;
        iVar10 = -1;
        iStack00000000000000d0 = 0;
        uStack00000000000000d4 = uVar3;
        in_stack_000000d8 = lVar27;
        unaff_w26 = uVar2;
      }
      if (unaff_w26 == 0xffffffff) {
        bVar4 = true;
      }
      if ((bVar4) || (iVar11 < 1)) goto LAB_064f48cc;
      uVar20 = FUN_057bebf8(*__src,0);
      if ((uVar20 & 1) != 0) {
        memcpy(&stack0x000001d0,__src,0x58);
        memcpy(&stack0x00000178,&stack0x000001d0,0x58);
        uVar17 = thunk_FUN_031edd38(
                                   UnityEngine_UIElements_EventCallback<MouseLeaveWindowEvent>_TypeInfo
                                   );
        uVar17 = thunk_FUN_031c39fc(uVar17,&stack0x00000178);
        lVar23 = *(long *)(in_stack_000000e8 + 0x2c);
        if (lVar23 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
        }
        else if (in_stack_00000088._4_4_ < *(uint *)(lVar23 + 0x18)) {
          uVar26 = *(undefined8 *)(lVar23 + (long)(int)in_stack_00000088._4_4_ * 8 + 0x20);
          uVar19 = thunk_FUN_031edd38(
                                     System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo
                                     );
          uVar17 = FUN_057c02e8(uVar19,uVar17,uVar26,0);
          thunk_FUN_031edd38(PTR_DAT_070c4538);
          uVar19 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          FUN_0592f61c(uVar19,uVar17,0);
          uVar17 = thunk_FUN_031edd38(
                                     System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_TypeInfo
                                     );
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar19,uVar17);
          }
        }
        else if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_064f5614;
      }
      lVar27 = *(long *)(in_stack_000000e8 + 0x2c);
      if (lVar27 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_064f5614;
      }
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00000088._4_4_) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_064f5614;
      }
      uVar13 = FUN_064f5890(*(undefined8 *)(lVar27 + (long)(int)in_stack_00000088._4_4_ * 8 + 0x20),
                            *__src,&stack0x0000046c);
      pbVar1 = (byte *)(in_stack_00000498 + (long)(int)unaff_w26 * 0x20);
      FUN_064dbf88(pbVar1,iVar11 + (uint)*pbVar1,0);
      iVar14 = FUN_064d6b44(pbVar1,0);
    }
    else {
LAB_064f4324:
      uVar25 = 0;
      iStack00000000000000cc = 0;
      iStack00000000000000d0 = 0;
      iVar11 = 0;
      iVar10 = -1;
      iVar24 = -1;
      in_stack_000000d8 = lVar27;
      uStack00000000000000d4 = uVar3;
      unaff_w26 = uVar2;
LAB_064f48cc:
      iVar14 = uVar9 + in_stack_000000b8._4_4_;
      uVar13 = 0xffffffff;
      if (uVar9 == 0xffffffff) {
        iVar14 = -1;
      }
    }
    FUN_064dbef0(&stack0x00000540,iStack00000000000000cc,0);
    FUN_064dbf88(&stack0x00000540,iVar11,0);
    FUN_064dc018(&stack0x00000540,iVar10,0);
    FUN_064dc0bc(&stack0x00000540,uVar25,0);
    FUN_064dc14c(&stack0x00000540,iVar24,0);
    FUN_064dc1f0(&stack0x00000540,iStack00000000000000d0,0);
    FUN_064dc4dc(&stack0x00000540,bVar8 & 1,0);
    uVar15 = FUN_064d400c(__src,0);
    FUN_064dc4fc(&stack0x00000540,uVar15 & 1,0);
    FUN_064dc544(&stack0x00000540,uVar13,0);
    FUN_064dc280(&stack0x00000540,iVar14,0);
    uVar15 = in_stack_00000088._4_4_;
    if ((bVar8 & 1) == 0) {
      uVar15 = unaff_w26;
    }
    FUN_064dc3b4(&stack0x00000540,uVar15,0);
    FUN_064dc324(&stack0x00000540,in_stack_000000e8[10],0);
    if (lVar23 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_064bafac(lVar23,0);
    }
    FUN_064dc51c(&stack0x00000540,uVar15 & 1,0);
    uVar29 = 0;
    uVar26 = 0;
    uVar19 = 0;
    uVar17 = 0;
    unaff_x27 = in_stack_000000e8;
  }
  if (((in_stack_00000480 != unaff_x27[2]) || (in_stack_0000048c != unaff_x27[1])) ||
     (in_stack_00000488 != unaff_x27[0xe] + in_stack_000003c0)) {
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
  FUN_039bc210(unaff_x27 + 6,&stack0x000003bc,&stack0x000001d0,10,
               *(undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
  if (0 < (int)in_stack_00000078._4_4_) {
    uVar20 = 0;
    do {
      iVar11 = in_stack_000000e0._4_4_ + (int)uVar20;
      pbVar1 = (byte *)(in_stack_00000498 + (long)iVar11 * 0x20);
      uVar22 = (ulong)*pbVar1;
      if (uVar22 != 0) {
        lVar23 = (ulong)*(ushort *)(pbVar1 + 0xe) << 2;
        do {
          uVar22 = uVar22 - 1;
          *(int *)(lVar23 + in_stack_000004d0) = iVar11;
          lVar23 = lVar23 + 4;
        } while (uVar22 != 0);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != in_stack_00000078._4_4_);
  }
  lVar23 = (long)unaff_x27[0xc];
  if (unaff_x27[0xc] < in_stack_00000480) {
    lVar27 = lVar23 * 0x30;
    do {
      FUN_064d6e90(lVar27 + in_stack_000004a0,1,0);
      FUN_064d6e98(lVar27 + in_stack_000004a0,0xffffffff,0);
      lVar23 = lVar23 + 1;
      lVar27 = lVar27 + 0x30;
    } while (lVar23 < in_stack_00000480);
  }
  if (0 < (int)in_stack_00000068._4_4_) {
    if (in_stack_00000098 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_064f5614;
    }
    iVar11 = unaff_x27[0xd];
    uVar15 = 0;
    do {
      if (*(uint *)(in_stack_00000098 + 0x18) <= uVar15) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_064f5614;
      }
      lVar23 = *(long *)(in_stack_00000098 + (ulong)uVar15 * 8 + 0x20);
      if (lVar23 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000568) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_064f5614;
      }
      sVar28 = 0;
      iVar10 = 0;
      iVar24 = uVar15 + in_stack_000000b8._4_4_;
      *(int *)(lVar23 + 0xc0) = iVar24;
      *(short *)(in_stack_000004c0 + (long)(iVar24 * 2) * 2) = (short)iVar11;
      if ((int)in_stack_00000078._4_4_ < 1) {
        iVar14 = 0;
      }
      else {
        iVar12 = -1;
        uVar20 = (ulong)in_stack_00000078._4_4_;
        iVar14 = in_stack_000000e0._4_4_;
        sVar28 = 0;
        do {
          pbVar1 = (byte *)(in_stack_00000498 + (long)iVar14 * 0x20);
          iVar16 = FUN_064d6b44(pbVar1,0);
          if ((iVar16 == iVar24) && (uVar22 = FUN_064d4bf4(pbVar1,0), (uVar22 & 1) == 0)) {
            iVar16 = iVar14;
            if (iVar12 != -1) {
              iVar16 = iVar12;
            }
            *(short *)(in_stack_000004c8 + (long)iVar11 * 2) = (short)iVar14;
            uVar22 = FUN_064d588c(pbVar1,0);
            iVar11 = iVar11 + 1;
            sVar28 = sVar28 + 1;
            iVar12 = iVar16;
            if ((uVar22 & 1) == 0) {
              iVar10 = iVar10 + (uint)*pbVar1;
            }
            else if (*pbVar1 != 0) {
              iVar10 = iVar10 + 1;
            }
          }
          uVar20 = uVar20 - 1;
          iVar14 = iVar14 + 1;
        } while (uVar20 != 0);
        iVar14 = 0;
        if (iVar12 != -1) {
          iVar14 = iVar12;
        }
      }
      *(short *)(in_stack_000004c0 + (long)(int)(iVar24 * 2 | 1) * 2) = sVar28;
      iVar12 = *(int *)(lVar23 + 0x18);
      FUN_064d6b3c(&stack0x000004f0,0,0);
      FUN_064d6f10(&stack0x000004f0,in_stack_00000060,0);
      FUN_064d6d90(&stack0x000004f0,0xffffffff,0);
      FUN_064d6e24(&stack0x000004f0,0xffffffff,0);
      FUN_064d89f0(&stack0x000004f0,iVar12 == 2,0);
      FUN_064d8a1c(&stack0x000004f0,iVar12 == 1,0);
      FUN_064dc618(&stack0x000004f0,(iVar12 != 2 && iVar10 != 1) && (iVar12 == 2 || 0 < iVar10),0);
      FUN_064d6ae0(&stack0x000004f0,iVar14,0);
      memmove((void *)(in_stack_00000490 + (long)iVar24 * 0x44),&stack0x000004f0,0x44);
      uVar15 = uVar15 + 1;
      unaff_x27 = in_stack_000000e8;
    } while (uVar15 != in_stack_00000068._4_4_);
  }
  piVar21 = (int *)(in_stack_000004e8 + (long)(int)in_stack_00000060 * 0x30);
  iVar10 = *unaff_x27;
  iVar11 = unaff_x27[1];
  iVar24 = unaff_x27[2];
  *piVar21 = in_stack_000000b8._4_4_;
  piVar21[1] = in_stack_00000068._4_4_;
  piVar21[2] = iStack0000000000000010;
  piVar21[3] = in_stack_000003c0;
  piVar21[4] = in_stack_000000e0._4_4_;
  piVar21[5] = in_stack_00000078._4_4_;
  piVar21[6] = iStack000000000000001c;
  piVar21[7] = iVar24 - iStack000000000000001c;
  piVar21[8] = iStack0000000000000014;
  piVar21[9] = iVar10 - iStack0000000000000014;
  piVar21[10] = iStack0000000000000018;
  piVar21[0xb] = iVar11 - iStack0000000000000018;
  puVar5 = System_Collections_Generic_HashSet<CAPI_ovrAvatar2Id>_TypeInfo;
  *(int *)(in_stack_00000090 + 0x58) = (int)in_stack_00000060;
  FUN_039bd098(unaff_x27 + 4,&stack0x000003b8,in_stack_00000090,4,*(undefined8 *)puVar5);
  FUN_064d514c(unaff_x27 + 8,0);
  memcpy(unaff_x27 + 8,&stack0x00000470,0x80);
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


