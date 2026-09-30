/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_session_handle_set
ENTRY_POINT: 0843f764
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0843f930) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_session_handle_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  
  piVar7 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0843f79c;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_0843f79c:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_091af388;
  puVar1 = PTR_DAT_091a1508;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0843f814;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar1,0);
LAB_0843f814:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0843f870;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar2,0);
LAB_0843f870:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_06b6ddc8();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0843f8f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091a14e0,0);
LAB_0843f8f8:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


