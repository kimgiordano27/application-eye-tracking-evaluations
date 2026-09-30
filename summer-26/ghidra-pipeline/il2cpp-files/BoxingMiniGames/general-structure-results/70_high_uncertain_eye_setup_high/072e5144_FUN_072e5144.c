/*
FUNCTION_NAME: FUN_072e5144
ENTRY_POINT: 072e5144
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_072e5144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__;
  if ((DAT_07ef2aa8 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<RendererListHandle>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_07ef2aa8 = 1;
  }
  plVar2 = (long *)thunk_FUN_0367fd24(param_2,*(undefined8 *)puVar1);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_072e51e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar2,*(long *)puVar1,0);
LAB_072e51e4:
    lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar4 != 0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_072e5268;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar2,*(long *)puVar1,0);
LAB_072e5268:
                    /* WARNING: Could not recover jumptable at 0x072e5278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
  }
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
              + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_072e527c(param_2);
  return;
}


