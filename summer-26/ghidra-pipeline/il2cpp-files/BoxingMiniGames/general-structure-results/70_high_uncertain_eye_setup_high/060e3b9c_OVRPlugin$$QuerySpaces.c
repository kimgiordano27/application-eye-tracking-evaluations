/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 060e3b9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__QuerySpaces(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int iVar10;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  do {
    thunk_FUN_036a1978(param_1);
    do {
      unaff_w24 = unaff_w24 | unaff_w22;
      if (unaff_w21 < 2) {
        unaff_w27 = unaff_w26;
        if ((unaff_w21 == 0) || (unaff_w27 = unaff_w28, unaff_w21 == 1)) goto LAB_060e3bec;
LAB_060e3c3c:
        iVar10 = unaff_x20[4];
        iVar2 = *unaff_x20;
        iVar4 = unaff_x20[1];
        iVar3 = unaff_x20[2];
        iVar5 = unaff_x20[3];
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (unaff_w21 < 2) {
          iVar10 = iVar2;
          if ((unaff_w21 == 0) || (iVar10 = iVar4, unaff_w21 == 1)) goto LAB_060e3cf0;
        }
        else if ((unaff_w21 == 4) ||
                ((iVar10 = iVar5, unaff_w21 == 3 || (iVar10 = iVar3, unaff_w21 == 2)))) {
LAB_060e3cf0:
          if (iVar10 == 1) {
            lVar7 = *unaff_x19;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
                  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_060e3d50;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e3d50:
            uVar8 = (*(code *)*puVar6)();
            if ((uVar8 & 1) != 0) {
              iVar2 = unaff_x20[5];
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uStack000000000000000c = 1;
              uVar1 = 0;
              if (iVar2 == 1) {
                uVar1 = uStack0000000000000008;
              }
              if ((uVar1 & 1) != 0) {
LAB_060e3db0:
                return uStack000000000000000c & 1;
              }
            }
          }
        }
      }
      else {
        if ((unaff_w21 != 4) &&
           ((unaff_w27 = unaff_w25, unaff_w21 != 3 && (unaff_w27 = unaff_w29, unaff_w21 != 2))))
        goto LAB_060e3c3c;
LAB_060e3bec:
        if (unaff_w27 != 2) goto LAB_060e3c3c;
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_060e3ca4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e3ca4:
        uVar8 = (*(code *)*puVar6)();
        if ((uVar8 & 1) != 0) {
          iVar2 = unaff_x20[5];
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uStack000000000000000c = 1;
          if (iVar2 == 1) goto LAB_060e3db0;
        }
      }
LAB_060e3d94:
      do {
        while( true ) {
          unaff_w21 = unaff_w21 + 1;
          if (unaff_w21 == 5) {
            uStack000000000000000c = uStack000000000000000c & (unaff_w24 ^ 1);
            goto LAB_060e3db0;
          }
          iVar10 = unaff_x20[4];
          iVar2 = *unaff_x20;
          iVar4 = unaff_x20[1];
          iVar3 = unaff_x20[2];
          iVar5 = unaff_x20[3];
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (unaff_w21 < 2) break;
          if (((unaff_w21 == 4) || (iVar10 = iVar5, unaff_w21 == 3)) ||
             (iVar10 = iVar3, unaff_w21 == 2)) {
LAB_060e3b04:
            if (iVar10 != 0) goto LAB_060e3b08;
          }
        }
        if (unaff_w21 != 0) {
          iVar10 = iVar4;
          if (unaff_w21 == 1) goto LAB_060e3b04;
          goto LAB_060e3d94;
        }
      } while (iVar2 == 0);
LAB_060e3b08:
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a22030) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_060e3b6c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30();
LAB_060e3b6c:
      unaff_w22 = (*(code *)*puVar6)();
      param_1 = *unaff_x23;
      unaff_w27 = unaff_x20[4];
      unaff_w26 = *unaff_x20;
      unaff_w28 = unaff_x20[1];
      unaff_w29 = unaff_x20[2];
      unaff_w25 = unaff_x20[3];
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
}


