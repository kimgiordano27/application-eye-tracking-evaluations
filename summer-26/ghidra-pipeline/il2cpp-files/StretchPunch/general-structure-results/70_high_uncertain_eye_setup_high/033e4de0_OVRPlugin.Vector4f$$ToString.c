/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 033e4de0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f__ToString(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_033e57a0();
  lVar1 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9257);
  FUN_033e7648();
  plVar4 = (long *)(unaff_x19 + 0xf8);
  *plVar4 = lVar1;
  thunk_FUN_01e10808(plVar4,lVar1);
  lVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9258,0x3c);
  FUN_032ff394(lVar1,*(undefined8 *)StringLiteral_9259,0);
  if (lVar1 != 0) {
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar6 = 0;
      uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar6) goto LAB_033e4ef0;
        FUN_033e76cc();
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    lVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_554,1);
    lVar3 = *(long *)(unaff_x19 + 0x108);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) < 3) {
LAB_033e4ef0:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) == 0) goto LAB_033e4ef0;
        *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(lVar3 + 0x22);
        if ((lVar5 != 0) && (FUN_033e7718(lVar5,0x37), *plVar4 != 0)) {
          *(undefined1 *)(unaff_x19 + 0xb0) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


