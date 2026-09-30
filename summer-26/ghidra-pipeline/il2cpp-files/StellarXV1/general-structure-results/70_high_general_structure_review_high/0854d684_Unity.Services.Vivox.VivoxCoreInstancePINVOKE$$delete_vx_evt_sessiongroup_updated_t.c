/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_sessiongroup_updated_t
ENTRY_POINT: 0854d684
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_sessiongroup_updated_t(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  puVar2 = PTR_DAT_0932e420;
  if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
    FUN_083ee590();
    FUN_083ee590();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar1 = 0x3f800000;
      if (*(char *)(*(long *)(unaff_x21 + 0x10) + 0xf0) != '\0') {
        uVar1 = 0xbf800000;
      }
      FUN_083ee330(uVar1);
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 != 0) {
        FUN_084882cc(&stack0x00000058,*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x18),0)
        ;
        FUN_083ee87c();
        if (DAT_09885628 == '\0') {
          FUN_04077588(PTR_DAT_09286e18);
          DAT_09885628 = '\x01';
        }
        FUN_083ee8f4();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


