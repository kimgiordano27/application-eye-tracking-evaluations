/*
FUNCTION_NAME: FUN_0355a64c
ENTRY_POINT: 0355a64c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0355a64c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_0412df44 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    DAT_0412df44 = 1;
  }
  puVar2 = OVRPlugin_Media_TypeInfo;
  if (*(long *)(param_1 + 0x368) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x368) + 0x34);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      lVar6 = 4;
      do {
        uVar7 = lVar6 - 4;
        if (lVar5 == 0) {
          lVar4 = *(long *)(param_1 + 0x3a0);
        }
        else {
          if ((*(long *)(param_1 + 0x368) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar4 == 0)) goto LAB_0355a814;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0355a818;
          FUN_03596a20(lVar4 + lVar5 + 0x20,0);
          lVar4 = *(long *)(param_1 + 0x708);
          if (lVar4 == 0) goto LAB_0355a814;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0355a818;
          lVar4 = *(long *)(lVar4 + lVar6 * 8);
          if (lVar4 == 0) goto LAB_0355a814;
          lVar4 = FUN_0359d5ac(lVar4,0);
        }
        if ((*(long *)(param_1 + 0x368) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_0355a814;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_0355a818:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (lVar4 == 0) goto LAB_0355a814;
        FUN_036a460c(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x30),0);
        if ((*(long *)(param_1 + 0x368) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_0355a814;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_0355a818;
        FUN_036a4810(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x48),0);
        if ((*(long *)(param_1 + 0x368) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_0355a814;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_0355a818;
        FUN_036a48bc(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x50),0);
        if ((*(long *)(param_1 + 0x368) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar3 == 0)) goto LAB_0355a814;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_0355a818;
        FUN_036a4e24(lVar4,*(undefined8 *)(lVar3 + lVar5 + 0x58),0);
        FUN_036aa280(lVar4,0);
        lVar5 = lVar5 + 0x50;
        lVar6 = lVar6 + 1;
      } while ((ulong)uVar1 * 0x50 - lVar5 != 0);
    }
    return;
  }
LAB_0355a814:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


