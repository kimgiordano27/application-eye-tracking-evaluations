/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$AlignPrefabPivot
ENTRY_POINT: 04c323a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__AlignPrefabPivot(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065c8580);
  uVar4 = thunk_FUN_02c72dcc(uVar3,*(undefined8 *)*param_1);
  if ((uVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *param_1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_0620d888,0);
  }
  uVar3 = *param_1;
  __cxa_end_catch();
  lVar5 = thunk_FUN_02c7737c(PTR_DAT_065dfdc0);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar5 = thunk_FUN_02c7737c(PTR_DAT_065dfdc0);
  plVar10 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  lVar5 = thunk_FUN_02c7737c(PTR_DAT_065ca230);
  lVar8 = *(long *)(lVar5 + 0x38);
  if (lVar8 == 0) {
    FUN_02ce09d4(lVar5);
    lVar8 = *(long *)(lVar5 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02ce0978();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02ce0978();
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
  uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e63c8);
  lVar8 = *plVar10;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto code_r0x04c324cc;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,lVar5,6);
code_r0x04c324cc:
  (*(code *)*puVar7)(plVar10,uVar3,uVar6,uVar11,puVar7[1]);
  if (unaff_x20 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
    thunk_FUN_02c7737c(PTR_DAT_065e6310);
    lVar5 = thunk_FUN_02cea894();
    FUN_04f7383c(lVar5,0);
    *(undefined4 *)(lVar5 + 0x10) = 4;
    *(undefined8 *)(lVar5 + 0x18) = uVar6;
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    uVar3 = FUN_04e59944(uVar3,0);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    lVar8 = *(long *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x70) = lVar5;
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),lVar5,*(undefined8 *)(lVar8 + 0x28))
      ;
      lVar5 = *(long *)(unaff_x20 + 0x70);
    }
    puVar1 = PTR_DAT_065e60f8;
    *unaff_x19 = 0xfffffffe;
    puVar2 = PTR_DAT_065e62f0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


