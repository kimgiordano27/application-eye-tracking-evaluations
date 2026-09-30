/*
FUNCTION_NAME: Internal.Threading.Tasks.Tracing.TaskTrace$$TaskScheduled
ENTRY_POINT: 02de4934
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void Internal_Threading_Tasks_Tracing_TaskTrace__TaskScheduled(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 in_stack_00000008;
  
  if ((DAT_03feffb3 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4176);
    thunk_FUN_01ad9084(StringLiteral_4177);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feffb3 = 1;
  }
  in_stack_00000008 = 0;
  if (*(long *)(param_1 + 0x270) != 0) {
    uVar3 = FUN_025bddd0(*(long *)(param_1 + 0x270),param_2,&stack0x00000008,
                         *(undefined8 *)StringLiteral_4177);
    uVar2 = in_stack_00000008;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar2,0);
      uVar2 = in_stack_00000008;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(uVar2,0);
      }
      if (*(long *)(param_1 + 0x270) == 0) goto LAB_02de4a1c;
      FUN_025bdac0(*(long *)(param_1 + 0x270),param_2,*(undefined8 *)StringLiteral_4176);
    }
    return;
  }
LAB_02de4a1c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


