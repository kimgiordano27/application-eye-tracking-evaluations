/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$SaveAnchorUuidToLocalStorage
ENTRY_POINT: 04cfdde8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__SaveAnchorUuidToLocalStorage
               (undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  long *unaff_x22;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_02d9a2e0(param_2);
  }
  lVar4 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04cfde48;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_04cfde48:
  (*(code *)*puVar3)();
  plVar8 = *(long **)(unaff_x21 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_04cfdecc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar8,lVar4,4);
LAB_04cfdecc:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)FUN_061c5b10(*(long *)(unaff_x19 + 0x38),0);
  }
  puVar2 = PTR_DAT_06769ce0;
  lVar4 = *(long *)PTR_DAT_06769ce0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar2;
  }
  FUN_0630b320(plVar8,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0676a278 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
        (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0676a278))
       && (plVar8 = (long *)FUN_06307338(plVar8,0), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x04cfdf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x178))(plVar8,0,*(undefined8 *)(*plVar8 + 0x180));
      return;
    }
  }
  return;
}


