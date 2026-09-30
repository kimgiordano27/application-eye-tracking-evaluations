/*
FUNCTION_NAME: FUN_01fa4ac0
ENTRY_POINT: 01fa4ac0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_01fa4ac0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_037805bc & 1) == 0) {
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__
                      );
    DAT_037805bc = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0178a8c4(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01fa4b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      return;
    }
  }
  else {
    plVar4 = (long *)FUN_0179c590(*(undefined8 *)(param_1 + 0x18),0);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__
                       + 300);
      if ((*(byte *)(*plVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
    }
  }
  return;
}


