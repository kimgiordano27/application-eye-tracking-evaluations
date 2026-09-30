/*
FUNCTION_NAME: FUN_02e1b248
ENTRY_POINT: 02e1b248
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


undefined8 FUN_02e1b248(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff0155 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0155 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_02e1b3c4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar2 = (**(code **)(*param_2 + 0x238))
                    (param_2,*(undefined8 *)(param_1 + 200),*(undefined8 *)(*param_2 + 0x240));
  if (((((uVar2 & 1) != 0) && ((char)param_2[0x37] == '\0')) &&
      (*(char *)((long)param_2 + 0x6b) != '\0')) &&
     ((*(char *)((long)param_2 + 0x1b9) == '\0' &&
      (uVar2 = FUN_02ddfc74(param_2,0), (uVar2 & 1) == 0)))) {
    lVar3 = *(long *)(param_1 + 200);
    if (lVar3 == 0) goto LAB_02e1b3c4;
    if (((*(char *)(lVar3 + 0x72) == '\0') && (*(char *)(lVar3 + 0x73) == '\0')) &&
       (uVar2 = FUN_02e1b3c8(),
       puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
       (uVar2 & 1) == 0)) {
      lVar3 = param_2[0x15];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar3,0);
      if ((uVar2 & 1) != 0) {
        if (*(char *)(param_1 + 0xe8) != '\0') {
          uVar5 = *(undefined8 *)(param_1 + 0xf0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar2 = FUN_03923030(uVar5,0);
          if ((uVar2 & 1) == 0) {
            lVar3 = FUN_0391c27c(param_1,0);
          }
          else {
            lVar3 = *(long *)(param_1 + 0xf0);
          }
          if (lVar3 == 0) goto LAB_02e1b3c4;
          FUN_03928d34(lVar3,0);
          if (*(char *)(param_1 + 0xf9) == '\0') {
            puVar4 = (undefined4 *)(param_1 + 0xfc);
          }
          else {
            if (*(long *)(param_1 + 200) == 0) goto LAB_02e1b3c4;
            puVar4 = (undefined4 *)(*(long *)(param_1 + 200) + 0x108);
          }
          uVar2 = FUN_02e1b424(param_1,param_2,*puVar4,*(undefined1 *)(param_1 + 0xf8));
          if ((uVar2 & 1) == 0) {
            return 0;
          }
        }
        uVar5 = FUN_02e1b4d8(param_1,param_2);
        return uVar5;
      }
    }
  }
  return 0;
}


