/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_sessiongroup_handle_get
ENTRY_POINT: 0845f2a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_sessiongroup_handle_get
          (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined8 unaff_x19;
  long *unaff_x21;
  long in_stack_00000008;
  
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x10 + 0x278)) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_0845f2f8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0845f2f8:
  uVar3 = (*(code *)*puVar1)();
  if ((uVar3 & 1) != 0) {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    unaff_x19 = *(undefined8 *)(in_stack_00000008 + 0x10);
  }
  return unaff_x19;
}


