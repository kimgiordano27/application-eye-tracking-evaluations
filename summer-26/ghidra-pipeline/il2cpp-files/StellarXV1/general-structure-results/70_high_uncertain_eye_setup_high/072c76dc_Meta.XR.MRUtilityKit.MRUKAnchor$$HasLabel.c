/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$HasLabel
ENTRY_POINT: 072c76dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__HasLabel(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  iVar1 = FUN_0897454c(0);
  if (iVar1 == 0) {
    plVar6 = (long *)unaff_x19[4];
    lVar7 = *(long *)PTR_DAT_09288f08;
    lVar3 = *(long *)(lVar7 + 0x38);
    if (lVar3 == 0) {
      FUN_040b1b28(lVar7);
      lVar3 = *(long *)(lVar7 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (plVar6 == (long *)0x0) goto LAB_072c784c;
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    uVar9 = *(undefined8 *)PTR_DAT_092c36a0;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092b9200) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 0x11) * 0x10 + 0x138);
          goto LAB_072c77c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092b9200,0x11);
LAB_072c77c0:
    (*(code *)*puVar2)(plVar6,uVar9,uVar8,puVar2[1]);
  }
  lVar3 = (**(code **)(*unaff_x19 + 0x198))();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  uVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
  FUN_0678a1dc();
  if (lVar3 != 0) {
    FUN_0678cd88(lVar3,uVar8,*(undefined8 *)PTR_DAT_092c2a10);
    return;
  }
LAB_072c784c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


