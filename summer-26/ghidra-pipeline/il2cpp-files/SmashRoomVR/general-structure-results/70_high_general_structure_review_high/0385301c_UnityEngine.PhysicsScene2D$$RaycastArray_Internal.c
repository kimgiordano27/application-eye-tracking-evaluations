/*
FUNCTION_NAME: UnityEngine.PhysicsScene2D$$RaycastArray_Internal
ENTRY_POINT: 0385301c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


void UnityEngine_PhysicsScene2D__RaycastArray_Internal(void)

{
  ulong uVar1;
  long lVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  uint in_stack_00000010;
  
  if (in_w8 != 0) {
    if (*(long *)(unaff_x23 + 0x200) == 0) goto LAB_0385315c;
    uVar1 = FUN_025cf828();
    if ((uVar1 & 1) != 0) {
      uVar1 = (ulong)in_stack_00000010;
      goto LAB_0385311c;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_0391f968();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x20) != 0)) &&
     (lVar2 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
    uVar1 = FUN_039291ac(lVar2,0);
LAB_0385311c:
    FUN_02d0b20c(uVar1);
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    return;
  }
LAB_0385315c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


