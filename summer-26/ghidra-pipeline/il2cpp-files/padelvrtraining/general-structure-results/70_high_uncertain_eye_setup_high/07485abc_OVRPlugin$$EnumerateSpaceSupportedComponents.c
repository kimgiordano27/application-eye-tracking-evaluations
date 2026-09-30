/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 07485abc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

uint OVRPlugin__EnumerateSpaceSupportedComponents(ulong param_1,undefined8 param_2,int *param_3)

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
  uint uVar10;
  long unaff_x21;
  int iVar11;
  long *unaff_x29;
  uint uStack0000000000000004;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
                    /* try { // try from 07485abc to 07585b8f has its CatchHandler @ 07485abc
                       catch() { ... } // from try @ 07485abc with catch @ 07485abc
                       catch() { ... } // from try @ 07485d00 with catch @ 07485abc
                       catch() { ... } // from try @ 07485d88 with catch @ 07485abc
                       catch() { ... } // from try @ 07485df4 with catch @ 07485abc
                       catch() { ... } // from try @ 07485e78 with catch @ 07485abc */
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0921fba8);
    FUN_03d2d2b0(PTR_DAT_092212d8);
    *(undefined1 *)(unaff_x21 + 0xa5e) = 1;
  }
  iVar11 = *param_3;
  iVar2 = param_3[1];
  iVar1 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = param_3[4];
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar10 = 0;
  uStack0000000000000004 =
       (uint)(iVar4 != 2 && (((iVar11 != 2 && iVar2 != 2) && iVar1 != 2) && iVar3 != 2));
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  do {
    iVar11 = *param_3;
    iVar2 = param_3[1];
    iVar1 = param_3[2];
    iVar3 = param_3[3];
    iVar4 = param_3[4];
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    switch(uVar10) {
    case 1:
      iVar1 = iVar2;
      break;
    case 2:
      break;
    case 3:
      iVar11 = iVar3;
    case 0:
      iVar1 = iVar11;
      break;
    case 4:
      iVar1 = iVar4;
      break;
    default:
      goto switchD_07485b80_default;
    }
    if (iVar1 != 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07485c08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485c08:
      uVar5 = (*(code *)*puVar6)();
      iVar11 = *param_3;
      iVar2 = param_3[1];
      iVar1 = param_3[2];
      iVar3 = param_3[3];
      iVar4 = param_3[4];
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03db619c(*unaff_x29);
      }
      uStack000000000000000c = uStack000000000000000c | uVar5;
      switch(uVar10) {
      case 0:
        break;
      case 1:
        iVar11 = iVar2;
        break;
      case 2:
        iVar11 = iVar1;
        break;
      case 3:
        iVar11 = iVar3;
        break;
      case 4:
        iVar11 = iVar4;
        break;
      default:
        goto switchD_07485c68_default;
      }
      if (iVar11 == 2) {
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07485d30;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485d30:
        uVar8 = (*(code *)*puVar6)();
        if ((uVar8 & 1) != 0) {
          iVar11 = param_3[5];
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uStack0000000000000008 = 1;
          if (iVar11 == 1) {
            return 1;
          }
        }
      }
      else {
switchD_07485c68_default:
        iVar11 = *param_3;
        iVar2 = param_3[1];
        iVar1 = param_3[2];
        iVar3 = param_3[3];
        iVar4 = param_3[4];
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        switch(uVar10) {
        case 0:
          break;
        case 1:
          iVar11 = iVar2;
          break;
        case 2:
          iVar11 = iVar1;
          break;
        case 3:
          iVar11 = iVar3;
          break;
        case 4:
          iVar11 = iVar4;
          break;
        default:
          goto switchD_07485b80_default;
        }
        if (iVar11 == 1) {
          lVar7 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092212d8) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_07485de8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03d8f370();
LAB_07485de8:
          uVar8 = (*(code *)*puVar6)();
          if ((uVar8 & 1) != 0) {
            iVar11 = param_3[5];
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            uStack0000000000000008 = 1;
            if ((uStack0000000000000004 & iVar11 == 1) != 0) {
              return 1;
            }
          }
        }
      }
    }
switchD_07485b80_default:
    uVar10 = uVar10 + 1;
    if (uVar10 == 5) {
      return uStack0000000000000008 & (uStack000000000000000c ^ 1);
    }
  } while( true );
}


