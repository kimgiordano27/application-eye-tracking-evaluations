/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.SVGDocument$$rect
ENTRY_POINT: 02f304b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f306ac) */

void ToolBuddy_ThirdParty_VectorGraphics_SVGDocument__rect(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong unaff_x20;
  long *plVar7;
  long unaff_x21;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4ff0);
    FUN_01ab69ac(PTR_DAT_03cfc1e0);
    FUN_01ab69ac(PTR_DAT_03d23a10);
    FUN_01ab69ac(PTR_DAT_03d229e8);
    FUN_01ab69ac(PTR_DAT_03d14bc8);
    *(undefined1 *)(unaff_x21 + 0xa77) = 1;
  }
  if ((unaff_x20 & 1) != 0) {
    cStack000000000000000c = '\0';
    FUN_027e0bd8(param_2,&stack0x0000000c,0);
    plVar7 = *(long **)(param_2 + 0x10);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d229e8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02f30578;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03d229e8,0);
LAB_02f30578:
      plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d23a10) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_02f305e4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03d23a10,1);
LAB_02f305e4:
        (*(code *)*puVar2)(plVar7,param_2,puVar2[1]);
      }
    }
    puVar1 = PTR_DAT_03d14bc8;
    lVar4 = *(long *)(param_2 + 0x18);
    if (lVar4 != 0) {
      lVar3 = *(long *)PTR_DAT_03d14bc8;
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
        (*(code *)plVar7[3])(plVar7[8],param_2,**(undefined8 **)(lVar4 + 0xb8),plVar7[5]);
      }
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_2,0);
    }
  }
  return;
}


