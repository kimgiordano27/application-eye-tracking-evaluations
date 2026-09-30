/*
FUNCTION_NAME: FUN_02e0a120
ENTRY_POINT: 02e0a120
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_02e0a120(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  if ((DAT_03ff00de & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff00de = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_1 + 0x51) == '\0') {
LAB_02e0a190:
    if ((char)param_1[10] != '\0') {
      lVar4 = param_1[9];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((((uVar2 & 1) != 0) && (*(float *)(param_1 + 0x3e) < *(float *)((long)param_1 + 0x54))) &&
         (*(char *)((long)param_1 + 0x1de) == '\0'))
      goto System_Security_Policy_Evidence_EvidenceEnumerator__get_Current;
    }
    if (*(char *)((long)param_1 + 0x52) != '\0') {
      lVar4 = param_1[9];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((uVar2 & 1) != 0) {
        if (param_1[9] == 0) {
LAB_02e0a240:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = FUN_02e01260(param_1[9],0);
        if ((uVar2 & 1) != 0) goto System_Security_Policy_Evidence_EvidenceEnumerator__get_Current;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x208);
    uVar3 = *(undefined8 *)(*param_1 + 0x210);
  }
  else {
    lVar4 = param_1[9];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_02e0a190;
    if (param_1[9] == 0) goto LAB_02e0a240;
    if (*(char *)(param_1[9] + 0x121) != '\0') goto LAB_02e0a190;
System_Security_Policy_Evidence_EvidenceEnumerator__get_Current:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x218);
    uVar3 = *(undefined8 *)(*param_1 + 0x220);
  }
                    /* WARNING: Could not recover jumptable at 0x02e0a23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}


