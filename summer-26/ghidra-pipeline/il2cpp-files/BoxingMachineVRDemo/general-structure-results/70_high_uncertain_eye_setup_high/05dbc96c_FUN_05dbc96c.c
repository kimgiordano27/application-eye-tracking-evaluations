/*
FUNCTION_NAME: FUN_05dbc96c
ENTRY_POINT: 05dbc96c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dbc96c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_06b83043 & 1) == 0) {
    FUN_02d6084c(Method_System_Span<BatchMeshID>_GetPinnableReference__);
    FUN_02d6084c(PTR_DAT_0676b288);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                );
    DAT_06b83043 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0676b288) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05dbca0c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0676b288,0);
LAB_05dbca0c:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if (lVar2 == 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x50) != 0) {
      FUN_046833c4(*(long *)(lVar2 + 0x50),param_1,
                   *(undefined8 *)Method_System_Span<BatchMeshID>_GetPinnableReference__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


