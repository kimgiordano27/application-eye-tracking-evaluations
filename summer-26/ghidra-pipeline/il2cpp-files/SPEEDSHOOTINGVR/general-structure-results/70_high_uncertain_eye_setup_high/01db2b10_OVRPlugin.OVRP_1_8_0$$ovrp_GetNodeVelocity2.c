/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeVelocity2
ENTRY_POINT: 01db2b10
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0235a438);
  *(undefined1 *)(unaff_x20 + 0x9ed) = 1;
  in_stack_00000008 = 0;
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
LAB_01db2b70:
    puVar1 = PTR_DAT_0235a438;
    lVar2 = *(long *)PTR_DAT_0235a438;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_01a36f14(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                   *(undefined8 *)PTR_DAT_0235a488);
      return;
    }
  }
  else {
    do {
      in_stack_00000008 = 0;
      uVar3 = FUN_01db1d38(lVar2,&stack0x00000008);
      if ((uVar3 & 1) == 0) goto LAB_01db2b70;
      if (*(long *)(unaff_x19 + 0x10) == 0) break;
      FUN_01db10f8(*(long *)(unaff_x19 + 0x10),in_stack_00000008,1);
      lVar2 = *(long *)(unaff_x19 + 0x18);
      in_stack_00000008 = 0;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


