/*
FUNCTION_NAME: FUN_01c07188
ENTRY_POINT: 01c07188
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c07188(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((DAT_03fed3bf & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed3bf = 1;
  }
  lVar6 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_01c07398;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_01c07398;
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar6 + 0x30);
  }
  if (*(float *)(lVar6 + 0x38) <= 0.0) {
    return 0;
  }
  if (*(long *)(lVar6 + 0x20) != 0) {
    lVar2 = FUN_0391fab4(*(long *)(lVar6 + 0x20),0);
    iVar1 = *(int *)(param_4 + 0x28);
    fVar10 = *(float *)(lVar6 + 0x30);
    fVar7 = (float)FUN_03925cf4(0);
    if ((*(long *)(lVar6 + 0x20) != 0) &&
       (lVar3 = FUN_0391fab4(*(long *)(lVar6 + 0x20),0), lVar3 != 0)) {
      FUN_039274a0(lVar3,0);
      fVar8 = (float)FUN_039145fc(0);
      param_2 = param_2 * DAT_00b556e8;
      FUN_03914cb4(fVar8 * DAT_00b556e8,param_2,param_3 * DAT_00b556e8,0);
      FUN_03914564(0,(fVar10 * fVar7 * (float)iVar1 + param_2) * DAT_00b552c8,0,0);
      if (lVar2 != 0) {
        FUN_03928f54(lVar2,0);
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
LAB_01c07324:
          fVar8 = *(float *)(lVar6 + 0x38);
          fVar10 = *(float *)(lVar6 + 0x30);
          fVar7 = (float)FUN_03925cf4(0);
          *(float *)(lVar6 + 0x38) = fVar8 - fVar10 * fVar7;
          uVar9 = *(undefined4 *)(lVar6 + 0x34);
          uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(uVar9,uVar5,0);
          *(undefined8 *)(param_4 + 0x18) = uVar5;
          thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar5);
          *(undefined4 *)(param_4 + 0x10) = 1;
          return 1;
        }
        if (*(long *)(lVar6 + 0x28) != 0) {
          lVar2 = FUN_0391fab4(*(long *)(lVar6 + 0x28),0);
          if (((*(long *)(lVar6 + 0x20) != 0) &&
              (lVar3 = FUN_0391fab4(*(long *)(lVar6 + 0x20),0), lVar3 != 0)) &&
             (FUN_039274a0(lVar3,0), lVar2 != 0)) {
            FUN_03928f54(lVar2,0);
            goto LAB_01c07324;
          }
        }
      }
    }
  }
LAB_01c07398:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


