/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 033855ec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03385a94) */

void OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled(long *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (param_1 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if (((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
          (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x24)) &&
         (uVar4 = FUN_0320ed20(unaff_x21,0), (uVar4 & 1) == 0)) {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(long **)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
        }
        else {
          FUN_02d5004c();
        }
      }
    }
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03385580;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_03385580:
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) break;
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033855dc;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_033855dc:
    param_1 = (long *)(*(code *)*puVar3)();
    unaff_x21 = param_1;
  } while( true );
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03385a84;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_03385a84:
    (*(code *)*puVar3)();
  }
  return;
}


