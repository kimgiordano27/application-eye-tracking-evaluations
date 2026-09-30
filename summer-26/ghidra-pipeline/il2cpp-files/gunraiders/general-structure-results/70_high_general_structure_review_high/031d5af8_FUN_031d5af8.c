/*
FUNCTION_NAME: FUN_031d5af8
ENTRY_POINT: 031d5af8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x031d5ebc) */

void FUN_031d5af8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  
  if ((DAT_045325b9 & 1) == 0) {
    FUN_01c5d288(PetSkins_TypeInfo);
    FUN_01c5d288(System_Security_Cryptography_CryptoConfig_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator_TypeInfo);
    FUN_01c5d288(MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo);
    FUN_01c5d288(Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo);
    FUN_01c5d288(MinimapSystem_<Start>d__3_TypeInfo);
    FUN_01c5d288(Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo);
    FUN_01c5d288(MobileController_<>c__DisplayClass346_0_TypeInfo);
    DAT_045325b9 = 1;
  }
  puVar6 = MobileController_<>c__DisplayClass346_0_TypeInfo;
  puVar5 = Mono_Net_Security_MobileAuthenticatedStream_<>c__DisplayClass66_0_TypeInfo;
  puVar4 = UnityEngine_UIElements_MinMaxSlider_UxmlFactory_TypeInfo;
  puVar3 = Photon_Voice_Unity_MicWrapperPusher_<>c__DisplayClass8_0_TypeInfo;
  puVar2 = MicPermissionsHUD_<RequestiOSPermission>d__9_TypeInfo;
  puVar1 = System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator_TypeInfo;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  FUN_031e6da0(param_2,*(undefined8 *)MinimapSystem_<Start>d__3_TypeInfo,
               *(undefined8 *)(param_1 + 0x18),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar5,*(undefined8 *)(param_1 + 0x20),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x30),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x28),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x40),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x10),0);
  FUN_031e6da0(param_2,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x50),0);
  plVar14 = *(long **)(param_1 + 0x60);
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)System_Security_Cryptography_CryptoConfig_TypeInfo) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
        goto LAB_031d5ce0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01c72498(plVar14,*(long *)System_Security_Cryptography_CryptoConfig_TypeInfo,9);
LAB_031d5ce0:
  puVar2 = PTR_DAT_0422fce8;
  plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
  puVar4 = PetSkins_TypeInfo;
  puVar3 = PTR_DAT_04230960;
  puVar1 = PTR_DAT_0422fc38;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_031d5d60;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar14,lVar10,0);
LAB_031d5d60:
    uVar12 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      plVar14 = (long *)thunk_FUN_01c495e4(plVar14,*(undefined8 *)puVar2);
      if (plVar14 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar14;
      lVar10 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_031d5e5c;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_031d5dc0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar14,lVar10,1);
LAB_031d5dc0:
    plVar8 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    plVar9 = (long *)thunk_FUN_01c49834();
    plVar8 = (long *)*plVar9;
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar8,*(long *)puVar1,plVar9[1]);
    }
    FUN_031e6da0(param_2,plVar8,plVar9[1],0);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_031d5e78;
    }
  }
LAB_031d5e5c:
  puVar7 = (undefined8 *)FUN_01c72498(plVar14,lVar10,0);
LAB_031d5e78:
  (*(code *)*puVar7)(plVar14,puVar7[1]);
  return;
}


