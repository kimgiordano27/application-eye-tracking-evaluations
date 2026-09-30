/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 07a4bea8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetDynamicObjectTrackedClassesAsync(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  int unaff_w25;
  int iVar10;
  
LAB_07a4bf44:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) goto LAB_07a4bf60;
    iVar10 = unaff_x20[4];
    iVar1 = *unaff_x20;
    iVar3 = unaff_x20[1];
    iVar2 = unaff_x20[2];
    iVar4 = unaff_x20[3];
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (unaff_w21 < 2) {
      iVar10 = iVar1;
      if ((unaff_w21 == 0) || (iVar10 = iVar3, unaff_w21 == 1)) goto LAB_07a4bd78;
    }
    else if ((unaff_w21 == 4) ||
            ((iVar10 = iVar4, unaff_w21 == 3 || (iVar10 = iVar2, unaff_w21 == 2)))) {
LAB_07a4bd78:
      if (iVar10 == 2) {
        if (unaff_x19 == (long *)0x0) goto LAB_07a4bf80;
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092ee658) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07a4be24;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00();
LAB_07a4be24:
        uVar8 = (*(code *)*puVar6)();
        if ((uVar8 & 1) == 0) {
          unaff_w23 = 0;
          goto LAB_07a4bf60;
        }
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092ee658) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07a4be90;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_040b1e00();
LAB_07a4be90:
        uVar5 = (*(code *)*puVar6)();
        unaff_w23 = uVar5 | unaff_w23;
        goto LAB_07a4bf44;
      }
    }
  } while (unaff_w25 == 0);
  iVar10 = unaff_x20[4];
  iVar1 = *unaff_x20;
  iVar3 = unaff_x20[1];
  iVar2 = unaff_x20[2];
  iVar4 = unaff_x20[3];
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (unaff_w21 < 2) {
    iVar10 = iVar1;
    if ((unaff_w21 != 0) && (iVar10 = iVar3, unaff_w21 != 1)) goto LAB_07a4bf44;
  }
  else if ((unaff_w21 != 4) &&
          ((iVar10 = iVar4, unaff_w21 != 3 && (iVar10 = iVar2, unaff_w21 != 2)))) goto LAB_07a4bf44;
  if (iVar10 == 1) {
    if (unaff_x19 == (long *)0x0) {
LAB_07a4bf80:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092ee658) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07a4bf2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00();
LAB_07a4bf2c:
    uVar8 = (*(code *)*puVar6)();
    if ((uVar8 & 1) != 0) {
      unaff_w23 = 1;
LAB_07a4bf60:
      return unaff_w23 & 1;
    }
  }
  goto LAB_07a4bf44;
}


