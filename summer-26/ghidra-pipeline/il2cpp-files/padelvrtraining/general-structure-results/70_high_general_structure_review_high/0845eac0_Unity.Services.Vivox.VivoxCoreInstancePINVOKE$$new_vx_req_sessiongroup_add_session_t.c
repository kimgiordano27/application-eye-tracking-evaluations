/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_add_session_t
ENTRY_POINT: 0845eac0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0845ed20) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_add_session_t(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x21;
  
  FUN_03d2d2b0(PTR_DAT_091a1508);
  FUN_03d2d2b0(PTR_DAT_091afd60);
  FUN_03d2d2b0(PTR_DAT_091afd68);
  *(undefined1 *)(unaff_x21 + 0xe49) = 1;
  if ((unaff_x19 == 0) || (plVar11 = *(long **)(unaff_x19 + 0x10), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091afd50) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0845eb4c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_091afd50,0);
LAB_0845eb4c:
  puVar2 = PTR_DAT_091a14e0;
  plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
  puVar5 = PTR_DAT_091afd58;
  puVar4 = PTR_DAT_091a2ae0;
  puVar3 = PTR_DAT_091a1508;
  puVar1 = PTR_DAT_091a0ad0;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0845ebd4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)puVar3,0);
LAB_0845ebd4:
    uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0845ec30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)puVar5,0);
LAB_0845ec30:
    (*(code *)*puVar6)(plVar11,puVar6[1]);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar7 = FUN_071392b4(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_070d9adc(extraout_x1,uVar7,0);
    FUN_0845eddc();
    FUN_0845e8c4();
  } while( true );
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0845ecec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)puVar2,0);
LAB_0845ecec:
    (*(code *)*puVar6)(plVar11,puVar6[1]);
  }
  return;
}


