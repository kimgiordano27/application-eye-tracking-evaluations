/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces2
ENTRY_POINT: 0748627c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

float OVRPlugin__QuerySpaces2(undefined8 param_1,int *param_2,ulong param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iStack000000000000000c;
  int iStack0000000000000014;
  uint uStack000000000000001c;
  
  puVar8 = PTR_DAT_0921fba8;
  if ((DAT_09845a66 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0921fba8);
    FUN_03d2d2b0(PTR_DAT_092212d8);
    DAT_09845a66 = 1;
  }
  iVar4 = *param_2;
  iStack0000000000000014 = param_2[1];
  iVar5 = param_2[2];
  iStack000000000000000c = param_2[3];
  iVar6 = param_2[4];
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar13 = 0;
  fVar17 = 0.0;
  fVar16 = 1.0;
  uStack000000000000001c = 0;
  do {
    if ((param_3 & 1) == 0) {
      if (param_4 == (long *)0x0) goto LAB_07486600;
      lVar10 = *param_4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092212d8) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_07486360;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_03d8f370(param_4,*(long *)PTR_DAT_092212d8,0);
LAB_07486360:
      uVar11 = (*(code *)*puVar9)(param_4,uVar13,puVar9[1]);
      if ((uVar11 & 1) == 0) goto LAB_07486374;
    }
    else {
LAB_07486374:
      iVar14 = *param_2;
      iVar2 = param_2[1];
      iVar1 = param_2[2];
      iVar3 = param_2[3];
      iVar7 = param_2[4];
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      switch(uVar13) {
      case 1:
        iVar1 = iVar2;
        break;
      case 2:
        break;
      case 3:
        iVar14 = iVar3;
      case 0:
        iVar1 = iVar14;
        break;
      case 4:
        iVar1 = iVar7;
        break;
      default:
        goto switchD_074863b0_default;
      }
      if (iVar1 == 0) goto switchD_074863b0_default;
      iVar14 = *param_2;
      iVar2 = param_2[1];
      iVar1 = param_2[2];
      iVar3 = param_2[3];
      iVar7 = param_2[4];
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      switch(uVar13) {
      case 0:
        break;
      case 1:
        iVar14 = iVar2;
        break;
      case 2:
        iVar14 = iVar1;
        break;
      case 3:
        iVar14 = iVar3;
        break;
      case 4:
        iVar14 = iVar7;
        break;
      default:
        goto switchD_0748640c_default;
      }
      if (iVar14 == 1) {
        if (param_4 == (long *)0x0) {
LAB_07486600:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar10 = *param_4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092212d8) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_074864e0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_03d8f370(param_4,*(long *)PTR_DAT_092212d8,2);
LAB_074864e0:
        fVar15 = (float)(*(code *)*puVar9)(param_4,uVar13,puVar9[1]);
        if (fVar17 <= fVar15) {
          fVar17 = fVar15;
        }
      }
      else {
switchD_0748640c_default:
        iVar14 = *param_2;
        iVar2 = param_2[1];
        iVar1 = param_2[2];
        iVar3 = param_2[3];
        iVar7 = param_2[4];
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        switch(uVar13) {
        case 0:
          break;
        case 1:
          iVar14 = iVar2;
          break;
        case 2:
          iVar14 = iVar1;
          break;
        case 3:
          iVar14 = iVar3;
          break;
        case 4:
          iVar14 = iVar7;
          break;
        default:
          goto switchD_074864c4_default;
        }
        if (iVar14 == 2) {
          if (param_4 == (long *)0x0) goto LAB_07486600;
          lVar10 = *param_4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_092212d8) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_07486574;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_03d8f370(param_4,*(long *)PTR_DAT_092212d8,2);
LAB_07486574:
          fVar15 = (float)(*(code *)*puVar9)(param_4,uVar13,puVar9[1]);
          if (fVar15 <= fVar16) {
            fVar16 = fVar15;
          }
          uStack000000000000001c = 1;
        }
      }
    }
switchD_074863b0_default:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 5);
switchD_074864c4_default:
  if ((uStack000000000000001c & 1) == 0) {
    fVar16 = 0.0;
  }
  if ((((iVar6 != 2 && iStack000000000000000c != 2) && iVar5 != 2) && iStack0000000000000014 != 2)
      && iVar4 != 2) {
    fVar16 = fVar17;
  }
  return fVar16;
}


