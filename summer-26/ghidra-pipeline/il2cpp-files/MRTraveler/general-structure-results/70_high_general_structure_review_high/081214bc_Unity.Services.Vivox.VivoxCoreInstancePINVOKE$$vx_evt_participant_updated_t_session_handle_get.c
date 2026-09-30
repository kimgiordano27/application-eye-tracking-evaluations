/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_get
ENTRY_POINT: 081214bc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_get
               (undefined8 param_1,undefined1 param_2 [16])

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
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
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  uStack0000000000000030 = param_1;
code_r0x081214bc:
  FUN_0811f394(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x98));
  do {
    plVar6 = *(long **)(unaff_x19 + 0x10);
    unaff_w20 = unaff_w20 + 1;
    if (plVar6 == (long *)0x0) goto LAB_081214dc;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_081213a4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
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
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0812140c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x23,0);
LAB_0812140c:
    (*(code *)*puVar2)(&stack0x00000008,plVar6,unaff_w20,puVar2[1]);
    uStack0000000000000028 = in_stack_00000010;
    uStack0000000000000020 = in_stack_00000008;
    uStack0000000000000030 = in_stack_00000018;
    uVar4 = FUN_0811f9e8(&stack0x00000020);
    if ((uVar4 & 1) == 0) break;
    *(int *)(unaff_x19 + 0xa0) = *(int *)(unaff_x19 + 0xa0) + 1;
  } while( true );
  plVar6 = *(long **)(unaff_x19 + 0x10);
  if (plVar6 == (long *)0x0) {
LAB_081214dc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_081214a0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x23,0);
LAB_081214a0:
  (*(code *)*puVar2)(&stack0x00000008,plVar6,unaff_w20,puVar2[1]);
  uStack0000000000000030 = in_stack_00000018;
  uStack0000000000000020 = in_stack_00000008;
  uStack0000000000000028 = in_stack_00000010;
  goto code_r0x081214bc;
}


