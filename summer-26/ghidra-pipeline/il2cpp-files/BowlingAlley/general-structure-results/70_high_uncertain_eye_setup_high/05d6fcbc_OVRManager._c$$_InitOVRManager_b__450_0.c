/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__450_0
ENTRY_POINT: 05d6fcbc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRManager_<>c__<InitOVRManager>b__450_0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w26;
  int iVar10;
  
code_r0x05d6fcbc:
  puVar6 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
LAB_05d6fcc4:
  uVar5 = (*(code *)*puVar6)();
  unaff_w23 = unaff_w23 | uVar5;
switchD_05d6fc40_default:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) goto LAB_05d6fd8c;
    iVar10 = *unaff_x20;
    iVar2 = unaff_x20[1];
    iVar1 = unaff_x20[2];
    iVar3 = unaff_x20[3];
    iVar4 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
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
      goto switchD_05d6fb88_default;
    }
    if (iVar10 == 2) break;
switchD_05d6fb88_default:
    if (unaff_w26 != 0) {
      iVar10 = *unaff_x20;
      iVar2 = unaff_x20[1];
      iVar1 = unaff_x20[2];
      iVar3 = unaff_x20[3];
      iVar4 = unaff_x20[4];
      if (*(int *)(*(long *)PTR_DAT_072ad9a0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
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
        goto switchD_05d6fc40_default;
      }
      if (iVar10 == 1) {
        if (unaff_x19 == (long *)0x0) goto LAB_05d6fdac;
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_072af0a8) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_05d6fd58;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac();
LAB_05d6fd58:
        uVar8 = (*(code *)*puVar6)();
        if ((uVar8 & 1) != 0) {
          unaff_w23 = 1;
          goto LAB_05d6fd8c;
        }
      }
    }
  } while( true );
  if (unaff_x19 == (long *)0x0) {
LAB_05d6fdac:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_072af0a8) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05d6fc58;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac();
LAB_05d6fc58:
  uVar8 = (*(code *)*puVar6)();
  if ((uVar8 & 1) == 0) {
    unaff_w23 = 0;
LAB_05d6fd8c:
    return unaff_w23 & 1;
  }
  param_1 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_072af0a8) {
        in_w9 = *piVar9 + 1;
        goto code_r0x05d6fcbc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac();
  goto LAB_05d6fcc4;
}


