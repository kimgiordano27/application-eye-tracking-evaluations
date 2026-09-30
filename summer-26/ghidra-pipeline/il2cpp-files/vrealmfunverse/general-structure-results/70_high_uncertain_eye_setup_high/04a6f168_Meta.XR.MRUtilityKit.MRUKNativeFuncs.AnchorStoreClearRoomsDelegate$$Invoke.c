/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreClearRoomsDelegate$$Invoke
ENTRY_POINT: 04a6f168
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a6f3d4) */

uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreClearRoomsDelegate__Invoke
               (ushort *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  
  if ((*param_1 & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04a6f1d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04a6f1d4:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_06312f90;
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a6f248;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)puVar1,0);
LAB_04a6f248:
    uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a6f2d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar5,0);
LAB_04a6f2d0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    uVar7 = FUN_04a6db90();
  } while ((uVar7 & 1) == 0);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a6f368;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)PTR_DAT_06312f78,0);
LAB_04a6f368:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return uVar2 & 1;
}


