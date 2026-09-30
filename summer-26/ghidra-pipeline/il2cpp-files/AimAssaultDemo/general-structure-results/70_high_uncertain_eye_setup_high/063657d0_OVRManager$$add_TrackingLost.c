/*
FUNCTION_NAME: OVRManager$$add_TrackingLost
ENTRY_POINT: 063657d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_TrackingLost(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  
  FUN_0373b518(PTR_DAT_07db5548);
  *(undefined1 *)(unaff_x20 + 0x426) = 1;
  puVar2 = PTR_DAT_07db5548;
  puVar1 = PTR_DAT_07db5538;
  plVar11 = *(long **)(unaff_x19 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db5538) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06365848;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07db5538,0);
LAB_06365848:
    iVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    lVar8 = *plVar11;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063658a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar11,lVar7,0);
LAB_063658a4:
    uVar5 = (*(code *)*puVar4)(plVar11,iVar3 + -1,puVar4[1]);
    plVar11 = *(long **)(unaff_x19 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0636590c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_0636590c:
      puVar1 = PTR_DAT_07db5540;
      iVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      lVar8 = *plVar11;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_06365974;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar11,lVar7,4);
LAB_06365974:
      (*(code *)*puVar4)(plVar11,iVar3 + -1,puVar4[1]);
      lVar7 = FUN_03f623e8(*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)puVar1);
      if (lVar7 == 0) {
        *(undefined8 *)(unaff_x19 + 0x30) = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x18);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
      }
      thunk_FUN_037aeb94(unaff_x19 + 0x30,uVar6);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


