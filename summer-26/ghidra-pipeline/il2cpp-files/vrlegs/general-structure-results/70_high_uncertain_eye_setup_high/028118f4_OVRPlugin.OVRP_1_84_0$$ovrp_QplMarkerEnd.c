/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerEnd
ENTRY_POINT: 028118f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerEnd(long param_1)

{
  uint uVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  plVar3 = *(long **)(param_1 + 0x68);
  if ((plVar3 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200)), lVar4 != 0))
  {
    uVar1 = *(uint *)(lVar4 + 0x10);
    plVar3 = (long *)(param_1 + 0xa0);
    if ((*plVar3 == 0) || (uVar1 + 0xc != *(int *)(*plVar3 + 0x18))) {
LAB_02811988:
      uVar5 = FUN_025c660c(0,*(undefined2 *)(param_1 + 0x78),0xc,0);
      lVar4 = FUN_025b1328(lVar4,uVar5,0);
      if (lVar4 == 0) goto LAB_028119dc;
      lVar4 = FUN_025c5208(lVar4,0);
      *plVar3 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3,lVar4);
    }
    else if (uVar1 != 0) {
      uVar7 = 0;
      do {
        sVar2 = FUN_025b8a2c(lVar4,uVar7,0);
        lVar6 = *plVar3;
        if (lVar6 == 0) goto LAB_028119dc;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(short *)(lVar6 + (long)(int)uVar7 * 2 + 0x20) != sVar2) goto LAB_02811988;
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    return uVar1;
  }
LAB_028119dc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


