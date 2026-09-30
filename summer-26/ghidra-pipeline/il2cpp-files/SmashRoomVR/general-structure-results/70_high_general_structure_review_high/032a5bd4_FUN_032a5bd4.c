/*
FUNCTION_NAME: FUN_032a5bd4
ENTRY_POINT: 032a5bd4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_032a5bd4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_03ff582d & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13614);
    thunk_FUN_01ad9084(PTR_DAT_03d83258);
    thunk_FUN_01ad9084(PTR_DAT_03d86768);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff582d = 1;
  }
  lVar1 = FUN_0391c27c(param_5,0);
  if (lVar1 != 0) {
    uVar4 = FUN_03928280(lVar1,0);
    *(undefined4 *)(param_5 + 0x88) = uVar4;
    *(undefined4 *)(param_5 + 0x8c) = param_2;
    *(undefined4 *)(param_5 + 0x90) = param_3;
    lVar1 = FUN_0391c27c(param_5,0);
    if (lVar1 != 0) {
      uVar4 = FUN_03928fd8(lVar1,0);
      *(undefined4 *)(param_5 + 0x78) = uVar4;
      *(undefined4 *)(param_5 + 0x7c) = param_2;
      *(undefined4 *)(param_5 + 0x80) = param_3;
      *(undefined4 *)(param_5 + 0x84) = param_4;
      if (*(char *)(param_5 + 0x29) == '\0') {
        lVar1 = FUN_0391c27c(param_5,0);
        if (lVar1 == 0) goto LAB_032a5d10;
        lVar1 = FUN_01e8b0b4(lVar1,*(undefined8 *)PTR_DAT_03d83258);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar2 = FUN_0391f968(lVar1,0,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_13614);
          FUN_02518558(uVar3,param_5,*(undefined8 *)PTR_DAT_03d86768,0);
          if (lVar1 == 0) goto LAB_032a5d10;
          FUN_0321188c(lVar1,uVar3,0);
          *(undefined1 *)(param_5 + 200) = 0;
        }
      }
      return;
    }
  }
LAB_032a5d10:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


