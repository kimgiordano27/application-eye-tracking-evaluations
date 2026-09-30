/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 06afaffc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(undefined8 param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  long in_stack_000000c0;
  long *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  long in_stack_000000f0;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 06afb010 to 06bfb0e7 has its CatchHandler @ 06afb010
                       catch() { ... } // from try @ 06afb010 with catch @ 06afb010
                       catch() { ... } // from try @ 06afb138 with catch @ 06afb010
                       catch() { ... } // from try @ 06afb188 with catch @ 06afb010 */
  FUN_0335b6c8(&DAT_083cda98,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee4b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee4b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083bd530,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d16d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7fc0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x52c) = unaff_w21;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((unaff_x20 == 0) ||
     (iVar7 = *(int *)(unaff_x20 + 0x20) - *(int *)(unaff_x20 + 0x28), iVar7 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_03398188(DAT_083c7fc0,iVar7);
    in_stack_000000a8 = 0;
    in_stack_000000a0 = (long *)0x0;
    in_stack_000000b8 = (long *)0x0;
    in_stack_000000b0 = (long *)0x0;
    in_stack_000000c0 = 0;
    FUN_0609cfe4(&stack0x000000a0);
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x000000a0 >> 0x12 & 0x7fff);
    uVar16 = 0;
    puVar2 = &DAT_0873ccb0 + ((ulong)&stack0x000000b0 >> 0x12 & 0x7fff);
    uVar18 = 1L << ((ulong)&stack0x000000a0 >> 0xc & 0x3f);
    uVar17 = 1L << ((ulong)&stack0x000000b0 >> 0xc & 0x3f);
    in_stack_000000d8 = in_stack_000000a8;
    in_stack_000000d0 = in_stack_000000a0;
    in_stack_000000e8 = in_stack_000000b8;
    in_stack_000000e0 = in_stack_000000b0;
    in_stack_000000f0 = in_stack_000000c0;
    while (uVar11 = FUN_0609d050(&stack0x000000d0,DAT_083e9648), plVar9 = in_stack_000000e8,
          plVar8 = in_stack_000000e0, (uVar11 & 1) != 0) {
      if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar12 = FUN_0339a700(*in_stack_000000e8 + 0x20);
      uVar14 = DAT_083bccc0;
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar13 = FUN_0683eca4(uVar14,0);
      iVar7 = DAT_08908cd0;
      if (lVar13 == lVar12) {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(DAT_083cda98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar9);
        }
        uVar4 = *(uint *)(plVar9 + 2);
        in_stack_000000a0 = plVar8;
        if (DAT_08908cd0 != 0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | uVar18;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = *puVar2 | uVar17;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        in_stack_000000b8 = (long *)(ulong)uVar4;
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000a8 = 1;
        in_stack_000000c0 = 0;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar12 = lVar10 + (long)(int)uVar16 * 0x28;
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x28) = 1;
        *(long **)(lVar12 + 0x20) = plVar8;
        *(long **)(lVar12 + 0x38) = in_stack_000000b8;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        if (iVar7 != 0) {
          uVar11 = lVar10 + (long)(int)uVar16 * 0x28 + 0x20;
          puVar3 = &DAT_0873ccb0 + (uVar11 >> 0x12 & 0x7fff);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = *puVar3 | 1L << (uVar11 >> 0xc & 0x3f);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        lVar12 = FUN_0339a700(*plVar9 + 0x20);
        uVar14 = DAT_083bd530;
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar13 = FUN_0683eca4(uVar14,0);
        iVar7 = DAT_08908cd0;
        if (lVar13 == lVar12) {
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = (long *)0x0;
          in_stack_000000b8 = (long *)0x0;
          in_stack_000000b0 = (long *)0x0;
          if (*plVar9 != DAT_083d16d8) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec(plVar9);
          }
          in_stack_000000a0 = plVar8;
          if (DAT_08908cd0 != 0) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | uVar18;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | uVar17;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          in_stack_000000b0 = plVar9;
          in_stack_000000a8 = 0;
          in_stack_000000b8 = (long *)0x0;
          in_stack_000000c0 = 0;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          lVar12 = lVar10 + (long)(int)uVar16 * 0x28;
          *(undefined8 *)(lVar12 + 0x40) = 0;
          *(undefined8 *)(lVar12 + 0x28) = 0;
          *(long **)(lVar12 + 0x20) = plVar8;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(long **)(lVar12 + 0x30) = plVar9;
          if (iVar7 != 0) {
            uVar11 = lVar10 + (long)(int)uVar16 * 0x28 + 0x20;
            puVar3 = &DAT_0873ccb0 + (uVar11 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = *puVar3 | 1L << (uVar11 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          lVar12 = FUN_0339a700(*plVar9 + 0x20);
          uVar14 = DAT_083bc5a0;
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          lVar13 = FUN_0683eca4(uVar14,0);
          iVar7 = DAT_08908cd0;
          if (lVar13 != lVar12) {
            FUN_0335b6c8(&DAT_083cb470,1);
            uVar14 = FUN_03398a84();
            uVar15 = FUN_0335b6c8(&DAT_08442bc0,1);
            FUN_06869f9c(uVar14,uVar15,0);
            uVar15 = FUN_0335b6c8(&DAT_084049e0,1);
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar14,uVar15);
          }
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = (long *)0x0;
          in_stack_000000b8 = (long *)0x0;
          in_stack_000000b0 = (long *)0x0;
          if (*(long *)(*plVar9 + 0x40) != *(long *)(DAT_083ca8e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec(plVar9);
          }
          in_stack_000000c0 = plVar9[2];
          in_stack_000000a0 = plVar8;
          if (DAT_08908cd0 != 0) {
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = *puVar1 | uVar18;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = *puVar2 | uVar17;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          in_stack_000000b0 = (long *)0x0;
          in_stack_000000a8 = 2;
          in_stack_000000b8 = (long *)0x0;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          lVar12 = lVar10 + (long)(int)uVar16 * 0x28;
          *(long *)(lVar12 + 0x40) = in_stack_000000c0;
          *(undefined8 *)(lVar12 + 0x28) = 2;
          *(long **)(lVar12 + 0x20) = plVar8;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x30) = 0;
          if (iVar7 != 0) {
            uVar11 = lVar10 + (long)(int)uVar16 * 0x28 + 0x20;
            puVar3 = &DAT_0873ccb0 + (uVar11 >> 0x12 & 0x7fff);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = *puVar3 | 1L << (uVar11 >> 0xc & 0x3f);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
      }
      in_stack_000000a0 = plVar8;
      uVar16 = uVar16 + 1;
    }
  }
  return lVar10;
}


