/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_session_handle_set
ENTRY_POINT: 0902b16c
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


/* WARNING: Removing unreachable block (ram,0x0902b3e4) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_session_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  
  FUN_0744298c();
  uVar9 = *unaff_x23;
  uVar3 = FUN_090271a0();
  uVar4 = FUN_078b4450(uVar3,0);
  if ((((uVar4 & 1) == 0) ||
      (uVar4 = thunk_FUN_078b3114(uVar9,*(undefined8 *)PTR_DAT_09f20c90,0), (uVar4 & 1) != 0)) ||
     (uVar4 = thunk_FUN_078b3114(uVar9,*(undefined8 *)PTR_DAT_09f22ec0,0), (uVar4 & 1) != 0)) {
    FUN_0744298c();
  }
  if (unaff_x20 == 0) {
    return;
  }
  plVar8 = *(long **)(unaff_x20 + 0x28);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2bbb0) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0902b250;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2bbb0,0);
LAB_0902b250:
  plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
  puVar2 = PTR_DAT_09f2bbb8;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0902b2c8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,0);
LAB_0902b2c8:
    uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if ((uVar4 & 1) == 0) break;
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0902b324;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar2,0);
LAB_0902b324:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
    FUN_07442978();
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0902b3ac;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f1f008,0);
LAB_0902b3ac:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
  }
  return;
}


