/*
FUNCTION_NAME: OVRPlugin.OVRP_1_42_0$$.cctor
ENTRY_POINT: 06afb40c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_42_0___cctor(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int in_w8;
  long lVar11;
  long unaff_x19;
  ulong *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  long unaff_x28;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar11 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
    *(undefined8 *)(lVar11 + 0x40) = in_stack_000000c0;
    *(undefined8 *)(lVar11 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(lVar11 + 0x20) = in_stack_000000a0;
    *(ulong *)(lVar11 + 0x38) = in_stack_000000b8;
    *(undefined8 *)(lVar11 + 0x30) = in_stack_000000b0;
    if (in_w8 != 0) {
      uVar7 = unaff_x19 + (long)(int)unaff_w24 * 0x28 + 0x20;
      puVar1 = &DAT_0873ccb0 + (uVar7 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      uVar7 = FUN_0609d050(&stack0x000000d0,DAT_083e9648);
      plVar6 = in_stack_000000e8;
      in_stack_000000a0 = in_stack_000000e0;
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar11 = FUN_0339a700(*in_stack_000000e8 + 0x20);
      uVar9 = DAT_083bccc0;
      if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar8 = FUN_0683eca4(uVar9,0);
      in_w8 = DAT_08908cd0;
      if (lVar8 == lVar11) break;
      lVar11 = FUN_0339a700(*plVar6 + 0x20);
      uVar9 = DAT_083bd530;
      if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar8 = FUN_0683eca4(uVar9,0);
      iVar5 = DAT_08908cd0;
      if (lVar8 == lVar11) {
        if (*plVar6 != DAT_083d16d8) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar6);
        }
        if (DAT_08908cd0 != 0) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
            if (bVar4) {
              *unaff_x27 = *unaff_x27 | unaff_x26;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar4) {
              *unaff_x23 = *unaff_x23 | unaff_x25;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar11 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined8 *)(lVar11 + 0x20) = in_stack_000000a0;
        *(undefined8 *)(lVar11 + 0x38) = 0;
        *(long **)(lVar11 + 0x30) = plVar6;
        if (iVar5 != 0) {
          uVar7 = unaff_x19 + (long)(int)unaff_w24 * 0x28 + 0x20;
          puVar1 = &DAT_0873ccb0 + (uVar7 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        lVar11 = FUN_0339a700(*plVar6 + 0x20);
        uVar9 = DAT_083bc5a0;
        if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar8 = FUN_0683eca4(uVar9,0);
        iVar5 = DAT_08908cd0;
        if (lVar8 != lVar11) {
          FUN_0335b6c8(&DAT_083cb470,1);
          uVar9 = FUN_03398a84();
          uVar10 = FUN_0335b6c8(&DAT_08442bc0,1);
          FUN_06869f9c(uVar9,uVar10,0);
          uVar10 = FUN_0335b6c8(&DAT_084049e0,1);
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar9,uVar10);
        }
        if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_083ca8e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar6);
        }
        lVar11 = plVar6[2];
        if (DAT_08908cd0 != 0) {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
            if (bVar4) {
              *unaff_x27 = *unaff_x27 | unaff_x26;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
            if (bVar4) {
              *unaff_x23 = *unaff_x23 | unaff_x25;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(long *)(lVar8 + 0x40) = lVar11;
        *(undefined8 *)(lVar8 + 0x28) = 2;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000a0;
        *(undefined8 *)(lVar8 + 0x38) = 0;
        *(undefined8 *)(lVar8 + 0x30) = 0;
        if (iVar5 != 0) {
          uVar7 = unaff_x19 + (long)(int)unaff_w24 * 0x28 + 0x20;
          puVar1 = &DAT_0873ccb0 + (uVar7 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_083cda98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(plVar6);
    }
    uVar2 = *(uint *)(plVar6 + 2);
    if (DAT_08908cd0 != 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
        if (bVar4) {
          *unaff_x27 = *unaff_x27 | unaff_x26;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
        if (bVar4) {
          *unaff_x23 = *unaff_x23 | unaff_x25;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    in_stack_000000b8 = (ulong)uVar2;
    in_stack_000000b0 = 0;
    in_stack_000000a8 = 1;
    in_stack_000000c0 = 0;
  } while( true );
}


