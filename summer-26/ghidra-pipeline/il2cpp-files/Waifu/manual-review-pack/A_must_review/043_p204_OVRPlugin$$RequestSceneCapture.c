/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 06ad0a4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVRPlugin__RequestSceneCapture(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined1 unaff_w24;
  undefined8 uVar6;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cca30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ccfa8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x2dd) = unaff_w24;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cca38) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_06ad0aec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ad0aec:
    (*(code *)*puVar1)();
    FUN_06ad3e44();
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083ccfa8) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06ad0b5c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ad0b5c:
    (*(code *)*puVar1)();
    if (unaff_x21 != (long *)0x0) {
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_083cca40) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06ad0bc0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ad0bc0:
      plVar2 = (long *)(*(code *)*puVar1)();
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cca30) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
              goto LAB_06ad0c28;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cca30,4);
LAB_06ad0c28:
        uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        lVar3 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cca40) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_06ad0c84;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ad0c84:
        plVar2 = (long *)(*(code *)*puVar1)();
        if (plVar2 != (long *)0x0) {
          lVar3 = *plVar2;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_083cca30) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_06ad0ce4;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cca30,0);
LAB_06ad0ce4:
          (*(code *)*puVar1)(plVar2,puVar1[1]);
          lVar3 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_083cca38) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                goto LAB_06ad0d44;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ad0d44:
          (*(code *)*puVar1)(uVar6);
          if (*unaff_x19 != 0) {
            return *(undefined4 *)(*unaff_x19 + 0x3c);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


