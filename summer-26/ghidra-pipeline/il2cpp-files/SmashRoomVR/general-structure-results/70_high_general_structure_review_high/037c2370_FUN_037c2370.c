/*
FUNCTION_NAME: FUN_037c2370
ENTRY_POINT: 037c2370
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_037c2370(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 local_38 [8];
  
  puVar3 = PTR_DAT_03d9efc8;
  if ((DAT_03ff807f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9efc8);
    thunk_FUN_01ad9084(StringLiteral_2730);
    thunk_FUN_01ad9084(PTR_DAT_03da3bf0);
    thunk_FUN_01ad9084(PTR_DAT_03da3bf8);
    DAT_03ff807f = 1;
  }
  puVar4 = PTR_DAT_03da3bf0;
  puVar2 = StringLiteral_2730;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  local_38[0] = FUN_03722868(*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  auVar5 = FUN_037c319c(param_1,param_2,param_3,param_4 & 1);
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if (bVar1 <= *(byte *)(*param_3 + 0x130)) {
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__) {
        param_3 = (long *)0x0;
      }
      goto LAB_037c2498;
    }
  }
  param_3 = (long *)0x0;
LAB_037c2498:
  FUN_037c2cd0(*(undefined8 *)PTR_DAT_03da3bf8,auVar5._0_8_,auVar5._8_8_,param_3);
  FUN_03722490(local_38,0);
  return;
}


