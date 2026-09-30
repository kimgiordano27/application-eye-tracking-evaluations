/*
FUNCTION_NAME: FUN_037c1c70
ENTRY_POINT: 037c1c70
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


undefined8 FUN_037c1c70(long param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  undefined1 local_38 [8];
  
  puVar2 = PTR_DAT_03d9efc8;
  if ((DAT_03ff807d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9efc8);
    thunk_FUN_01ad9084(StringLiteral_2730);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da3ba8);
    thunk_FUN_01ad9084(PTR_DAT_03da3bb0);
    thunk_FUN_01ad9084(PTR_DAT_03da3bb8);
    thunk_FUN_01ad9084(PTR_DAT_03da3bc0);
    DAT_03ff807d = 1;
  }
  puVar3 = PTR_DAT_03da3bb0;
  local_40 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  local_38[0] = FUN_03722868(*(undefined8 *)puVar3,0);
  if ((param_3 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    auVar6 = FUN_01f77820(param_1,param_2,&local_40,*(undefined8 *)PTR_DAT_03da3bc0);
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = thunk_FUN_01acfdbc(param_2,0);
    uVar5 = *(undefined8 *)PTR_DAT_03da3bb8;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0304eec0(uVar5,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    auVar6 = FUN_037e5e20(param_1,uVar4,uVar5,param_2,&local_40,0);
  }
  if (*(int *)(*(long *)StringLiteral_2730 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__) {
        param_2 = (long *)0x0;
      }
      goto LAB_037c1e2c;
    }
  }
  param_2 = (long *)0x0;
LAB_037c1e2c:
  FUN_037c2cd0(*(undefined8 *)PTR_DAT_03da3ba8,auVar6._0_8_,auVar6._8_8_,param_2);
  uVar4 = FUN_037de988(local_40,0);
  FUN_03722490(local_38,0);
  return uVar4;
}


