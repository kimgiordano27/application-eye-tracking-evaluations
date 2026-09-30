/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 02c2e86c
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_14;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


int OVRPlugin__StopEyeTracking(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long *in_x15;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar13;
  int unaff_w26;
  uint uVar14;
  int iStack000000000000000c;
  
  iVar13 = unaff_w26 + -0x1c;
  if (unaff_w26 + -0x1c <= in_w8) {
    iVar13 = in_w8;
  }
  if (iVar13 == 0) {
    return unaff_w26;
  }
  uVar14 = 0;
  iStack000000000000000c = unaff_w26 - iVar13;
  uVar8 = 0;
  do {
    do {
      switch(iVar13) {
      case 1:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar10 = unaff_w21 - 1;
        uVar7 = *puVar6 / 10;
        uVar9 = *puVar6 % 10;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -10;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 5;
        break;
      case 2:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar2 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar7 = uVar2 / 100;
        uVar9 = uVar2 % 100;
        if ((int)uVar10 < 0) {
          uVar10 = 0x32;
          uVar7 = uVar2 / 100;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -100;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 0x32;
        }
        break;
      case 3:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar2 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar7 = uVar2 / 1000;
        uVar9 = uVar2 % 1000;
        if ((int)uVar10 < 0) {
          uVar10 = 500;
          uVar7 = uVar2 / 1000;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -1000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 500;
        }
        break;
      case 4:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar2 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar7 = uVar2 / 10000;
        uVar9 = uVar2 % 10000;
        if ((int)uVar10 < 0) {
          uVar10 = 5000;
          uVar7 = uVar2 / 10000;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -10000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 5000;
        }
        break;
      case 5:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar10 = unaff_w21 - 1;
        uVar2 = *puVar6 >> 5;
        uVar7 = uVar2 / 0xc35;
        uVar9 = *puVar6 + (uVar2 / 0xc35) * -100000;
        if ((int)uVar10 < 0) {
          uVar10 = 50000;
          uVar7 = uVar2 / 0xc35;
        }
        else {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -100000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
          uVar10 = 50000;
        }
        break;
      case 6:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar7 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar9 = uVar7 % 1000000;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -1000000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 500000;
        uVar7 = uVar7 / 1000000;
        break;
      case 7:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar7 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar9 = uVar7 % 10000000;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 10000000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -10000000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 5000000;
        uVar7 = uVar7 / 10000000;
        break;
      case 8:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar7 = *puVar6;
        uVar10 = unaff_w21 - 1;
        uVar9 = uVar7 % 100000000;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 100000000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -100000000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 50000000;
        uVar7 = uVar7 / 100000000;
        break;
      default:
        if (*(int *)(*in_x15 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          in_x15 = (long *)PTR_DAT_0380bcc8;
        }
        puVar6 = unaff_x20 + unaff_w21;
        uVar10 = unaff_w21 - 1;
        uVar7 = (uint)((ulong)(*puVar6 >> 9) * 0x44b83 >> 0x20);
        uVar9 = *puVar6 + (uVar7 >> 7) * -1000000000;
        if (-1 < (int)uVar10) {
          lVar11 = (ulong)uVar10 + 1;
          puVar12 = unaff_x20 + uVar10;
          do {
            uVar10 = *puVar12;
            lVar11 = lVar11 + -1;
            uVar9 = (uint)(CONCAT44(uVar9,uVar10) / 1000000000);
            *puVar12 = uVar9;
            uVar9 = uVar10 + uVar9 * -1000000000;
            puVar12 = puVar12 + -1;
          } while (0 < lVar11);
        }
        uVar10 = 500000000;
        uVar7 = uVar7 >> 7;
      }
      *puVar6 = uVar7;
      uVar14 = uVar14 | uVar8;
      iVar3 = iVar13 + -9;
      unaff_w21 = unaff_w21 - (unaff_w21 != 0 && uVar7 == 0);
      bVar1 = 8 < iVar13;
      iVar13 = iVar3;
      uVar8 = uVar9;
    } while (iVar3 != 0 && bVar1);
    if (unaff_w21 < 3) {
      if (uVar9 < uVar10) {
        return iStack000000000000000c;
      }
      uVar8 = *unaff_x20;
      if ((uVar9 <= uVar10) && ((uVar8 & 1) == 0 && uVar14 == 0)) {
        return iStack000000000000000c;
      }
      *unaff_x20 = uVar8 + 1;
      if (uVar8 != 0xffffffff) {
        return iStack000000000000000c;
      }
      unaff_w21 = 0;
      do {
        unaff_w21 = unaff_w21 + 1;
        uVar14 = unaff_x20[unaff_w21];
        unaff_x20[unaff_w21] = uVar14 + 1;
      } while (0xfffffffe < uVar14);
      if (unaff_w21 < 3) {
        return iStack000000000000000c;
      }
      if (iStack000000000000000c == 0) {
LAB_02c2f2a8:
        thunk_FUN_01851c08(PTR_DAT_037f87b0);
        uVar4 = thunk_FUN_01861bbc();
        uVar5 = thunk_FUN_01851c08(PTR_DAT_03809d90);
        FUN_02bde04c(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bda8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4,uVar5);
      }
      uVar8 = 0;
      uVar14 = 0;
    }
    else if (iStack000000000000000c == 0) goto LAB_02c2f2a8;
    iStack000000000000000c = iStack000000000000000c + -1;
    iVar13 = 1;
  } while( true );
}


