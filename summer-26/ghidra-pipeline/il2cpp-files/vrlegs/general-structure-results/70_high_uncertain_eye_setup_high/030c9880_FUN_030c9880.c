/*
FUNCTION_NAME: FUN_030c9880
ENTRY_POINT: 030c9880
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


/* WARNING: Removing unreachable block (ram,0x030c9b28) */
/* WARNING: Removing unreachable block (ram,0x030c9aa8) */
/* WARNING: Removing unreachable block (ram,0x030c9ae4) */
/* WARNING: Removing unreachable block (ram,0x030c9b30) */

bool FUN_030c9880(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char local_64 [4];
  
  if ((DAT_0412b70e & 1) == 0) {
    FUN_01ab69ac(System_Collections_Generic_Dictionary<BehaviourType,_IPrimitiveData>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<BlendShapeBinding,_Action<float>>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<BlendShapeBinding,_float>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<BlendShapeKey,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbfd60);
    DAT_0412b70e = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iVar3 = thunk_FUN_01aa519c(param_1 + 0x40,param_2,0,0);
  if (iVar3 == 0) {
    plVar7 = (long *)(param_1 + 0x20);
    if (*plVar7 == 0) {
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbfd60);
      FUN_027b3d9c(uVar4,0);
      FUN_027e6fe4(plVar7,uVar4,0,0);
    }
    uVar4 = thunk_FUN_01a4b274(plVar7,0);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar4,local_64,0);
    plVar7 = (long *)(param_1 + 0x28);
    lVar6 = *plVar7;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(lVar6 + 0x28));
    }
    plVar8 = (long *)(param_1 + 0x38);
    if (*plVar8 != 0) {
      Animancer_FadeGroup__get_TargetWeight
                (*plVar8,&local_b0,
                 *(undefined8 *)System_Collections_Generic_Dictionary<BlendShapeKey,_float>_TypeInfo
                );
      puVar2 = System_Collections_Generic_Dictionary<BlendShapeBinding,_float>_TypeInfo;
      puVar1 = System_Collections_Generic_Dictionary<BlendShapeBinding,_Action<float>>_TypeInfo;
      uStack_88 = uStack_a8;
      local_90 = local_b0;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      while (uVar5 = FUN_021b51c8(&local_90,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        FUN_01b7a454(&local_90,&local_b0,*(undefined8 *)puVar2);
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(local_b0 + 0x18))
                  (*(undefined8 *)(local_b0 + 0x40),uStack_a8,*(undefined8 *)(local_b0 + 0x28));
      }
      FUN_021b51c4(&local_90,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<BehaviourType,_IPrimitiveData>_TypeInfo);
    }
    *plVar7 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x30),0);
    *plVar8 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,0);
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
  }
  return iVar3 == 0;
}


