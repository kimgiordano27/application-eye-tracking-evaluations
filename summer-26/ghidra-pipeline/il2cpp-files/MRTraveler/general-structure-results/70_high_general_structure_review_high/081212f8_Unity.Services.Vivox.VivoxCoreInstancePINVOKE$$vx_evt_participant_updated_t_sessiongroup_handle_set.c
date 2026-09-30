/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_sessiongroup_handle_set
ENTRY_POINT: 081212f8
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_09428ce7 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ef3e70);
    FUN_03c8f898(PTR_DAT_08e85660);
    FUN_03c8f898(PTR_DAT_08e81290);
    DAT_09428ce7 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  puVar2 = PTR_DAT_08e85660;
  puVar1 = PTR_DAT_08e81290;
  if (plVar10 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_081213a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar2,0);
LAB_081213a4:
      iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (iVar3 <= iVar9) {
        FUN_081214fc(param_1);
        return;
      }
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 == (long *)0x0) break;
      lVar6 = *plVar10;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0812140c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar10,lVar5,0);
LAB_0812140c:
      (*(code *)*puVar4)(&stack0x00000008,plVar10,iVar9,puVar4[1]);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar7 = FUN_0811f9e8(&stack0x00000020);
      if ((uVar7 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x10);
        if (plVar10 == (long *)0x0) break;
        lVar6 = *plVar10;
        lVar5 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_081214a0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar10,lVar5,0);
LAB_081214a0:
        (*(code *)*puVar4)(&stack0x00000008,plVar10,iVar9,puVar4[1]);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        FUN_0811f394(&stack0x00000020,*(undefined8 *)(param_1 + 0x98));
      }
      else {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
      plVar10 = *(long **)(param_1 + 0x10);
      iVar9 = iVar9 + 1;
    } while (plVar10 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


