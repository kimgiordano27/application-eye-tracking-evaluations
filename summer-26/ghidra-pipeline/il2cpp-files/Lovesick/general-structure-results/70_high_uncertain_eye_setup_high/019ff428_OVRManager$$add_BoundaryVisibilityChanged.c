/*
FUNCTION_NAME: OVRManager$$add_BoundaryVisibilityChanged
ENTRY_POINT: 019ff428
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_BoundaryVisibilityChanged(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar7;
  float unaff_s8;
  
  plVar7 = *(long **)(unaff_x22 + 0x7a8);
  lVar5 = FUN_01991930(param_1,0);
  lVar6 = *plVar7;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
    lVar6 = *plVar7;
  }
  if (0.0 <= unaff_s8) {
    puVar1 = (undefined4 *)(unaff_x19 + 0x70);
    puVar2 = (undefined4 *)(unaff_x19 + 0x74);
    puVar3 = (undefined4 *)(unaff_x19 + 0x78);
    puVar4 = (undefined4 *)(unaff_x19 + 0x7c);
  }
  else if ((unaff_x20 & 1) == 0) {
    puVar1 = (undefined4 *)(unaff_x19 + 0x80);
    puVar2 = (undefined4 *)(unaff_x19 + 0x84);
    puVar3 = (undefined4 *)(unaff_x19 + 0x88);
    puVar4 = (undefined4 *)(unaff_x19 + 0x8c);
  }
  else {
    puVar1 = (undefined4 *)(unaff_x19 + 0x90);
    puVar2 = (undefined4 *)(unaff_x19 + 0x94);
    puVar3 = (undefined4 *)(unaff_x19 + 0x98);
    puVar4 = (undefined4 *)(unaff_x19 + 0x9c);
  }
  if (lVar5 != 0) {
    thunk_FUN_0267c044(*puVar1,*puVar2,*puVar3,*puVar4,lVar5,
                       *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      lVar5 = FUN_01991930(*(long *)(unaff_x19 + 0x50),0);
      lVar6 = *plVar7;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
        lVar6 = *plVar7;
      }
      if (unaff_s8 <= 0.0) {
        puVar1 = (undefined4 *)(unaff_x19 + 0x70);
        puVar2 = (undefined4 *)(unaff_x19 + 0x74);
        puVar3 = (undefined4 *)(unaff_x19 + 0x78);
        puVar4 = (undefined4 *)(unaff_x19 + 0x7c);
      }
      else if ((unaff_x20 & 1) == 0) {
        puVar1 = (undefined4 *)(unaff_x19 + 0x80);
        puVar2 = (undefined4 *)(unaff_x19 + 0x84);
        puVar3 = (undefined4 *)(unaff_x19 + 0x88);
        puVar4 = (undefined4 *)(unaff_x19 + 0x8c);
      }
      else {
        puVar1 = (undefined4 *)(unaff_x19 + 0x90);
        puVar2 = (undefined4 *)(unaff_x19 + 0x94);
        puVar3 = (undefined4 *)(unaff_x19 + 0x98);
        puVar4 = (undefined4 *)(unaff_x19 + 0x9c);
      }
      if (lVar5 != 0) {
        thunk_FUN_0267c044(*puVar1,*puVar2,*puVar3,*puVar4,lVar5,
                           *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          FUN_019a1c58(*(long *)(unaff_x19 + 0x48),0);
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            FUN_019a1c58(*(long *)(unaff_x19 + 0x50),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


