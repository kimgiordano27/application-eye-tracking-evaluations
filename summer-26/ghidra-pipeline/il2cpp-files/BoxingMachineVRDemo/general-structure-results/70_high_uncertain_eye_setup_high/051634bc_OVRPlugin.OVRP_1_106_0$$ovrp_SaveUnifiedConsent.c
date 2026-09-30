/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsent
ENTRY_POINT: 051634bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsent(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05163788;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163788:
  uVar2 = (*(code *)*puVar1)();
  uVar3 = FUN_050f0eb8(uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05163a28;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163a28:
    (*(code *)*puVar1)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  lVar4 = *unaff_x22;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_05163a9c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163a9c:
  uVar2 = (*(code *)*puVar1)();
  uVar3 = FUN_050f0eb8(uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_05163b24;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163b24:
    (*(code *)*puVar1)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  lVar4 = *unaff_x22;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_05163b98;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163b98:
  uVar2 = (*(code *)*puVar1)();
  uVar3 = FUN_050f0eb8(uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_05163c20;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163c20:
    (*(code *)*puVar1)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  lVar4 = *unaff_x22;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_05163c94;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163c94:
  uVar2 = (*(code *)*puVar1)();
  uVar3 = FUN_050f0eb8(uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_05163d1c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05163d1c:
    (*(code *)*puVar1)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


