/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_sessiongroup_handle_get
ENTRY_POINT: 08121390
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
               (long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *plVar6;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x08121390:
  puVar2 = (undefined8 *)FUN_03cf1348(param_1,param_2,param_3);
  param_1 = unaff_x21;
  do {
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar1 <= unaff_w20) {
      FUN_081214fc();
      return;
    }
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
          goto LAB_0812140c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x23,0);
LAB_0812140c:
    (*(code *)*puVar2)(&stack0x00000008,plVar6,unaff_w20,puVar2[1]);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    uVar4 = FUN_0811f9e8(&stack0x00000020);
    if ((uVar4 & 1) == 0) {
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 == (long *)0x0) goto LAB_081214dc;
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
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      FUN_0811f394(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x98));
    }
    else {
      *(int *)(unaff_x19 + 0xa0) = *(int *)(unaff_x19 + 0xa0) + 1;
    }
    param_1 = *(long **)(unaff_x19 + 0x10);
    unaff_w20 = unaff_w20 + 1;
    if (param_1 == (long *)0x0) goto LAB_081214dc;
    lVar3 = *param_1;
    param_2 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) break;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto LAB_08121388;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
LAB_08121388:
  param_3 = 0;
  unaff_x21 = param_1;
  goto code_r0x08121390;
}


