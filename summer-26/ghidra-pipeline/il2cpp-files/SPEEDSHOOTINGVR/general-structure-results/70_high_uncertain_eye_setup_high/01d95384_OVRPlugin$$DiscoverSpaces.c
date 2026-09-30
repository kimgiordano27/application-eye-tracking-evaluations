/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 01d95384
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__DiscoverSpaces(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  bool bVar7;
  
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    iVar3 = (int)uVar4;
    if (iVar3 == *(int *)(*(long *)(unaff_x19 + 0x78) + 0x18)) {
      bVar7 = 0 < iVar3;
      if (0 < iVar3) {
        uVar6 = 0;
        do {
          if ((uint)uVar4 <= uVar6) {
LAB_01d95438:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          lVar5 = *(long *)(unaff_x19 + 0x78);
          if (lVar5 == 0) goto LAB_01d9542c;
          if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_01d95438;
          plVar2 = *(long **)(param_1 + (long)(int)uVar6 * 8 + 0x20);
          if (plVar2 == (long *)0x0) {
LAB_01d9542c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          uVar4 = (**(code **)(*plVar2 + 0x138))
                            (plVar2,*(undefined8 *)(lVar5 + (long)(int)uVar6 * 8 + 0x20),
                             *(undefined8 *)(*plVar2 + 0x140));
          if ((uVar4 & 1) == 0) break;
          param_1 = *(long *)(unaff_x20 + 0x78);
          if (param_1 == 0) goto LAB_01d9542c;
          uVar1 = *(uint *)(param_1 + 0x18);
          uVar4 = (ulong)uVar1;
          uVar6 = uVar6 + 1;
          bVar7 = (int)uVar6 < (int)uVar1;
        } while ((int)uVar6 < (int)uVar1);
      }
      return bVar7 ^ 1;
    }
  }
  return 0;
}


