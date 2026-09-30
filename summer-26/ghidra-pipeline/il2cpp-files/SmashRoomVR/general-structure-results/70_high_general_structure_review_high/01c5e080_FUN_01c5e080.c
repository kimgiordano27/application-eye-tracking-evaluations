/*
FUNCTION_NAME: FUN_01c5e080
ENTRY_POINT: 01c5e080
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


void FUN_01c5e080(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((DAT_03fed69c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed69c = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_1 + 0x69) != '\0') {
    lVar6 = param_1[0x1c];
    uVar10 = *(undefined4 *)((long)param_1 + 0xe4);
    fVar9 = *(float *)(param_1 + 0x1d);
    lVar5 = param_1[0xc];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar5,0,0);
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_0391c27c(param_1,0);
    }
    else {
      lVar5 = param_1[0xc];
    }
    if (lVar5 == 0) {
LAB_01c5e284:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    fVar7 = (float)FUN_03929a40((int)lVar6,uVar10,lVar5,0);
    lVar6 = param_1[0x18];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)param_1[0x18];
      if (plVar3 == (long *)0x0) goto LAB_01c5e284;
      uVar2 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
      if ((uVar2 & 1) != 0) {
        *(undefined4 *)((long)param_1 + 0xec) = 0;
        uVar2 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
        if ((uVar2 & 1) != 0) {
          *(int *)((long)param_1 + 0xec) = (int)param_1[0x14];
        }
      }
    }
    fVar11 = *(float *)((long)param_1 + 0xec);
    lVar6 = param_1[0x18];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar6,0);
    if ((uVar2 & 1) != 0) {
      lVar6 = param_1[0x18];
      uVar10 = FUN_03925ca4(0);
      if (lVar6 == 0) goto LAB_01c5e284;
      *(undefined4 *)(lVar6 + 0x70) = uVar10;
    }
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar8 = fVar11 - pfVar4[1];
    if (DAT_00b55084 <=
        (fVar9 - pfVar4[2]) * (fVar9 - pfVar4[2]) +
        (fVar7 - *pfVar4) * (fVar7 - *pfVar4) + fVar8 * fVar8) {
      fVar8 = (float)FUN_03925cf4(0);
                    /* WARNING: Could not recover jumptable at 0x01c5e26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))
                (fVar7 * fVar8,fVar11 * fVar8,fVar9 * fVar8,param_1,
                 *(undefined8 *)(*param_1 + 0x210));
      return;
    }
  }
  return;
}


