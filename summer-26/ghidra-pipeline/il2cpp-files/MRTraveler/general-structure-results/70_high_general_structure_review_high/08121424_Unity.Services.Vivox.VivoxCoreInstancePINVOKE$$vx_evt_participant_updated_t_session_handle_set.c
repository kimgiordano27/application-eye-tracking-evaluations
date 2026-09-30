/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_set
ENTRY_POINT: 08121424
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_set
               (undefined1 param_1 [16])

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *plVar6;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000028 = param_1._8_8_;
  uStack0000000000000020 = param_1._0_8_;
  do {
    uStack0000000000000030 = in_stack_00000018;
    uVar3 = FUN_0811f9e8(&stack0x00000020);
    if ((uVar3 & 1) == 0) {
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 == (long *)0x0) {
LAB_081214dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_081214a0;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x23,0);
LAB_081214a0:
      (*(code *)*puVar2)(&stack0x00000008,plVar6,unaff_w20,puVar2[1]);
      uStack0000000000000028 = in_stack_00000010;
      uStack0000000000000020 = in_stack_00000008;
      uStack0000000000000030 = in_stack_00000018;
      FUN_0811f394(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x98));
    }
    else {
      *(int *)(unaff_x19 + 0xa0) = *(int *)(unaff_x19 + 0xa0) + 1;
    }
    plVar6 = *(long **)(unaff_x19 + 0x10);
    unaff_w20 = unaff_w20 + 1;
    if (plVar6 == (long *)0x0) goto LAB_081214dc;
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081213a4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x22,0);
LAB_081213a4:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 <= unaff_w20) {
      FUN_081214fc();
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x10);
    if (plVar6 == (long *)0x0) goto LAB_081214dc;
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0812140c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x23,0);
LAB_0812140c:
    (*(code *)*puVar2)(&stack0x00000008,plVar6,unaff_w20,puVar2[1]);
    uStack0000000000000020 = in_stack_00000008;
    uStack0000000000000028 = in_stack_00000010;
  } while( true );
}


