/*
FUNCTION_NAME: FUN_02e31b00
ENTRY_POINT: 02e31b00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


undefined1  [16] FUN_02e31b00(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  
  if ((DAT_03ff01eb & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01eb = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 == 0) {
LAB_02e31ce8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar3 = *(long **)(param_2 + 0x1f8);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(param_2,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(plVar3,0);
    if ((uVar2 & 1) != 0) {
      if (plVar3 != (long *)0x0) {
        lVar4 = plVar3[0xd];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_03923030(lVar4,0);
        if ((uVar2 & 1) == 0) {
          auVar7 = (**(code **)(*plVar3 + 0x198))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x1a0));
          return auVar7;
        }
        if (plVar3[0xd] != 0) {
          FUN_03928280(plVar3[0xd],0);
          if (plVar3[0xd] != 0) {
            FUN_03928fd8(plVar3[0xd],0);
            FUN_03914250(0);
            fVar5 = (float)FUN_03914a7c(0);
            lVar4 = FUN_0391c27c(param_2,0);
            if (lVar4 != 0) {
              fVar6 = (float)FUN_03929354(lVar4,0);
              lVar4 = FUN_0391c27c(param_2,0);
              if (lVar4 != 0) {
                FUN_03929354(lVar4,0);
                lVar4 = FUN_0391c27c(param_2,0);
                if (lVar4 != 0) {
                  auVar7._4_4_ = 0;
                  auVar7._0_4_ = fVar5 * fVar6;
                  uVar8 = 0;
                  FUN_03929354(lVar4,0);
                  auVar7._8_8_ = uVar8;
                  return auVar7;
                }
              }
            }
          }
        }
      }
      goto LAB_02e31ce8;
    }
  }
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  return ZEXT416(**(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8));
}


