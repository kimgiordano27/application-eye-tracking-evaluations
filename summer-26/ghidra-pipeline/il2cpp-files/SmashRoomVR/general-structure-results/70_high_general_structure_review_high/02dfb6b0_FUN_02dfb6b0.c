/*
FUNCTION_NAME: FUN_02dfb6b0
ENTRY_POINT: 02dfb6b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


float FUN_02dfb6b0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [12];
  float local_6c;
  float fStack_68;
  float local_64;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff006e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff006e = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar5,0);
  if ((uVar2 & 1) == 0) {
    if ((*(char *)(param_5 + 0x3c) == '\0') && (0.0 < *(float *)(param_5 + 0x40))) {
      return *(float *)(param_5 + 0x40);
    }
    lVar3 = FUN_0391c27c(param_5,0);
    if (lVar3 != 0) {
      uVar5 = FUN_039274a0(lVar3,0);
      lVar3 = FUN_0391c27c(param_5,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      if (lVar3 != 0) {
        puVar4 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        FUN_03928f54(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar3,0);
        if (*(long *)(param_5 + 0x20) != 0) {
          FUN_02de0234(auStack_78,*(long *)(param_5 + 0x20),0);
          lVar3 = FUN_0391c27c(param_5,0);
          if (lVar3 != 0) {
            fVar6 = local_6c + local_6c;
            fVar7 = fStack_68 + fStack_68;
            fVar8 = local_64 + local_64;
            FUN_03928f54(uVar5,param_2,param_3,param_4,lVar3,0);
            goto LAB_02dfb820;
          }
        }
      }
    }
  }
  else if (*(long *)(param_5 + 0x48) != 0) {
    fVar6 = (float)FUN_0395c284(*(long *)(param_5 + 0x48),0);
    fVar8 = (float)param_3;
    fVar7 = (float)param_2;
LAB_02dfb820:
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    return fVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


