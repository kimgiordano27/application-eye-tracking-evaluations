/*
FUNCTION_NAME: FUN_05dbad6c
ENTRY_POINT: 05dbad6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_05dbad6c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_06b8302f & 1) == 0) {
    FUN_02d6084c(
                Method_Unity_VisualScripting_SetGraph<FlowGraph,_ScriptGraphAsset,_ScriptMachine>__ctor__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    FUN_02d6084c(PTR_DAT_0676b288);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
    DAT_06b8302f = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0676b288) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05dbae18;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0676b288,0);
LAB_05dbae18:
    lVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar2 = FUN_046834ec(*(long *)(lVar2 + 0x60),param_1,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_SetGraph<FlowGraph,_ScriptGraphAsset,_ScriptMachine>__ctor__
                          );
      if (lVar2 != 0) {
        return lVar2;
      }
    }
  }
  lVar5 = *(long *)Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  lVar2 = *(long *)(lVar5 + 0x38);
  if (lVar2 == 0) {
    FUN_02d9a33c(lVar5);
    lVar2 = *(long *)(lVar5 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  return **(long **)(lVar2 + 0xb8);
}


