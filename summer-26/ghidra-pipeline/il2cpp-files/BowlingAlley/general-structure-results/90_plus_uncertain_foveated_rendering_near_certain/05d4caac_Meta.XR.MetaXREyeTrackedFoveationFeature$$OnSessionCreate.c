/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 05d4caac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 136
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_072b0bc8;
  puVar2 = PTR_DAT_072ad9a8;
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 05d4cac0 to 05e4caef has its CatchHandler @ 05d4cbb8 */
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072ad9a8) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
        goto FUN_05d4cb0c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 05d4caf0 to 05e4caff has its CatchHandler @ 05d4cbc0 */
  puVar4 = (undefined8 *)FUN_032937ac();
FUN_05d4cb0c:
  (*(code *)*puVar4)();
  FUN_05d4f738();
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05d4cb78;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d4cb78:
  (*(code *)*puVar4)();
  puVar1 = PTR_DAT_072ad988;
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072ad988) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05d4cbe0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d4cbe0:
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar3 = PTR_DAT_072ada08;
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072ada08) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_05d4cc4c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar5,*(long *)PTR_DAT_072ada08,4);
LAB_05d4cc4c:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05d4cca8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d4cca8:
      plVar5 = (long *)(*(code *)*puVar4)();
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05d4cd08;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar3,0);
LAB_05d4cd08:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_05d4cd68;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d4cd68:
        (*(code *)*puVar4)(uVar9);
        if (*unaff_x19 != 0) {
          return *(undefined4 *)(*unaff_x19 + 0x3c);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


