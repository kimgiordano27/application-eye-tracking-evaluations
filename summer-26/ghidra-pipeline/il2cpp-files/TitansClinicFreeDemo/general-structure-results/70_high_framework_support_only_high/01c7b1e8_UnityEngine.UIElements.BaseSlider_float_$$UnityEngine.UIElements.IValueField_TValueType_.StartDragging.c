/*
FUNCTION_NAME: UnityEngine.UIElements.BaseSlider<float>$$UnityEngine.UIElements.IValueField<TValueType>.StartDragging
ENTRY_POINT: 01c7b1e8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_BaseSlider<float>__UnityEngine_UIElements_IValueField<TValueType>_StartDragging
               (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long in_x9;
  int in_w10;
  long *unaff_x19;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x23;
  
  uVar10 = *(undefined8 *)(in_x9 + 0x10);
  if (in_w10 == 0) {
    thunk_FUN_01220628(param_1);
  }
  plVar6 = (long *)FUN_01f7d8a0(uVar10,0);
  if (plVar6 != (long *)0x0) {
    bVar4 = OVRPlugin__set_tiledMultiResLevel(plVar6,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    **(byte **)(lVar9 + 0xb8) = bVar4 & 1;
    bVar4 = FUN_01f81644(plVar6,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 1) = bVar4 & 1;
    bVar4 = FUN_01f805b8(plVar6,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 2) = bVar4 & 1;
    bVar4 = FUN_01f8130c(plVar6,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 3) = bVar4 & 1;
    bVar4 = FUN_01f80ec8(plVar6,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 4) = bVar4 & 1;
    bVar4 = (**(code **)(*plVar6 + 0x568))(plVar6,*(undefined8 *)(*plVar6 + 0x570));
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 6) = bVar4 & 1;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 6) == '\0') {
      bVar3 = false;
    }
    else {
      lVar9 = FUN_013eef0c(plVar6,*(undefined8 *)PTR_DAT_027b5b38);
      bVar3 = lVar9 != 0;
    }
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(bool *)(*(long *)(lVar9 + 0xb8) + 7) = bVar3;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628(*unaff_x23);
    }
    uVar10 = FUN_01f7d8a0(uVar10,0);
    uVar10 = FUN_01f6b3f4(uVar10,0);
    bVar4 = FUN_01f801dc(uVar10,0,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 8) = bVar4 & 1;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x20);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 4) == '\0') {
      bVar3 = false;
    }
    else {
      lVar9 = *unaff_x19;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x23);
      }
      plVar7 = (long *)FUN_01f7d8a0(uVar10,0);
      if (plVar7 == (long *)0x0) goto LAB_01c7bc5c;
      iVar5 = (**(code **)(*plVar7 + 0x418))(plVar7,*(undefined8 *)(*plVar7 + 0x420));
      bVar3 = iVar5 != 1;
    }
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    puVar2 = PTR_DAT_027b5b48;
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(bool *)(*(long *)(lVar9 + 0xb8) + 5) = bVar3;
    uVar10 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar10 = FUN_01f7d8a0(uVar10,0);
    bVar4 = FUN_01f7f404(plVar6,uVar10,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    puVar2 = PTR_DAT_027b37e0;
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 9) = bVar4 & 1;
    uVar10 = FUN_01f7d8a0(*(undefined8 *)puVar2,0);
    bVar4 = FUN_01f7f404(plVar6,uVar10,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 10) = bVar4 & 1;
    bVar4 = FUN_0247b03c(plVar6,0);
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 0xb) = bVar4 & 1;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *unaff_x19;
    bVar4 = **(byte **)(lVar9 + 0xb8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0122e748(lVar11);
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 0xc) = bVar4 ^ 1;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 1) == '\0') {
      lVar9 = *unaff_x19;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
      lVar9 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      bVar3 = *(char *)(*(long *)(lVar9 + 0xb8) + 10) != '\0';
    }
    else {
      bVar3 = true;
    }
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(bool *)(*(long *)(lVar9 + 0xb8) + 0xd) = bVar3;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 3) == '\0') {
      lVar9 = *unaff_x19;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      lVar9 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar9 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      bVar3 = *(char *)(*(long *)(lVar9 + 0xb8) + 2) != '\0';
    }
    else {
      bVar3 = true;
    }
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(bool *)(*(long *)(lVar9 + 0xb8) + 0xe) = bVar3;
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *unaff_x19;
    bVar4 = *(byte *)(*(long *)(lVar9 + 0xb8) + 0xc);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0122e748(lVar11);
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x58);
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    lVar11 = *unaff_x19;
    bVar1 = *(byte *)(*(long *)(lVar9 + 0xb8) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0122e748(lVar11);
    }
    lVar9 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 0xc) = bVar1 | bVar4;
    uVar8 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
    if ((uVar8 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
      uVar12 = *(undefined8 *)PTR_DAT_027b5b40;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x23);
      }
      uVar12 = FUN_01f7d8a0(uVar12,0);
      bVar4 = FUN_01f7f404(uVar10,uVar12,0);
    }
    lVar9 = *unaff_x19;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    puVar2 = PTR_DAT_027b4018;
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0122e748();
    }
    *(byte *)(*(long *)(lVar9 + 0xb8) + 0x10) = bVar4 & 1;
    uVar10 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar7 = (long *)FUN_01f7d8a0(uVar10,0);
    if (plVar7 != (long *)0x0) {
      bVar4 = (**(code **)(*plVar7 + 0x288))(plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x290));
      lVar9 = *unaff_x19;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0122e748();
      }
      *(byte *)(*(long *)(lVar9 + 0xb8) + 0xf) = bVar4 & 1;
      return;
    }
  }
LAB_01c7bc5c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


