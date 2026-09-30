/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetDestinationApiName
ENTRY_POINT: 033035d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6
*/


long Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetDestinationApiName(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  
  lVar5 = FUN_032f47b8(param_1,0);
  if (lVar5 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
  uVar14 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_string>_Add__;
  plVar6 = (long *)thunk_FUN_01c495e4(lVar5,uVar14);
  puVar3 = PTR_DAT_0422fb28;
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 03303b68 to 03403b6f has its CatchHandler @ 03303be0 */
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(lVar5,uVar14);
  }
  lVar5 = plVar6[3];
  if (0 < (int)lVar5) {
    uVar13 = 0;
    uVar21 = 0;
    do {
      if ((uint)lVar5 <= uVar21) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      plVar18 = plVar6 + (long)(int)uVar21 + 4;
      plVar7 = (long *)*plVar18;
      if (((plVar7 == (long *)0x0) ||
          (lVar5 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0)),
          lVar5 == 0)) || (unaff_x19 == 0))
      goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
      iVar4 = *(int *)(unaff_x19 + 0x18);
      iVar12 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (iVar12 == iVar4) {
        if (iVar12 < 1) {
          iVar12 = 0;
        }
        else {
          if (iVar12 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          uVar20 = 0;
          while( true ) {
            plVar7 = *(long **)(lVar5 + 0x20 + uVar20 * 8);
            if (plVar7 == (long *)0x0)
            goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0))
            ;
            uVar19 = (uint)uVar20;
            if ((*(uint *)(unaff_x19 + 0x18) <= uVar19) || (*(uint *)(lVar5 + 0x18) <= uVar19))
            goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
            uVar8 = FUN_03214190(*(undefined8 *)(unaff_x19 + 0x20 + uVar20 * 8),
                                 *(undefined8 *)(lVar5 + 0x20 + uVar20 * 8),0);
            if ((uVar8 & 1) == 0) {
              uVar14 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar14 = FUN_032e04b8(uVar14,0);
              uVar8 = FUN_032e935c(plVar7,uVar14,0);
              if ((uVar8 & 1) == 0) {
                if (*(uint *)(unaff_x19 + 0x18) <= uVar19)
                goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                plVar16 = *(long **)(unaff_x19 + 0x20 + uVar20 * 8);
                if (plVar16 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)
                                     UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo
                                   + 0x130);
                  if ((bVar1 <= *(byte *)(*plVar16 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo)) {
                    if (*(uint *)(plVar6 + 3) <= uVar21)
                    goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
                    plVar10 = (long *)*plVar18;
                    if (plVar10 == (long *)0x0)
                    goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                    bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo
                                     + 0x130);
                    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo))
                    goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                    plVar16 = (long *)FUN_032145ec(plVar16,plVar10,0);
                    lVar11 = *(long *)puVar3;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(lVar11);
                    }
                    uVar8 = FUN_032e935c(plVar16,0,0);
                    if ((uVar8 & 1) != 0)
                    goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                  }
                }
                if (plVar7 == (long *)0x0)
                goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
                uVar8 = FUN_032eb6b4(plVar7,0);
                if ((uVar8 & 1) == 0) {
                  uVar8 = (**(code **)(*plVar7 + 0x298))
                                    (plVar7,plVar16,*(undefined8 *)(*plVar7 + 0x2a0));
                }
                else {
                  if ((plVar16 == (long *)0x0) ||
                     (lVar11 = (**(code **)(*plVar16 + 0x318))
                                         (plVar16,*(undefined8 *)(*plVar16 + 800)), lVar11 == 0))
                  goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
                  uVar8 = FUN_032ea048(lVar11,0);
                  if ((uVar8 & 1) == 0)
                  goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
                  uVar14 = (**(code **)(*plVar16 + 0x318))(plVar16,*(undefined8 *)(*plVar16 + 800));
                  uVar9 = (**(code **)(*plVar7 + 0x318))(plVar7,*(undefined8 *)(*plVar7 + 800));
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                      );
                  }
                  uVar8 = FUN_03303b70(uVar14,uVar9);
                }
                if ((uVar8 & 1) == 0)
                goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
              }
            }
            uVar20 = uVar20 + 1;
            if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar20) break;
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar20)
            goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          }
          uVar20 = (ulong)(uVar19 + 1);
Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId:
          iVar12 = (int)uVar20;
          iVar4 = *(int *)(unaff_x19 + 0x18);
        }
        if (iVar12 == iVar4) {
          uVar19 = *(uint *)(plVar6 + 3);
          if (uVar19 <= uVar21) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          lVar5 = *plVar18;
          if (lVar5 != 0) {
            lVar11 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar11 == 0) {
              uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar14,0);
            }
            uVar19 = *(uint *)(plVar6 + 3);
          }
          if (uVar19 <= uVar13) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          plVar6[(long)(int)uVar13 + 4] = lVar5;
          uVar13 = uVar13 + 1;
        }
      }
      lVar5 = plVar6[3];
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (int)lVar5);
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        if ((int)lVar5 == 0) {
Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
      }
      else {
        if (unaff_x19 == 0) {
Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,*(undefined4 *)(unaff_x19 + 0x18));
        iVar4 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (0 < iVar4) {
          if (lVar5 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
          uVar21 = *(uint *)(lVar5 + 0x18);
          uVar20 = 0;
          do {
            if (uVar21 <= uVar20) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
            *(int *)(lVar5 + 0x20 + uVar20 * 4) = (int)uVar20;
            uVar20 = uVar20 + 1;
          } while ((long)uVar20 < (long)iVar4);
        }
        if ((int)uVar13 < 2) {
          uVar21 = 0;
        }
        else {
          lVar11 = 0;
          uVar21 = 0;
          bVar2 = false;
          do {
            if (((uint)plVar6[3] <= uVar21) || ((plVar6[3] & 0xffffffffU) <= lVar11 + 1U))
            goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
            lVar15 = plVar6[lVar11 + 5];
            lVar17 = plVar6[(long)(int)uVar21 + 4];
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            iVar4 = FUN_03300b64(lVar17,lVar5,0,lVar15,lVar5,0);
            if (iVar4 == 0) {
              bVar2 = true;
            }
            else if (iVar4 == 2) {
              bVar2 = false;
              uVar21 = (int)lVar11 + 1;
            }
            lVar11 = lVar11 + 1;
          } while ((ulong)uVar13 - 1 != lVar11);
          if (bVar2) {
            thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
            uVar14 = thunk_FUN_01c496e0();
            uVar9 = thunk_FUN_01c273e8(
                                      DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                      );
            FUN_0320e3ec(uVar14,uVar9,0);
            uVar9 = thunk_FUN_01c273e8(
                                      Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar14,uVar9);
          }
        }
        if (*(uint *)(plVar6 + 3) <= uVar21)
        goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        plVar6 = plVar6 + (int)uVar21;
      }
      return plVar6[4];
    }
  }
  return 0;
}


