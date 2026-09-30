/*
FUNCTION_NAME: Photon.Voice.VoiceClient.<get_RemoteVoiceInfos>d__75$$System.IDisposable.Dispose
ENTRY_POINT: 0515f5d8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_11
*/


void Photon_Voice_VoiceClient_<get_RemoteVoiceInfos>d__75__System_IDisposable_Dispose(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  uint uVar19;
  long lVar20;
  undefined8 unaff_x21;
  undefined8 uVar21;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w25;
  uint uVar22;
  undefined8 unaff_x27;
  uint uStack0000000000000014;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x608));
  FUN_02d4dc40(UnityEngine_UIElements_EventDispatcherGate_var);
  FUN_02d4dc40(PlayFab_EconomyModels_DeleteItemResponse_var);
  FUN_02d4dc40(UnityEngine_UIElements_EventInterestAttribute_var);
  FUN_02d4dc40(UnityEngine_InputForUI_EventSanitizer_var);
  FUN_02d4dc40(PlayFab_AddonModels_DeleteGoogleResponse_var);
  FUN_02d4dc40(PlayFab_GroupsModels_DeleteGroupRequest_var);
  FUN_02d4dc40(PlayFab_AddonModels_DeleteNintendoResponse_var);
  FUN_02d4dc40(PlayFab_AddonModels_DeleteKongregateResponse_var);
  FUN_02d4dc40(PlayFab_ProgressionModels_DeleteLeaderboardDefinitionRequest_var);
  FUN_02d4dc40(PlayFab_EconomyModels_DeleteInventoryCollectionRequest_var);
  *(undefined1 *)(unaff_x19 + 0xcdc) = 1;
  puVar4 = PlayFab_EconomyModels_DeleteItemResponse_var;
  in_stack_00000070 = 0;
  in_stack_00000078 = (long *)0x0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000060 = 0;
  if (unaff_x23 != (long *)0x0) {
    lVar13 = *unaff_x23;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PlayFab_EconomyModels_DeleteItemResponse_var) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_0515f6c8;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515f6c8:
    lVar13 = (*(code *)*puVar9)();
    puVar7 = UnityEngine_UIElements_EventCategoryAttribute_var;
    puVar6 = System_Runtime_Serialization_EnumMemberAttribute_var;
    puVar5 = PlayFab_ProgressionModels_DeleteLeaderboardDefinitionRequest_var;
    puVar3 = PlayFab_AddonModels_DeleteGoogleResponse_var;
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) == 0) {
        return;
      }
      if (*(int *)(lVar13 + 0x18) != 1) {
        uVar22 = 0;
        lVar20 = 0;
        lVar13 = 0;
        uStack0000000000000014 = unaff_w25;
        do {
          lVar14 = *unaff_x23;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_0515f7b4;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515f7b4:
          lVar14 = (*(code *)*puVar9)();
          if (lVar14 == 0) goto LAB_0515fe78;
          if (*(int *)(lVar14 + 0x18) <= (int)uVar22) {
            if (lVar20 != 0) {
              FUN_0483c658(&stack0x00000050,lVar20,
                           *(undefined8 *)Newtonsoft_Json_Serialization_ErrorContext_var);
              puVar3 = System_ComponentModel_EventDescriptor_var;
              goto LAB_0515fc38;
            }
            lVar20 = *unaff_x23;
            uVar16 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar16 == 0) goto LAB_0515fd38;
            piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            goto LAB_0515fd20;
          }
          lVar14 = *unaff_x23;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_0515f820;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515f820:
          lVar14 = (*(code *)*puVar9)();
          if (lVar14 == 0) goto LAB_0515fe78;
          uVar12 = FUN_036a5b38(lVar14,uVar22,*(undefined8 *)puVar5);
          lVar14 = FUN_0515ed54(uVar12,uVar12,unaff_x21);
          if (lVar20 == 0) {
            if (lVar13 == 0) {
              lVar20 = 0;
            }
            else {
              uVar16 = thunk_FUN_04e7e884(lVar14,lVar13,0);
              if ((uVar16 & 1) == 0) {
                lVar20 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665bf30);
                FUN_0483b4a8(lVar20,*(undefined8 *)PTR_DAT_0665bf20);
                if (uVar22 < 2) {
                  lVar11 = *unaff_x23;
                  uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                        goto LAB_0515fbb0;
                      }
                      uVar16 = uVar16 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515fbb0:
                  lVar11 = (*(code *)*puVar9)();
                  if ((lVar11 == 0) ||
                     (lVar11 = FUN_036a5b38(lVar11,0,*(undefined8 *)puVar5), lVar20 == 0))
                  goto LAB_0515fe78;
                  uVar21 = *(undefined8 *)puVar6;
                }
                else {
                  lVar11 = thunk_FUN_02d8a638(*(undefined8 *)
                                               PlayFab_EconomyModels_DeleteInventoryCollectionRequest_var
                                             );
                  FUN_036a5618(lVar11,uVar22,
                               *(undefined8 *)PlayFab_GroupsModels_DeleteGroupRequest_var);
                  uVar19 = 0;
                  do {
                    lVar15 = *unaff_x23;
                    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                          goto LAB_0515fb00;
                        }
                        uVar16 = uVar16 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar16 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515fb00:
                    lVar15 = (*(code *)*puVar9)();
                    if ((lVar15 == 0) ||
                       (uVar21 = FUN_036a5b38(lVar15,uVar19,*(undefined8 *)puVar5), lVar11 == 0))
                    goto LAB_0515fe78;
                    lVar15 = *(long *)(lVar11 + 0x10);
                    lVar17 = *(long *)puVar3;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_0515fe78;
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar21;
                      thunk_FUN_02dc1ef0();
                    }
                    else {
                      FUN_036a5e08(lVar11,uVar21,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 != uVar22);
                  if (lVar20 == 0) goto LAB_0515fe78;
                  uVar21 = *(undefined8 *)puVar6;
                }
                FUN_0483c224(lVar20,lVar13,lVar11,uVar21);
                uVar21 = *(undefined8 *)puVar6;
                goto LAB_0515fbf0;
              }
              lVar20 = 0;
              lVar14 = lVar13;
            }
          }
          else {
            uVar16 = FUN_0483dd8c(lVar20,lVar14,&stack0x00000078,*(undefined8 *)puVar7);
            if ((uVar16 & 1) == 0) {
              uVar21 = *(undefined8 *)puVar6;
LAB_0515fbf0:
              FUN_0483c224(lVar20,lVar14,uVar12,uVar21);
              lVar14 = lVar13;
            }
            else {
              if (in_stack_00000078 == (long *)0x0) {
LAB_0515f8ac:
                plVar10 = (long *)thunk_FUN_02d8a638();
                FUN_036a55a0(plVar10,*(undefined8 *)PlayFab_AddonModels_DeleteNintendoResponse_var);
                plVar8 = in_stack_00000078;
                if (plVar10 == (long *)0x0) goto LAB_0515fe78;
                if (in_stack_00000078 == (long *)0x0) {
                  lVar11 = 0;
                }
                else {
                  uVar21 = *(undefined8 *)puVar4;
                  lVar11 = thunk_FUN_02d8a53c(in_stack_00000078,uVar21);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4e268(plVar8,uVar21);
                  }
                }
                lVar15 = plVar10[2];
                lVar17 = *(long *)puVar3;
                *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_0515fe78;
                uVar19 = *(uint *)(plVar10 + 3);
                if (uVar19 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(plVar10 + 3) = uVar19 + 1;
                  *(long *)(lVar15 + (long)(int)uVar19 * 8 + 0x20) = lVar11;
                  thunk_FUN_02dc1ef0();
                }
                else {
                  FUN_036a5e08(plVar10,lVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                FUN_0483c210(lVar20,lVar14,plVar10,*(undefined8 *)PTR_DAT_0665bf28);
              }
              else {
                bVar1 = *(byte *)(*(long *)
                                   PlayFab_EconomyModels_DeleteInventoryCollectionRequest_var +
                                 0x130);
                if ((*(byte *)(*in_stack_00000078 + 0x130) < bVar1) ||
                   (plVar10 = in_stack_00000078,
                   *(long *)(*(long *)(*in_stack_00000078 + 200) + (ulong)bVar1 * 8 + -8) !=
                   *(long *)PlayFab_EconomyModels_DeleteInventoryCollectionRequest_var))
                goto LAB_0515f8ac;
              }
              lVar14 = plVar10[2];
              lVar11 = *(long *)puVar3;
              *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_0515fe78;
              uVar19 = *(uint *)(plVar10 + 3);
              if (uVar19 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(plVar10 + 3) = uVar19 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar19 * 8 + 0x20) = uVar12;
                thunk_FUN_02dc1ef0();
                lVar14 = lVar13;
              }
              else {
                FUN_036a5e08(plVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                lVar14 = lVar13;
              }
            }
          }
          uVar22 = uVar22 + 1;
          lVar13 = lVar14;
        } while( true );
      }
      lVar13 = *unaff_x23;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_0515fd58;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515fd58:
      lVar13 = (*(code *)*puVar9)();
      if (lVar13 != 0) {
        uVar12 = FUN_036a5b38(lVar13,0,*(undefined8 *)
                                        PlayFab_ProgressionModels_DeleteLeaderboardDefinitionRequest_var
                             );
        FUN_0515ed54(uVar12,uVar12);
        lVar13 = *unaff_x23;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_0515fddc;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515fddc:
        (*(code *)*puVar9)();
        FUN_0515fef8();
        return;
      }
    }
  }
LAB_0515fe78:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
LAB_0515fc38:
  uVar16 = FUN_04a25124(&stack0x00000050,*(undefined8 *)puVar3);
  plVar10 = in_stack_00000068;
  uVar12 = in_stack_00000060;
  if ((uVar16 & 1) == 0) {
    FUN_04a25244(&stack0x00000050,*(undefined8 *)ExitGames_Client_Photon_EventData_var);
    return;
  }
  if (in_stack_00000068 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PlayFab_EconomyModels_DeleteInventoryCollectionRequest_var + 0x130);
    if ((bVar1 <= *(byte *)(*in_stack_00000068 + 0x130)) &&
       (*(long *)(*(long *)(*in_stack_00000068 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)PlayFab_EconomyModels_DeleteInventoryCollectionRequest_var)) {
      FUN_0515fef8(unaff_x27,unaff_x24,unaff_x21,uStack0000000000000014 & 1,in_stack_00000068,
                   in_stack_00000060);
      goto LAB_0515fc38;
    }
    uVar21 = *(undefined8 *)puVar4;
    lVar13 = thunk_FUN_02d8a53c(in_stack_00000068,uVar21);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4e268(plVar10,uVar21);
    }
  }
  FUN_0516006c(unaff_x27,unaff_x24,unaff_x21,uStack0000000000000014 & 1,lVar13,uVar12);
  goto LAB_0515fc38;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_0515fd20:
    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
      puVar9 = (undefined8 *)(lVar20 + (long)(*piVar18 + 2) * 0x10 + 0x138);
      goto LAB_0515fe30;
    }
  }
LAB_0515fd38:
  puVar9 = (undefined8 *)FUN_02d87540();
LAB_0515fe30:
  uVar12 = (*(code *)*puVar9)();
  FUN_0515fef8(unaff_x27,unaff_x24,unaff_x21,uStack0000000000000014 & 1,uVar12,lVar13);
  return;
}


