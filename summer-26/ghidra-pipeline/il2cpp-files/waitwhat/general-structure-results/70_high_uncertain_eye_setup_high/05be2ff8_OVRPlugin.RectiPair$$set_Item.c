/*
FUNCTION_NAME: OVRPlugin.RectiPair$$set_Item
ENTRY_POINT: 05be2ff8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_RectiPair__set_Item(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int iVar9;
  int iVar10;
  
code_r0x05be2ff8:
  iVar9 = unaff_w26;
  if ((bool)in_ZR) goto LAB_05be300c;
LAB_05be3060:
  if (unaff_w25 != 0) {
    iVar10 = unaff_x20[4];
    iVar9 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if (unaff_w21 < 2) {
      iVar10 = iVar9;
      if ((unaff_w21 != 0) && (iVar10 = iVar2, unaff_w21 != 1)) goto LAB_05be31d8;
    }
    else if ((unaff_w21 != 4) &&
            ((iVar10 = iVar3, unaff_w21 != 3 && (iVar10 = iVar1, unaff_w21 != 2))))
    goto LAB_05be31d8;
    if (iVar10 == 1) {
      if (unaff_x19 == (long *)0x0) {
LAB_05be3214:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07114768) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_05be31c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be31c0:
      uVar7 = (*(code *)*puVar5)();
      if ((uVar7 & 1) != 0) {
        unaff_w23 = 1;
LAB_05be31f4:
        return unaff_w23 & 1;
      }
    }
  }
LAB_05be31d8:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) goto LAB_05be31f4;
    iVar9 = unaff_x20[4];
    iVar1 = *unaff_x20;
    unaff_w26 = unaff_x20[1];
    iVar2 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if (unaff_w21 < 2) {
      iVar9 = iVar1;
      if (unaff_w21 != 0) {
        in_ZR = unaff_w21 == 1;
        goto code_r0x05be2ff8;
      }
    }
    else if (((unaff_w21 != 4) && (iVar9 = iVar3, unaff_w21 != 3)) &&
            (iVar9 = iVar2, unaff_w21 != 2)) goto LAB_05be3060;
LAB_05be300c:
    if (iVar9 != 2) goto LAB_05be3060;
    if (unaff_x19 == (long *)0x0) goto LAB_05be3214;
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07114768) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05be30b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be30b8:
    uVar7 = (*(code *)*puVar5)();
    if ((uVar7 & 1) == 0) {
      unaff_w23 = 0;
      goto LAB_05be31f4;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07114768) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05be3124;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05be3124:
    uVar4 = (*(code *)*puVar5)();
    unaff_w23 = uVar4 | unaff_w23;
  } while( true );
}


