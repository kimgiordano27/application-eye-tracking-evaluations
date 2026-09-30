/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 03226370
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetBodyState4(void)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  ushort *puVar6;
  uint unaff_w24;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *unaff_x28;
  int unaff_w29;
  
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar8 = unaff_w29 - 0x30;
  if (9 < uVar8) goto LAB_0322663c;
  if (unaff_w29 == 0x30) {
    do {
      unaff_w24 = unaff_w24 + 1;
      if (unaff_w22 <= unaff_w24) {
        uVar8 = 0;
        goto LAB_03226524;
      }
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      uVar7 = (uint)uVar1;
      uVar8 = uVar1 - 0x30;
    } while (uVar8 == 0);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (uVar8 < 10) goto LAB_032263e0;
    uVar8 = 0;
    bVar3 = false;
LAB_03226558:
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if ((uVar7 - 9 < 5) || (uVar7 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) goto LAB_0322663c;
      uVar7 = unaff_w24 + 1;
      if ((int)uVar7 < (int)unaff_w22) {
        puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        do {
          if (unaff_w22 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          uVar1 = *puVar6;
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_032265dc;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (unaff_w22 != uVar7);
      }
      else {
LAB_032265dc:
        if (uVar7 < unaff_w22) goto LAB_032265f0;
      }
    }
    else {
LAB_032265f0:
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar4 = FUN_03229258();
      if ((uVar4 & 1) == 0) {
LAB_0322663c:
        iVar9 = 0;
        uVar5 = 0;
        goto LAB_03226644;
      }
    }
    if (!bVar3) {
LAB_03226524:
      iVar9 = -uVar8;
      uVar5 = 1;
      goto LAB_03226644;
    }
  }
  else {
LAB_032263e0:
    uVar7 = unaff_w24 + 1;
    iVar9 = -8;
    do {
      if (unaff_w22 <= uVar7) goto LAB_03226524;
      uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + iVar9 + 9) * 2);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (9 < uVar1 - 0x30) {
        uVar7 = unaff_w24 + iVar9 + 9;
        goto LAB_03226540;
      }
      uVar7 = unaff_w24 + iVar9 + 10;
      bVar3 = iVar9 != -1;
      iVar9 = iVar9 + 1;
      uVar8 = ((uint)uVar1 + uVar8 * 10) - 0x30;
    } while (bVar3);
    if (unaff_w22 <= uVar7) goto LAB_03226524;
    uVar1 = *(ushort *)(unaff_x21 + (long)(int)(unaff_w24 + 9) * 2);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar7 = unaff_w24 + 9;
    if (9 < uVar1 - 0x30) {
LAB_03226540:
      unaff_w24 = uVar7;
      bVar3 = false;
      uVar7 = (uint)uVar1;
      goto LAB_03226558;
    }
    uVar2 = (uVar1 - 0x30) + uVar8 * 10;
    unaff_w24 = unaff_w24 + 10;
    bVar3 = 0xccccccc < (int)uVar8 || 0x80000000 < uVar2;
    if (unaff_w24 < unaff_w22) {
      do {
        uVar1 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        uVar7 = (uint)uVar1;
        if (*(int *)(*unaff_x20 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar8 = uVar2;
        if (9 < uVar1 - 0x30) goto LAB_03226558;
        unaff_w24 = unaff_w24 + 1;
        bVar3 = true;
      } while (unaff_w22 != unaff_w24);
    }
    else {
      bVar3 = (int)uVar8 < 0xccccccd;
      uVar8 = uVar2;
      if (bVar3 && 0x80000000 >= uVar2) goto LAB_03226524;
    }
  }
  iVar9 = 0;
  uVar5 = 0;
  *unaff_x28 = 1;
LAB_03226644:
  *unaff_x19 = iVar9;
  return uVar5;
}


