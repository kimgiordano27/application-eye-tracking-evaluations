/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 05ff1010
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_chromatic
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  
  if ((DAT_07a46867 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f6b70);
    FUN_031f20f4(PTR_DAT_075dc570);
    DAT_07a46867 = 1;
  }
  puVar1 = PTR_DAT_075f6b70;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (plVar9 = *(long **)(*(long *)(param_4 + 0x20) + 0x128), plVar9 != (long *)0x0)) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f6b70) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_05ff10b0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)PTR_DAT_075f6b70,0);
FUN_05ff10b0:
    uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = (long *)(param_4 + 0x30);
    uVar6 = (ulong)uVar2;
    if ((*plVar9 == 0) || (uVar2 != *(uint *)(*plVar9 + 0x18))) {
      uVar4 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075dc570,uVar6);
      *(undefined8 *)(param_4 + 0x30) = uVar4;
      thunk_FUN_0329bf60(plVar9,uVar4);
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_05ff11e8;
      FUN_06dff2f4(*(long *)(param_4 + 0x28),uVar6,0);
    }
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (plVar11 = *(long **)(*(long *)(param_4 + 0x20) + 0x128), plVar11 == (long *)0x0))
        goto LAB_05ff11e8;
        lVar5 = *plVar11;
        lVar12 = *(long *)(param_4 + 0x30);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05ff1188;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)puVar1,1);
LAB_05ff1188:
        uVar13 = (*(code *)*puVar3)(plVar11,uVar10 & 0xffffffff,puVar3[1]);
        if (lVar12 == 0) goto LAB_05ff11e8;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar12 = lVar12 + uVar10 * 0xc;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar12 + 0x20) = uVar13;
        *(undefined4 *)(lVar12 + 0x24) = param_2;
        *(undefined4 *)(lVar12 + 0x28) = param_3;
      } while (uVar10 != uVar6);
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      FUN_06e01370(*(long *)(param_4 + 0x28),*plVar9,0);
      return;
    }
  }
LAB_05ff11e8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


