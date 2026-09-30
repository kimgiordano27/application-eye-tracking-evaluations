/*
FUNCTION_NAME: FUN_03936b9c
ENTRY_POINT: 03936b9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_03936b9c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((DAT_04138b2e & 1) == 0) {
    FUN_01ab69ac(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    DAT_04138b2e = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *param_1;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)
           Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_03936c24;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01a472ec(param_1,*(long *)
                                 Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                        ,0);
LAB_03936c24:
                    /* WARNING: Could not recover jumptable at 0x03936c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,puVar1[1]);
  return;
}


