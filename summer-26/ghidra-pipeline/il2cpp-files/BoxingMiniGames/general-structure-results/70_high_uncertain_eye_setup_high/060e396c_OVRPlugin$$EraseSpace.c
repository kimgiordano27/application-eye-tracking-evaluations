/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 060e396c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__EraseSpace(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong in_x9;
  int *piVar9;
  long in_x10;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  int unaff_w25;
  int iVar10;
  
  do {
    piVar9 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_060e39a8;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e39a8:
      uVar7 = (*(code *)*puVar6)();
      if ((uVar7 & 1) != 0) {
        unaff_w23 = 1;
LAB_060e39dc:
        return unaff_w23 & 1;
      }
LAB_060e39c0:
      do {
        do {
          unaff_w21 = unaff_w21 + 1;
          if (unaff_w21 == 5) goto LAB_060e39dc;
          iVar10 = unaff_x20[4];
          iVar1 = *unaff_x20;
          iVar3 = unaff_x20[1];
          iVar2 = unaff_x20[2];
          iVar4 = unaff_x20[3];
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (unaff_w21 < 2) {
            iVar10 = iVar1;
            if ((unaff_w21 == 0) || (iVar10 = iVar3, unaff_w21 == 1)) goto LAB_060e37f4;
          }
          else if ((unaff_w21 == 4) ||
                  ((iVar10 = iVar4, unaff_w21 == 3 || (iVar10 = iVar2, unaff_w21 == 2)))) {
LAB_060e37f4:
            if (iVar10 == 2) {
              if (unaff_x19 == (long *)0x0) goto LAB_060e39fc;
              lVar8 = *unaff_x19;
              uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_060e38a0;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e38a0:
              uVar7 = (*(code *)*puVar6)();
              if ((uVar7 & 1) == 0) {
                unaff_w23 = 0;
                goto LAB_060e39dc;
              }
              lVar8 = *unaff_x19;
              uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                    goto LAB_060e390c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e390c:
              uVar5 = (*(code *)*puVar6)();
              unaff_w23 = uVar5 | unaff_w23;
              goto LAB_060e39c0;
            }
          }
        } while (unaff_w25 == 0);
        iVar10 = unaff_x20[4];
        iVar1 = *unaff_x20;
        iVar3 = unaff_x20[1];
        iVar2 = unaff_x20[2];
        iVar4 = unaff_x20[3];
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (unaff_w21 < 2) {
          iVar10 = iVar1;
          if ((unaff_w21 != 0) && (iVar10 = iVar3, unaff_w21 != 1)) goto LAB_060e39c0;
        }
        else if ((unaff_w21 != 4) &&
                ((iVar10 = iVar4, unaff_w21 != 3 && (iVar10 = iVar2, unaff_w21 != 2))))
        goto LAB_060e39c0;
      } while (iVar10 != 1);
      if (unaff_x19 == (long *)0x0) {
LAB_060e39fc:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      param_1 = *unaff_x19;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_07a22030;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


