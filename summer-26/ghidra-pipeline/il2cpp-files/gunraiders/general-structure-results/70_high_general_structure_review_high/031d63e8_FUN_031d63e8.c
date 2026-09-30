/*
FUNCTION_NAME: FUN_031d63e8
ENTRY_POINT: 031d63e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_031d63e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_045325c6 & 1) == 0) {
    FUN_01c5d288(Jetpack_<>c__DisplayClass25_0_TypeInfo);
    FUN_01c5d288(LeaderboardDisplay_<GetLeaderboardCoroutinte>d__38_TypeInfo);
    FUN_01c5d288(MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo);
    FUN_01c5d288(Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo);
    FUN_01c5d288(MinimapSystem_<Start>d__3_TypeInfo);
    FUN_01c5d288(Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass362_0_TypeInfo);
    FUN_01c5d288(MobileController_<CanShootBowDelay>d__317_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass346_0_TypeInfo);
    DAT_045325c6 = 1;
  }
  uVar2 = FUN_032ae098(param_2,0);
  if (uVar2 < 0x619e9962) {
    if (uVar2 < 0x47a3b61b) {
      if (uVar2 == 0x3b0ce67b) {
        uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                            Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo
                                   ,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_031d6930;
        lVar7 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        lVar5 = *(long *)Jetpack_<>c__DisplayClass25_0_TypeInfo;
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              iVar8 = *piVar9 + 7;
              goto LAB_031d6914;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        uVar6 = 7;
      }
      else {
        if (uVar2 != 0x47a3b61a) {
          return 0;
        }
        uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                            MobileController_<>c__DisplayClass346_0_TypeInfo,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_031d6930;
        lVar7 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        lVar5 = *(long *)Jetpack_<>c__DisplayClass25_0_TypeInfo;
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) goto LAB_031d68d0;
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        uVar6 = 2;
      }
    }
    else if (uVar2 == 0x60836d56) {
      uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                          MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 == (long *)0x0) goto LAB_031d6930;
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = *(long *)Jetpack_<>c__DisplayClass25_0_TypeInfo;
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) goto LAB_031d68dc;
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      uVar6 = 1;
    }
    else {
      if ((uVar2 != 0x619e9961) ||
         (uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                              MobileController_<CanShootBowDelay>d__317_TypeInfo,0),
         puVar1 = LeaderboardDisplay_<GetLeaderboardCoroutinte>d__38_TypeInfo, (uVar3 & 1) == 0)) {
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
LAB_031d6930:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar6 = *(undefined8 *)LeaderboardDisplay_<GetLeaderboardCoroutinte>d__38_TypeInfo;
      lVar5 = thunk_FUN_01c495e4(lVar7,uVar6);
      if (lVar5 == 0) {
LAB_031d6934:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar7,uVar6);
      }
      lVar5 = *(long *)puVar1;
      plVar10 = (long *)thunk_FUN_01c495e4(lVar7,lVar5);
      if (plVar10 == (long *)0x0) {
LAB_031d6940:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar7,lVar5);
      }
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) goto LAB_031d68d0;
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      uVar6 = 2;
    }
  }
  else if (uVar2 < 0x77d05181) {
    if (uVar2 == 0x74e1fd0c) {
      uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                          MobileController_<>c__DisplayClass362_0_TypeInfo,0);
      puVar1 = LeaderboardDisplay_<GetLeaderboardCoroutinte>d__38_TypeInfo;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) goto LAB_031d6930;
      uVar6 = *(undefined8 *)LeaderboardDisplay_<GetLeaderboardCoroutinte>d__38_TypeInfo;
      lVar5 = thunk_FUN_01c495e4(lVar7,uVar6);
      if (lVar5 == 0) goto LAB_031d6934;
      lVar5 = *(long *)puVar1;
      plVar10 = (long *)thunk_FUN_01c495e4(lVar7,lVar5);
      if (plVar10 == (long *)0x0) goto LAB_031d6940;
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) goto LAB_031d68dc;
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      uVar6 = 1;
    }
    else {
      if (uVar2 != 0x77d05180) {
        return 0;
      }
      uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)MinimapSystem_<Start>d__3_TypeInfo,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 == (long *)0x0) goto LAB_031d6930;
      lVar7 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = *(long *)Jetpack_<>c__DisplayClass25_0_TypeInfo;
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            iVar8 = *piVar9 + 6;
            goto LAB_031d6914;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      uVar6 = 6;
    }
  }
  else if (uVar2 == 0xbcb90279) {
    uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                        Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo
                               ,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_031d6930;
    lVar7 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar5 = *(long *)Jetpack_<>c__DisplayClass25_0_TypeInfo;
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          iVar8 = *piVar9 + 4;
          goto LAB_031d6914;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    uVar6 = 4;
  }
  else {
    if (uVar2 != 0xdb4b0f38) {
      return 0;
    }
    uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                        UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_031d6930;
    lVar7 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar5 = *(long *)Jetpack_<>c__DisplayClass25_0_TypeInfo;
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          iVar8 = *piVar9 + 5;
          goto LAB_031d6914;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    uVar6 = 5;
  }
  puVar4 = (undefined8 *)FUN_01c72498(plVar10,lVar5,uVar6);
  goto LAB_031d691c;
LAB_031d68dc:
  iVar8 = *piVar9 + 1;
  goto LAB_031d6914;
LAB_031d68d0:
  iVar8 = *piVar9 + 2;
LAB_031d6914:
  puVar4 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
LAB_031d691c:
                    /* WARNING: Could not recover jumptable at 0x031d692c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  return uVar6;
}


