/*
FUNCTION_NAME: OVRManager$$FindMainCamera
ENTRY_POINT: 06aad118
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__FindMainCamera(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined1 unaff_w21;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  DataMemoryBarrier(2,3);
                    /* try { // try from 06aad124 to 06bad2cf has its CatchHandler @ 06aad124
                       catch() { ... } // from try @ 06aad124 with catch @ 06aad124
                       catch() { ... } // from try @ 06aad5bc with catch @ 06aad124
                       catch() { ... } // from try @ 06aad5e0 with catch @ 06aad124
                       catch() { ... } // from try @ 06aad718 with catch @ 06aad124
                       catch() { ... } // from try @ 06aad720 with catch @ 06aad124
                       catch() { ... } // from try @ 06aad810 with catch @ 06aad124 */
  FUN_0335b6c8(&DAT_083ed8a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c3e00,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cffc8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x140) = unaff_w21;
  in_stack_00000130 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000f8 = 0;
  uStack00000000000000fc = 0;
  in_stack_000000f0 = 0;
  uStack00000000000000f4 = 0;
  in_stack_00000108 = 0;
  in_stack_000000e8 = 0;
  uStack00000000000000ec = 0;
  in_stack_000000e0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000100 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000100 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_06aac274();
  uVar12 = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  in_stack_000000e8 = uStack0000000000000008;
  in_stack_000000e0 = in_stack_00000000;
  in_stack_000000f8 = uStack0000000000000018;
  in_stack_000000f0 = uStack0000000000000010;
  uStack00000000000000fc = 0x7f800000;
  plVar10 = *(long **)(unaff_x19 + 0x138);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083ccf20) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06aad258;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083ccf20,0);
LAB_06aad258:
    iVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083ccf20) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_06aad2b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083ccf20,1);
LAB_06aad2b8:
    uVar11 = (*(code *)*puVar5)(plVar10,iVar4 + -1,puVar5[1]);
                    /* try { // try from 06aad2d0 to 06bad2f7 has its CatchHandler @ 06aad748 */
    in_stack_00000108 = 0;
    if (DAT_08908cd0 != 0) {
                    /* try { // try from 06aad300 to 06bad30b has its CatchHandler @ 06aad740 */
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000108 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000108 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 06aad318 to 06bad31b has its CatchHandler @ 06aad73c */
    if (DAT_086d7c56 == '\0') {
                    /* try { // try from 06aad32c to 06bad333 has its CatchHandler @ 06aad738 */
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    lVar7 = *(long *)(DAT_083d2c90 + 0xb8);
    uStack0000000000000008 = 0;
    uStack000000000000000c = 0;
    in_stack_00000000 = 0;
    uStack0000000000000018 = 0;
    uStack000000000000001c = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000014 = 0;
                    /* try { // try from 06aad370 to 06bad397 has its CatchHandler @ 06aad778 */
    in_stack_00000020 = 0;
    FUN_06aab1b0(uVar11,uVar12,param_3,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                 *(undefined4 *)(lVar7 + 0x20),0);
    in_stack_00000118 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    in_stack_00000128 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000120 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    in_stack_00000110 = in_stack_00000000;
    in_stack_00000130 = in_stack_00000020;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000110 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000110 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 06aad3d0 to 06bad3f7 has its CatchHandler @ 06aad774 */
    if (*(int *)(DAT_083c3e00 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = DAT_083ed8a0;
    lVar6 = *(long *)(DAT_083ed8a0 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar7 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
                    /* try { // try from 06aad430 to 06bad457 has its CatchHandler @ 06aad5cc */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if ((long *)**(long **)(lVar7 + 0xb8) != (long *)0x0) {
      (**(code **)(*(long *)**(long **)(lVar7 + 0xb8) + 0x198))(&stack0x00000060);
      in_stack_000000c8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      in_stack_000000d0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      in_stack_000000c0 = in_stack_00000060;
      if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_07a1747c(&stack0x00000060,0);
      in_stack_000000a8 = uStack0000000000000068;
                    /* try { // try from 06aad48c to 06bad4b3 has its CatchHandler @ 06aad5c8 */
      in_stack_000000a0 = in_stack_00000060;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = uStack0000000000000070;
      plVar10 = *(long **)(unaff_x19 + 0x128);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
                    /* try { // try from 06aad4b8 to 06bad4c7 has its CatchHandler @ 06aad5c4 */
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_083cca80) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06aad4f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083cca80,0);
LAB_06aad4f4:
        (*(code *)*puVar5)(plVar10,&stack0x000000a0,puVar5[1]);
      }
      FUN_046784fc(&stack0x000000c0,DAT_083ed738);
      in_stack_00000088 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000098 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000090 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
                    /* try { // try from 06aad520 to 06bad547 has its CatchHandler @ 06aad76c */
      in_stack_00000080 = in_stack_00000000;
      while( true ) {
        uVar8 = FUN_0609d9a8(&stack0x00000080,DAT_083e9948);
        if ((uVar8 & 1) == 0) {
                    /* try { // try from 06aad5b8 to 06bad5bb has its CatchHandler @ 06aad5c0 */
                    /* try { // try from 06aad5bc to 06bad5db has its CatchHandler @ 06aad124 */
                    /* catch() { ... } // from try @ 06aad5b8 with catch @ 06aad5c0 */
                    /* catch() { ... } // from try @ 06aad4b8 with catch @ 06aad5c4 */
          FUN_046784fc(&stack0x000000c0,DAT_083ed738);
                    /* catch() { ... } // from try @ 06aad48c with catch @ 06aad5c8 */
          in_stack_00000088 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          in_stack_00000098 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_00000090 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
                    /* catch() { ... } // from try @ 06aad430 with catch @ 06aad5cc */
          in_stack_00000080 = in_stack_00000000;
          while( true ) {
            uVar8 = FUN_0609d9a8(&stack0x00000080,DAT_083e9948);
                    /* try { // try from 06aad5dc to 06bad5df has its CatchHandler @ 06aad728 */
            if ((uVar8 & 1) == 0) {
              memcpy(&stack0x00000000,&stack0x000000e0,0x58);
              puVar5 = (undefined8 *)(unaff_x19 + 0x148);
              *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000050;
              *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000038;
              *puVar5 = in_stack_00000030;
              *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000048;
              *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000040;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return in_stack_00000108;
            }
                    /* try { // try from 06aad5e0 to 06bad6d7 has its CatchHandler @ 06aad124 */
            lVar7 = FUN_0609d85c(&stack0x00000080,DAT_083e9950);
            if (lVar7 == 0) break;
            if (*(char *)(lVar7 + 0xb0) != '\0') {
              FUN_06aad954();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar7 = FUN_0609d85c(&stack0x00000080,DAT_083e9950);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0xb0) == '\0') {
          if (*(long *)(unaff_x19 + 0x128) != 0) {
            FUN_06aad6e4(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,in_stack_000000a8);
          }
          FUN_06aad954();
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06aad588 to 06bad5af has its CatchHandler @ 06aad770 */
      FUN_033d1d3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


