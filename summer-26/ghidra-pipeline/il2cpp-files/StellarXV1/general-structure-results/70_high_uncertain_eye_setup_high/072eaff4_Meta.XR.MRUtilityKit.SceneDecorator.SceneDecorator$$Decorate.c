/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$Decorate
ENTRY_POINT: 072eaff4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072eb1fc) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__Decorate(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long lVar12;
  
  plVar6 = (long *)(**(code **)(param_1 + 0x138))();
  puVar5 = PTR_DAT_092c45a8;
  puVar4 = PTR_DAT_092c4588;
  puVar3 = PTR_DAT_092c4580;
  puVar2 = PTR_DAT_092c44b0;
  puVar1 = PTR_DAT_092860c8;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_072eb08c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)puVar1,0);
LAB_072eb08c:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_072eb1a0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_072eb0f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)puVar5,0);
LAB_072eb0f0:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    lVar9 = *(long *)puVar2;
    lVar12 = *unaff_x19;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *(long *)puVar2;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar8 = FUN_064c6bc8(lVar9,uVar8,*(undefined8 *)puVar4);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar8,uVar8);
    }
    FUN_05be6950(lVar12,uVar8,*(undefined8 *)puVar3);
    FUN_072eaeb8();
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_072eb1bc;
    }
  }
LAB_072eb1a0:
  puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092860c0,0);
LAB_072eb1bc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


