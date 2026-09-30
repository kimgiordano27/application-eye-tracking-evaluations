/*
FUNCTION_NAME: FUN_0355be60
ENTRY_POINT: 0355be60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_0355be60(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  if ((DAT_0412df53 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ceb6b0);
    FUN_01ab69ac(OVRPlugin_Result_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    DAT_0412df53 = 1;
  }
  if (*(long *)(param_1 + 0x368) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x368) + 0x34);
    uVar6 = (ulong)uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x128);
    if (*(long *)(param_1 + 0x128) == 0) {
      uVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceb6b0,uVar6);
      *puVar1 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,uVar4);
    }
    else if (uVar2 != *(uint *)(*(long *)(param_1 + 0x128) + 0x18)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(puVar1,uVar6,0,*(undefined8 *)OVRPlugin_Result_TypeInfo);
    }
    if (0 < (int)uVar2) {
      uVar8 = 0;
      lVar9 = 0x20;
      do {
        plVar7 = (long *)*puVar1;
        if (uVar8 == 0) {
          if (plVar7 == (long *)0x0)
          goto UnityEngine_Animations_AnimationMixerPlayable__CreateHandleInternal_Injected;
          lVar5 = *(long *)(param_1 + 0x110);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
LAB_0355c004:
            uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar4,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_0355c000;
          plVar7 = plVar7 + 4;
          *plVar7 = lVar5;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x708);
          if (lVar5 == 0)
          goto UnityEngine_Animations_AnimationMixerPlayable__CreateHandleInternal_Injected;
          if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_0355c000:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar5 = *(long *)(lVar5 + uVar8 * 8 + 0x20);
          if ((lVar5 == 0) || (plVar7 == (long *)0x0))
          goto UnityEngine_Animations_AnimationMixerPlayable__CreateHandleInternal_Injected;
          lVar5 = *(long *)(lVar5 + 0x38);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
          goto LAB_0355c004;
          if (*(uint *)(plVar7 + 3) <= uVar8) goto LAB_0355c000;
          plVar7 = (long *)((long)plVar7 + lVar9);
          *plVar7 = lVar5;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar5);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (uVar6 != uVar8);
    }
    return *puVar1;
  }
UnityEngine_Animations_AnimationMixerPlayable__CreateHandleInternal_Injected:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


