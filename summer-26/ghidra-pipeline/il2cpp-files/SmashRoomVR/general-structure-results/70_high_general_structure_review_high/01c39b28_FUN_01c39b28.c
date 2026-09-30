/*
FUNCTION_NAME: FUN_01c39b28
ENTRY_POINT: 01c39b28
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_01c39b28(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_03fed557 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed557 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((char)param_4[7] != '\0') {
    lVar5 = param_4[8];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      lVar5 = param_4[0xe];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(lVar5,0,0);
      if ((uVar2 & 1) != 0) {
        lVar5 = FUN_0391c27c(param_4,0);
        if ((param_4[0xe] != 0) && (lVar3 = FUN_0391fab4(param_4[0xe],0), lVar3 != 0)) {
          fVar6 = (float)FUN_03928d34(lVar3,0);
          if ((param_4[8] != 0) &&
             ((fVar8 = param_2, fVar9 = param_3, lVar3 = FUN_0391fab4(param_4[8],0), lVar3 != 0 &&
              (fVar7 = (float)FUN_03928d34(lVar3,0), lVar5 != 0)))) {
            param_2 = param_2 - fVar8;
            FUN_0392a410(fVar6 - fVar7,param_2,param_3 - fVar9,lVar5,0);
            *(float *)(param_4 + 9) = -param_2;
            if (((0.0 <= param_2) || (param_2 <= DAT_00b5556c)) &&
               ((param_2 <= 0.0 || (DAT_00b55080 <= param_2)))) {
              if (param_2 < DAT_00b550b0) {
                UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 0x188);
                uVar4 = *(undefined8 *)(*param_4 + 400);
              }
              else {
                if (param_2 <= DAT_00b5568c) {
                  return;
                }
                UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 0x198);
                uVar4 = *(undefined8 *)(*param_4 + 0x1a0);
              }
                    /* WARNING: Could not recover jumptable at 0x01c39cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(param_4,uVar4);
              return;
            }
            goto LAB_01c39c68;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
LAB_01c39c68:
  *(undefined4 *)(param_4 + 9) = 0;
  return;
}


