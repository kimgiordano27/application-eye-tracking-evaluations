/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 063690a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 106
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x063691b0) */

void OVRManager__SetDynamicFoveatedRenderingEnabled(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x063690a8:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(), (uVar1 & 1) != 0) {
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06369064;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_06369064:
    (*(code *)*puVar2)();
    FUN_06369420();
    param_1 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          in_x9 = (long)*piVar4;
          goto code_r0x063690a8;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0636918c;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0636918c:
    (*(code *)*puVar2)();
  }
  return;
}


