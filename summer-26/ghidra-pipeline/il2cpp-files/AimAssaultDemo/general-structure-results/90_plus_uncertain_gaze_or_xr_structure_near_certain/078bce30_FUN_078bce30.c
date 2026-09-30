/*
FUNCTION_NAME: FUN_078bce30
ENTRY_POINT: 078bce30
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_7;telemetry_or_network_hits_3;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_078bce30(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_07d96598;
  if ((DAT_08272cf9 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
    FUN_0373b518(PTR_DAT_07d96598);
    FUN_0373b518(
                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                );
    DAT_08272cf9 = 1;
  }
  puVar2 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_03f99518(param_2,*(undefined8 *)puVar2);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_078bcf04;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_0377596c(param_1,*(long *)
                                 Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                        ,0);
LAB_078bcf04:
                    /* WARNING: Could not recover jumptable at 0x078bcf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_1,uVar3,puVar4[1]);
  return;
}


