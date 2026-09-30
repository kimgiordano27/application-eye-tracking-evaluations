/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$GetValue
ENTRY_POINT: 043cc1d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__GetValue(void)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x23;
  
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar8 = *unaff_x19;
  bVar3 = *(byte *)(*(long *)(lVar4 + 0xb8) + 0xc);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x58);
  lVar4 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar8 = *unaff_x19;
  bVar1 = *(byte *)(*(long *)(lVar4 + 0xb8) + 8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
  }
  lVar4 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  *(byte *)(*(long *)(lVar4 + 0xb8) + 0xc) = bVar1 | bVar3;
  uVar5 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar5 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    uVar6 = (**(code **)(*unaff_x20 + 0x448))();
    uVar9 = *(undefined8 *)PTR_DAT_0676b190;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar9 = FUN_05015c2c(uVar9,0);
    bVar3 = FUN_0501ed54(uVar6,uVar9,0);
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  puVar2 = PTR_DAT_06767a00;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  *(byte *)(*(long *)(lVar4 + 0xb8) + 0x10) = bVar3 & 1;
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar7 = (long *)FUN_05015c2c(uVar6,0);
  if (plVar7 != (long *)0x0) {
    bVar3 = (**(code **)(*plVar7 + 0x298))();
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    *(byte *)(*(long *)(lVar4 + 0xb8) + 0xf) = bVar3 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


