/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<OVRPlugin.SpaceQueryResult>$$CreateComparer
ENTRY_POINT: 029f7358
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_EqualityComparer<OVRPlugin_SpaceQueryResult>__CreateComparer
          (long param_1,long param_2)

{
  uint uVar1;
  int in_w8;
  long in_x9;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (in_w8 == *(int *)(in_x9 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      lVar2 = *(long *)(in_x9 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        uVar3 = *(undefined8 *)(lVar2 + 0x20);
        *(uint *)(param_1 + 8) = uVar1 + 1;
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  FUN_029f73d4(param_1);
  return 0;
}


