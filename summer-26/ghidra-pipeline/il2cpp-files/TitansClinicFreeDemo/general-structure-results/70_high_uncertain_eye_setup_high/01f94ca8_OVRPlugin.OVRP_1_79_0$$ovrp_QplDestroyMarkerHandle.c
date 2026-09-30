/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 01f94ca8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_79_0__ovrp_QplDestroyMarkerHandle(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01220628();
    }
    iVar2 = FUN_01f94e14(unaff_x20,unaff_x21);
    if (iVar2 == 0) {
      unaff_w24 = 1;
    }
    else if (iVar2 == 2) {
      unaff_w24 = 0;
      unaff_w22 = (int)unaff_x23 + 1;
    }
    lVar1 = unaff_x23 + 1;
    if (unaff_x26 == lVar1) break;
    if (((uint)*(ulong *)(unaff_x19 + 0x18) <= unaff_w22) ||
       ((*(ulong *)(unaff_x19 + 0x18) & 0xffffffff) <= unaff_x23 + 2U)) goto LAB_01f94d44;
    unaff_x20 = *(undefined8 *)(unaff_x19 + (long)(int)unaff_w22 * 8 + 0x20);
    unaff_x21 = *(undefined8 *)(unaff_x25 + lVar1 * 8);
    in_w8 = *(int *)(*unaff_x27 + 0xe0);
    unaff_x23 = lVar1;
  }
  if ((unaff_w24 & 1) != 0) {
    uVar3 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar4 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar4,uVar3,0);
    uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1c08);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar4,uVar3);
  }
  if (unaff_w22 < *(uint *)(unaff_x19 + 0x18)) {
    return *(undefined8 *)(unaff_x19 + (long)(int)unaff_w22 * 8 + 0x20);
  }
LAB_01f94d44:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


