/*
FUNCTION_NAME: UnityEngine.InputSystem.LowLevel.InputEventTrace$$OnInputEvent
ENTRY_POINT: 03291fe0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputSystem_LowLevel_InputEventTrace__OnInputEvent
               (long param_1,int *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_03ef50ab & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>___03cd1418
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length___03cd1420
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputEventPtr>___03cd1428
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo_03cb6d28);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_InputEventTrace_TypeInfo_03cd1378);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
    FUN_01c5c92c(PTR_System_Math_TypeInfo_03cb5ea0);
    FUN_01c5c92c(PTR_StringLiteral_3274_03cd1430);
    DAT_03ef50ab = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if (param_2 == (int *)0x0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar7 = 0;
      goto LAB_032920c0;
    }
  }
  else {
    if (param_2[4] < 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x20) != 0) &&
       (*(uint *)(param_1 + 0x20) != (uint)*(ushort *)((long)param_2 + 6))) {
      iVar7 = *param_2;
LAB_032920c0:
      if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_LowLevel_InputEventTrace_TypeInfo_03cd1378 +
                  0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      local_60 = local_60 & 0xffffffff00000000;
      UnityEngine_InputSystem_Utilities_FourCC___ctor(&local_60,0x46,0x52,0x4d,0x45,0);
      if (iVar7 != (int)local_60) {
        return;
      }
    }
  }
  lVar12 = *(long *)(param_1 + 0x18);
  if ((lVar12 != 0) &&
     (uVar8 = (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),param_2,param_3,
                         *(undefined8 *)(lVar12 + 0x28)), (uVar8 & 1) == 0)) {
    return;
  }
  uVar8 = *(ulong *)(param_1 + 0xa0);
  if (uVar8 == 0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)(param_2 + 1);
  }
  if ((uVar11 & 3) != 0) {
    uVar11 = uVar11 + 4 & 0x1fffc;
  }
  uVar18 = (ulong)uVar11;
  if (*(long *)(param_1 + 0x80) < (long)uVar18) {
    return;
  }
  if (*(ulong *)(param_1 + 0xb0) == 0) {
    *(ulong *)(param_1 + 0xa8) = uVar8;
    *(ulong *)(param_1 + 0xb0) = uVar8;
    uVar9 = uVar8;
    uVar14 = uVar8;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0xb0);
    uVar14 = *(ulong *)(param_1 + 0xa8);
  }
  uVar13 = uVar9 + uVar18;
  lVar12 = *(long *)(param_1 + 0x78);
  bVar1 = uVar13 <= uVar14;
  bVar5 = uVar14 == uVar8;
  if (lVar12 + uVar8 < uVar13) {
    if ((lVar12 < *(long *)(param_1 + 0x80)) && (*(char *)(param_1 + 0xb8) == '\0')) {
      uVar17 = *(undefined8 *)(param_1 + 0x88);
      if ((uVar11 & 3) != 0) {
        uVar11 = uVar11 + 4 & 0x3fffc;
      }
      if (*(int *)(*(long *)PTR_System_Math_TypeInfo_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar12 = System_Math__Max(uVar17,uVar11,0);
      lVar12 = *(long *)(param_1 + 0x78) + lVar12;
      if (*(long *)(param_1 + 0x80) <= lVar12) {
        lVar12 = *(long *)(param_1 + 0x80);
      }
      if (lVar12 < (long)uVar18) {
        return;
      }
      UnityEngine_InputSystem_LowLevel_InputEventTrace__Resize(param_1,lVar12,0xffffffffffffffff);
      uVar9 = *(ulong *)(param_1 + 0xb0);
      lVar12 = *(long *)(param_1 + 0x78);
      uVar8 = *(ulong *)(param_1 + 0xa0);
      uVar13 = uVar9 + uVar18;
    }
    lVar2 = (uVar8 - uVar9) + lVar12;
    if ((long)uVar18 <= lVar2) goto LAB_03292260;
    *(undefined1 *)(param_1 + 0xb8) = 1;
    if (0x13 < lVar2) {
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemClear(uVar9,0x14,0);
      uVar8 = *(ulong *)(param_1 + 0xa0);
    }
    uVar13 = uVar8 + uVar18;
    *(ulong *)(param_1 + 0xb0) = uVar8;
    if (bVar1 || bVar5) {
      uVar14 = *(ulong *)(param_1 + 0xa8);
    }
    else {
      *(ulong *)(param_1 + 0xa8) = uVar8;
      uVar14 = uVar8;
    }
    uVar9 = uVar8;
    if (uVar13 <= uVar14) goto LAB_032922d0;
    lVar12 = *(long *)(param_1 + 0x78);
  }
  else {
LAB_03292260:
    if (bVar1 || bVar5) goto LAB_032922d0;
    uVar14 = *(ulong *)(param_1 + 0xa8);
  }
  while (uVar15 = uVar14, uVar14 < uVar13) {
    uVar3 = *(ushort *)(uVar14 + 4);
    uVar14 = uVar3 + uVar14;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) - (ulong)uVar3;
    uVar15 = uVar8;
    if (((uVar8 + lVar12) - 0x14 < uVar14) || (*(short *)(uVar14 + 4) == 0)) break;
  }
  *(ulong *)(param_1 + 0xa8) = uVar15;
LAB_032922d0:
  *(ulong *)(param_1 + 0xb0) = uVar13;
  if (param_2 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (undefined2)param_2[1];
  }
  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCpy(uVar9,param_2,uVar10,0);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + uVar18;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  if (param_3 != 0) {
    piVar16 = *(int **)(param_1 + 0xc0);
    if ((piVar16 != (int *)0x0) && (iVar7 = piVar16[6], 0 < iVar7)) {
      do {
        piVar16 = piVar16 + 8;
        if (*piVar16 == *(int *)(param_3 + 0xe0)) goto LAB_03292478;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uStack_78 = 0;
    local_68 = 0;
    local_70 = 0;
    local_80 = (ulong)*(uint *)(param_3 + 0xe0);
    uStack_78 = UnityEngine_InputSystem_InputControl__get_layout(param_3,0);
    thunk_FUN_01cc8040((ulong)&local_80 | 8,uStack_78);
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    uStack_88 = *(undefined8 *)(param_3 + 0x18);
    local_90 = uVar17;
    if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78 +
                0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      uStack_88 = *(undefined8 *)(param_3 + 0x18);
      local_90 = *(undefined8 *)(param_3 + 0x10);
    }
    local_70 = CONCAT44(local_70._4_4_,(int)uVar17);
    uVar6 = UnityEngine_InputSystem_LowLevel_InputStateBlock__get_alignedSizeInBytes(&local_90,0);
    puVar4 = PTR_UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo_03cb6d28;
    local_70 = CONCAT44(uVar6,(undefined4)local_70);
    lVar12 = *(long *)PTR_UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo_03cb6d28;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar12);
      lVar12 = *(long *)puVar4;
    }
    uVar8 = UnityEngine_InputSystem_Layouts_InputControlLayout_Collection__IsGeneratedLayout
                      (*(long *)(lVar12 + 0xb8) + 0x10,*(undefined8 *)(param_3 + 0x58),
                       *(undefined8 *)(param_3 + 0x60),0);
    uVar17 = 0;
    if ((uVar8 & 1) != 0) {
      uVar17 = UnityEngine_InputSystem_InputControl__get_layout(param_3,0);
      if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8 + 0xe4) == 0)
      {
        thunk_FUN_01cb0d4c(*(long *)PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
      }
      lVar12 = UnityEngine_InputSystem_InputSystem__LoadLayout(uVar17,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      uVar17 = UnityEngine_InputSystem_Layouts_InputControlLayout__ToJson(lVar12,0);
    }
    local_68 = uVar17;
    thunk_FUN_01cc8040(&local_68);
    uStack_58 = uStack_78;
    local_60 = local_80;
    uStack_48 = local_68;
    uStack_50 = local_70;
    UnityEngine_InputSystem_Utilities_ArrayHelpers__Append<InputEventTrace_DeviceInfo>
              ((undefined8 *)(param_1 + 0xc0),&local_60,
               *(undefined8 *)
                PTR_Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputEventTrace_DeviceInfo>___03cd1418
              );
  }
LAB_03292478:
  iVar7 = UnityEngine_InputSystem_Utilities_CallbackArray<object>__get_length
                    (param_1 + 0x28,
                     *(undefined8 *)
                      PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length___03cd1420
                    );
  if (0 < iVar7) {
    UnityEngine_InputSystem_Utilities_DelegateHelpers__InvokeCallbacksSafe<InputEventPtr>
              (param_1 + 0x28,uVar9,*(undefined8 *)PTR_StringLiteral_3274_03cd1430,0,
               *(undefined8 *)
                PTR_Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputEventPtr>___03cd1428
              );
  }
  return;
}


