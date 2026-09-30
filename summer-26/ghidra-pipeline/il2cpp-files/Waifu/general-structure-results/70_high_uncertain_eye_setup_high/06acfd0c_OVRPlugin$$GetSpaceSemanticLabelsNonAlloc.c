/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabelsNonAlloc
ENTRY_POINT: 06acfd0c
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


void OVRPlugin__GetSpaceSemanticLabelsNonAlloc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  int *unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  undefined1 unaff_w22;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000a4;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083fb7c0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083fb870,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 699) = unaff_w22;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  uStack00000000000000bc = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  uStack00000000000000c4 = 0;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  uStack00000000000000a4 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 6);
  in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 4);
  in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 10);
  in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 8);
  in_stack_000000d8 = *(undefined8 *)(unaff_x20 + 2);
  in_stack_000000d0 = *(undefined8 *)unaff_x20;
  FUN_05062f24();
  uVar14 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = FUN_07a119fc(uVar14,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) == '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      if (*unaff_x20 == *(int *)(*(long *)(unaff_x19 + 0xf8) + 0x10)) {
        return;
      }
      if ((unaff_x20[1] & 0xfffffffeU) != 2) {
        return;
      }
      FUN_06acf8cc(&stack0x00000060);
      *(undefined8 *)(unaff_x19 + 0x1c0) = uStack0000000000000074;
      *(ulong *)(unaff_x19 + 0x1b8) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      *(ulong *)(unaff_x19 + 0x1b4) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(unaff_x19 + 0x1ac) = in_stack_00000060;
      FUN_06acffa4();
      uVar14 = FUN_06acf9c8();
      *(undefined8 *)(unaff_x19 + 0x180) = uVar14;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x180U >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x180U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_06ad0110(&stack0x000000b0);
      uVar14 = in_stack_000000b0;
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        in_stack_00000090 = in_stack_000000b8;
        in_stack_00000088 = in_stack_000000b0;
        uStack000000000000009c = uStack00000000000000c4;
        in_stack_000000a0 = in_stack_000000c8;
        uStack0000000000000094 = uStack00000000000000bc;
        in_stack_00000098 = in_stack_000000c0;
        uVar11 = *(undefined8 *)(unaff_x19 + 0x108);
        in_stack_00000080 = CONCAT44(4,*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x10));
        uVar7 = in_stack_00000080;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x000000a8 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)&stack0x000000a8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        in_stack_000000a8 = uVar11;
        if (*(long *)(unaff_x19 + 0xd0) != 0) {
          plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8);
          uVar5 = CONCAT44(uStack00000000000000c4,in_stack_000000c0);
          uVar4 = CONCAT44(uStack00000000000000bc,in_stack_000000b8);
          uVar6 = CONCAT44(uStack00000000000000a4,in_stack_000000c8);
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_083ccec8) {
                  puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_06acff68;
                }
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_0338f71c(plVar13,DAT_083ccec8,0);
LAB_06acff68:
            in_stack_000000d8 = uVar14;
            in_stack_000000d0 = uVar7;
            in_stack_000000e0 = uVar4;
            in_stack_000000e8 = uVar5;
            in_stack_000000f0 = uVar6;
            in_stack_000000f8 = uVar11;
            (*(code *)*puVar9)(plVar13,&stack0x000000d0,puVar9[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


