/*
FUNCTION_NAME: FUN_030cfb2c
ENTRY_POINT: 030cfb2c
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


undefined4 FUN_030cfb2c(long param_1,long param_2,ulong param_3,float *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  
  if ((DAT_03ff1a4d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1a4d = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  if ((param_3 & 1) == 0) {
    plVar5 = (long *)(param_1 + 0x18);
    lVar4 = *plVar5;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) == 0) goto LAB_030cfbd0;
  }
  plVar5 = (long *)(param_1 + 0x10);
LAB_030cfbd0:
  lVar4 = *plVar5;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  uVar9 = *(undefined4 *)
           (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
  *param_5 = **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(param_5 + 1) = uVar9;
  *param_4 = -INFINITY;
  if (param_2 != 0) {
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar2 = 0;
      uVar3 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar6 = *(undefined8 *)(param_2 + 0x20 + uVar2 * 8);
        local_68 = local_68 & 0xffffffff;
        if (lVar4 == 0) goto LAB_030cfd40;
        uVar3 = FUN_0312ae84(lVar4,uVar6,(long)&local_68 + 4,&local_80,0);
        if ((uVar3 & 1) != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar3 = FUN_0391f968(uVar7,0,0);
          if ((uVar3 & 1) == 0) {
            fVar8 = local_68._4_4_;
          }
          else {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_030cfd40;
            uVar3 = FUN_0312ae84(*(long *)(param_1 + 0x20),uVar6,&local_68,&local_90,0);
            if ((uVar3 & 1) == 0) goto LAB_030cfd00;
            fVar8 = local_68._4_4_ * (1.0 - *(float *)(param_1 + 0x28)) +
                    *(float *)(param_1 + 0x28) * (float)local_68;
            local_68 = CONCAT44(fVar8,(float)local_68);
          }
          if (*param_4 < fVar8) {
            uVar9 = 1;
            *(undefined4 *)(param_5 + 1) = local_78;
            *param_5 = local_80;
            *param_4 = fVar8;
          }
        }
LAB_030cfd00:
        uVar3 = (ulong)*(uint *)(param_2 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    return uVar9;
  }
LAB_030cfd40:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


