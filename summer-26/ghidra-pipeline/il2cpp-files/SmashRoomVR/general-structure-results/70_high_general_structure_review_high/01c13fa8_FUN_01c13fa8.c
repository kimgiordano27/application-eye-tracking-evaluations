/*
FUNCTION_NAME: FUN_01c13fa8
ENTRY_POINT: 01c13fa8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c13fa8(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03fed41c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed41c = 1;
  }
  if (*(int *)(param_4 + 0x10) != 1) {
    if (*(int *)(param_4 + 0x10) == 0) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_4 + 0x38) = 0;
      iVar1 = 0;
      while (puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
            iVar1 < 100) {
        if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c140f0;
        uVar4 = FUN_0391c2b8(*(long *)(param_4 + 0x20),0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar5 = FUN_0391f968(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(DAT_00b55428,uVar4,0);
          *(undefined8 *)(param_4 + 0x18) = uVar4;
          thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar4);
          *(undefined4 *)(param_4 + 0x10) = 1;
          return 1;
        }
LAB_01c1408c:
        iVar1 = *(int *)(param_4 + 0x38) + 1;
        *(int *)(param_4 + 0x38) = iVar1;
      }
    }
    return 0;
  }
  lVar2 = *(long *)(param_4 + 0x30);
  *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  if (*(long *)(param_4 + 0x28) != 0) {
    lVar6 = *(long *)(param_4 + 0x20);
    fVar7 = (float)FUN_039291ac(*(long *)(param_4 + 0x28),0);
    if ((lVar2 != 0) && (lVar6 != 0)) {
      fVar8 = *(float *)(lVar2 + 0x38);
      FUN_0395ae9c(fVar7 * fVar8,param_2 * fVar8,param_3 * fVar8,lVar6,1,0);
      goto LAB_01c1408c;
    }
  }
LAB_01c140f0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


