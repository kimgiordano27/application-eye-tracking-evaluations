/*
FUNCTION_NAME: FUN_05e81308
ENTRY_POINT: 05e81308
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05e81308(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = param_4;
  uStack_60 = param_5;
  if ((DAT_066dc745 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPassthroughLayer_<>c__DisplayClass10_0_<IsSurfaceGeometry>b__0__);
    FUN_02b3c81c(Method_OVRPassthroughLayer_<>c__DisplayClass9_0_<RemoveSurfaceGeometry>b__0__);
    FUN_02b3c81c(Method_OVROverlayCanvasManager_<>c_<Update>b__10_0__);
    FUN_02b3c81c(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_RadioButtonGroup_<get_choices>d__17_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(PTR_DAT_063224e8);
    DAT_066dc745 = 1;
  }
  if (param_6 == 0) {
    local_80[0] = 0;
    if (param_3 != 0) {
      local_80[0] = FUN_049ca80c(param_3,*(undefined8 *)
                                          Method_OVRPassthroughLayer_<>c__DisplayClass9_0_<RemoveSurfaceGeometry>b__0__
                                );
      if (param_2 != 0) {
        uVar3 = FUN_049ca61c(param_2,*(undefined8 *)
                                      Method_OVRPassthroughLayer_<>c__DisplayClass10_0_<IsSurfaceGeometry>b__0__
                            );
        uVar4 = FUN_0322c2e8(param_4,param_5,
                             *(undefined8 *)Method_OVROverlayCanvasManager_<>c_<Update>b__10_0__);
        uVar2 = FUN_03ac5ac8(&local_68,
                             *(undefined8 *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__15_1__
                            );
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_063224e8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_063224e8);
        }
        FUN_05e528f0(uVar3,local_80,1,uVar4,uVar2,uVar5,0);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_05e814ec;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_58) {
    UnityEngine_UIElements_ComputedStyle__get_alignSelf(param_6,param_2,param_3,param_4,param_5,0);
    return;
  }
LAB_05e814ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


