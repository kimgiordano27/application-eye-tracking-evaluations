/*
FUNCTION_NAME: FUN_03e9e6f0
ENTRY_POINT: 03e9e6f0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
FUN_03e9e6f0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_18;
  
  local_18 = param_6;
  if ((DAT_044b24d1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1369);
    FUN_01d7d918(StringLiteral_1184);
    FUN_01d7d918(StringLiteral_1731);
    FUN_01d7d918(PTR_DAT_04254290);
    FUN_01d7d918(StringLiteral_975);
    FUN_01d7d918(PTR_DAT_04254298);
    DAT_044b24d1 = 1;
  }
  local_24 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  uVar1 = FUN_03f5dc04(&local_18,0);
  switch(uVar1) {
  case 1:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5db5c(param_5,local_18,0);
    uVar2 = FUN_03f5e6d4(uVar2,0);
    break;
  case 2:
    if (param_5 != 0) {
      local_24 = FUN_03f5db64(param_5,local_18,0);
      if (*(int *)(*(long *)StringLiteral_1369 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar4 = (long *)FUN_03366114(0);
      if (plVar4 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220));
        uVar2 = OVRManager__get_boundary(&local_24,uVar2,0);
        return uVar2;
      }
    }
UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  case 3:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    local_30 = FUN_03f5dccc(param_5,local_18,0);
    uVar2 = FUN_03e9d808(&local_30);
    break;
  case 4:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar1 = FUN_03f5de64(param_5,local_18,0);
    local_40 = CONCAT44(param_2,uVar1);
    local_38 = CONCAT44(param_4,param_3);
    uVar2 = FUN_02461a70(&local_40,0,0,0);
    break;
  case 5:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5e184(param_5,local_18,0);
    break;
  case 6:
    if ((param_5 == 0) || (plVar4 = (long *)FUN_03f5e24c(param_5,local_18,0), plVar4 == (long *)0x0)
       ) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    break;
  case 7:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5dff4(param_5,local_18,0);
    break;
  case 8:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5e0bc(param_5,local_18,0);
    break;
  case 9:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5df2c(param_5,local_18,0);
    break;
  case 10:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    uVar2 = FUN_03f5e37c(param_5,local_18,0);
    break;
  case 0xb:
    uVar2 = *(undefined8 *)StringLiteral_975;
    break;
  case 0xc:
    if (param_5 == 0) goto UnityEngine_EventSystems_PhysicsRaycaster__get_maxRayIntersections;
    local_58 = FUN_03f5e5f8(param_5,local_18,0);
    uVar2 = FUN_03e9d93c(local_58);
    break;
  default:
    local_48 = FUN_03f5dc04(&local_18,0);
    local_58._0_8_ = *(undefined8 *)StringLiteral_1731;
    local_58._8_8_ = 0xffffffffffffffff;
    uVar2 = FUN_033c7504(local_58,0);
    uVar3 = FUN_03390e50((ulong)&local_18 | 4,0);
    uVar2 = FUN_03279ae0(*(undefined8 *)PTR_DAT_04254298,uVar2,*(undefined8 *)PTR_DAT_04254290,uVar3
                         ,0);
  }
  return uVar2;
}


