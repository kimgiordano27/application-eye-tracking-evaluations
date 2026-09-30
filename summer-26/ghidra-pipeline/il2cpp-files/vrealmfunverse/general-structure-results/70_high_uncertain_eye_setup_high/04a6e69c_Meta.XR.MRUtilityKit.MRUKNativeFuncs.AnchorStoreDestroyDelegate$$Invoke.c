/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreDestroyDelegate$$Invoke
ENTRY_POINT: 04a6e69c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a6e930) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreDestroyDelegate__Invoke
               (undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xaab) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    *(undefined1 *)(unaff_x22 + 0xaab) = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar5 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(PTR_DAT_0631f410);
    FUN_04cee07c(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,param_3);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04a6e744;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c(param_2,lVar7,0);
LAB_04a6e744:
  puVar2 = PTR_DAT_06312f90;
  puVar1 = PTR_DAT_06312f78;
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04a6e7c0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)puVar2,0);
LAB_04a6e7c0:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_04a6e8ac;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04a6e844;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar7,0);
LAB_04a6e844:
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_04a6fe0c(param_1,uVar5,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8));
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04a6e8c8;
    }
  }
LAB_04a6e8ac:
  puVar3 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)puVar1,0);
LAB_04a6e8c8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


