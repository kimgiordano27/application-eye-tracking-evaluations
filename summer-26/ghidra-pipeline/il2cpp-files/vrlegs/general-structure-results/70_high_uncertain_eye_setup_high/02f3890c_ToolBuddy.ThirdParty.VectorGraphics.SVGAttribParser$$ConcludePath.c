/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.SVGAttribParser$$ConcludePath
ENTRY_POINT: 02f3890c
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

void ToolBuddy_ThirdParty_VectorGraphics_SVGAttribParser__ConcludePath(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar7;
  long unaff_x21;
  char cStack000000000000000c;
  
  FUN_01ab69ac(PTR_DAT_03cfc1e0);
  FUN_01ab69ac(PTR_DAT_03d23a10);
  FUN_01ab69ac(PTR_DAT_03d229e8);
  *(undefined1 *)(unaff_x21 + 0xadb) = 1;
  if ((unaff_x20 & 1) != 0) {
    cStack000000000000000c = '\0';
    FUN_027e0bd8();
    puVar1 = PTR_DAT_03d229e8;
    plVar7 = *(long **)(unaff_x19 + 0x18);
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
        plVar7 = *(long **)(unaff_x19 + 0x18);
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
        (*(code *)*puVar2)(plVar7);
      }
    }
    puVar1 = PTR_DAT_03d210f8;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 != 0) {
      lVar3 = *(long *)PTR_DAT_03d210f8;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar1;
      }
      plVar7 = (long *)FUN_02f22060(lVar4,**(undefined8 **)(lVar3 + 0xb8));
      if (plVar7 != (long *)0x0) {
        if (*plVar7 != *(long *)PTR_DAT_03cfc1e0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
        if (*(int *)(*(long *)PTR_DAT_03cc4ff0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        (*(code *)plVar7[3])(plVar7[8]);
      }
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
  }
  return;
}


