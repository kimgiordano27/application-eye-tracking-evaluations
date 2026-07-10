/*
FUNCTION_NAME: UnityEngine.UIElements.DynamicHeightVirtualizationController<object>$$Resize
ENTRY_POINT: 026ffb18
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__Resize
               (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],float param_4,
               long *param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 local_48;
  
  if ((DAT_03ef26e2 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify___03cb8d78
                );
    FUN_01c5c92c(PTR_System_DateTime_TypeInfo_03cb64f8);
    DAT_03ef26e2 = 1;
  }
  local_48 = 0;
  if (param_5 == (long *)0x0) {
LAB_026fff78:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  fVar10 = (float)(**(code **)(*param_5 + 0x208))(param_5,*(undefined8 *)(*param_5 + 0x210));
  fVar11 = (float)UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__get_contentHeight
                            (param_5,*(undefined8 *)
                                      (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb0));
  if (fVar10 <= fVar11) {
    fVar10 = fVar11;
  }
  UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__set_contentHeight
            (fVar10,param_5,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xa8));
  if ((param_5[2] == 0) || (lVar4 = *(long *)(param_5[2] + 0x500), lVar4 == 0)) goto LAB_026fff78;
  UnityEngine_UIElements_VisualElement__get_layout(lVar4,0);
  fVar11 = (float)UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__get_contentHeight
                            (param_5,*(undefined8 *)
                                      (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb0));
  fVar10 = 0.0;
  if (0.0 <= fVar11 - param_4) {
    fVar10 = fVar11 - param_4;
  }
  lVar4 = UnityEngine_UIElements_VerticalVirtualizationController<object>__get_serializedData
                    (param_5,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
  if (lVar4 == 0) goto LAB_026fff78;
  fVar11 = *(float *)(lVar4 + 0x14);
  if (fVar10 <= *(float *)(lVar4 + 0x14)) {
    fVar11 = fVar10;
  }
  if (((param_5[2] == 0) || (lVar4 = *(long *)(param_5[2] + 0x510), lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x4b0), lVar4 == 0)) goto LAB_026fff78;
  UnityEngine_UIElements_BaseSlider<float>__SetHighValueWithoutNotify
            (fVar10,lVar4,
             *(undefined8 *)
              PTR_Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify___03cb8d78
            );
  if (((param_5[2] == 0) || (lVar4 = *(long *)(param_5[2] + 0x510), lVar4 == 0)) ||
     (plVar5 = *(long **)(lVar4 + 0x4b0), plVar5 == (long *)0x0)) goto LAB_026fff78;
  (**(code **)(*plVar5 + 0xae8))(fVar11,plVar5,*(undefined8 *)(*plVar5 + 0xaf0));
  lVar4 = UnityEngine_UIElements_VerticalVirtualizationController<object>__get_serializedData
                    (param_5,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
  if (((lVar4 == 0) || (param_5[2] == 0)) || (lVar6 = *(long *)(param_5[2] + 0x510), lVar6 == 0))
  goto LAB_026fff78;
  uVar12 = UnityEngine_UIElements_Scroller__get_value(lVar6,0);
  lVar6 = param_5[4];
  *(undefined4 *)(lVar4 + 0x14) = uVar12;
  if (lVar6 == 0) goto LAB_026fff78;
  fVar10 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__ResolveItemHeight
                            (param_2,lVar6,0);
  fVar11 = (float)UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__get_defaultExpectedHeight
                            (param_5);
  if (DAT_03ef26f6 == '\0') {
    FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
    DAT_03ef26f6 = '\x01';
  }
  if (*(int *)(*(long *)PTR_System_Math_TypeInfo_03cb5ea0 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  iVar1 = -0x80000000;
  if ((float)(int)(fVar10 / fVar11) != INFINITY) {
    iVar1 = (int)(fVar10 / fVar11);
  }
  if (iVar1 < 1) {
    return;
  }
  iVar3 = UnityEngine_UIElements_VerticalVirtualizationController<object>__get_itemsCount
                    (param_5,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xc0));
  iVar9 = iVar1 + 2;
  if (iVar3 <= iVar1 + 2) {
    iVar9 = iVar3;
  }
  if (param_5[5] == 0) goto LAB_026fff78;
  iVar1 = *(int *)(param_5[5] + 0x18);
  iVar3 = iVar1 - iVar9;
  if (iVar3 != 0) {
    if (iVar1 < iVar9) {
      iVar9 = iVar9 - iVar1;
      iVar3 = (**(code **)(*param_5 + 0x178))(param_5,*(undefined8 *)(*param_5 + 0x180));
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*param_5 + 0x178))(param_5,*(undefined8 *)(*param_5 + 0x180));
      }
      if (0 < iVar9) {
        iVar3 = iVar3 + iVar1;
        do {
          uVar7 = (**(code **)(*param_5 + 0x2a8))
                            (param_5,0xffffffff,0xffffffff,*(undefined8 *)(*param_5 + 0x2b0));
          uVar8 = UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__IsIndexOutOfBounds
                            (param_5,iVar3,
                             *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x48));
          if ((uVar8 & 1) == 0) {
            UnityEngine_UIElements_VerticalVirtualizationController<object>__Setup
                      (param_5,uVar7,iVar3,
                       *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x100));
            UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__MarkWaitingForLayout
                      (param_5,uVar7);
          }
          else {
            if (param_5[5] == 0) goto LAB_026fff78;
            UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__HideItem
                      (param_5,*(int *)(param_5[5] + 0x18) + -1,
                       *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xf8));
          }
          iVar9 = iVar9 + -1;
          iVar3 = iVar3 + 1;
        } while (iVar9 != 0);
      }
    }
    else if (0 < iVar3) {
      do {
        if (param_5[5] == 0) goto LAB_026fff78;
        (**(code **)(*param_5 + 0x2b8))
                  (param_5,*(int *)(param_5[5] + 0x18) + -1,*(undefined8 *)(*param_5 + 0x2c0));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = PTR_System_DateTime_TypeInfo_03cb64f8;
  if (*(int *)(*(long *)PTR_System_DateTime_TypeInfo_03cb64f8 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  local_48 = System_DateTime__get_UtcNow(0);
  lVar4 = System_DateTime__get_Ticks(&local_48,0);
  lVar6 = param_5[0x22];
  if (lVar4 / 10000 - lVar6 < 0x65) {
    if (lVar6 == 0) goto LAB_026fff0c;
  }
  else if (lVar6 == 0) {
LAB_026fff0c:
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    local_48 = System_DateTime__get_UtcNow(0);
    lVar4 = System_DateTime__get_Ticks(&local_48,0);
    param_5[0x22] = lVar4 / 10000;
  }
  else if ((char)param_5[0x21] == '\0') {
    UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__Fill
              (param_5,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38));
    UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__ResetScroll
              (param_5,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x50));
    param_5[0x22] = 0;
    goto LAB_026fff58;
  }
  UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__ScheduleFill(param_5);
  UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__ScheduleScrollDirectionReset
            (param_5);
  *(undefined1 *)(param_5 + 0x21) = 0;
LAB_026fff58:
  *(undefined4 *)((long)param_5 + 0xbc) = 1;
  return;
}


