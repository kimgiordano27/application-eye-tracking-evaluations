/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 06afb4d0
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


void OVRPlugin_OVRP_1_43_0___cctor(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w8;
  uint in_w9;
  long lVar9;
  undefined8 in_x10;
  long lVar10;
  long unaff_x19;
  ulong *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  long unaff_x28;
  long *plVar11;
  undefined8 uStack00000000000000a8;
  ulong uStack00000000000000b8;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  uStack00000000000000b8 = param_2._8_8_;
  plVar11 = param_2._0_8_;
  uStack00000000000000a8 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  do {
    lVar9 = (long)(int)in_w9;
    lVar10 = unaff_x19 + lVar9 * 0x28;
    *(undefined8 *)(lVar10 + 0x40) = in_x10;
    *(undefined8 *)(lVar10 + 0x28) = uStack00000000000000a8;
    *(undefined8 *)(lVar10 + 0x20) = uVar7;
    *(ulong *)(lVar10 + 0x38) = uStack00000000000000b8;
    *(long **)(lVar10 + 0x30) = plVar11;
    in_w9 = unaff_w24;
    if (in_w8 != 0) {
      uVar6 = unaff_x19 + lVar9 * 0x28 + 0x20;
      puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      while( true ) {
        in_w9 = in_w9 + 1;
        uVar6 = FUN_0609d050(&stack0x000000d0,DAT_083e9648);
        plVar11 = in_stack_000000e8;
        uVar7 = in_stack_000000e0;
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        lVar9 = FUN_0339a700(*in_stack_000000e8 + 0x20);
        uVar8 = DAT_083bccc0;
        if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar10 = FUN_0683eca4(uVar8,0);
        iVar5 = DAT_08908cd0;
        if (lVar10 != lVar9) break;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(DAT_083cda98 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar11);
        }
        uVar2 = *(uint *)(plVar11 + 2);
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
        uStack00000000000000b8 = (ulong)uVar2;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar9 = unaff_x19 + (long)(int)in_w9 * 0x28;
        *(undefined8 *)(lVar9 + 0x40) = 0;
        *(undefined8 *)(lVar9 + 0x28) = 1;
        *(undefined8 *)(lVar9 + 0x20) = uVar7;
        *(ulong *)(lVar9 + 0x38) = uStack00000000000000b8;
        *(undefined8 *)(lVar9 + 0x30) = 0;
        if (iVar5 != 0) {
          uVar6 = unaff_x19 + (long)(int)in_w9 * 0x28 + 0x20;
          puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      lVar9 = FUN_0339a700(*plVar11 + 0x20);
      uVar8 = DAT_083bd530;
      if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar10 = FUN_0683eca4(uVar8,0);
      in_w8 = DAT_08908cd0;
      if (lVar10 == lVar9) break;
      lVar9 = FUN_0339a700(*plVar11 + 0x20);
      uVar8 = DAT_083bc5a0;
      if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar10 = FUN_0683eca4(uVar8,0);
      iVar5 = DAT_08908cd0;
      if (lVar10 != lVar9) {
        FUN_0335b6c8(&DAT_083cb470,1);
        uVar7 = FUN_03398a84();
        uVar8 = FUN_0335b6c8(&DAT_08442bc0,1);
        FUN_06869f9c(uVar7,uVar8,0);
        uVar8 = FUN_0335b6c8(&DAT_084049e0,1);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar7,uVar8);
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(DAT_083ca8e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec(plVar11);
      }
      lVar9 = plVar11[2];
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
      if (*(uint *)(unaff_x19 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar10 = unaff_x19 + (long)(int)in_w9 * 0x28;
      *(long *)(lVar10 + 0x40) = lVar9;
      *(undefined8 *)(lVar10 + 0x28) = 2;
      *(undefined8 *)(lVar10 + 0x20) = uVar7;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      if (iVar5 != 0) {
        uVar6 = unaff_x19 + (long)(int)in_w9 * 0x28 + 0x20;
        puVar1 = &DAT_0873ccb0 + (uVar6 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    if (*plVar11 != DAT_083d16d8) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(plVar11);
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
    uStack00000000000000a8 = 0;
    uStack00000000000000b8 = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    in_x10 = 0;
    unaff_w24 = in_w9;
  } while( true );
}


