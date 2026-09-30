/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserIPD
ENTRY_POINT: 06039ecc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_SetUserIPD(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  uint uVar8;
  long unaff_x22;
  long *plVar9;
  
  lVar2 = *unaff_x20;
  plVar9 = *(long **)(unaff_x22 + 0xe38);
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar9) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_06039f24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_06039f24:
  (*(code *)*puVar1)();
  lVar2 = *(long *)(unaff_x19 + 0x80);
  if ((lVar2 != 0) && (plVar7 = *(long **)(unaff_x19 + 0x90), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f5db0) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06039fa0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_075f5db0,1);
LAB_06039fa0:
    (*(code *)*puVar1)(plVar7,lVar2 + 0x18,puVar1[1]);
    uVar8 = 0;
    while (lVar2 = *(long *)(unaff_x19 + 0xa0), lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar3 = *(long *)(unaff_x19 + 0x80);
      if ((lVar3 == 0) ||
         (plVar7 = *(long **)(lVar2 + (long)(int)uVar8 * 8 + 0x20), plVar7 == (long *)0x0)) break;
      lVar4 = *plVar7;
      lVar2 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0603a02c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0322c1e8(plVar7,lVar2,1);
LAB_0603a02c:
      (*(code *)*puVar1)(plVar7,lVar3 + 0x30,puVar1[1]);
      uVar8 = uVar8 + 1;
      if (uVar8 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


