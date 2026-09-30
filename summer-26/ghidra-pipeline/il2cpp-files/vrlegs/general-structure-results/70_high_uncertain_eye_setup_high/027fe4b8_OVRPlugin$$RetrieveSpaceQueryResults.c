/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 027fe4b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__RetrieveSpaceQueryResults(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar6;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x20 + 0x281) = 1;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x20) & unaff_w21;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) <= uVar1) {
LAB_027fe58c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfdb10);
    FUN_027fe59c();
    plVar6 = *(long **)(unaff_x19 + 0x18);
    if (plVar6 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,0);
      }
      if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_027fe58c;
      plVar6[(long)(int)uVar1 + 4] = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar6 + (long)(int)uVar1 + 4,lVar3);
      iVar2 = *(int *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x10) = iVar2 + 1;
      if (iVar2 == *(int *)(unaff_x19 + 0x20)) {
        FUN_027fe5f0();
      }
      if (lVar3 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


