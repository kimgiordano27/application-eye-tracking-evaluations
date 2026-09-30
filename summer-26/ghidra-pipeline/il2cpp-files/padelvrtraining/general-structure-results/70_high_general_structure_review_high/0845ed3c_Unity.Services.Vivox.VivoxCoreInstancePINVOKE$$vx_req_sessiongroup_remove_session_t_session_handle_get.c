/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_session_handle_get
ENTRY_POINT: 0845ed3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0845edd0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_session_handle_get
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x24;
  
  if (param_2 != 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x0845edb8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370();
code_r0x0845edb8:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0845ecec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0845ecec:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d540(lVar6);
  }
  return;
}


