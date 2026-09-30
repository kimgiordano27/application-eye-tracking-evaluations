/*
FUNCTION_NAME: FUN_02e3e650
ENTRY_POINT: 02e3e650
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


void FUN_02e3e650(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int extraout_var;
  long lVar5;
  
  if ((DAT_03ff025a & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_140);
    thunk_FUN_01ad9084(StringLiteral_4907);
    thunk_FUN_01ad9084(StringLiteral_4908);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4909);
    DAT_03ff025a = 1;
  }
  if (*(char *)(param_1 + 0x7d) != '\0') {
    lVar5 = *(long *)(param_1 + 0x80);
    if (lVar5 != 0) {
      lVar2 = FUN_034523e4(param_1 + 0x30,0);
      if (lVar2 != 0) {
        FUN_034409a0(lVar2,0);
        if (0 < extraout_var) {
          uVar3 = FUN_03452538(param_1 + 0x30,0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar4 = FUN_03922f24(uVar3,0,0);
          if ((uVar4 & 1) != 0) {
            FUN_034415d8(lVar5,0);
          }
        }
        puVar1 = StringLiteral_140;
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_140);
        FUN_0251b808(uVar3,param_1,*(undefined8 *)StringLiteral_4908,0);
        FUN_03440e30(lVar5,uVar3,0);
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
        FUN_0251b808(uVar3,param_1,*(undefined8 *)StringLiteral_4907,0);
        FUN_03440d80(lVar5,uVar3,0);
        *(undefined1 *)(param_1 + 0x7d) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        thunk_FUN_01b4f09c((long *)(param_1 + 0x80),0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


