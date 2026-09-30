/*
FUNCTION_NAME: FUN_03303444
ENTRY_POINT: 03303444
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long FUN_03303444(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  undefined *puVar13;
  
  if ((DAT_0453310b & 1) == 0) {
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                );
    FUN_01c5d288(PTR_DAT_04232bd8);
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01c5d288(Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo);
    FUN_01c5d288(System_MonoCustomAttrs_TypeInfo);
    FUN_01c5d288(UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_0453310b = 1;
  }
  if (param_4 != 0) {
    plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,*(undefined4 *)(param_4 + 0x18));
    uVar23 = *(uint *)(param_4 + 0x18);
    if (0 < (int)uVar23) {
      lVar18 = 0;
      do {
        uVar17 = (uint)lVar18;
        if (uVar23 <= uVar17) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        plVar5 = *(long **)(param_4 + 0x20 + lVar18 * 8);
        if ((plVar5 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800)),
           plVar4 == (long *)0x0)) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
        if (lVar6 == 0) {
          if (uVar17 < *(uint *)(plVar4 + 3)) {
            plVar4[lVar18 + 4] = 0;
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        }
        lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar7 == 0) goto LAB_03303b0c;
        if (*(uint *)(plVar4 + 3) <= uVar17)
        goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        plVar4[lVar18 + 4] = lVar6;
        uVar8 = FUN_032ea048(lVar6,0);
        if ((uVar8 & 1) == 0) {
          if (*(uint *)(plVar4 + 3) <= uVar17)
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          if ((long *)plVar4[lVar18 + 4] != (long *)0x0) {
            lVar6 = *(long *)plVar4[lVar18 + 4];
            bVar1 = *(byte *)(*(long *)
                               UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo +
                             0x130);
            if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
               (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo))
            goto LAB_033035b8;
          }
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar16 = thunk_FUN_01c496e0();
          uVar11 = thunk_FUN_01c273e8(PurchaseLevelSpawner_<StartBuyCoroutine>d__9_TypeInfo);
          puVar13 = 
          Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>__ctor__
          ;
          goto LAB_03303adc;
        }
LAB_033035b8:
        uVar23 = *(uint *)(param_4 + 0x18);
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < (int)uVar23);
    }
    if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar16 = thunk_FUN_01c496e0();
      uVar11 = thunk_FUN_01c273e8(
                                 Method_System_Collections_Generic_Dictionary<string,_ToggleGroup>_ContainsKey__
                                 );
      puVar13 = Oculus_Platform_Models_HttpTransferUpdate_TypeInfo;
LAB_03303adc:
      uVar12 = thunk_FUN_01c273e8(puVar13);
      FUN_0323fce4(uVar16,uVar11,uVar12,0);
LAB_03303af4:
      uVar11 = thunk_FUN_01c273e8(
                                 Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar16,uVar11);
    }
    lVar18 = FUN_032f47b8(param_3,0);
    if (lVar18 != 0) {
      uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_string>_Add__;
      plVar5 = (long *)thunk_FUN_01c495e4(lVar18,uVar16);
      puVar13 = PTR_DAT_0422fb28;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar18,uVar16);
      }
      lVar18 = plVar5[3];
      if (0 < (int)lVar18) {
        uVar17 = 0;
        uVar23 = 0;
        do {
          if ((uint)lVar18 <= uVar23)
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          plVar21 = plVar5 + (long)(int)uVar23 + 4;
          plVar9 = (long *)*plVar21;
          if (((plVar9 == (long *)0x0) ||
              (lVar18 = (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0)),
              lVar18 == 0)) || (plVar4 == (long *)0x0))
          goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
          iVar3 = (int)plVar4[3];
          iVar15 = (int)*(undefined8 *)(lVar18 + 0x18);
          if (iVar15 == iVar3) {
            if (iVar15 < 1) {
              iVar15 = 0;
            }
            else {
              if (iVar15 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
              uVar8 = 0;
              while( true ) {
                plVar9 = *(long **)(lVar18 + 0x20 + uVar8 * 8);
                if (plVar9 == (long *)0x0)
                goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
                plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
                uVar22 = (uint)uVar8;
                if ((*(uint *)(plVar4 + 3) <= uVar22) || (*(uint *)(lVar18 + 0x18) <= uVar22))
                goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                uVar10 = FUN_03214190(plVar4[uVar8 + 4],*(undefined8 *)(lVar18 + 0x20 + uVar8 * 8),0
                                     );
                if ((uVar10 & 1) == 0) {
                  uVar16 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar16 = FUN_032e04b8(uVar16,0);
                  uVar10 = FUN_032e935c(plVar9,uVar16,0);
                  if ((uVar10 & 1) == 0) {
                    if (*(uint *)(plVar4 + 3) <= uVar22)
                    goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                    plVar19 = (long *)plVar4[uVar8 + 4];
                    if (plVar19 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)
                                         UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo
                                       + 0x130);
                      if ((bVar1 <= *(byte *)(*plVar19 + 0x130)) &&
                         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) ==
                          *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo
                         )) {
                        if (*(uint *)(plVar5 + 3) <= uVar23)
                        goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                        plVar14 = (long *)*plVar21;
                        if (plVar14 == (long *)0x0)
                        goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                        bVar1 = *(byte *)(*(long *)
                                           Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo +
                                         0x130);
                        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo))
                        goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                        plVar19 = (long *)FUN_032145ec(plVar19,plVar14,0);
                        lVar6 = *(long *)puVar13;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8(lVar6);
                        }
                        uVar10 = FUN_032e935c(plVar19,0,0);
                        if ((uVar10 & 1) != 0)
                        goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                      }
                    }
                    if (plVar9 == (long *)0x0)
                    goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
                    uVar10 = FUN_032eb6b4(plVar9,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = (**(code **)(*plVar9 + 0x298))
                                         (plVar9,plVar19,*(undefined8 *)(*plVar9 + 0x2a0));
                    }
                    else {
                      if ((plVar19 == (long *)0x0) ||
                         (lVar6 = (**(code **)(*plVar19 + 0x318))
                                            (plVar19,*(undefined8 *)(*plVar19 + 800)), lVar6 == 0))
                      goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
                      uVar10 = FUN_032ea048(lVar6,0);
                      if ((uVar10 & 1) == 0)
                      goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                      uVar16 = (**(code **)(*plVar19 + 0x318))
                                         (plVar19,*(undefined8 *)(*plVar19 + 800));
                      uVar11 = (**(code **)(*plVar9 + 0x318))(plVar9,*(undefined8 *)(*plVar9 + 800))
                      ;
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                          );
                      }
                      uVar10 = FUN_03303b70(uVar16,uVar11);
                    }
                    if ((uVar10 & 1) == 0)
                    goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                  }
                }
                uVar8 = uVar8 + 1;
                if ((int)plVar4[3] <= (int)(uint)uVar8) break;
                if (*(uint *)(lVar18 + 0x18) <= (uint)uVar8)
                goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
              }
              uVar8 = (ulong)(uVar22 + 1);
Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId:
              iVar15 = (int)uVar8;
              iVar3 = (int)plVar4[3];
            }
            if (iVar15 == iVar3) {
              uVar22 = *(uint *)(plVar5 + 3);
              if (uVar22 <= uVar23)
              goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
              lVar18 = *plVar21;
              if (lVar18 != 0) {
                lVar6 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar6 == 0) {
LAB_03303b0c:
                  uVar16 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d37c(uVar16,0);
                }
                uVar22 = *(uint *)(plVar5 + 3);
              }
              if (uVar22 <= uVar17)
              goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
              plVar5[(long)(int)uVar17 + 4] = lVar18;
              uVar17 = uVar17 + 1;
            }
          }
          lVar18 = plVar5[3];
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (int)lVar18);
        if (uVar17 != 0) {
          if (uVar17 == 1) {
            if ((int)lVar18 == 0) {
Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
          }
          else {
            if (plVar4 == (long *)0x0)
            goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
            lVar18 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,(int)plVar4[3]);
            lVar6 = plVar4[3];
            if (0 < (int)lVar6) {
              if (lVar18 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
              uVar23 = *(uint *)(lVar18 + 0x18);
              uVar8 = 0;
              do {
                if (uVar23 <= uVar8)
                goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                *(int *)(lVar18 + 0x20 + uVar8 * 4) = (int)uVar8;
                uVar8 = uVar8 + 1;
              } while ((long)uVar8 < (long)(int)lVar6);
            }
            if ((int)uVar17 < 2) {
              uVar23 = 0;
            }
            else {
              lVar6 = 0;
              uVar23 = 0;
              bVar2 = false;
              do {
                if (((uint)plVar5[3] <= uVar23) || ((plVar5[3] & 0xffffffffU) <= lVar6 + 1U))
                goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                lVar7 = plVar5[lVar6 + 5];
                lVar20 = plVar5[(long)(int)uVar23 + 4];
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                iVar3 = FUN_03300b64(lVar20,lVar18,0,lVar7,lVar18,0,plVar4,0);
                if (iVar3 == 0) {
                  bVar2 = true;
                }
                else if (iVar3 == 2) {
                  bVar2 = false;
                  uVar23 = (int)lVar6 + 1;
                }
                lVar6 = lVar6 + 1;
              } while ((ulong)uVar17 - 1 != lVar6);
              if (bVar2) {
                thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
                uVar16 = thunk_FUN_01c496e0();
                uVar11 = thunk_FUN_01c273e8(
                                           DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                           );
                FUN_0320e3ec(uVar16,uVar11,0);
                goto LAB_03303af4;
              }
            }
            if (*(uint *)(plVar5 + 3) <= uVar23)
            goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
            plVar5 = plVar5 + (int)uVar23;
          }
          return plVar5[4];
        }
      }
      return 0;
    }
  }
Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


