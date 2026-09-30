/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06aabc10
PROGRAM: Waifu-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  undefined1 unaff_w23;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xcc6) = unaff_w23;
  puVar6 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
  uStack0000000000000054 = *puVar6;
  uStack0000000000000058 = puVar6[1];
  uStack000000000000005c = puVar6[2];
  plVar10 = *(long **)(unaff_x20 + 200);
  if (DAT_086d7cc9 == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc9 = '\x01';
  }
  if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_083cd1a0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_06aabcc8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083cd1a0,1);
LAB_06aabcc8:
  uVar4 = (*(code *)*puVar5)(plVar10,&stack0x00000048,&stack0x00000028,puVar5[1]);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    puVar5 = *(undefined8 **)(DAT_083d1cb8 + 0xb8);
    uVar14 = puVar5[1];
    uVar13 = *puVar5;
    uVar12 = puVar5[3];
    uVar11 = puVar5[2];
    unaff_x19[4] = puVar5[4];
    unaff_x19[1] = uVar14;
    *unaff_x19 = uVar13;
    unaff_x19[3] = uVar12;
    unaff_x19[2] = uVar11;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    (*DAT_086ef188)();
    FUN_06aab1b0(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c,
                 *(undefined4 *)(unaff_x20 + 0xb4));
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return uVar4 & 1;
}


