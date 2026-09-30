/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 063adea8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x25;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x25 + 0xe20);
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *plVar8) {
                    /* try { // try from 063adf14 to 064ae01b has its CatchHandler @ 063adf14
                       catch() { ... } // from try @ 063adf14 with catch @ 063adf14
                       catch() { ... } // from try @ 063ae02c with catch @ 063adf14
                       catch() { ... } // from try @ 063ae084 with catch @ 063adf14
                       catch() { ... } // from try @ 063ae0c8 with catch @ 063adf14 */
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_063adf18;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063adf18:
  (*(code *)*puVar4)();
  puVar3 = PTR_DAT_07db6d50;
  puVar2 = PTR_DAT_07db6c90;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db6d50) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_063adf94;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063adf94:
  (*(code *)*puVar4)();
  lVar5 = *unaff_x19;
  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
     (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_063ae020;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ae020:
    lVar5 = (*(code *)*puVar4)();
    if (lVar5 == 0) {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *plVar8) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
            goto FUN_063ae0b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c();
FUN_063ae0b8:
      (*(code *)*puVar4)();
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin_UnityOpenXR___ctor;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c();
OVRPlugin_UnityOpenXR___ctor:
                    /* WARNING: Could not recover jumptable at 0x063ae140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)();
      return;
    }
  }
  return;
}


