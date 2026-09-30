/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_NO_SESSION_PORTS_AVAILABLE_get
ENTRY_POINT: 08533138
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_NO_SESSION_PORTS_AVAILABLE_get(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  code *in_x9;
  long unaff_x20;
  int unaff_w22;
  int unaff_w25;
  undefined4 uVar4;
  
  plVar3 = (long *)(*in_x9)();
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    if (((*(long *)(unaff_x20 + 0x1f0) != 0) &&
        (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x1f0) + 0x38), plVar3 != (long *)0x0)) &&
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220)),
       plVar3 != (long *)0x0)) {
      iVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      if ((*(long *)(unaff_x20 + 0x1f0) != 0) &&
         (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x1f0) + 0x40), plVar3 != (long *)0x0)) {
        uVar4 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
        thunk_FUN_089972fc(1.0 / (float)unaff_w22,1.0 / (float)iVar1,(float)iVar2 + -1.0,uVar4);
        if (unaff_w25 != 1) {
          if ((*(long *)(unaff_x20 + 0x200) == 0) ||
             (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x200) + 0x38), plVar3 == (long *)0x0))
          goto LAB_085332ac;
          iVar1 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
          if ((iVar1 != 1) && (iVar1 != 2)) {
            return;
          }
        }
        FUN_08995630();
        return;
      }
    }
  }
LAB_085332ac:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


