/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetMatchSessionId
ENTRY_POINT: 033038a4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  uint unaff_w27;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x033038a4:
  iVar3 = *(int *)(unaff_x19 + 0x18);
  while( true ) {
    if ((int)unaff_x26 == iVar3) {
      uVar9 = *(uint *)(unaff_x20 + 3);
      if (uVar9 <= unaff_w27) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      lVar12 = *unaff_x25;
      if (lVar12 != 0) {
        lVar5 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar5 == 0) {
          uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,0);
        }
        uVar9 = *(uint *)(unaff_x20 + 3);
      }
      if (uVar9 <= in_stack_00000008._4_4_)
      goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      unaff_x20[(long)(int)in_stack_00000008._4_4_ + 4] = lVar12;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    do {
      unaff_w27 = unaff_w27 + 1;
      uVar9 = (uint)unaff_x20[3];
      if ((int)uVar9 <= (int)unaff_w27) {
        if (in_stack_00000008._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000008._4_4_ == 1) {
          if (uVar9 != 0) goto LAB_03303a88;
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        }
        if (unaff_x19 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
        lVar12 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,*(undefined4 *)(unaff_x19 + 0x18));
        iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar3 < 1) goto LAB_0330398c;
        if (lVar12 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
        uVar9 = *(uint *)(lVar12 + 0x18);
        uVar10 = 0;
        goto LAB_03303974;
      }
      if (uVar9 <= unaff_w27) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      unaff_x25 = unaff_x20 + (long)(int)unaff_w27 + 4;
      plVar4 = (long *)*unaff_x25;
      if (((plVar4 == (long *)0x0) ||
          (lVar12 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0)),
          lVar12 == 0)) || (unaff_x19 == 0))
      goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
      iVar3 = *(int *)(unaff_x19 + 0x18);
      iVar11 = (int)*(undefined8 *)(lVar12 + 0x18);
    } while (iVar11 != iVar3);
    if (0 < iVar11) break;
    unaff_x26 = 0;
  }
  if (iVar11 != 0) {
    unaff_x26 = 0;
    do {
      plVar4 = *(long **)(lVar12 + 0x20 + unaff_x26 * 8);
      if (plVar4 == (long *)0x0) {
Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      uVar9 = (uint)unaff_x26;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) || (*(uint *)(lVar12 + 0x18) <= uVar9)) break;
      uVar10 = FUN_03214190(*(undefined8 *)(unaff_x24 + unaff_x26 * 8),
                            *(undefined8 *)(lVar12 + 0x20 + unaff_x26 * 8),0);
      if ((uVar10 & 1) == 0) {
        uVar6 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar6 = FUN_032e04b8(uVar6,0);
        uVar10 = FUN_032e935c(plVar4,uVar6,0);
        if ((uVar10 & 1) == 0) {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar9) break;
          plVar14 = *(long **)(unaff_x24 + unaff_x26 * 8);
          if (plVar14 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo +
                             0x130);
            if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo)) {
              if (*(uint *)(unaff_x20 + 3) <= unaff_w27) break;
              plVar8 = (long *)*unaff_x25;
              if (plVar8 == (long *)0x0) goto code_r0x033038a4;
              bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo +
                               0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo))
              goto code_r0x033038a4;
              plVar14 = (long *)FUN_032145ec(plVar14,plVar8,0);
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*unaff_x29);
              }
              uVar10 = FUN_032e935c(plVar14,0,0);
              if ((uVar10 & 1) != 0) goto code_r0x033038a4;
            }
          }
          if (plVar4 == (long *)0x0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
          uVar10 = FUN_032eb6b4(plVar4,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x2a0))
            ;
          }
          else {
            if ((plVar14 == (long *)0x0) ||
               (lVar5 = (**(code **)(*plVar14 + 0x318))(plVar14,*(undefined8 *)(*plVar14 + 800)),
               lVar5 == 0)) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
            uVar10 = FUN_032ea048(lVar5,0);
            if ((uVar10 & 1) == 0) goto code_r0x033038a4;
            uVar6 = (**(code **)(*plVar14 + 0x318))(plVar14,*(undefined8 *)(*plVar14 + 800));
            uVar7 = (**(code **)(*plVar4 + 0x318))(plVar4,*(undefined8 *)(*plVar4 + 800));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                );
            }
            uVar10 = FUN_03303b70(uVar6,uVar7);
          }
          if ((uVar10 & 1) == 0) goto code_r0x033038a4;
        }
      }
      unaff_x26 = unaff_x26 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) goto LAB_033038a0;
      if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x26) break;
    } while( true );
  }
  goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
LAB_033038a0:
  unaff_x26 = (ulong)(uVar9 + 1);
  goto code_r0x033038a4;
  while( true ) {
    *(int *)(lVar12 + 0x20 + uVar10 * 4) = (int)uVar10;
    uVar10 = uVar10 + 1;
    if ((long)iVar3 <= (long)uVar10) break;
LAB_03303974:
    if (uVar9 <= uVar10) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
  }
LAB_0330398c:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar9 = 0;
  }
  else {
    lVar5 = 0;
    uVar9 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar9) || ((unaff_x20[3] & 0xffffffffU) <= lVar5 + 1U))
      goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      lVar13 = unaff_x20[lVar5 + 5];
      lVar15 = unaff_x20[(long)(int)uVar9 + 4];
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar3 = FUN_03300b64(lVar15,lVar12,0,lVar13,lVar12,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar9 = (int)lVar5 + 1;
      }
      lVar5 = lVar5 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar5);
    if (bVar2) {
      thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
      uVar6 = thunk_FUN_01c496e0();
      uVar7 = thunk_FUN_01c273e8(
                                DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                );
      FUN_0320e3ec(uVar6,uVar7,0);
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar7);
    }
  }
  if (uVar9 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar9;
LAB_03303a88:
    return unaff_x20[4];
  }
Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


