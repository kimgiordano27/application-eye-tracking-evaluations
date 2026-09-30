/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_session_handle_get
ENTRY_POINT: 08440698
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08440958) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_session_handle_get
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
  long unaff_x22;
  undefined8 uVar9;
  long unaff_x23;
  
  puVar1 = PTR_DAT_091a5a20;
  if (*(uint *)(unaff_x23 + -8) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)PTR_DAT_091a85f0;
  thunk_FUN_03d1023c();
  uVar3 = FUN_08432024();
  uVar4 = FUN_06fd246c(uVar3,0);
  if ((uVar4 & 1) == 0) {
    FUN_06b6dddc();
  }
  uVar9 = *(undefined8 *)puVar1;
  uVar3 = FUN_084320fc();
  uVar4 = FUN_06fd246c(uVar3,0);
  if ((((uVar4 & 1) == 0) ||
      (uVar4 = thunk_FUN_06fd18b4(uVar9,*(undefined8 *)puVar1,0), (uVar4 & 1) != 0)) ||
     (uVar4 = thunk_FUN_06fd18b4(uVar9,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar4 & 1) != 0)) {
    FUN_06b6dddc();
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
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091af380) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_uri_get
        ;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091af380,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_uri_get:
  plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
  puVar2 = PTR_DAT_091af388;
  puVar1 = PTR_DAT_091a1508;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0844083c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)puVar1,0);
LAB_0844083c:
    uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if ((uVar4 & 1) == 0) break;
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_08440898;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)puVar2,0);
LAB_08440898:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
    FUN_06b6ddc8();
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_08440920;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091a14e0,0);
LAB_08440920:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
  }
  return;
}


