/*
FUNCTION_NAME: OVRPlugin$$get_HandSkeletonVersion
ENTRY_POINT: 0567472c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_HandSkeletonVersion(undefined8 param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 *unaff_x22;
  uint uVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_02d01540(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar4 = *plVar1;
  in_stack_00000008 = lVar4;
  __cxa_end_catch();
  FUN_05144508(in_stack_00000010,*unaff_x22);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar4);
  }
  if (unaff_x20 != 0) {
    if (0 < *(int *)(unaff_x20 + 0x20)) {
      lVar4 = FUN_03774f48();
      if (lVar4 == 0) goto LAB_05674718;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (uVar2 <= uVar5) {
LAB_0567471c:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar3 = *(long *)(unaff_x19 + 0xf0);
          if (lVar3 == 0) goto LAB_05674718;
          uVar2 = *(uint *)(lVar4 + (long)(int)uVar5 * 4 + 0x20);
          if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0567471c;
          for (lVar3 = lVar3 + (ulong)uVar2 * 0x18; uVar2 = *(uint *)(lVar3 + 0x30), -1 < (int)uVar2
              ; lVar3 = lVar3 + (ulong)uVar2 * 0x18) {
            FUN_03c2e698();
            lVar3 = *(long *)(unaff_x19 + 0xf0);
            if (lVar3 == 0) goto LAB_05674718;
            if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0567471c;
          }
          uVar2 = *(uint *)(lVar4 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar2);
      }
    }
    FUN_03774f48();
    return;
  }
LAB_05674718:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


