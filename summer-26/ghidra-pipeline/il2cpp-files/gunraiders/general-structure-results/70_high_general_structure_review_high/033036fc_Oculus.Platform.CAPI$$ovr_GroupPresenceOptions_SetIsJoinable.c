/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetIsJoinable
ENTRY_POINT: 033036fc
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


long Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetIsJoinable(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar12;
  long *plVar13;
  long lVar14;
  long unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  ulong uVar15;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x033036fc:
  if ((uint)unaff_x26 < *(uint *)(unaff_x19 + 0x18)) {
    plVar13 = *(long **)(unaff_x24 + unaff_x26 * 8);
    if (plVar13 == (long *)0x0) {
LAB_033037c4:
      if (unaff_x22 == (long *)0x0) {
Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar4 = FUN_032eb6b4(unaff_x22,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*unaff_x22 + 0x298))
                          (unaff_x22,plVar13,*(undefined8 *)(*unaff_x22 + 0x2a0));
      }
      else {
        if ((plVar13 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar13 + 0x318))(plVar13,*(undefined8 *)(*plVar13 + 800)),
           lVar5 == 0)) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
        uVar4 = FUN_032ea048(lVar5,0);
        if ((uVar4 & 1) == 0) goto Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId;
        uVar6 = (**(code **)(*plVar13 + 0x318))(plVar13,*(undefined8 *)(*plVar13 + 800));
        uVar7 = (**(code **)(*unaff_x22 + 0x318))(unaff_x22,*(undefined8 *)(*unaff_x22 + 800));
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                            );
        }
        uVar4 = FUN_03303b70(uVar6,uVar7);
      }
      uVar15 = unaff_x26;
      if ((uVar4 & 1) != 0) goto LAB_0330387c;
    }
    else {
      bVar1 = *(byte *)(*(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_TypeInfo))
      goto LAB_033037c4;
      if (*(uint *)(unaff_x20 + 3) <= unaff_w27)
      goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      plVar9 = (long *)*unaff_x25;
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Jetpack_<SpawnJetpackAndTrailCoroutine>d__24_TypeInfo)) {
          plVar13 = (long *)FUN_032145ec(plVar13,plVar9,0);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x29);
          }
          uVar4 = FUN_032e935c(plVar13,0,0);
          if ((uVar4 & 1) == 0) goto LAB_033037c4;
        }
      }
    }
Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId:
    while( true ) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      while( true ) {
        if ((int)unaff_x26 == iVar3) {
          uVar10 = *(uint *)(unaff_x20 + 3);
          if (uVar10 <= unaff_w27) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          lVar5 = *unaff_x25;
          if (lVar5 != 0) {
            lVar8 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar8 == 0) {
              uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar6,0);
            }
            uVar10 = *(uint *)(unaff_x20 + 3);
          }
          if (uVar10 <= in_stack_00000008._4_4_)
          goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          unaff_x20[(long)(int)in_stack_00000008._4_4_ + 4] = lVar5;
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        }
        do {
          unaff_w27 = unaff_w27 + 1;
          uVar10 = (uint)unaff_x20[3];
          if ((int)uVar10 <= (int)unaff_w27) {
            if (in_stack_00000008._4_4_ == 0) {
              return 0;
            }
            if (in_stack_00000008._4_4_ == 1) {
              if (uVar10 != 0) goto LAB_03303a88;
              goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
            }
            if (unaff_x19 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
            lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,*(undefined4 *)(unaff_x19 + 0x18));
            iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            if (iVar3 < 1) goto LAB_0330398c;
            if (lVar5 == 0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
            uVar10 = *(uint *)(lVar5 + 0x18);
            uVar4 = 0;
            goto LAB_03303974;
          }
          if (uVar10 <= unaff_w27) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
          unaff_x25 = unaff_x20 + (long)(int)unaff_w27 + 4;
          plVar13 = (long *)*unaff_x25;
          if (((plVar13 == (long *)0x0) ||
              (unaff_x21 = (**(code **)(*plVar13 + 0x398))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x3a0)), unaff_x21 == 0))
             || (unaff_x19 == 0)) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
          iVar3 = *(int *)(unaff_x19 + 0x18);
          iVar11 = (int)*(undefined8 *)(unaff_x21 + 0x18);
        } while (iVar11 != iVar3);
        if (0 < iVar11) break;
        unaff_x26 = 0;
      }
      if (iVar11 == 0) break;
      unaff_x26 = 0;
      unaff_x28 = unaff_x21 + 0x20;
      while( true ) {
        plVar13 = *(long **)(unaff_x28 + unaff_x26 * 8);
        if (plVar13 == (long *)0x0) goto Oculus_Platform_CAPI__ovr_InviteOptions_AddSuggestedUser;
        unaff_x22 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
        if ((*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x26) ||
           (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26))
        goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
        uVar4 = FUN_03214190(*(undefined8 *)(unaff_x24 + unaff_x26 * 8),
                             *(undefined8 *)(unaff_x28 + unaff_x26 * 8),0);
        uVar15 = unaff_x26;
        if ((uVar4 & 1) == 0) {
          uVar6 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar6 = FUN_032e04b8(uVar6,0);
          uVar4 = FUN_032e935c(unaff_x22,uVar6,0);
          if ((uVar4 & 1) == 0) goto code_r0x033036fc;
        }
LAB_0330387c:
        unaff_x26 = uVar15 + 1;
        if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) break;
        if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26)
        goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      }
      unaff_x26 = (ulong)((int)uVar15 + 1);
    }
  }
  goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
  while( true ) {
    *(int *)(lVar5 + 0x20 + uVar4 * 4) = (int)uVar4;
    uVar4 = uVar4 + 1;
    if ((long)iVar3 <= (long)uVar4) break;
LAB_03303974:
    if (uVar10 <= uVar4) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
  }
LAB_0330398c:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar10 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar8 + 1U))
      goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      lVar12 = unaff_x20[lVar8 + 5];
      lVar14 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar3 = FUN_03300b64(lVar14,lVar5,0,lVar12,lVar5,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar8 + 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar8);
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
  if (uVar10 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar10;
LAB_03303a88:
    return unaff_x20[4];
  }
Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


