/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 07a2496c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseExternalCompositionFromCmd(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar6;
  
  piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_07a249a8;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a249a8:
  uVar3 = (*(code *)*puVar2)();
  iVar1 = *(int *)(unaff_x22 + 0x20);
  if ((uVar3 & 1) == 0) {
    if (iVar1 == 3) {
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_07a24b6c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
      goto LAB_07a24b6c;
    }
    if (iVar1 != 2) {
      return;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_07a24af4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a24af4:
    uVar6 = (*(code *)*puVar2)();
    *unaff_x21 = uVar6;
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) goto LAB_07a24b44;
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_07a24aa0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a24aa0:
    uVar6 = (*(code *)*puVar2)();
    *unaff_x21 = uVar6;
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) goto LAB_07a24b44;
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
  unaff_x21 = unaff_x20;
LAB_07a24b6c:
  uVar6 = (*(code *)*puVar2)();
  *unaff_x21 = uVar6;
  return;
LAB_07a24b44:
  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
  unaff_x21 = unaff_x20;
  goto LAB_07a24b6c;
}


