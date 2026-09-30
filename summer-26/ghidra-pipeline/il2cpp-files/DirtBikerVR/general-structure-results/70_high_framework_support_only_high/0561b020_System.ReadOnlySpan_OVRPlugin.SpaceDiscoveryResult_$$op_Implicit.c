/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 0561b020
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>___ctor;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>___ctor:
                    /* WARNING: Could not recover jumptable at 0x0561b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


