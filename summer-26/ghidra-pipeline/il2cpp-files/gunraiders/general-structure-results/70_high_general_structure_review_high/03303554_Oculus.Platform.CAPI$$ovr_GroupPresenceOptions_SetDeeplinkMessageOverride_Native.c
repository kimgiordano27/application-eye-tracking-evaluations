/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native
ENTRY_POINT: 03303554
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar10;
  uint in_w8;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  long unaff_x23;
  long *plVar19;
  long lVar20;
  long unaff_x24;
  long unaff_x25;
  long *plVar21;
  uint uVar22;
  undefined *puVar9;
  
  while ((uint)unaff_x23 < in_w8) {
    *(long *)(unaff_x24 + unaff_x23 * 8) = unaff_x22;
    uVar4 = FUN_032ea048(unaff_x22,0);
    if ((uVar4 & 1) == 0) {
      if ((uint)unaff_x23 < *(uint *)(unaff_x19 + 3)) {
        plVar11 = *(long **)(unaff_x24 + unaff_x23 * 8);
        if (plVar11 != (long *)0x0) {
          lVar14 = *plVar11;
          bVar1 = *(byte *)(*(long *)
                             UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo +
                           0x130);
          if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo))
          goto LAB_033035b8;
        }
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar16 = thunk_FUN_01c496e0();
        uVar7 = thunk_FUN_01c273e8(PurchaseLevelSpawner_<StartBuyCoroutine>d__9_TypeInfo);
        puVar9 = 
        Method_System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>__ctor__;
LAB_03303adc:
        uVar8 = thunk_FUN_01c273e8(puVar9);
        FUN_0323fce4(uVar16,uVar7,uVar8,0);
        goto LAB_03303af4;
      }
      break;
    }
LAB_033035b8:
    lVar14 = unaff_x23 + 1;
    uVar18 = (uint)lVar14;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)uVar18) {
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar16 = thunk_FUN_01c496e0();
        uVar7 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<string,_ToggleGroup>_ContainsKey__
                                  );
        puVar9 = Oculus_Platform_Models_HttpTransferUpdate_TypeInfo;
        goto LAB_03303adc;
      }
      lVar14 = FUN_032f47b8();
      if (lVar14 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
      uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_string>_Add__;
      plVar11 = (long *)thunk_FUN_01c495e4(lVar14,uVar16);
      puVar9 = PTR_DAT_0422fb28;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar14,uVar16);
      }
      lVar14 = plVar11[3];
      if ((int)lVar14 < 1) goto LAB_03303930;
      uVar15 = 0;
      uVar18 = 0;
      goto LAB_03303624;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar18) break;
    plVar11 = *(long **)(unaff_x25 + lVar14 * 8);
    if ((plVar11 == (long *)0x0) ||
       (unaff_x22 = (**(code **)(*plVar11 + 0x318))(plVar11,*(undefined8 *)(*plVar11 + 800)),
       unaff_x19 == (long *)0x0)) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
    if (unaff_x22 == 0) {
      if (uVar18 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[unaff_x23 + 5] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      break;
    }
    lVar12 = thunk_FUN_01c495e4(unaff_x22,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar12 == 0) goto LAB_03303b0c;
    unaff_x23 = lVar14;
    in_w8 = *(uint *)(unaff_x19 + 3);
  }
Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
LAB_03303624:
  do {
    if ((uint)lVar14 <= uVar18) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
    plVar21 = plVar11 + (long)(int)uVar18 + 4;
    plVar5 = (long *)*plVar21;
    if (((plVar5 == (long *)0x0) ||
        (lVar14 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
        lVar14 == 0)) || (unaff_x19 == (long *)0x0))
    goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
    iVar3 = (int)unaff_x19[3];
    iVar13 = (int)*(undefined8 *)(lVar14 + 0x18);
    if (iVar13 == iVar3) {
      if (iVar13 < 1) {
        iVar13 = 0;
      }
      else {
        if (iVar13 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        uVar4 = 0;
        while( true ) {
          plVar5 = *(long **)(lVar14 + 0x20 + uVar4 * 8);
          if (plVar5 == (long *)0x0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          uVar22 = (uint)uVar4;
          if ((*(uint *)(unaff_x19 + 3) <= uVar22) || (*(uint *)(lVar14 + 0x18) <= uVar22))
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          uVar6 = FUN_03214190(unaff_x19[uVar4 + 4],*(undefined8 *)(lVar14 + 0x20 + uVar4 * 8),0);
          if ((uVar6 & 1) == 0) {
            uVar16 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar16 = FUN_032e04b8(uVar16,0);
            uVar6 = FUN_032e935c(plVar5,uVar16,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 3) <= uVar22)
              goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
              plVar19 = (long *)unaff_x19[uVar4 + 4];
              if (plVar19 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)
                                   UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo
                                 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar19 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo)) {
                  if (*(uint *)(plVar11 + 3) <= uVar18)
                  goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                  plVar10 = (long *)*plVar21;
                  if (plVar10 == (long *)0x0)
                  goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                  bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo +
                                   0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo))
                  goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                  plVar19 = (long *)FUN_032145ec(plVar19,plVar10,0);
                  lVar12 = *(long *)puVar9;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(lVar12);
                  }
                  uVar6 = FUN_032e935c(plVar19,0,0);
                  if ((uVar6 & 1) != 0)
                  goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                }
              }
              if (plVar5 == (long *)0x0)
              goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
              uVar6 = FUN_032eb6b4(plVar5,0);
              if ((uVar6 & 1) == 0) {
                uVar6 = (**(code **)(*plVar5 + 0x298))
                                  (plVar5,plVar19,*(undefined8 *)(*plVar5 + 0x2a0));
              }
              else {
                if ((plVar19 == (long *)0x0) ||
                   (lVar12 = (**(code **)(*plVar19 + 0x318))
                                       (plVar19,*(undefined8 *)(*plVar19 + 800)), lVar12 == 0))
                goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
                uVar6 = FUN_032ea048(lVar12,0);
                if ((uVar6 & 1) == 0)
                goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                uVar16 = (**(code **)(*plVar19 + 0x318))(plVar19,*(undefined8 *)(*plVar19 + 800));
                uVar7 = (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)
                                      Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                    );
                }
                uVar6 = FUN_03303b70(uVar16,uVar7);
              }
              if ((uVar6 & 1) == 0)
              goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
            }
          }
          uVar4 = uVar4 + 1;
          if ((int)unaff_x19[3] <= (int)(uint)uVar4) break;
          if (*(uint *)(lVar14 + 0x18) <= (uint)uVar4)
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        }
        uVar4 = (ulong)(uVar22 + 1);
Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId:
        iVar13 = (int)uVar4;
        iVar3 = (int)unaff_x19[3];
      }
      if (iVar13 == iVar3) {
        uVar22 = *(uint *)(plVar11 + 3);
        if (uVar22 <= uVar18) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        lVar14 = *plVar21;
        if (lVar14 != 0) {
          lVar12 = thunk_FUN_01c495e4(lVar14,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar12 == 0) {
LAB_03303b0c:
            uVar16 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar16,0);
          }
          uVar22 = *(uint *)(plVar11 + 3);
        }
        if (uVar22 <= uVar15) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        plVar11[(long)(int)uVar15 + 4] = lVar14;
        uVar15 = uVar15 + 1;
      }
    }
    lVar14 = plVar11[3];
    uVar18 = uVar18 + 1;
  } while ((int)uVar18 < (int)lVar14);
  if (uVar15 == 0) {
LAB_03303930:
    lVar14 = 0;
  }
  else {
    if (uVar15 == 1) {
      if ((int)lVar14 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar14 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,(int)unaff_x19[3]);
      lVar12 = unaff_x19[3];
      if (0 < (int)lVar12) {
        if (lVar14 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
        uVar18 = *(uint *)(lVar14 + 0x18);
        uVar4 = 0;
        do {
          if (uVar18 <= uVar4) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          *(int *)(lVar14 + 0x20 + uVar4 * 4) = (int)uVar4;
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)lVar12);
      }
      if ((int)uVar15 < 2) {
        uVar18 = 0;
      }
      else {
        lVar12 = 0;
        uVar18 = 0;
        bVar2 = false;
        do {
          if (((uint)plVar11[3] <= uVar18) || ((plVar11[3] & 0xffffffffU) <= lVar12 + 1U))
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          lVar17 = plVar11[lVar12 + 5];
          lVar20 = plVar11[(long)(int)uVar18 + 4];
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          iVar3 = FUN_03300b64(lVar20,lVar14,0,lVar17,lVar14,0);
          if (iVar3 == 0) {
            bVar2 = true;
          }
          else if (iVar3 == 2) {
            bVar2 = false;
            uVar18 = (int)lVar12 + 1;
          }
          lVar12 = lVar12 + 1;
        } while ((ulong)uVar15 - 1 != lVar12);
        if (bVar2) {
          thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
          uVar16 = thunk_FUN_01c496e0();
          uVar7 = thunk_FUN_01c273e8(
                                    DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                    );
          FUN_0320e3ec(uVar16,uVar7,0);
LAB_03303af4:
          uVar7 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar16,uVar7);
        }
      }
      if (*(uint *)(plVar11 + 3) <= uVar18)
      goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      plVar11 = plVar11 + (int)uVar18;
    }
    lVar14 = plVar11[4];
  }
  return lVar14;
}


