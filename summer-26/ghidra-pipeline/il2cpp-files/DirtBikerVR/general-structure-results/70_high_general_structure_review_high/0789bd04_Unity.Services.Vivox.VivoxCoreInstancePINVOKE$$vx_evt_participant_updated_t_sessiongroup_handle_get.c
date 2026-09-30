/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_sessiongroup_handle_get
ENTRY_POINT: 0789bd04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
               (long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  int *piVar4;
  long unaff_x20;
  long *plVar5;
  long *unaff_x22;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_0789bd4c;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_0789bd4c:
  uVar2 = (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_04bd78e4();
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)System_Func<FocusOutEvent>_TypeInfo) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_0789be5c;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)System_Func<FocusOutEvent>_TypeInfo,2);
LAB_0789be5c:
      (*(code *)*puVar1)(plVar5,0,0,puVar1[1]);
      return;
    }
  }
  else if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_0789be28;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar5,*unaff_x22,1);
LAB_0789be28:
                    /* WARNING: Could not recover jumptable at 0x0789be48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


