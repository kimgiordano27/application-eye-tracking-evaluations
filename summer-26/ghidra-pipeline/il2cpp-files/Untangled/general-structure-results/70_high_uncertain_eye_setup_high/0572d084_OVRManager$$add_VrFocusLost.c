/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 0572d084
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusLost(void)

{
  long *plVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  while( true ) {
    lVar3 = *(long *)(unaff_x20 + 0x60);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar3 + 0x18) <= in_w8) {
      plVar1 = *(long **)(unaff_x19 + 8);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = (**(code **)(*plVar1 + 0x218))
                        (plVar1,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar1 + 0x220));
      if (lVar3 != 0) {
        auVar4 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar3,0,0);
        uVar2 = FUN_0551f17c();
        if ((uVar2 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
          thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
          if (*(int *)(*(long *)PTR_DAT_06d156d8 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_037892d4(unaff_x19 + 2);
        }
        else {
          FUN_0551f198();
          *unaff_x19 = 0xfffffffe;
          if (*(int *)(*(long *)PTR_DAT_06d156d8 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_0551fb78(unaff_x19 + 2,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar1 = (long *)FUN_03fd09cc(lVar3,in_w8,*(undefined8 *)PTR_DAT_06d586e8);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = (**(code **)(*plVar1 + 0x1f8))
                      (plVar1,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                       *(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(*plVar1 + 0x200));
    if (lVar3 == 0) break;
    auVar4 = Oculus_Platform_CAPI__ovr_Achievements_GetDefinitionsByName(lVar3,0,0);
    uVar2 = FUN_0551f17c();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = auVar4;
      thunk_FUN_02f411dc(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_06d156d8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_037892d4(unaff_x19 + 2);
      return;
    }
    FUN_0551f198();
    in_w8 = unaff_x19[0x14] + 1;
    unaff_x19[0x14] = in_w8;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


