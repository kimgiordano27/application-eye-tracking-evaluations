/*
FUNCTION_NAME: FUN_01c57f48
ENTRY_POINT: 01c57f48
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


void FUN_01c57f48(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03fed665 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed665 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_01c580bc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar2 = FUN_0395b350(*(long *)(param_1 + 0x30),0);
      if ((uVar2 & 1) != 0) {
        fVar7 = *(float *)(param_1 + 0x48);
        fVar8 = *(float *)(param_1 + 0x28);
        fVar6 = (float)FUN_03925cf4(0);
        *(float *)(param_1 + 0x48) = fVar7 + fVar8 * fVar6;
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(uVar3,0);
        if ((uVar2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(uVar3,0);
          if ((uVar2 & 1) != 0) {
            lVar5 = *(long *)(param_1 + 0x30);
            fVar7 = *(float *)(param_1 + 0x48);
            fVar6 = (float)FUN_03925cf4(0);
            if (lVar5 == 0) goto LAB_01c580bc;
            FUN_0395b9a4(fVar6 * 0.0,fVar7 * fVar6,lVar5,0);
          }
        }
        else {
          plVar4 = *(long **)(param_1 + 0x38);
          fVar7 = *(float *)(param_1 + 0x48);
          fVar6 = (float)FUN_03925cf4(0);
          if (plVar4 == (long *)0x0) goto LAB_01c580bc;
          (**(code **)(*plVar4 + 0x208))
                    (fVar6 * 0.0,fVar7 * fVar6,plVar4,*(undefined8 *)(*plVar4 + 0x210));
        }
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01c580bc;
        uVar2 = FUN_0395ba3c(*(long *)(param_1 + 0x30),0);
        if ((uVar2 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
      }
    }
  }
  return;
}


