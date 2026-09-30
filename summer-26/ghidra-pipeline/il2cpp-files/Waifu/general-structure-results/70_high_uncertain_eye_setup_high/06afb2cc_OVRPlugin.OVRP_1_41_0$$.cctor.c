/*
FUNCTION_NAME: OVRPlugin.OVRP_1_41_0$$.cctor
ENTRY_POINT: 06afb2cc
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


void OVRPlugin_OVRP_1_41_0___cctor(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w8;
  uint in_w9;
  ulong in_x10;
  long lVar10;
  long unaff_x19;
  ulong *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  long unaff_x28;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *plStack00000000000000b0;
  ulong in_stack_000000b8;
  long lStack00000000000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
    if (bVar3) {
      *unaff_x27 = in_x10 | unaff_x26;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,in_w9);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
        if (bVar3) {
          *unaff_x23 = *unaff_x23 | unaff_x25;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      while( true ) {
        plStack00000000000000b0 = (long *)0x0;
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
        lStack00000000000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar10 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar10 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar10 + 0x38) = in_stack_000000b8;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        if (in_w8 != 0) {
          uVar6 = unaff_x19 + (long)(int)unaff_w24 * 0x28 + 0x20;
          puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        while( true ) {
          unaff_w24 = unaff_w24 + 1;
          uVar6 = FUN_0609d050(&stack0x000000d0,DAT_083e9648);
          plVar5 = in_stack_000000e8;
          in_stack_000000a0 = in_stack_000000e0;
          if ((uVar6 & 1) == 0) {
            return;
          }
          if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          lVar10 = FUN_0339a700(*in_stack_000000e8 + 0x20);
          uVar8 = DAT_083bccc0;
          if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          lVar7 = FUN_0683eca4(uVar8,0);
          if (lVar7 == lVar10) break;
          lVar10 = FUN_0339a700(*plVar5 + 0x20);
          uVar8 = DAT_083bd530;
          if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          lVar7 = FUN_0683eca4(uVar8,0);
          iVar4 = DAT_08908cd0;
          if (lVar7 == lVar10) {
            lStack00000000000000c0 = 0;
            plStack00000000000000b0 = (long *)0x0;
            if (*plVar5 != DAT_083d16d8) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1fec(plVar5);
            }
            if (DAT_08908cd0 != 0) {
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
                if (bVar3) {
                  *unaff_x27 = *unaff_x27 | unaff_x26;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
                if (bVar3) {
                  *unaff_x23 = *unaff_x23 | unaff_x25;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plStack00000000000000b0 = plVar5;
            lStack00000000000000c0 = 0;
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            lVar10 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
            *(undefined8 *)(lVar10 + 0x40) = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x20) = in_stack_000000a0;
            *(undefined8 *)(lVar10 + 0x38) = 0;
            *(long **)(lVar10 + 0x30) = plVar5;
            if (iVar4 != 0) {
              uVar6 = unaff_x19 + (long)(int)unaff_w24 * 0x28 + 0x20;
              puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          else {
            lVar10 = FUN_0339a700(*plVar5 + 0x20);
            uVar8 = DAT_083bc5a0;
            if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            lVar7 = FUN_0683eca4(uVar8,0);
            iVar4 = DAT_08908cd0;
            if (lVar7 != lVar10) {
              FUN_0335b6c8(&DAT_083cb470,1);
              uVar8 = FUN_03398a84();
              uVar9 = FUN_0335b6c8(&DAT_08442bc0,1);
              FUN_06869f9c(uVar8,uVar9,0);
              uVar9 = FUN_0335b6c8(&DAT_084049e0,1);
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar8,uVar9);
            }
            lStack00000000000000c0 = 0;
            plStack00000000000000b0 = (long *)0x0;
            if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_083ca8e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1fec(plVar5);
            }
            lStack00000000000000c0 = plVar5[2];
            if (DAT_08908cd0 != 0) {
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(unaff_x27,0x10);
                if (bVar3) {
                  *unaff_x27 = *unaff_x27 | unaff_x26;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
                if (bVar3) {
                  *unaff_x23 = *unaff_x23 | unaff_x25;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plStack00000000000000b0 = (long *)0x0;
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            lVar10 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
            *(long *)(lVar10 + 0x40) = lStack00000000000000c0;
            *(undefined8 *)(lVar10 + 0x28) = 2;
            *(undefined8 *)(lVar10 + 0x20) = in_stack_000000a0;
            *(undefined8 *)(lVar10 + 0x38) = 0;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            if (iVar4 != 0) {
              uVar6 = unaff_x19 + (long)(int)unaff_w24 * 0x28 + 0x20;
              puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
        }
        lStack00000000000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000b8 = 0;
        plStack00000000000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_083cda98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar5);
        }
        in_w9 = *(uint *)(plVar5 + 2);
        in_w8 = DAT_08908cd0;
        if (DAT_08908cd0 != 0) break;
        in_stack_000000a8._4_4_ = 0;
        in_stack_000000b8 = (ulong)in_w9;
      }
    }
    in_x10 = *unaff_x27;
  } while( true );
}


