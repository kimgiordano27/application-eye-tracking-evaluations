/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 01f8f2ac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizei__Equals(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (unaff_x20 == 0) goto LAB_01f8f314;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if ((int)uVar1 < 0) goto LAB_01f8f318;
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 == 0) goto LAB_01f8f314;
  if ((int)uVar1 < (int)*(uint *)(lVar4 + 0x18)) {
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    lVar4 = *(long *)(lVar4 + (ulong)uVar1 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_01f8f2e0;
  }
  else {
LAB_01f8f2e0:
    lVar4 = FUN_01f8f36c();
    if (lVar4 == 0) {
LAB_01f8f314:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
  if (*(long *)(lVar4 + 0x18) == *(long *)(unaff_x20 + 0x20)) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x19;
    thunk_FUN_01286abc();
    return;
  }
LAB_01f8f318:
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1a78);
  uVar2 = FUN_01f942e0(uVar2,0);
  thunk_FUN_01279b34(PTR_DAT_027b4020);
  uVar3 = thunk_FUN_0124bba8();
  FUN_01f68e18(uVar3,uVar2,0);
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1a98);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3,uVar2);
}


