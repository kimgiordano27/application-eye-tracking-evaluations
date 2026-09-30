/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
ENTRY_POINT: 09001898
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09001b0c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_removed_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  
  uVar3 = thunk_FUN_078b3114();
  if ((uVar3 & 1) != 0) {
    FUN_0744298c();
  }
  uVar3 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x38),0);
                    /* try { // try from 090018cc to 091018db has its CatchHandler @ 090018dc */
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 09001854 with catch @ 090018dc
                       catch() { ... } // from try @ 090018cc with catch @ 090018dc */
                    /* try { // try from 090018e0 to 091018e3 has its CatchHandler @ 090018ec */
                    /* try { // try from 090018e4 to 091018ef has its CatchHandler @ 09001324 */
    FUN_0744298c();
  }
                    /* catch() { ... } // from try @ 09001830 with catch @ 090018ec
                       catch() { ... } // from try @ 090018e0 with catch @ 090018ec */
  uVar3 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x40),0);
  if ((uVar3 & 1) == 0) {
    FUN_0744298c();
  }
  if (unaff_x20 == 0) {
    return;
  }
  plVar7 = *(long **)(unaff_x20 + 0x28);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2bbb0) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_09001978;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f2bbb0,0);
LAB_09001978:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar2 = PTR_DAT_09f2bbb8;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_090019f0;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar1,0);
LAB_090019f0:
    uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_09001a4c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar2,0);
LAB_09001a4c:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    FUN_07442978();
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_09001ad4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f1f008,0);
LAB_09001ad4:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  return;
}


