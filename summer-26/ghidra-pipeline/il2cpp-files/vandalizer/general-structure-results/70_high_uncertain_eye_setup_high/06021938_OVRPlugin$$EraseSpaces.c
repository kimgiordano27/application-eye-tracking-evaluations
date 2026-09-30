/*
FUNCTION_NAME: OVRPlugin$$EraseSpaces
ENTRY_POINT: 06021938
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__EraseSpaces(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  float fVar8;
  float fVar9;
  float unaff_s10;
  
  FUN_031f20f4(PTR_DAT_075f2fc8);
  *(undefined1 *)(unaff_x20 + 0xb21) = 1;
  puVar1 = PTR_DAT_075f2fc8;
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f2fc8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_060219b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_075f2fc8,9);
LAB_060219b8:
    uVar5 = (*(code *)*puVar2)(plVar7,1);
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_06021b10;
      lVar4 = *plVar7;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06021ad8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar7,lVar3,4);
LAB_06021ad8:
      fVar8 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      fVar8 = unaff_s10 * fVar8;
    }
    else {
      fVar8 = (float)FUN_06e464bc(0,0,0,0,0);
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_06021b10;
      lVar4 = *plVar7;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_06021aa0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar7,lVar3,4);
LAB_06021aa0:
      fVar9 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      fVar8 = fVar8 * fVar9 + 0.0;
    }
    return fVar8;
  }
LAB_06021b10:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


