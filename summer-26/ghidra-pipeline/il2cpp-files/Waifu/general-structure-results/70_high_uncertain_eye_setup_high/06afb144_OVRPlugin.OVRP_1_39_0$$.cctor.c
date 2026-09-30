/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 06afb144
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


void OVRPlugin_OVRP_1_39_0___cctor(undefined8 param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  ulong *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong *unaff_x27;
  long unaff_x28;
  ulong uStack00000000000000b8;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  
  uStack00000000000000f0 = param_1;
  do {
    uVar7 = FUN_0609d050(&stack0x000000d0,DAT_083e9648);
    plVar6 = in_stack_000000e8;
    uVar10 = in_stack_000000e0;
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06afb108 with catch @ 06afb16c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06afb114 with catch @ 06afb170
                        */
    lVar8 = FUN_0339a700(*in_stack_000000e8 + 0x20);
    uVar11 = DAT_083bccc0;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06afb0e8 with catch @ 06afb174
                        */
                    /* try { // try from 06afb184 to 06bfb187 has its CatchHandler @ 06afb19c */
                    /* try { // try from 06afb188 to 06bfb1a3 has its CatchHandler @ 06afb010 */
    if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar9 = FUN_0683eca4(uVar11,0);
    iVar5 = DAT_08908cd0;
                    /* catch() { ... } // from try @ 06afb184 with catch @ 06afb19c */
    if (lVar9 == lVar8) {
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
      uStack00000000000000b8 = (ulong)uVar2;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar8 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x28) = 1;
      *(undefined8 *)(lVar8 + 0x20) = uVar10;
      *(ulong *)(lVar8 + 0x38) = uStack00000000000000b8;
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
    else {
                    /* try { // try from 06afb1a4 to 06bfb1ab has its CatchHandler @ 06afb1ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06afb1a4 with catch @ 06afb1ac
                        */
      lVar8 = FUN_0339a700(*plVar6 + 0x20);
      uVar11 = DAT_083bd530;
      if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar9 = FUN_0683eca4(uVar11,0);
      iVar5 = DAT_08908cd0;
      if (lVar9 == lVar8) {
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
        lVar8 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x20) = uVar10;
        *(undefined8 *)(lVar8 + 0x38) = 0;
        *(long **)(lVar8 + 0x30) = plVar6;
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
        lVar8 = FUN_0339a700(*plVar6 + 0x20);
        uVar11 = DAT_083bc5a0;
        if (*(int *)(*(long *)(unaff_x28 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar9 = FUN_0683eca4(uVar11,0);
        iVar5 = DAT_08908cd0;
        if (lVar9 != lVar8) {
          FUN_0335b6c8(&DAT_083cb470,1);
          uVar10 = FUN_03398a84();
          uVar11 = FUN_0335b6c8(&DAT_08442bc0,1);
          FUN_06869f9c(uVar10,uVar11,0);
          uVar11 = FUN_0335b6c8(&DAT_084049e0,1);
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar10,uVar11);
        }
        if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_083ca8e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar6);
        }
        lVar8 = plVar6[2];
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
        lVar9 = unaff_x19 + (long)(int)unaff_w24 * 0x28;
        *(long *)(lVar9 + 0x40) = lVar8;
        *(undefined8 *)(lVar9 + 0x28) = 2;
        *(undefined8 *)(lVar9 + 0x20) = uVar10;
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *(undefined8 *)(lVar9 + 0x30) = 0;
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
    unaff_w24 = unaff_w24 + 1;
  } while( true );
}


