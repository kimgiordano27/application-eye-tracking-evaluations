/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TrySerialize
ENTRY_POINT: 058a44b0
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TrySerialize(ulong *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *piVar9;
  uint in_w11;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  
  while (in_w11 != 0) {
    bVar1 = 1;
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 | in_x9;
      bVar1 = ExclusiveMonitorsStatus();
    }
    in_w11 = (uint)bVar1;
  }
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
    plVar10 = (long *)unaff_x19[7];
    if (plVar10 == (long *)0x0) goto LAB_058a4614;
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083cc870) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_058a4514;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083cc870,0);
LAB_058a4514:
    uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_058a4614;
    }
    plVar10 = (long *)unaff_x19[7];
    if (plVar10 == (long *)0x0) goto LAB_058a4614;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_058a4594;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c(plVar10,lVar6,0);
LAB_058a4594:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar6 = unaff_x19[5];
  } while ((lVar6 != 0) &&
          (uVar8 = (**(code **)(lVar6 + 0x18))
                             (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28)),
          (uVar8 & 1) == 0));
  lVar6 = unaff_x19[6];
  if (lVar6 != 0) {
    uVar3 = (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28));
    *(undefined4 *)(unaff_x19 + 3) = uVar3;
    return 1;
  }
LAB_058a4614:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


