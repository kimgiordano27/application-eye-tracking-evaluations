/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelPaths
ENTRY_POINT: 06ad1070
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetRenderModelPaths(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  uint *unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  undefined1 unaff_w25;
  undefined8 uVar7;
  
  FUN_0335b6c8(&DAT_083ccfa8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x24 + 0x2da) = unaff_w25;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cca38) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_06ad10f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad10f8:
    uVar1 = (*(code *)*puVar2)();
    *unaff_x22 = uVar1 & unaff_w23;
    FUN_06ad3e44();
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083ccfa8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06ad116c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad116c:
    (*(code *)*puVar2)();
    if (unaff_x21 != (long *)0x0) {
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083cca40) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06ad11d0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad11d0:
      plVar3 = (long *)(*(code *)*puVar2)();
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cca30) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_06ad1238;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cca30,4);
LAB_06ad1238:
        uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        lVar4 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cca40) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_06ad1294;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad1294:
        plVar3 = (long *)(*(code *)*puVar2)();
        if (plVar3 != (long *)0x0) {
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_083cca30) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_06ad12f4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cca30,0);
LAB_06ad12f4:
          (*(code *)*puVar2)(plVar3,puVar2[1]);
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_083cca38) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
                goto LAB_06ad1354;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad1354:
          (*(code *)*puVar2)(uVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


