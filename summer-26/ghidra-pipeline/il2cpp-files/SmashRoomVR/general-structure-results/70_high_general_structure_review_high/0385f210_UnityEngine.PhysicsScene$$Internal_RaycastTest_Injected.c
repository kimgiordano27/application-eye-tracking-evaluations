/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_RaycastTest_Injected
ENTRY_POINT: 0385f210
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsScene__Internal_RaycastTest_Injected(void)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  in_stack_00000030 = FUN_035a0b10(in_stack_00000000,0);
  in_stack_00000020 = FUN_035a0b10(0);
  bVar2 = FUN_03857da8(&stack0x00000030,&stack0x00000020);
  if (*(byte *)(unaff_x19 + 0x32) != (bVar2 & 1)) {
    *(byte *)(unaff_x19 + 0x32) = bVar2 & 1;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0385f31c;
      FUN_0391b78c(*(long *)(unaff_x19 + 0x40),*(char *)(unaff_x19 + 0x32) == '\0',0);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
LAB_0385f31c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0391b78c(*(long *)(unaff_x19 + 0x48),*(char *)(unaff_x19 + 0x32) == '\0',0);
    }
  }
  return;
}


