/*
FUNCTION_NAME: FUN_078d51bc
ENTRY_POINT: 078d51bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_078d51bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_08987a4e & 1) == 0) {
    FUN_03a8a718(System_Predicate<KerningPair>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<PanelRaycaster>_TypeInfo);
    FUN_03a8a718(System_Predicate<LobbyPlayerJoined>_TypeInfo);
    FUN_03a8a718(System_Predicate<PostProcessBundle>_TypeInfo);
    FUN_03a8a718(System_Predicate<InputControlScheme>_TypeInfo);
    DAT_08987a4e = 1;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_078d5284;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_03ac43c4(plVar8,*(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo,9);
LAB_078d5284:
  lVar4 = (*(code *)*puVar2)(plVar8,param_2,param_3,puVar2[1]);
  puVar1 = System_Predicate<InputControlScheme>_TypeInfo;
  lVar3 = *(long *)System_Predicate<InputControlScheme>_TypeInfo;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar2[6];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)System_Predicate<KerningPair>_TypeInfo);
    FUN_049639e4(lVar7,uVar9,*(undefined8 *)System_Predicate<PostProcessBundle>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *plVar8 = lVar7;
    thunk_FUN_03afed3c(plVar8,lVar7);
  }
  if (lVar4 != 0) {
    FUN_04513f78(lVar4,lVar7,*(undefined8 *)System_Predicate<LobbyPlayerJoined>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


