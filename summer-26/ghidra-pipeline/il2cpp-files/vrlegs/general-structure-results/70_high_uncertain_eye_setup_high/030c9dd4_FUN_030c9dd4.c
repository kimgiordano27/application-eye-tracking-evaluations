/*
FUNCTION_NAME: FUN_030c9dd4
ENTRY_POINT: 030c9dd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030c9fa0) */

void FUN_030c9dd4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_44 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0412b70d & 1) == 0) {
    FUN_01ab69ac(System_Collections_Generic_Dictionary<BvhNode,_BvhAnimation_CurveSet>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<byte,_CustomType>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<byte,_int>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbfd60);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<byte,_LocalVoice>_TypeInfo);
    DAT_0412b70d = 1;
  }
  plVar2 = (long *)(param_1 + 0x20);
  if (*plVar2 == 0) {
    uVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbfd60);
    FUN_027b3d9c(uVar1,0);
    FUN_027e6fe4(plVar2,uVar1,0,0);
  }
  uVar1 = thunk_FUN_01a4b274(plVar2,0);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar1,local_44,0);
  if (*(int *)(param_1 + 0x40) == 0) {
    plVar2 = (long *)(param_1 + 0x28);
    if (*plVar2 == 0) {
      *plVar2 = param_2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,param_2);
      *(undefined8 *)(param_1 + 0x30) = param_3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x30),param_3);
    }
    else {
      plVar2 = (long *)(param_1 + 0x38);
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        lVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<byte,_int>_TypeInfo);
        Animancer_AnimancerState__OnSetIsPlaying
                  (lVar3,*(undefined8 *)
                          System_Collections_Generic_Dictionary<byte,_CustomType>_TypeInfo);
        *plVar2 = lVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar3);
        lVar3 = *plVar2;
      }
      local_58 = 0;
      uStack_50 = 0;
      FUN_020f03e8(&local_58,param_2,param_3,
                   *(undefined8 *)System_Collections_Generic_Dictionary<byte,_LocalVoice>_TypeInfo);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_40 = local_58;
      uStack_38 = uStack_50;
      FUN_01b5f01c(lVar3,&local_40,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<BvhNode,_BvhAnimation_CurveSet>_TypeInfo);
    }
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
  }
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
  }
  return;
}


