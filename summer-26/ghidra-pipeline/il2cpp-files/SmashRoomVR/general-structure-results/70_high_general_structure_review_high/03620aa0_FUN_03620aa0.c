/*
FUNCTION_NAME: FUN_03620aa0
ENTRY_POINT: 03620aa0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


undefined1  [16] FUN_03620aa0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_98;
  float fStack_94;
  float local_90;
  float local_7c;
  float fStack_78;
  float local_74;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff71fc & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff71fc = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 != 0) {
      FUN_03620d08(&local_98,param_1,param_2);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar8 = local_98 - *pfVar4;
      fVar9 = fStack_94 - pfVar4[1];
      fVar10 = local_90 - pfVar4[2];
      if (DAT_00b55084 <= fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) {
        fVar9 = local_7c - *pfVar4;
        fVar8 = fStack_78 - pfVar4[1];
        fVar7 = local_74 - pfVar4[2];
        fVar10 = fVar7 * fVar7;
        fVar8 = fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
        if (DAT_00b55084 <= fVar8) {
          if ((param_1 != 0) && (lVar3 = FUN_0391c27c(param_1,0), lVar3 != 0)) {
            fVar9 = (float)FUN_039274a0(lVar3,0);
            fVar5 = (float)FUN_03914800(local_98,fStack_94,local_90,local_7c,fStack_78,local_74,0);
            return ZEXT416((uint)((fVar8 * local_90 + fVar7 * fVar5 + fVar9 * local_7c) -
                                 fVar10 * fStack_94));
          }
          goto LAB_03620d04;
        }
      }
    }
    if ((param_1 == 0) || (lVar3 = FUN_0391c27c(param_1,0), lVar3 == 0)) {
LAB_03620d04:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    auVar6 = FUN_039274a0(lVar3,0);
  }
  else {
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    auVar6 = ZEXT416(**(uint **)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                + 0xb8));
  }
  return auVar6;
}


