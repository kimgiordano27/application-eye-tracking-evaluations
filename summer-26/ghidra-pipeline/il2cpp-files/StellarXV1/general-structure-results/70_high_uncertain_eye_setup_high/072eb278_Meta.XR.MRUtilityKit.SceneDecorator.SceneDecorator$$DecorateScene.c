/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$DecorateScene
ENTRY_POINT: 072eb278
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


/* WARNING: Removing unreachable block (ram,0x072eb538) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__DecorateScene(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long *in_stack_00000118;
  
  puVar1 = PTR_DAT_092c44b0;
  if ((*(byte *)(unaff_x21 + 0xbcb) & 1) == 0) {
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092c45b0);
    FUN_04077588(PTR_DAT_092c45b8);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_092c45c0);
    FUN_04077588(PTR_DAT_092c44b0);
    *(undefined1 *)(unaff_x21 + 0xbcb) = 1;
  }
  lVar3 = *(long *)puVar1;
  in_stack_00000110 = 0;
  in_stack_00000118 = (long *)0x0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if ((lVar3 == 0) ||
     (plVar4 = (long *)FUN_064c6d7c(lVar3,*(undefined8 *)PTR_DAT_092c45c0), plVar4 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092c45b0) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_072eb37c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092c45b0,0);
LAB_072eb37c:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = PTR_DAT_092c45b8;
  puVar1 = PTR_DAT_092860c8;
  in_stack_000000b8 = &stack0x00000118;
  in_stack_000000b0 = 0;
  do {
    in_stack_00000118 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_072eb3f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)puVar1,0);
LAB_072eb3f8:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = in_stack_00000118;
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000118 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000118;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_072eb4f0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *in_stack_00000118;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_072eb45c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000118,*(long *)puVar2,0);
LAB_072eb45c:
    (*(code *)*puVar5)(&stack0x00000058,plVar4,puVar5[1]);
    memcpy(&stack0x000000c0,&stack0x00000058,0x58);
    memcpy(&stack0x00000000,&stack0x000000c0,0x58);
    FUN_072ea04c(param_1);
    plVar4 = in_stack_00000118;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_072eb50c;
    }
  }
LAB_072eb4f0:
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000118,*(long *)PTR_DAT_092860c0,0);
LAB_072eb50c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


