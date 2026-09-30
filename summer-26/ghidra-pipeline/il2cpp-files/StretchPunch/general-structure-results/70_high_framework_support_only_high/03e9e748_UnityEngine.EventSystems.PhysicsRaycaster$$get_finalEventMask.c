/*
FUNCTION_NAME: UnityEngine.EventSystems.PhysicsRaycaster$$get_finalEventMask
ENTRY_POINT: 03e9e748
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
UnityEngine_EventSystems_PhysicsRaycaster__get_finalEventMask
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000048;
  
  FUN_01d7d918(PTR_DAT_04254298);
  *(undefined1 *)(unaff_x20 + 0x4d1) = 1;
  uStack000000000000003c = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  uVar1 = FUN_03f5dc04(&stack0x00000048,0);
  switch(uVar1) {
  case 1:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5db5c();
    uVar2 = FUN_03f5e6d4(uVar2,0);
    break;
  case 2:
    if (unaff_x19 != 0) {
      uStack000000000000003c = FUN_03f5db64();
      if (*(int *)(*(long *)StringLiteral_1369 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_03366114(0);
      if (plVar4 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220));
        uVar2 = OVRManager__get_boundary(&stack0x0000003c,uVar2,0);
        return uVar2;
      }
    }
UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  case 3:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    in_stack_00000030 = FUN_03f5dccc();
    uVar2 = FUN_03e9d808(&stack0x00000030);
    break;
  case 4:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar1 = FUN_03f5de64();
    in_stack_00000020 = CONCAT44(param_2,uVar1);
    in_stack_00000028 = CONCAT44(param_4,param_3);
    uVar2 = FUN_02461a70(&stack0x00000020,0,0,0);
    break;
  case 5:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5e184();
    break;
  case 6:
    if ((unaff_x19 == 0) || (plVar4 = (long *)FUN_03f5e24c(), plVar4 == (long *)0x0))
    goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    break;
  case 7:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5dff4();
    break;
  case 8:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5e0bc();
    break;
  case 9:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5df2c();
    break;
  case 10:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5e37c();
    break;
  case 0xb:
    uVar2 = *(undefined8 *)StringLiteral_975;
    break;
  case 0xc:
    if (unaff_x19 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    _in_stack_00000008 = FUN_03f5e5f8();
    uVar2 = FUN_03e9d93c(&stack0x00000008);
    break;
  default:
    in_stack_00000018 = FUN_03f5dc04(&stack0x00000048,0);
    in_stack_00000008 = *(undefined8 *)StringLiteral_1731;
    in_stack_00000010 = 0xffffffffffffffff;
    uVar2 = FUN_033c7504(&stack0x00000008,0);
    uVar3 = FUN_03390e50((ulong)&stack0x00000048 | 4,0);
    uVar2 = FUN_03279ae0(*(undefined8 *)PTR_DAT_04254298,uVar2,*(undefined8 *)PTR_DAT_04254290,uVar3
                         ,0);
  }
  return uVar2;
}


