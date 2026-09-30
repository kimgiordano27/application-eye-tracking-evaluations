/*
FUNCTION_NAME: FUN_031d6bb4
ENTRY_POINT: 031d6bb4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_031d6bb4(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_045325c7 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_Label_UxmlFactory_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo);
    FUN_01c5d288(Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo);
    FUN_01c5d288(MinimapSystem_<Start>d__3_TypeInfo);
    FUN_01c5d288(Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass362_0_TypeInfo);
    FUN_01c5d288(MobileController_<CanShootBowDelay>d__317_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass346_0_TypeInfo);
    DAT_045325c7 = 1;
  }
  uVar2 = FUN_032ae098(param_2,0);
  if (0x619e9961 < uVar2) {
    if (uVar2 < 0x77d05181) {
      puVar6 = (undefined8 *)MobileController_<>c__DisplayClass362_0_TypeInfo;
      if ((uVar2 != 0x74e1fd0c) &&
         (puVar6 = (undefined8 *)MinimapSystem_<Start>d__3_TypeInfo, uVar2 != 0x77d05180)) {
        return;
      }
    }
    else {
      puVar6 = (undefined8 *)
               Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo;
      if ((uVar2 != 0xbcb90279) &&
         (puVar6 = (undefined8 *)UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo,
         uVar2 != 0xdb4b0f38)) {
        return;
      }
    }
LAB_031d6e28:
    thunk_FUN_03152714(param_2,*puVar6,0);
    return;
  }
  if (uVar2 < 0x47a3b61b) {
    if (uVar2 == 0x3b0ce67b) {
      uVar3 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                          Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo
                                 ,0);
      puVar1 = UnityEngine_UIElements_Label_UxmlFactory_TypeInfo;
      if ((uVar3 & 1) != 0) {
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar8 = *(undefined8 *)UnityEngine_UIElements_Label_UxmlFactory_TypeInfo;
        lVar4 = thunk_FUN_01c495e4(lVar9,uVar8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar9,uVar8);
        }
        lVar4 = *(long *)puVar1;
        plVar5 = (long *)thunk_FUN_01c495e4(lVar9,lVar4);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar9,lVar4);
        }
        if ((param_3 != (long *)0x0) && (*param_3 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(param_3);
        }
        lVar9 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_031d6e54;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar5,lVar4,3);
LAB_031d6e54:
                    /* WARNING: Could not recover jumptable at 0x031d6e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar6)(plVar5,param_3,puVar6[1]);
        return;
      }
    }
    else {
      puVar6 = (undefined8 *)MobileController_<>c__DisplayClass346_0_TypeInfo;
      if (uVar2 == 0x47a3b61a) goto LAB_031d6e28;
    }
  }
  else {
    puVar6 = (undefined8 *)MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo;
    if ((uVar2 == 0x60836d56) ||
       (puVar6 = (undefined8 *)MobileController_<CanShootBowDelay>d__317_TypeInfo,
       uVar2 == 0x619e9961)) goto LAB_031d6e28;
  }
  return;
}


