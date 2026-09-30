/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 073f2078
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetSpaceTriangleMeshCounts(void)

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
  int iVar10;
  int unaff_w22;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if (unaff_w22 == 1) {
      return 1;
    }
switchD_073f1e98_default:
    do {
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w21 == 5) {
        return (in_stack_00000008._4_4_ ^ 1) & 1;
      }
      iVar10 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      switch(unaff_w21) {
      case 1:
        goto joined_r0x073f1eac;
      case 2:
        iVar2 = iVar1;
joined_r0x073f1eac:
        if (iVar2 != 0) goto LAB_073f1ebc;
        goto switchD_073f1e98_default;
      case 3:
        iVar10 = iVar3;
      case 0:
        break;
      case 4:
        iVar10 = iVar4;
        break;
      default:
        goto switchD_073f1e98_default;
      }
      if (iVar10 == 0) goto switchD_073f1e98_default;
LAB_073f1ebc:
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08eb3cd0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_073f1f20;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_073f1f20:
      uVar5 = (*(code *)*puVar6)();
      iVar10 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x29);
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ | uVar5;
      switch(unaff_w21) {
      case 0:
        break;
      case 1:
        iVar10 = iVar2;
        break;
      case 2:
        iVar10 = iVar1;
        break;
      case 3:
        iVar10 = iVar3;
        break;
      case 4:
        iVar10 = iVar4;
        break;
      default:
        goto switchD_073f1f80_default;
      }
      if (iVar10 != 2) {
switchD_073f1f80_default:
        iVar10 = *unaff_x20;
        iVar2 = unaff_x20[1];
        iVar1 = unaff_x20[2];
        iVar3 = unaff_x20[3];
        iVar4 = unaff_x20[4];
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        switch(unaff_w21) {
        case 0:
          break;
        case 1:
          iVar10 = iVar2;
          break;
        case 2:
          iVar10 = iVar1;
          break;
        case 3:
          iVar10 = iVar3;
          break;
        case 4:
          iVar10 = iVar4;
          break;
        default:
          goto switchD_073f1e98_default;
        }
        if (iVar10 == 1) {
          lVar7 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08eb3cd0) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_073f2100;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348();
LAB_073f2100:
          uVar8 = (*(code *)*puVar6)();
          if ((uVar8 & 1) != 0) {
            iVar10 = unaff_x20[5];
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            if ((in_stack_00000000._4_1_ & iVar10 == 1) != 0) {
              return 1;
            }
          }
        }
        goto switchD_073f1e98_default;
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08eb3cd0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_073f2048;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_073f2048:
      uVar8 = (*(code *)*puVar6)();
    } while ((uVar8 & 1) == 0);
    unaff_w22 = unaff_x20[5];
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
  } while( true );
}


