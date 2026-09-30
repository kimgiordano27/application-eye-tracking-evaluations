/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 033e4d94
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


void OVRPlugin_Vector3f___cctor(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9257);
    FUN_01d7d918(StringLiteral_554);
    FUN_01d7d918(StringLiteral_9258);
    FUN_01d7d918(StringLiteral_9259);
    *(undefined1 *)(unaff_x20 + 0xad7) = 1;
  }
  if (*(char *)(param_2 + 0xb0) != '\0') {
    return;
  }
  FUN_033e57a0(param_2);
  lVar1 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9257);
  FUN_033e7648();
  plVar4 = (long *)(param_2 + 0xf8);
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
        FUN_033e76cc(param_2,*(undefined4 *)(lVar1 + 0x20 + uVar6 * 4));
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    lVar5 = *(long *)(param_2 + 0xf8);
    lVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_554,1);
    lVar3 = *(long *)(param_2 + 0x108);
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
          *(undefined1 *)(param_2 + 0xb0) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


