/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionAll
ENTRY_POINT: 05ab0948
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ab0c74) */
/* WARNING: Removing unreachable block (ram,0x05ab0cc4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void PXR_PermissionRequest__RequestUserPermissionAll(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x310));
  FUN_02b3c81c(Method_DG_Tweening_Core_Easing_EaseCurve_Evaluate__);
  *(undefined1 *)(unaff_x23 + 0x2d4) = 1;
  puVar1 = Method_DG_Tweening_Core_Easing_EaseCurve_Evaluate__;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(unaff_x19 + 0x28) = unaff_x21;
  thunk_FUN_02bb0e9c();
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x78);
  if (lVar3 != 0) {
    FUN_05c36c30(lVar3,0);
  }
  puVar1 = Method_Platinio_TweenEngine_EasingFunctions_EaseInOutSine__;
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar6 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Platinio_TweenEngine_EasingFunctions_EaseInOutSine__) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x16) * 0x10 + 0x138);
        goto LAB_05ab0a18;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c();
LAB_05ab0a18:
  (*(code *)*puVar4)();
  puVar2 = Method_Platinio_TweenEngine_EasingFunctions_EaseOutBounceD__;
                    /* try { // try from 05ab0a34 to 05bb0a3b has its CatchHandler @ 05ab0cb4 */
  plVar5 = (long *)thunk_FUN_02b79548();
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
                    /* try { // try from 05ab0a48 to 05bb0a4f has its CatchHandler @ 05ab0cb0 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 05ab0a5c to 05bb0a63 has its CatchHandler @ 05ab0cac */
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05ab0a90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 05ab0a70 to 05bb0a77 has its CatchHandler @ 05ab0ca8 */
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar2,0);
LAB_05ab0a90:
    for (plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]); plVar5 != (long *)0x0;
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1])) {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
                    /* try { // try from 05ab0ab8 to 05bb0ae7 has its CatchHandler @ 05ab0cb8 */
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x16) * 0x10 + 0x138);
            goto LAB_05ab0af8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar1,0x16);
LAB_05ab0af8:
      (*(code *)*puVar4)(plVar5);
      plVar5 = (long *)thunk_FUN_02b79548(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) break;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05ab0b6c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar2,0);
LAB_05ab0b6c:
    }
  }
  puVar1 = Method_System_Reflection_Emit_DynamicMethod_GetBaseDefinition__;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Reflection_Emit_DynamicMethod_GetBaseDefinition__) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
        goto LAB_05ab0bdc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c();
LAB_05ab0bdc:
  (*(code *)*puVar4)();
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
        goto LAB_05ab0c3c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c();
LAB_05ab0c3c:
  (*(code *)*puVar4)();
  if (lVar3 != 0) {
    FUN_05c36cb8(lVar3,0);
  }
  *(undefined8 *)(unaff_x21 + 0x80) = unaff_x20;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x21 + 0x80));
  lVar3 = *(long *)(unaff_x21 + 0x50);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
  }
  return;
}


