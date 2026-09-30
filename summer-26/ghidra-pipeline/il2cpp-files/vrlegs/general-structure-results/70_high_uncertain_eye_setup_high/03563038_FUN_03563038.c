/*
FUNCTION_NAME: FUN_03563038
ENTRY_POINT: 03563038
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_03563038(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if ((DAT_0412df89 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ceb6b0);
    FUN_01ab69ac(OVRPlugin_Result_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    DAT_0412df89 = 1;
  }
  if (*(long *)(param_1 + 0x368) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x368) + 0x34);
    uVar7 = (ulong)uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x138);
    if (*(long *)(param_1 + 0x138) == 0) {
      uVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceb6b0,uVar7);
      *puVar1 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,uVar5);
    }
    else if (uVar2 != *(uint *)(*(long *)(param_1 + 0x138) + 0x18)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff02b8(puVar1,uVar7,0,*(undefined8 *)OVRPlugin_Result_TypeInfo);
    }
    if (0 < (int)uVar2) {
      uVar9 = 0;
      lVar10 = 0x20;
      do {
        plVar8 = (long *)*puVar1;
        if (uVar9 == 0) {
          lVar6 = FUN_0357d618(param_1,0);
          if (plVar8 == (long *)0x0) goto LAB_03563200;
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
LAB_03563208:
            uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar5,0);
          }
          if ((int)plVar8[3] == 0) goto LAB_03563204;
          plVar8 = plVar8 + 4;
          *plVar8 = lVar6;
        }
        else {
          lVar6 = *(long *)(param_1 + 0x708);
          if (lVar6 == 0) goto LAB_03563200;
          if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_03563204:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar3 = *(long **)(lVar6 + uVar9 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_03563200;
          lVar6 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
          if (plVar8 == (long *)0x0) goto LAB_03563200;
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0))
          goto LAB_03563208;
          if (*(uint *)(plVar8 + 3) <= uVar9) goto LAB_03563204;
          plVar8 = (long *)((long)plVar8 + lVar10);
          *plVar8 = lVar6;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar6);
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (uVar7 != uVar9);
    }
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x138);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x128);
    return *(undefined8 *)(param_1 + 0x138);
  }
LAB_03563200:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


