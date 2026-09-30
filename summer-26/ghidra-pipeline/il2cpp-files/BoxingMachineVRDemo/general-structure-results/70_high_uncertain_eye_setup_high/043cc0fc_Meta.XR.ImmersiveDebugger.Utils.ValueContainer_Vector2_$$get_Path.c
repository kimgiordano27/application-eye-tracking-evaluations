/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$get_Path
ENTRY_POINT: 043cc0fc
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


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__get_Path(ulong param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x19;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02d9a2e0();
  }
  if (*(char *)(*(long *)(param_2 + 0xb8) + 3) == '\0') {
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar9 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    bVar3 = *(char *)(*(long *)(lVar5 + 0xb8) + 2) != '\0';
  }
  else {
    bVar3 = true;
  }
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  *(bool *)(*(long *)(lVar5 + 0xb8) + 0xe) = bVar3;
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar9 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x50);
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar9 = *unaff_x19;
  bVar4 = *(byte *)(*(long *)(lVar5 + 0xb8) + 0xc);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x58);
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar9 = *unaff_x19;
  bVar1 = *(byte *)(*(long *)(lVar5 + 0xb8) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  lVar5 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0xc) = bVar1 | bVar4;
  uVar6 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar6 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    uVar7 = (**(code **)(*unaff_x20 + 0x448))();
    uVar10 = *(undefined8 *)PTR_DAT_0676b190;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar10 = FUN_05015c2c(uVar10,0);
    bVar4 = FUN_0501ed54(uVar7,uVar10,0);
  }
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  puVar2 = PTR_DAT_06767a00;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  *(byte *)(*(long *)(lVar5 + 0xb8) + 0x10) = bVar4 & 1;
  uVar7 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar8 = (long *)FUN_05015c2c(uVar7,0);
  if (plVar8 != (long *)0x0) {
    bVar4 = (**(code **)(*plVar8 + 0x298))();
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    *(byte *)(*(long *)(lVar5 + 0xb8) + 0xf) = bVar4 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


