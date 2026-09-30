/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$get_ModelType
ENTRY_POINT: 058a4448
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__get_ModelType(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar11;
  
  puVar5 = (undefined8 *)FUN_0338f71c();
  lVar6 = (*(code *)*puVar5)();
  plVar11 = unaff_x19 + 7;
  *plVar11 = lVar6;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
    plVar11 = (long *)unaff_x19[7];
    if (plVar11 == (long *)0x0) goto LAB_058a4614;
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_083cc870) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_058a4514;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cc870,0);
LAB_058a4514:
    uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_058a4614;
    }
    plVar11 = (long *)unaff_x19[7];
    if (plVar11 == (long *)0x0) goto LAB_058a4614;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618(lVar6);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_058a4594;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,lVar6,0);
LAB_058a4594:
    uVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    lVar6 = unaff_x19[5];
  } while ((lVar6 != 0) &&
          (uVar9 = (**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),uVar7,*(undefined8 *)(lVar6 + 0x28)),
          (uVar9 & 1) == 0));
  lVar6 = unaff_x19[6];
  if (lVar6 != 0) {
    uVar4 = (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar7,*(undefined8 *)(lVar6 + 0x28));
    *(undefined4 *)(unaff_x19 + 3) = uVar4;
    return 1;
  }
LAB_058a4614:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


