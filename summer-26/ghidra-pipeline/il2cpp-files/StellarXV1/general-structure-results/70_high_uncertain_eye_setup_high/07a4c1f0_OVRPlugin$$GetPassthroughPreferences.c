/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughPreferences
ENTRY_POINT: 07a4c1f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetPassthroughPreferences(void)

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
  int iVar9;
  long *unaff_x23;
  uint unaff_w24;
  int unaff_w26;
  int unaff_w27;
  int iVar10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x07a4c1f0:
  iVar9 = unaff_w27;
  if ((bool)in_ZR) goto LAB_07a4c274;
  iVar9 = unaff_w26;
  if (unaff_w21 == 2) goto LAB_07a4c274;
LAB_07a4c318:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) {
      uStack000000000000000c = uStack000000000000000c & (unaff_w24 ^ 1);
      goto LAB_07a4c334;
    }
    iVar10 = unaff_x20[4];
    iVar9 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (1 < unaff_w21) goto code_r0x07a4c050;
    iVar10 = iVar9;
  } while ((unaff_w21 != 0) && (iVar10 = iVar2, unaff_w21 != 1));
  goto joined_r0x07a4c0dc;
code_r0x07a4c1ec:
  in_ZR = unaff_w21 == 3;
  goto code_r0x07a4c1f0;
code_r0x07a4c050:
  if (((unaff_w21 != 4) && (iVar10 = iVar3, unaff_w21 != 3)) && (iVar10 = iVar1, unaff_w21 != 2))
  goto LAB_07a4c318;
joined_r0x07a4c0dc:
  if (iVar10 == 0) goto LAB_07a4c318;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092ee658) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07a4c0f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_07a4c0f0:
  uVar4 = (*(code *)*puVar5)();
  iVar10 = unaff_x20[4];
  iVar9 = *unaff_x20;
  iVar2 = unaff_x20[1];
  iVar1 = unaff_x20[2];
  iVar3 = unaff_x20[3];
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x23);
  }
  unaff_w24 = unaff_w24 | uVar4;
  if (unaff_w21 < 2) {
    iVar10 = iVar9;
    if ((unaff_w21 == 0) || (iVar10 = iVar2, unaff_w21 == 1)) goto LAB_07a4c170;
  }
  else if ((unaff_w21 == 4) ||
          ((iVar10 = iVar3, unaff_w21 == 3 || (iVar10 = iVar1, unaff_w21 == 2)))) {
LAB_07a4c170:
    if (iVar10 == 2) {
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092ee658) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_07a4c228;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00();
LAB_07a4c228:
      uVar7 = (*(code *)*puVar5)();
      if ((uVar7 & 1) == 0) goto LAB_07a4c318;
      iVar9 = unaff_x20[5];
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uStack000000000000000c = 1;
      if (iVar9 != 1) goto LAB_07a4c318;
      goto LAB_07a4c334;
    }
  }
  iVar9 = unaff_x20[4];
  iVar1 = *unaff_x20;
  iVar2 = unaff_x20[1];
  unaff_w26 = unaff_x20[2];
  unaff_w27 = unaff_x20[3];
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (unaff_w21 < 2) {
    iVar9 = iVar1;
    if ((unaff_w21 != 0) && (iVar9 = iVar2, unaff_w21 != 1)) goto LAB_07a4c318;
  }
  else if (unaff_w21 != 4) goto code_r0x07a4c1ec;
LAB_07a4c274:
  if (iVar9 != 1) goto LAB_07a4c318;
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092ee658) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_07a4c2d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_07a4c2d4:
  uVar7 = (*(code *)*puVar5)();
  if ((uVar7 & 1) == 0) goto LAB_07a4c318;
  iVar9 = unaff_x20[5];
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uStack000000000000000c = 1;
  uVar4 = 0;
  if (iVar9 == 1) {
    uVar4 = uStack0000000000000008;
  }
  if ((uVar4 & 1) == 0) goto LAB_07a4c318;
LAB_07a4c334:
  return uStack000000000000000c & 1;
}


