/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 060e3c34
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__QuerySpacesWithResult(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int iVar10;
  long *unaff_x23;
  uint unaff_w24;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x060e3c34:
  puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e3ca4:
  uVar7 = (*(code *)*puVar6)();
  if ((uVar7 & 1) != 0) {
    iVar4 = unaff_x20[5];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uStack000000000000000c = 1;
    if (iVar4 == 1) {
LAB_060e3db0:
      return uStack000000000000000c & 1;
    }
  }
LAB_060e3d94:
  while (unaff_w21 = unaff_w21 + 1, unaff_w21 != 5) {
    iVar10 = unaff_x20[4];
    iVar4 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (1 < unaff_w21) goto code_r0x060e3acc;
    if (unaff_w21 == 0) {
      if (iVar4 != 0) goto LAB_060e3b08;
    }
    else {
      iVar10 = iVar2;
      if (unaff_w21 == 1) goto LAB_060e3b04;
    }
  }
  uStack000000000000000c = uStack000000000000000c & (unaff_w24 ^ 1);
  goto LAB_060e3db0;
code_r0x060e3acc:
  if (((unaff_w21 != 4) && (iVar10 = iVar3, unaff_w21 != 3)) && (iVar10 = iVar1, unaff_w21 != 2))
  goto LAB_060e3d94;
LAB_060e3b04:
  if (iVar10 == 0) goto LAB_060e3d94;
LAB_060e3b08:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar8 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_060e3b6c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e3b6c:
  uVar5 = (*(code *)*puVar6)();
  iVar10 = unaff_x20[4];
  iVar4 = *unaff_x20;
  iVar2 = unaff_x20[1];
  iVar1 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x23);
  }
  unaff_w24 = unaff_w24 | uVar5;
  if (unaff_w21 < 2) {
    iVar10 = iVar4;
    if ((unaff_w21 != 0) && (iVar10 = iVar2, unaff_w21 != 1)) goto LAB_060e3c3c;
  }
  else if ((unaff_w21 != 4) &&
          ((iVar10 = iVar3, unaff_w21 != 3 && (iVar10 = iVar1, unaff_w21 != 2)))) goto LAB_060e3c3c;
  if (iVar10 == 2) goto code_r0x060e3bf4;
LAB_060e3c3c:
  iVar10 = unaff_x20[4];
  iVar4 = *unaff_x20;
  iVar2 = unaff_x20[1];
  iVar1 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (unaff_w21 < 2) {
    iVar10 = iVar4;
    if ((unaff_w21 != 0) && (iVar10 = iVar2, unaff_w21 != 1)) goto LAB_060e3d94;
  }
  else if ((unaff_w21 != 4) &&
          ((iVar10 = iVar3, unaff_w21 != 3 && (iVar10 = iVar1, unaff_w21 != 2)))) goto LAB_060e3d94;
  if (iVar10 == 1) {
    lVar8 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_060e3d50;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e3d50:
    uVar7 = (*(code *)*puVar6)();
    if ((uVar7 & 1) != 0) {
      iVar4 = unaff_x20[5];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uStack000000000000000c = 1;
      uVar5 = 0;
      if (iVar4 == 1) {
        uVar5 = uStack0000000000000008;
      }
      if ((uVar5 & 1) != 0) goto LAB_060e3db0;
    }
  }
  goto LAB_060e3d94;
code_r0x060e3bf4:
  lVar8 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 == 0) goto code_r0x060e3c34;
  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
  while (*(long *)(piVar9 + -2) != *(long *)PTR_DAT_07a22030) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) goto code_r0x060e3c34;
  }
  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
  goto LAB_060e3ca4;
}


