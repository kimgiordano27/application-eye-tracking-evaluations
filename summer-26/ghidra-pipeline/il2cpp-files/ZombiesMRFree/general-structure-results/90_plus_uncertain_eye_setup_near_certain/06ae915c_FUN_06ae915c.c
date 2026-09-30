/*
FUNCTION_NAME: FUN_06ae915c
ENTRY_POINT: 06ae915c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06ae915c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  
  if ((DAT_073ab334 & 1) == 0) {
    FUN_02fe925c(AI_Ragdoll_<PmHitOverride>d__63_TypeInfo);
    FUN_02fe925c(AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo);
    FUN_02fe925c(AI_Ragdoll_<DisablePMDeferred>d__70_TypeInfo);
    DAT_073ab334 = 1;
  }
  if (param_7 < 0x1000a) {
    if (param_7 == 0x10000) {
      puVar1 = (undefined4 *)
               FUN_04bc3274(param_5,*(undefined8 *)
                                     AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      if (param_6 == 0) goto LAB_06ae92dc;
      uVar5 = 0x2010;
    }
    else {
      if (param_7 != 0x10009) goto switchD_06ae91f8_caseD_70001;
      lVar2 = FUN_04bc3274(param_5,*(undefined8 *)
                                    AI_Ragdoll_<IgnoreEnvironmentCollisions>d__55_TypeInfo);
      *(undefined4 *)(lVar2 + 0x68) = param_1;
      *(undefined4 *)(lVar2 + 0x6c) = param_2;
      *(undefined4 *)(lVar2 + 0x70) = param_3;
      *(undefined4 *)(lVar2 + 0x74) = param_4;
      if (param_6 == 0) goto LAB_06ae92dc;
      uVar5 = 0x810;
    }
  }
  else {
    switch(param_7) {
    case 0x70000:
      puVar1 = (undefined4 *)
               FUN_04bc4a2c(param_5 + 0x28,
                            *(undefined8 *)AI_Ragdoll_<DisablePMDeferred>d__70_TypeInfo);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      break;
    case 0x70001:
    case 0x70002:
    case 0x70003:
    case 0x70004:
    case 0x70005:
    case 0x70007:
    case 0x70008:
switchD_06ae91f8_caseD_70001:
      local_68 = thunk_FUN_03037804(
                                   Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_TypeInfo
                                   );
      uStack_60 = 0xffffffffffffffff;
      local_58 = param_7;
      uVar5 = FUN_05b259a4(&local_68,0);
      uVar3 = thunk_FUN_03037804(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar4 = thunk_FUN_03037804(OVRPassthroughLayer_<>c__DisplayClass10_0_TypeInfo);
      uVar5 = FUN_05971ec8(uVar3,uVar5,uVar4,0);
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar3 = thunk_FUN_0301080c();
      uVar4 = thunk_FUN_03037804(PTR_DAT_06fa5ba8);
      FUN_05a5ea40(uVar3,uVar5,uVar4,0);
      uVar5 = thunk_FUN_03037804(OVRPlugin_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,uVar5);
    case 0x70006:
      lVar2 = FUN_04bc4a2c(param_5 + 0x28,
                           *(undefined8 *)AI_Ragdoll_<DisablePMDeferred>d__70_TypeInfo);
      *(undefined4 *)(lVar2 + 100) = param_1;
      *(undefined4 *)(lVar2 + 0x68) = param_2;
      *(undefined4 *)(lVar2 + 0x6c) = param_3;
      *(undefined4 *)(lVar2 + 0x70) = param_4;
      break;
    case 0x70009:
      lVar2 = FUN_04bc4a2c(param_5 + 0x28,
                           *(undefined8 *)AI_Ragdoll_<DisablePMDeferred>d__70_TypeInfo);
      *(undefined4 *)(lVar2 + 0x84) = param_1;
      *(undefined4 *)(lVar2 + 0x88) = param_2;
      *(undefined4 *)(lVar2 + 0x8c) = param_3;
      *(undefined4 *)(lVar2 + 0x90) = param_4;
      break;
    case 0x7000a:
      lVar2 = FUN_04bc4a2c(param_5 + 0x28,
                           *(undefined8 *)AI_Ragdoll_<DisablePMDeferred>d__70_TypeInfo);
      *(undefined4 *)(lVar2 + 0x94) = param_1;
      *(undefined4 *)(lVar2 + 0x98) = param_2;
      *(undefined4 *)(lVar2 + 0x9c) = param_3;
      *(undefined4 *)(lVar2 + 0xa0) = param_4;
      break;
    case 0x7000b:
      lVar2 = FUN_04bc4a2c(param_5 + 0x28,
                           *(undefined8 *)AI_Ragdoll_<DisablePMDeferred>d__70_TypeInfo);
      *(undefined4 *)(lVar2 + 0xa4) = param_1;
      *(undefined4 *)(lVar2 + 0xa8) = param_2;
      *(undefined4 *)(lVar2 + 0xac) = param_3;
      *(undefined4 *)(lVar2 + 0xb0) = param_4;
      break;
    default:
      if (param_7 != 0x30002) goto switchD_06ae91f8_caseD_70001;
      lVar2 = FUN_04bc3bf4(param_5 + 0x10,*(undefined8 *)AI_Ragdoll_<PmHitOverride>d__63_TypeInfo);
      *(undefined4 *)(lVar2 + 0x1c) = param_1;
      *(undefined4 *)(lVar2 + 0x20) = param_2;
      *(undefined4 *)(lVar2 + 0x24) = param_3;
      *(undefined4 *)(lVar2 + 0x28) = param_4;
    }
    if (param_6 == 0) {
LAB_06ae92dc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar5 = 0x2000;
  }
  FUN_06b0d1e0(param_6,uVar5,0);
  return;
}


