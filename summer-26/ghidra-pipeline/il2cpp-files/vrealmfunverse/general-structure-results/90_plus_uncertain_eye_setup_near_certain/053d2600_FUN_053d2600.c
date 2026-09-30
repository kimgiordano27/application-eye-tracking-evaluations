/*
FUNCTION_NAME: FUN_053d2600
ENTRY_POINT: 053d2600
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x053d2794) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_053d2600(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char local_2c [4];
  long local_28;
  
  if ((DAT_066d09d1 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_066d09d1 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  local_28 = 0;
  local_2c[0] = '\0';
  if (lVar5 == 0) {
LAB_053d2790:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(lVar5 + 0xe0) == 0) {
    local_2c[0] = '\0';
    local_28 = param_1;
    FUN_04ddecfc(param_1,local_2c,0);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(*(long *)(param_1 + 0x40) + 0xe0) == 0) {
      lVar5 = FUN_053d7bb8(param_1,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar1 = FUN_04d94ac4(lVar5,0);
      lVar5 = *(long *)(param_1 + 0x40);
      if ((uVar1 & 1) == 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
      else {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(byte *)(lVar5 + 0x51) - 6 < 3) {
          uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
          lVar5 = FUN_02b3c908(uVar2,1);
          uVar2 = FUN_053d7bb8(param_1,0);
          uVar2 = FUN_053d6158(uVar2,0);
          if (lVar5 != 0) {
            FUN_0275a400(lVar5,uVar2);
            FUN_0275a434(lVar5,0,uVar2);
            uVar2 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_18_0_TypeInfo);
            uVar2 = FUN_0540ce80(uVar2,lVar5,0);
            thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
            uVar4 = thunk_FUN_02b79644();
            FUN_053f0c5c(uVar4,uVar2,0);
            uVar2 = FUN_0540c738(uVar4,0);
            uVar4 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_19_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar2,uVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
      if (*(long *)(lVar5 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_053d7134(*(long *)(lVar5 + 0x78),0,0);
      }
      lVar5 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
      FUN_053fcef0(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar2 = FUN_053fd3f4(lVar5,param_1,0);
      thunk_FUN_02b4aae0(0);
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0xe0);
      *puVar3 = uVar2;
      thunk_FUN_02bb0e9c(puVar3,uVar2);
    }
    if (local_2c[0] != '\0') {
      thunk_FUN_02b4a54c(local_28,0);
    }
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 == 0) goto LAB_053d2790;
  }
  return *(undefined8 *)(lVar5 + 0xe0);
}


