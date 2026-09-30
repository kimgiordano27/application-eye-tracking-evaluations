/*
FUNCTION_NAME: FUN_02f388d4
ENTRY_POINT: 02f388d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f38b44) */

void FUN_02f388d4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  char local_24 [4];
  
  if ((DAT_0412aadb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d210f8);
    FUN_01ab69ac(PTR_DAT_03cc4ff0);
    FUN_01ab69ac(PTR_DAT_03cfc1e0);
    FUN_01ab69ac(PTR_DAT_03d23a10);
    FUN_01ab69ac(PTR_DAT_03d229e8);
    DAT_0412aadb = 1;
  }
  if ((param_2 & 1) != 0) {
    local_24[0] = '\0';
    FUN_027e0bd8(param_1,local_24,0);
    puVar1 = PTR_DAT_03d229e8;
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d229e8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02f389ac;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03d229e8,0);
LAB_02f389ac:
      lVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar4 != 0) {
        plVar7 = *(long **)(param_1 + 0x18);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02f38a10;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
LAB_02f38a10:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d23a10) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_02f38a7c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03d23a10,1);
LAB_02f38a7c:
        (*(code *)*puVar2)(plVar7,param_1,puVar2[1]);
      }
    }
    puVar1 = PTR_DAT_03d210f8;
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      lVar3 = *(long *)PTR_DAT_03d210f8;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar1;
      }
      plVar7 = (long *)FUN_02f22060(lVar4,**(undefined8 **)(lVar3 + 0xb8));
      puVar1 = PTR_DAT_03cc4ff0;
      if (plVar7 != (long *)0x0) {
        if (*plVar7 != *(long *)PTR_DAT_03cfc1e0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
        lVar4 = *(long *)PTR_DAT_03cc4ff0;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        (*(code *)plVar7[3])(plVar7[8],param_1,**(undefined8 **)(lVar4 + 0xb8),plVar7[5]);
      }
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
  }
  return;
}


