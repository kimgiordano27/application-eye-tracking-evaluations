/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 058a4e80
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_12
*/


undefined8 Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar10;
  undefined1 auVar11 [16];
  
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618(lVar6);
    }
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_058a4eec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c();
LAB_058a4eec:
    lVar6 = (*(code *)*puVar4)();
    plVar10 = unaff_x19 + 8;
    *plVar10 = lVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar10 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
    do {
      plVar10 = (long *)unaff_x19[8];
      if (plVar10 == (long *)0x0)
      goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_083cc870) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_058a4fa4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083cc870,0);
LAB_058a4fa4:
      uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x1f8))();
          return 0;
        }
        goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
      }
      plVar10 = (long *)unaff_x19[8];
      if (plVar10 == (long *)0x0)
      goto Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize;
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
            goto LAB_058a5024;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c(plVar10,lVar6,0);
LAB_058a5024:
      uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      lVar6 = unaff_x19[6];
    } while ((lVar6 != 0) &&
            (uVar8 = (**(code **)(lVar6 + 0x18))
                               (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28)),
            (uVar8 & 1) == 0));
    lVar6 = unaff_x19[7];
    if (lVar6 != 0) {
      auVar11 = (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),uVar5,*(undefined8 *)(lVar6 + 0x28));
      *(undefined1 (*) [16])(unaff_x19 + 3) = auVar11;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)(unaff_x19 + 3) >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)(unaff_x19 + 3) >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return 1;
    }
  }
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__TrySerialize:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


