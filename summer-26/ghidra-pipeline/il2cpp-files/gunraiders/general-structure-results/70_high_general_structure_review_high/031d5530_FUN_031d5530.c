/*
FUNCTION_NAME: FUN_031d5530
ENTRY_POINT: 031d5530
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_031d5530(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((DAT_045325b8 & 1) == 0) {
    FUN_01c5d288(System_Security_Cryptography_CryptoConfig_TypeInfo);
    FUN_01c5d288(UnityEngine_Splines_KnotLinkCollection_KnotLink_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator_TypeInfo);
    FUN_01c5d288(MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo);
    FUN_01c5d288(Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo);
    FUN_01c5d288(MinimapSystem_<Start>d__3_TypeInfo);
    FUN_01c5d288(Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass346_0_TypeInfo);
    DAT_045325b8 = 1;
  }
  uVar1 = FUN_032ae098(param_2,0);
  if (uVar1 < 0x60836d57) {
    if (uVar1 == 0x3b0ce67b) {
      uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                          Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo
                                 ,0);
      if ((uVar2 & 1) == 0) goto LAB_031d587c;
      if (param_3 == (long *)0x0) {
        param_1[2] = 0;
        return;
      }
      lVar3 = *(long *)PTR_DAT_0422fc38;
      if (*param_3 != lVar3) goto LAB_031d594c;
      param_1[2] = (long)param_3;
    }
    else {
      if (uVar1 != 0x47a3b61a) {
        if ((uVar1 == 0x60836d56) &&
           (uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                                MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo
                                       ,0), puVar5 = (undefined8 *)PTR_DAT_042305b8,
           (uVar2 & 1) != 0)) {
          if (param_3 == (long *)0x0) {
            param_1[5] = 0;
            return;
          }
          uVar7 = *(undefined8 *)PTR_DAT_042305b8;
          lVar3 = thunk_FUN_01c495e4(param_3,uVar7);
          if (lVar3 == 0) goto LAB_031d5954;
          param_1[5] = lVar3;
          goto LAB_031d5804;
        }
LAB_031d587c:
        plVar4 = (long *)(**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_031d58f0;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c72498(plVar4,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,1);
LAB_031d58f0:
                    /* WARNING: Could not recover jumptable at 0x031d590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
        return;
      }
      uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                          MobileController_<>c__DisplayClass346_0_TypeInfo,0);
      if ((uVar2 & 1) == 0) goto LAB_031d587c;
      if (param_3 == (long *)0x0) {
        param_1[8] = 0;
        return;
      }
      lVar3 = *(long *)UnityEngine_Splines_KnotLinkCollection_KnotLink_TypeInfo;
      if (*param_3 != lVar3) goto LAB_031d594c;
      param_1[8] = (long)param_3;
    }
  }
  else if (uVar1 < 0xa9e9e289) {
    if (uVar1 == 0xa9e9e288) {
      uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                          System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator_TypeInfo
                                 ,0);
      puVar5 = (undefined8 *)PTR_DAT_04230910;
      if ((uVar2 & 1) != 0) {
        if (param_3 == (long *)0x0) {
          param_1[10] = 0;
          return;
        }
        uVar7 = *(undefined8 *)PTR_DAT_04230910;
        lVar3 = thunk_FUN_01c495e4(param_3,uVar7);
        if (lVar3 == 0) {
LAB_031d5954:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(param_3,uVar7);
        }
        param_1[10] = lVar3;
LAB_031d5804:
        uVar7 = *puVar5;
        lVar3 = thunk_FUN_01c495e4(param_3,uVar7);
        if (lVar3 != 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(param_3,uVar7);
      }
      goto LAB_031d587c;
    }
    if ((uVar1 != 0x77d05180) ||
       (uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)MinimapSystem_<Start>d__3_TypeInfo,0),
       (uVar2 & 1) == 0)) goto LAB_031d587c;
    if (param_3 == (long *)0x0) {
      param_1[3] = 0;
      return;
    }
    lVar3 = *(long *)PTR_DAT_0422fc38;
    if (*param_3 != lVar3) goto LAB_031d594c;
    param_1[3] = (long)param_3;
  }
  else {
    if (uVar1 != 0xbcb90279) {
      if ((uVar1 == 0xdb4b0f38) &&
         (uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                              UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo
                                     ,0), puVar5 = (undefined8 *)PTR_DAT_04230910, (uVar2 & 1) != 0)
         ) {
        if (param_3 == (long *)0x0) {
          param_1[6] = 0;
          return;
        }
        uVar7 = *(undefined8 *)PTR_DAT_04230910;
        lVar3 = thunk_FUN_01c495e4(param_3,uVar7);
        if (lVar3 == 0) goto LAB_031d5954;
        param_1[6] = lVar3;
        goto LAB_031d5804;
      }
      goto LAB_031d587c;
    }
    uVar2 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                        Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo
                               ,0);
    if ((uVar2 & 1) == 0) goto LAB_031d587c;
    if (param_3 == (long *)0x0) {
      param_1[4] = 0;
      return;
    }
    lVar3 = *(long *)PTR_DAT_0422fc38;
    if (*param_3 != lVar3) goto LAB_031d594c;
    param_1[4] = (long)param_3;
  }
  if (*param_3 == lVar3) {
    return;
  }
LAB_031d594c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748(param_3);
}


