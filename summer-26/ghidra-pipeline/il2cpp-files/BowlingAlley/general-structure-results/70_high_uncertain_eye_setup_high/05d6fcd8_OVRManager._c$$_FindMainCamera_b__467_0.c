/*
FUNCTION_NAME: OVRManager.<>c$$<FindMainCamera>b__467_0
ENTRY_POINT: 05d6fcd8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_<>c__<FindMainCamera>b__467_0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  int unaff_w26;
  int iVar9;
  
code_r0x05d6fcd8:
  unaff_w23 = unaff_w23 | param_1;
switchD_05d6fc40_default:
  do {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 5) goto LAB_05d6fd8c;
    iVar9 = *unaff_x20;
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
      iVar9 = iVar2;
      break;
    case 2:
      iVar9 = iVar1;
      break;
    case 3:
      iVar9 = iVar3;
      break;
    case 4:
      iVar9 = iVar4;
      break;
    default:
      goto switchD_05d6fb88_default;
    }
    if (iVar9 == 2) break;
switchD_05d6fb88_default:
    if (unaff_w26 != 0) {
      iVar9 = *unaff_x20;
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
        iVar9 = iVar2;
        break;
      case 2:
        iVar9 = iVar1;
        break;
      case 3:
        iVar9 = iVar3;
        break;
      case 4:
        iVar9 = iVar4;
        break;
      default:
        goto switchD_05d6fc40_default;
      }
      if (iVar9 == 1) {
        if (unaff_x19 == (long *)0x0) goto LAB_05d6fdac;
        lVar6 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072af0a8) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05d6fd58;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_032937ac();
LAB_05d6fd58:
        uVar7 = (*(code *)*puVar5)();
        if ((uVar7 & 1) != 0) {
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
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072af0a8) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05d6fc58;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_032937ac();
LAB_05d6fc58:
  uVar7 = (*(code *)*puVar5)();
  if ((uVar7 & 1) == 0) {
    unaff_w23 = 0;
LAB_05d6fd8c:
    return unaff_w23 & 1;
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072af0a8) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05d6fcc4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_032937ac();
LAB_05d6fcc4:
  param_1 = (*(code *)*puVar5)();
  goto code_r0x05d6fcd8;
}


