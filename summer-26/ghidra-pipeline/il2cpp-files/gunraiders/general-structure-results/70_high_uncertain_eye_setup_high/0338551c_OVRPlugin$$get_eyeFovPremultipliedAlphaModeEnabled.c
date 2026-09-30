/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 0338551c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03385a94) */

void OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *plVar9;
  long unaff_x23;
  long *plVar10;
  
  puVar3 = UnityEngine_UIElements_ListViewDragger_TypeInfo;
  plVar9 = *(long **)(unaff_x22 + 0x960);
  plVar10 = *(long **)(unaff_x23 + 0x128);
  do {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *plVar9) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03385580;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498();
LAB_03385580:
    uVar7 = (*(code *)*puVar4)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_033856c8;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *plVar10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033855dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498();
LAB_033855dc:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
          (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) &&
         (uVar7 = FUN_0320ed20(plVar5,0), (uVar7 & 1) == 0)) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar6 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(long **)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = plVar5;
        }
        else {
          FUN_02d5004c();
        }
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03385a84;
    }
  }
LAB_033856c8:
  puVar4 = (undefined8 *)FUN_01c72498();
LAB_03385a84:
  (*(code *)*puVar4)();
  return;
}


