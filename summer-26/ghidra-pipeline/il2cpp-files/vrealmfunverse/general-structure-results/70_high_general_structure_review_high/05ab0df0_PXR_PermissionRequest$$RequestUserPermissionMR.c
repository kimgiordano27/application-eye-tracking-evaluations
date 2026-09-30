/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionMR
ENTRY_POINT: 05ab0df0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05ab10a0) */

void PXR_PermissionRequest__RequestUserPermissionMR(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long *plVar8;
  long in_stack_00000008;
  long *in_stack_00000010;
  
  lVar4 = *unaff_x22;
  plVar8 = *(long **)(unaff_x24 + 0x310);
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *plVar8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
        goto LAB_05ab0e44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_05ab0e44:
  (*(code *)*puVar2)();
  puVar1 = Method_Platinio_TweenEngine_EasingFunctions_EaseOutBounceD__;
  plVar3 = (long *)thunk_FUN_02b79548();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05ab0ebc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,0);
LAB_05ab0ebc:
    for (plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]); plVar3 != (long *)0x0;
        plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1])) {
      lVar5 = *plVar3;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
            goto LAB_05ab0f24;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0x17);
LAB_05ab0f24:
      (*(code *)*puVar2)(plVar3);
      plVar3 = (long *)thunk_FUN_02b79548(plVar3,*(undefined8 *)puVar1);
      if (plVar3 == (long *)0x0) break;
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05ab0f98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,0);
LAB_05ab0f98:
    }
  }
  puVar1 = Method_System_Reflection_Emit_DynamicMethod_GetBaseDefinition__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Reflection_Emit_DynamicMethod_GetBaseDefinition__) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_05ab1008;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_05ab1008:
  (*(code *)*puVar2)();
  lVar4 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_05ab1068;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_05ab1068:
  (*(code *)*puVar2)();
  if (*in_stack_00000010 != 0) {
    FUN_05c36cb8(*in_stack_00000010,0);
  }
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  puVar2 = (undefined8 *)(unaff_x20 + 0x80);
  if ((long *)*puVar2 == unaff_x21) {
    *puVar2 = 0;
    thunk_FUN_02bb0e9c(puVar2,0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
  }
  return;
}


