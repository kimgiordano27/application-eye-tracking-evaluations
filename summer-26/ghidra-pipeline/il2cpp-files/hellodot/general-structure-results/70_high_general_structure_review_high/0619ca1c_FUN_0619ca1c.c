/*
FUNCTION_NAME: FUN_0619ca1c
ENTRY_POINT: 0619ca1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_0619ca1c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((DAT_06a83d38 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPermissionsRequester_Permission_TypeInfo);
    DAT_06a83d38 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = *param_2;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)OVRPermissionsRequester_Permission_TypeInfo) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0619caa0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_02ce0a7c(param_2,*(long *)OVRPermissionsRequester_Permission_TypeInfo,0);
LAB_0619caa0:
                    /* WARNING: Could not recover jumptable at 0x0619cab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_2,puVar1[1]);
  return;
}


