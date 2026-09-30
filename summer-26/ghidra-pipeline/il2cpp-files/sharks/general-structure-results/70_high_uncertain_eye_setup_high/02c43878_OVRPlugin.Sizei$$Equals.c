/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 02c43878
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c43968) */

void OVRPlugin_Sizei__Equals(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar4;
  char cStack000000000000000c;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x5f0));
  *(undefined1 *)(unaff_x21 + 0xb1) = 1;
  if ((unaff_x20 & 1) == 0) {
LAB_02c438d0:
    FUN_02c450b0();
    return;
  }
  lVar4 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_0181f594();
  if (lVar4 == 0) goto LAB_02c438d0;
  iVar2 = *(int *)(lVar4 + 0x3c);
  thunk_FUN_0181f594();
  if (iVar2 != 1) {
    thunk_FUN_0181f594();
    iVar2 = FUN_018183c4((int *)(lVar4 + 0x3c));
    if (iVar2 != 0) {
      FUN_02c43624();
      goto LAB_02c438e4;
    }
  }
  FUN_02c450b0();
LAB_02c438e4:
  lVar4 = *(long *)(lVar4 + 0x40);
  thunk_FUN_0181f594();
  if (lVar4 == 0) {
    return;
  }
  cStack000000000000000c = '\0';
  FUN_02c317e4(lVar4,&stack0x0000000c,0);
  puVar1 = PTR_DAT_037f45f0;
  lVar3 = *(long *)PTR_DAT_037f45f0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar3 = *(long *)puVar1;
  }
  FUN_0282702c(lVar4,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38),*(undefined8 *)PTR_DAT_0380c650
              );
  if (cStack000000000000000c == '\0') {
    return;
  }
  thunk_FUN_0184c01c(lVar4,0);
  return;
}


