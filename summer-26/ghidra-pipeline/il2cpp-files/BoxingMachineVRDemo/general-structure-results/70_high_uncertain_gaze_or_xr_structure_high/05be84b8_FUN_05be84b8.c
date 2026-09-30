/*
FUNCTION_NAME: FUN_05be84b8
ENTRY_POINT: 05be84b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_18;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined4 FUN_05be84b8(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  void *__dest;
  undefined4 uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  uint *puVar35;
  undefined1 auVar36 [16];
  uint local_228;
  int local_200;
  undefined1 auStack_1f0 [80];
  undefined1 auStack_1a0 [80];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  undefined1 local_64 [4];
  
  if ((DAT_06b82062 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_UnityEngine_Pool_CollectionPool<List<Column>,_Column>_Get__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                );
    FUN_02d6084c(PTR_DAT_0678dea8);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__);
    FUN_02d6084c(PTR_DAT_06768b20);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_AppendWithCapacity__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Vector3>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Vector3>_FinishSetup__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                );
    FUN_02d6084c(PTR_DAT_067616a0);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_get_Item__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputBindingComposite<Vector2>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Quaternion>_get_name__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__);
    DAT_06b82062 = 1;
  }
  puVar6 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  puVar4 = Method_UnityEngine_InputSystem_InputBindingComposite<Vector2>__ctor__;
  local_64[0] = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_84 = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined1 *)(param_1 + 0x292) = 0;
  *(undefined2 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x280);
  FUN_05c4cf64(param_1 + 0x288,0);
  if ((*(byte *)(param_1 + 0x284) & 1) == 0) {
    uVar21 = *(undefined4 *)(param_1 + 0x238);
  }
  else {
    uVar21 = 700;
  }
  *(undefined4 *)(param_1 + 0x23c) = uVar21;
  puVar5 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_get_Item__
  ;
  FUN_04271348(param_1 + 0x240,uVar21,*(undefined8 *)puVar4);
  plVar26 = (long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  thunk_FUN_02dd37b4(plVar26);
  plVar28 = (long *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  thunk_FUN_02dd37b4(plVar28);
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar21 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar6,0);
    uVar21 = *(undefined4 *)(param_1 + 0x120);
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_05be391c(*(undefined4 *)(param_1 + 0x630),&local_c0,uVar21,*(undefined8 *)(param_1 + 0x100),0,
               *(undefined8 *)(param_1 + 0x118));
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  local_120 = local_90;
  FUN_0427197c(*(long *)(*(long *)puVar6 + 0xb8) + 0x10,&local_150,*(undefined8 *)puVar5);
  plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  lVar13 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
  if (lVar13 == 0) goto LAB_05bea9b0;
  FUN_047c195c(lVar13,*(undefined8 *)
                       Method_UnityEngine_Pool_CollectionPool<List<Column>,_Column>_Get__);
  FUN_05be3ad4(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x100),
               *(long *)(*(long *)puVar6 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8));
  plVar1 = (long *)(param_1 + 0x3a0);
  if (*(long *)(param_1 + 0x3a0) == 0) {
    uVar21 = *(undefined4 *)(param_1 + 0x490);
    uVar27 = thunk_FUN_02d9d534(*plVar22);
    FUN_05c4b424(uVar27,uVar21,0);
    *(undefined8 *)(param_1 + 0x3a0) = uVar27;
    thunk_FUN_02dd37b4(plVar1,uVar27);
  }
  else {
    plVar29 = (long *)(*(long *)(param_1 + 0x3a0) + 0x38);
    lVar13 = *plVar29;
    if (lVar13 == 0) goto LAB_05bea9b0;
    iVar8 = *(int *)(param_1 + 0x490);
    if (*(int *)(lVar13 + 0x18) < iVar8) {
      if (*(int *)(*plVar22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03563108(plVar29,iVar8,0,
                   *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    }
  }
  *(undefined4 *)(param_1 + 0x65c) = 0;
  plVar29 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if (*(int *)(param_1 + 0x310) == 1) {
    FUN_05c2c0b8(param_1,*(undefined8 *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0x668) == 0) {
      *(undefined4 *)(param_1 + 0x310) = 3;
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_05c41f0c(0);
      if ((uVar14 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_05bea9b0;
        uVar27 = thunk_FUN_0606f5c0(*plVar26,0);
        uVar27 = FUN_04e8db00(*(undefined8 *)
                               Method_UnityEngine_XR_InputFeatureUsage<Quaternion>_get_name__,uVar27
                              ,*(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
        }
        FUN_0602283c(uVar27,param_1,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x670) == 0) goto LAB_05bea9b0;
      iVar8 = FUN_0606f30c(*(long *)(param_1 + 0x670),0);
      if (*plVar26 == 0) goto LAB_05bea9b0;
      iVar9 = FUN_0606f30c(*plVar26,0);
      if (iVar8 != iVar9) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_05c4242c(0);
        if ((uVar14 & 1) == 0) {
LAB_05be8908:
          if (*(long *)(param_1 + 0x670) == 0) goto LAB_05bea9b0;
          *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(*(long *)(param_1 + 0x670) + 0x88);
        }
        else {
          if (*plVar28 == 0) goto LAB_05bea9b0;
          iVar8 = FUN_0606f30c(*plVar28,0);
          if ((*(long *)(param_1 + 0x670) == 0) ||
             (lVar13 = *(long *)(*(long *)(param_1 + 0x670) + 0x88), lVar13 == 0))
          goto LAB_05bea9b0;
          iVar9 = FUN_0606f30c(lVar13,0);
          if (iVar8 == iVar9) goto LAB_05be8908;
          if (*(long *)(param_1 + 0x670) == 0) goto LAB_05bea9b0;
          uVar27 = *(undefined8 *)(param_1 + 0x118);
          uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x670) + 0x88);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) ==
              0) {
            thunk_FUN_02dbd7b4();
          }
          uVar27 = FUN_05c3d38c(uVar27,uVar30,0);
          *(undefined8 *)(param_1 + 0x678) = uVar27;
          plVar29 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        thunk_FUN_02dd37b4(param_1 + 0x678);
        lVar13 = *plVar29;
        uVar27 = *(undefined8 *)(param_1 + 0x678);
        uVar30 = *(undefined8 *)(param_1 + 0x670);
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *plVar29;
        }
        uVar10 = FUN_05be3ad4(uVar27,uVar30,*(long *)(lVar13 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(param_1 + 0x680) = uVar10;
        lVar13 = **(long **)(*plVar29 + 0xb8);
        if (lVar13 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined4 *)(lVar13 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (*(long *)(param_1 + 0x330) == 0) {
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar10 = FUN_03b22888(*(long *)(param_1 + 0x330),0x6c696761,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_AppendWithCapacity__
                       );
  if (*(int *)(param_1 + 0x310) == 6) {
    uVar27 = *(undefined8 *)(param_1 + 0x318);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar14 = FUN_0606a004(uVar27,0,0);
    if (((uVar14 & 1) != 0) && (*(char *)(param_1 + 0x42d) == '\0')) {
      plVar15 = *(long **)(param_1 + 0x318);
      if (plVar15 == (long *)0x0) goto LAB_05bea9b0;
      (**(code **)(*plVar15 + 0x558))
                (plVar15,**(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar15 + 0x560));
    }
  }
  if (param_2 == 0) goto LAB_05bea9b0;
  uVar11 = *(uint *)(param_2 + 0x18);
  if ((int)uVar11 < 1) {
    local_200 = 0;
LAB_05bea110:
    if (*(char *)(param_1 + 0x42d) != '\0') {
      *(undefined1 *)(param_1 + 0x42d) = 0;
LAB_05bea11c:
      return *(undefined4 *)(param_1 + 0x4a0);
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      *(int *)(lVar13 + 0x1c) = local_200;
      lVar16 = *plVar29;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar16 = *plVar29;
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar16 != 0) {
        uVar10 = FUN_047c1490(lVar16,*(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                             );
        *(uint *)(lVar13 + 0x34) = uVar10;
        if (*plVar1 != 0) {
          plVar26 = (long *)(*plVar1 + 0x60);
          lVar13 = *plVar26;
          if (lVar13 != 0) {
            uVar14 = (ulong)uVar10;
            if (*(int *)(lVar13 + 0x18) < (int)uVar10) {
              if (*(int *)(*plVar22 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_035631b4(plVar26,uVar14,0,
                           *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
            }
            if (*(long *)(param_1 + 0x720) != 0) {
              plVar26 = (long *)(param_1 + 0x720);
              if (*(int *)(*(long *)(param_1 + 0x720) + 0x18) < (int)uVar10) {
                uVar11 = uVar10 | (int)uVar10 >> 0x10;
                uVar11 = uVar11 | (int)uVar11 >> 8;
                uVar11 = uVar11 | (int)uVar11 >> 4;
                uVar11 = uVar11 | (int)uVar11 >> 2;
                if (*(int *)(*plVar22 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562eb8(plVar26,(uVar11 | (int)uVar11 >> 1) + 1,
                             *(undefined8 *)
                              Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
              }
              if (*(char *)(param_1 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_05bea9b0;
                plVar28 = (long *)(*plVar1 + 0x38);
                lVar13 = *plVar28;
                if (lVar13 == 0) goto LAB_05bea9b0;
                iVar8 = *(int *)(param_1 + 0x4a0);
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*plVar22 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03563108(plVar28,iVar9,1,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__)
                  ;
                  plVar29 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              if (0 < (int)uVar10) {
                lVar13 = 0;
                uVar33 = 0;
                lVar16 = 0x54;
                lVar34 = 0x20;
                do {
                  if (uVar33 != 0) {
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                    uVar27 = *(undefined8 *)(lVar23 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar18 = UnityEngine_Font__add_textureRebuilt(uVar27,0,0);
                    if ((uVar18 & 1) != 0) {
                      lVar23 = *plVar29;
                      plVar28 = (long *)*plVar26;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar23 = *plVar29;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = lVar23 + lVar16;
                      local_d0 = *(undefined8 *)(lVar23 + -4);
                      uStack_d8 = *(undefined8 *)(lVar23 + -0xc);
                      uStack_e0 = *(undefined8 *)(lVar23 + -0x14);
                      uStack_e8 = *(undefined8 *)(lVar23 + -0x1c);
                      local_f0 = *(undefined8 *)(lVar23 + -0x24);
                      uStack_f8 = *(undefined8 *)(lVar23 + -0x2c);
                      local_100 = *(undefined8 *)(lVar23 + -0x34);
                      lVar23 = FUN_05c48f74(param_1,&local_100,0);
                      if (plVar28 == (long *)0x0) goto LAB_05bea9b0;
                      if ((lVar23 != 0) &&
                         (lVar19 = thunk_FUN_02d9d438(lVar23,*(undefined8 *)(*plVar28 + 0x40)),
                         lVar19 == 0)) {
LAB_05bea9cc:
                        uVar27 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                        FUN_02d609b4(uVar27,0);
                      }
                      if (*(uint *)(plVar28 + 3) <= uVar33) goto LAB_05bea9c8;
                      plVar28[uVar33 + 4] = lVar23;
                      thunk_FUN_02dd37b4((long)plVar28 + lVar34,lVar23);
                      plVar29 = (long *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                      if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                      goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      puVar20 = (undefined8 *)(lVar23 + lVar13 + 0x30);
                      *puVar20 = 0;
                      thunk_FUN_02dd37b4(puVar20,0);
                    }
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                    lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                    if (lVar23 == 0) goto LAB_05bea9b0;
                    uVar27 = *(undefined8 *)(lVar23 + 0x38);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar18 = UnityEngine_Font__add_textureRebuilt(uVar27,0,0);
                    if ((uVar18 & 1) == 0) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x38), lVar23 == 0))
                      goto LAB_05bea9b0;
                      iVar8 = FUN_0606f30c(lVar23,0);
                      lVar23 = *plVar29;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar23);
                        lVar23 = *plVar29;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = *(long *)(lVar23 + lVar16 + -0x1c);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      iVar9 = FUN_0606f30c(lVar23,0);
                      if (iVar8 != iVar9) goto LAB_05bea4b4;
                    }
                    else {
LAB_05bea4b4:
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar19 = *plVar29;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar19 = *plVar29;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      thunk_FUN_05c48a90(lVar23,*(undefined8 *)(lVar19 + lVar16 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar19 = **(long **)(*plVar29 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar19 + lVar16 + -0x2c);
                      thunk_FUN_02dd37b4();
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar19 = **(long **)(*plVar29 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar23 + 0x28) = *(undefined8 *)(lVar19 + lVar16 + -0x24);
                      thunk_FUN_02dd37b4();
                    }
                    lVar23 = *plVar29;
                    if (*(int *)(lVar23 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar23 = *plVar29;
                    }
                    lVar19 = **(long **)(lVar23 + 0xb8);
                    if (lVar19 == 0) goto LAB_05bea9b0;
                    if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                    if (*(char *)(lVar19 + lVar16 + -0x13) != '\0') {
                      lVar24 = *plVar26;
                      if (lVar24 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar19 = **(long **)(*plVar29 + 0xb8);
                        if (lVar19 == 0) goto LAB_05bea9b0;
                      }
                      if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      if (lVar24 == 0) goto LAB_05bea9b0;
                      FUN_05c48ac0(lVar24,*(undefined8 *)(lVar19 + lVar16 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar19 = **(long **)(*plVar29 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      *(undefined8 *)(lVar23 + 0x48) = *(undefined8 *)(lVar19 + lVar16 + -0xc);
                      thunk_FUN_02dd37b4();
                    }
                  }
                  lVar23 = *plVar29;
                  if (*(int *)(lVar23 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar23 = *plVar29;
                  }
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_05bea9b0;
                  if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                  goto LAB_05bea9b0;
                  if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                  lVar24 = *(long *)(lVar19 + lVar13 + 0x30);
                  uVar11 = *(uint *)(lVar23 + lVar16);
                  if (lVar24 == 0) {
                    if (uVar33 == 0) {
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_05c3debc(&local_150,*(undefined8 *)(param_1 + 0x3d8),uVar11 + 1,0);
                      memcpy(auStack_1a0,&local_150,0x50);
                      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_05bea9c8;
                      memcpy((void *)(lVar19 + lVar13 + 0x20),auStack_1a0,0x50);
                      __dest = (void *)(lVar19 + 0x20);
                    }
                    else {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      lVar23 = *(long *)(lVar23 + uVar33 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bea9b0;
                      uVar27 = FUN_05c48e08(lVar23,0);
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_05c3debc(&local_150,uVar27,uVar11 + 1,0);
                      memcpy(auStack_1f0,&local_150,0x50);
                      if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bea9c8;
                      __dest = (void *)(lVar19 + lVar13 + 0x20);
                      memcpy(__dest,auStack_1f0,0x50);
                    }
                    thunk_FUN_02dd37b4(__dest,0);
                  }
                  else {
                    iVar8 = *(int *)(lVar24 + 0x18);
                    if (iVar8 < (int)(uVar11 * 4)) {
                      if ((int)uVar11 < 0x401) {
                        uVar25 = (int)uVar11 >> 0x10;
LAB_05bea834:
                        uVar11 = uVar11 | uVar25 | (int)(uVar11 | uVar25) >> 8;
                        uVar11 = uVar11 | (int)uVar11 >> 4;
                        uVar11 = uVar11 | (int)uVar11 >> 2;
                        iVar8 = (uVar11 | (int)uVar11 >> 1) + 1;
                      }
                      else {
LAB_05bea7c8:
                        iVar8 = uVar11 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_05c3ecd4(lVar19 + lVar13 + 0x20,iVar8,0);
                    }
                    else if ((0 < (int)uVar11) && (*(char *)(param_1 + 0x359) != '\0')) {
                      iVar9 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar9 = iVar8;
                      }
                      if (0x100 < (int)((iVar9 >> 2) - uVar11)) {
                        if (0x400 < (int)uVar11) goto LAB_05bea7c8;
                        uVar25 = uVar11 >> 0x10;
                        goto LAB_05bea834;
                      }
                    }
                  }
                  plVar29 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                  goto LAB_05bea9b0;
                  lVar19 = *(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar19 = *plVar29;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_05bea9b0;
                  if ((*(uint *)(lVar19 + 0x18) <= uVar33) || (*(uint *)(lVar23 + 0x18) <= uVar33))
                  goto LAB_05bea9c8;
                  *(undefined8 *)(lVar23 + lVar13 + 0x68) = *(undefined8 *)(lVar19 + lVar16 + -0x1c)
                  ;
                  thunk_FUN_02dd37b4();
                  uVar33 = uVar33 + 1;
                  lVar13 = lVar13 + 0x50;
                  lVar16 = lVar16 + 0x38;
                  lVar34 = lVar34 + 8;
                } while (uVar14 != uVar33);
              }
              puVar4 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              lVar13 = *plVar26;
              if (lVar13 != 0) {
                lVar16 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
                lVar34 = (long)(int)uVar10 * 0x50 + 0x20;
                do {
                  uVar10 = (uint)uVar14;
                  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar10) goto LAB_05bea11c;
                  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_05bea9c8;
                  uVar27 = *(undefined8 *)(lVar13 + lVar16);
                  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar14 = FUN_0606a004(uVar27,0,0);
                  if ((uVar14 & 1) == 0) goto LAB_05bea11c;
                  if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x60), lVar13 == 0)) break;
                  uVar11 = *(uint *)(lVar13 + 0x18);
                  if ((int)uVar10 < (int)uVar11) {
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      uVar11 = *(uint *)(lVar13 + 0x18);
                    }
                    if (uVar11 <= uVar10) goto LAB_05bea9c8;
                    FUN_05c3fc70(lVar13 + lVar34,0,1,0);
                  }
                  lVar13 = *plVar26;
                  uVar14 = (ulong)(uVar10 + 1);
                  lVar34 = lVar34 + 0x50;
                  lVar16 = lVar16 + 8;
                } while (lVar13 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_05bea9b0;
  }
  uVar25 = 0;
  local_200 = 0;
LAB_05be8b1c:
  if (uVar11 <= uVar25) goto LAB_05bea9c8;
  puVar35 = (uint *)(param_2 + (long)(int)uVar25 * 0x10 + 0x24);
  if (*puVar35 == 0) goto LAB_05bea110;
  if (*plVar1 == 0) goto LAB_05bea9b0;
  plVar29 = (long *)(*plVar1 + 0x38);
  lVar13 = *plVar29;
  iVar8 = *(int *)(param_1 + 0x4a0);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar8)) {
    if (*(int *)(*plVar22 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03563108(plVar29,iVar8 + 1,1,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    uVar11 = *(uint *)(param_2 + 0x18);
  }
  if (uVar11 <= uVar25) goto LAB_05bea9c8;
  uVar11 = *puVar35;
  if ((uVar11 == 0x3c) && (*(char *)(param_1 + 0x33a) != '\0')) {
    uVar21 = *(undefined4 *)(param_1 + 0x120);
    uVar14 = FUN_05c217f4(param_1,param_2,uVar25 + 1,&local_68,0);
    uVar32 = local_68;
    if ((uVar14 & 1) == 0) goto LAB_05be8d80;
    if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bea9c8;
    iVar8 = *(int *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28);
    if ((*(byte *)(param_1 + 0x284) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x292) = 1;
    }
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    plVar29 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar25 = local_68;
    if (*(int *)(param_1 + 0x65c) != 1) goto LAB_05be9d7c;
    lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *(long *)puVar4;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 != 0) {
      if (*(uint *)(param_1 + 0x120) < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38;
        *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 != 0)) {
          if (*(uint *)(param_1 + 0x4a0) < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178;
            *(short *)(lVar13 + 0x24) = *(short *)(param_1 + 0x6bc) + -0x2000;
            *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(param_1 + 0x100);
            thunk_FUN_02dd37b4();
            if ((*(long *)(param_1 + 0x3a0) != 0) &&
               (lVar13 = *(long *)(*(long *)(param_1 + 0x3a0) + 0x38), lVar13 != 0)) {
              uVar11 = *(uint *)(param_1 + 0x4a0);
              if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                *(undefined4 *)(lVar13 + (long)(int)uVar11 * 0x178 + 0x50) =
                     *(undefined4 *)(param_1 + 0x120);
                if ((*(long *)(param_1 + 0x6b0) != 0) &&
                   (lVar16 = FUN_05c45ed8(*(long *)(param_1 + 0x6b0),0), lVar16 != 0)) {
                  uVar27 = FUN_03aac1c4(lVar16,*(undefined4 *)(param_1 + 0x6bc),
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                       );
                  if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                    *(undefined8 *)(lVar13 + (long)(int)uVar11 * 0x178 + 0x30) = uVar27;
                    thunk_FUN_02dd37b4();
                    if ((*plVar1 != 0) && (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 != 0)) {
                      uVar11 = *(uint *)(param_1 + 0x4a0);
                      if (uVar11 < *(uint *)(lVar13 + 0x18)) {
                        uVar12 = *(undefined4 *)(param_1 + 0x65c);
                        lVar16 = lVar13 + (long)(int)uVar11 * 0x178;
                        *(int *)(lVar16 + 0x28) = iVar8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar12;
                        if (uVar32 < *(uint *)(param_2 + 0x18)) {
                          *(int *)(lVar13 + (long)(int)uVar11 * 0x178 + 0x2c) =
                               (*(int *)(param_2 + (long)(int)uVar32 * 0x10 + 0x28) - iVar8) + 1;
                          *(undefined4 *)(param_1 + 0x65c) = 0;
                          *(undefined4 *)(param_1 + 0x120) = uVar21;
                          local_200 = local_200 + 1;
                          plVar29 = (long *)
                                    Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                          ;
                          uVar25 = uVar32;
                          goto LAB_05be9d74;
                        }
                      }
                      goto LAB_05bea9c8;
                    }
                    goto LAB_05bea9b0;
                  }
                  goto LAB_05bea9c8;
                }
                goto LAB_05bea9b0;
              }
              goto LAB_05bea9c8;
            }
            goto LAB_05bea9b0;
          }
          goto LAB_05bea9c8;
        }
        goto LAB_05bea9b0;
      }
      goto LAB_05bea9c8;
    }
    goto LAB_05bea9b0;
  }
LAB_05be8d80:
  local_64[0] = 0;
  uVar30 = *(undefined8 *)(param_1 + 0x100);
  uVar27 = *(undefined8 *)(param_1 + 0x118);
  uVar21 = *(undefined4 *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x65c) != 0) goto LAB_05be8e54;
  uVar32 = *(uint *)(param_1 + 0x284);
  if ((uVar32 >> 4 & 1) == 0) {
    if ((uVar32 >> 3 & 1) == 0) {
      if ((uVar32 >> 5 & 1) != 0) goto LAB_05be8da8;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_04f83744(uVar11,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_04f83be8(uVar11,0);
        goto LAB_05be8e50;
      }
    }
  }
  else {
LAB_05be8da8:
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar14 = FUN_04f837e4(uVar11,0);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar11 = FUN_04f83a70(uVar11,0);
LAB_05be8e50:
      uVar11 = uVar11 & 0xffff;
    }
  }
LAB_05be8e54:
  uVar32 = uVar25 + 1;
  if ((int)uVar32 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_05bea9c8;
    uVar31 = *(uint *)(param_2 + (long)(int)uVar32 * 0x10 + 0x24);
  }
  else {
    uVar31 = 0;
  }
  local_228 = uVar11;
  if (*(char *)(param_1 + 0x33b) == '\0') {
LAB_05be8fd0:
    lVar13 = FUN_05c2c458(param_1,uVar11,*(undefined8 *)(param_1 + 0x100),
                          *(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x23c),local_64
                          ,0);
    if (lVar13 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bea9c8;
      FUN_05c2c9e8(param_1,uVar11,*(undefined4 *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28),
                   *(undefined8 *)(param_1 + 0x100),0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar8 = FUN_05c41df4(0);
      if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bea9c8;
      if (iVar8 == 0) {
        local_228 = 0x25a1;
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        local_228 = FUN_05c41df4(0);
      }
      *puVar35 = local_228;
      uVar17 = *(undefined8 *)(param_1 + 0x100);
      uVar12 = *(undefined4 *)(param_1 + 0x284);
      uVar2 = *(undefined4 *)(param_1 + 0x23c);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar13 = FUN_05c09ca0(local_228,uVar17,1,uVar12,uVar2,local_64,0);
      if (lVar13 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar13 = FUN_05c4236c(0);
        if (lVar13 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar13 = FUN_05c4236c(0);
          if (lVar13 == 0) goto LAB_05bea9b0;
          if (0 < *(int *)(lVar13 + 0x18)) {
            lVar13 = *plVar26;
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar17 = FUN_05c4236c(0);
            uVar12 = *(undefined4 *)(param_1 + 0x284);
            uVar2 = *(undefined4 *)(param_1 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
            }
            lVar13 = FUN_05c0a248(local_228,lVar13,uVar17,1,uVar12,uVar2,local_64,0);
            if (lVar13 != 0) goto LAB_05be9df8;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar17 = FUN_05c41f68(0);
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
        }
        uVar14 = FUN_0606a004(uVar17,0,0);
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar17 = FUN_05c41f68(0);
          uVar12 = *(undefined4 *)(param_1 + 0x284);
          uVar2 = *(undefined4 *)(param_1 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar13 = FUN_05c09ca0(local_228,uVar17,1,uVar12,uVar2,local_64,0);
          if (lVar13 != 0) goto LAB_05be9df8;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bea9c8;
        *puVar35 = 0x20;
        uVar17 = *(undefined8 *)(param_1 + 0x100);
        uVar12 = *(undefined4 *)(param_1 + 0x284);
        uVar2 = *(undefined4 *)(param_1 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar13 = FUN_05c09ca0(0x20,uVar17,1,uVar12,uVar2,local_64,0);
        if (lVar13 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bea9c8;
          *puVar35 = 3;
          uVar17 = *(undefined8 *)(param_1 + 0x100);
          uVar12 = *(undefined4 *)(param_1 + 0x284);
          uVar2 = *(undefined4 *)(param_1 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          local_228 = 3;
          lVar13 = FUN_05c09ca0(3,uVar17,1,uVar12,uVar2,local_64,0);
        }
        else {
          local_228 = 0x20;
        }
      }
LAB_05be9df8:
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_05c41f0c(0);
      if ((uVar14 & 1) == 0) {
        plVar22 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
        if (uVar11 >> 0x10 == 0) {
          local_150 = CONCAT44(local_150._4_4_,uVar11);
          lVar16 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_150);
          if (plVar22 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar22[3] == 0) goto LAB_05bea9c8;
          plVar22[4] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 4,lVar16);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar16 = thunk_FUN_0606f5c0(*(long *)(param_1 + 0xf8),0);
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar22 + 3) < 2) goto LAB_05bea9c8;
          plVar22[5] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 5,lVar16);
          if (lVar13 == 0) goto LAB_05bea9b0;
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar13 + 0x14));
          lVar16 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_c0);
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar22 + 3) < 3) goto LAB_05bea9c8;
          plVar22[6] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 6,lVar16);
          lVar16 = thunk_FUN_0606f5c0(param_1,0);
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar22 + 3) < 4) goto LAB_05bea9c8;
          plVar22[7] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 7,lVar16);
          puVar20 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
        }
        else {
          local_150 = CONCAT44(local_150._4_4_,uVar11);
          lVar16 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_150);
          if (plVar22 == (long *)0x0) goto LAB_05bea9b0;
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if ((int)plVar22[3] == 0) goto LAB_05bea9c8;
          plVar22[4] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 4,lVar16);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_05bea9b0;
          lVar16 = thunk_FUN_0606f5c0(*(long *)(param_1 + 0xf8),0);
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar22 + 3) < 2) goto LAB_05bea9c8;
          plVar22[5] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 5,lVar16);
          if (lVar13 == 0) goto LAB_05bea9b0;
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar13 + 0x14));
          lVar16 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_c0);
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar22 + 3) < 3) goto LAB_05bea9c8;
          plVar22[6] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 6,lVar16);
          lVar16 = thunk_FUN_0606f5c0(param_1,0);
          if ((lVar16 != 0) &&
             (lVar34 = thunk_FUN_02d9d438(lVar16,*(undefined8 *)(*plVar22 + 0x40)), lVar34 == 0))
          goto LAB_05bea9cc;
          if (*(uint *)(plVar22 + 3) < 4) goto LAB_05bea9c8;
          plVar22[7] = lVar16;
          thunk_FUN_02dd37b4(plVar22 + 7,lVar16);
          puVar20 = (undefined8 *)
                    Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
        }
        uVar17 = FUN_04e8e72c(*puVar20,plVar22,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602283c(uVar17,param_1,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar14 = FUN_05c4c7a8(uVar11,0);
    if ((uVar31 == 0xfe0e) || ((uVar14 & 1) == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_05c4c728(uVar11,0);
      if ((uVar31 != 0xfe0f) || ((uVar14 & 1) == 0)) goto LAB_05be8fd0;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar13 = FUN_05c4277c(0);
    if (lVar13 == 0) goto LAB_05be8fd0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar13 = FUN_05c4277c(0);
    if (lVar13 == 0) goto LAB_05bea9b0;
    if (*(int *)(lVar13 + 0x18) < 1) goto LAB_05be8fd0;
    lVar13 = *plVar26;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar17 = FUN_05c4277c(0);
    uVar12 = *(undefined4 *)(param_1 + 0x280);
    uVar2 = *(undefined4 *)(param_1 + 0x238);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    }
    lVar13 = FUN_05c0a464(uVar11,lVar13,uVar17,1,uVar12,uVar2,local_64,0);
    if (lVar13 == 0) goto LAB_05be8fd0;
  }
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_05bea9c8;
  puVar20 = (undefined8 *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38);
  *puVar20 = 0;
  thunk_FUN_02dd37b4(puVar20,0);
  if (lVar13 == 0) goto LAB_05bea9b0;
  if (*(char *)(lVar13 + 0x10) == '\x01') {
    if (*(long *)(lVar13 + 0x18) == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*(long *)(lVar13 + 0x18),0);
    if (*plVar26 == 0) goto LAB_05bea9b0;
    iVar9 = FUN_05bf59d4(*plVar26,0);
    if (iVar8 != iVar9) {
      plVar22 = *(long **)(lVar13 + 0x18);
      if (plVar22 == (long *)0x0) {
        plVar22 = (long *)0x0;
        *plVar26 = 0;
      }
      else {
        lVar16 = *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__;
        bVar3 = *(byte *)(lVar16 + 0x130);
        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
          plVar29 = (long *)0x0;
        }
        else {
          plVar29 = plVar22;
          if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
            plVar29 = (long *)0x0;
          }
        }
        *plVar26 = (long)plVar29;
        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
          plVar22 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
          plVar22 = (long *)0x0;
        }
      }
      thunk_FUN_02dd37b4(plVar26,plVar22);
    }
    bVar7 = iVar8 != iVar9;
    if ((uVar31 >> 4 == 0xfe0) || (uVar31 - 0xe0100 < 0xf0)) {
      if (*plVar26 == 0) goto LAB_05bea9b0;
      iVar8 = FUN_05c03084(*plVar26,local_228,uVar31,0);
      if (iVar8 != 0) {
        if (*plVar26 == 0) goto LAB_05bea9b0;
        uVar14 = FUN_05c05510(*plVar26,iVar8,&local_78,0);
        if ((uVar14 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
          goto LAB_05bea9b0;
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_05bea9c8;
          *(undefined8 *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38) = local_78;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_05bea9c8;
      *(undefined4 *)(param_2 + (long)(int)uVar32 * 0x10 + 0x24) = 0x1a;
      uVar25 = uVar32;
    }
    if ((uVar10 & 1) != 0) {
      if (((*plVar26 == 0) || (lVar16 = *(long *)(*plVar26 + 0x178), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x38), lVar16 == 0)) goto LAB_05bea9b0;
      uVar14 = FUN_04937278(lVar16,*(undefined4 *)(lVar13 + 0x28),&local_70,
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                           );
      if ((uVar14 & 1) == 0) goto LAB_05be9670;
      plVar29 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (local_70 == 0) goto LAB_05bea110;
      iVar8 = 0;
      while (iVar8 < *(int *)(local_70 + 0x18)) {
        auVar36 = FUN_03a7e878(local_70,iVar8,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                              );
        lVar16 = auVar36._0_8_;
        if (lVar16 == 0) goto LAB_05bea9b0;
        uVar14 = *(ulong *)(lVar16 + 0x18);
        uVar11 = (uint)uVar14;
        if (1 < (int)uVar11) {
          uVar32 = 1;
          do {
            if (*(uint *)(param_2 + 0x18) <= uVar25 + uVar32) goto LAB_05bea9c8;
            if (*plVar26 == 0) goto LAB_05bea9b0;
            iVar9 = FUN_05c02fa8(*plVar26,*(undefined4 *)
                                           (param_2 + (long)(int)(uVar25 + uVar32) * 0x10 + 0x24),0)
            ;
            if (*(uint *)(lVar16 + 0x18) <= uVar32) goto LAB_05bea9c8;
            if (iVar9 != *(int *)(lVar16 + (long)(int)uVar32 * 4 + 0x20)) goto LAB_05be95b4;
            uVar32 = uVar32 + 1;
          } while (uVar11 != uVar32);
        }
        if (auVar36._8_4_ != 0) {
          if (*plVar26 == 0) goto LAB_05bea9b0;
          uVar33 = FUN_05c05510(*plVar26,auVar36._8_8_ & 0xffffffff,&local_80,0);
          if ((uVar33 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
            goto LAB_05bea9b0;
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_05bea9c8;
            *(undefined8 *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38) =
                 local_80;
            thunk_FUN_02dd37b4();
            if ((int)uVar11 < 1) goto LAB_05be9668;
            uVar33 = 0;
            uVar32 = 0;
            if (uVar25 <= *(uint *)(param_2 + 0x18)) {
              uVar32 = *(uint *)(param_2 + 0x18) - uVar25;
            }
            goto LAB_05be9634;
          }
        }
LAB_05be95b4:
        iVar8 = iVar8 + 1;
        if (local_70 == 0) goto LAB_05bea9b0;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_05be9670;
  while( true ) {
    lVar16 = param_2 + (long)(int)(uVar25 + (int)uVar33) * 0x10;
    if (uVar33 == 0) {
      *(uint *)(lVar16 + 0x2c) = uVar11;
    }
    else {
      *(undefined4 *)(lVar16 + 0x24) = 0x1a;
    }
    uVar33 = uVar33 + 1;
    if ((uVar14 & 0xffffffff) == uVar33) break;
LAB_05be9634:
    if (uVar32 == uVar33) goto LAB_05bea9c8;
  }
LAB_05be9668:
  uVar25 = (uVar25 + uVar11) - 1;
LAB_05be9670:
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_05bea9c8;
  lVar16 = lVar16 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178;
  plVar22 = (long *)(lVar16 + 0x30);
  *plVar22 = lVar13;
  *(undefined4 *)(lVar16 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar22,lVar13);
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_05bea9b0;
  uVar11 = *(uint *)(param_1 + 0x4a0);
  if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_05bea9c8;
  lVar34 = lVar16 + (long)(int)uVar11 * 0x178;
  *(short *)(lVar34 + 0x24) = (short)local_228;
  *(undefined1 *)(lVar34 + 0x54) = local_64[0];
  if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bea9c8;
  lVar16 = lVar16 + (long)(int)uVar11 * 0x178;
  *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28);
  *(long *)(lVar16 + 0x40) = *plVar26;
  thunk_FUN_02dd37b4();
  plVar29 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar13 + 0x10) == '\x02') {
    plVar15 = *(long **)(lVar13 + 0x18);
    if (plVar15 == (long *)0x0) goto LAB_05bea9b0;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar16 = plVar15[0x11];
    lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *plVar29;
    }
    uVar11 = FUN_05be3d0c(lVar16,plVar15,*(long *)(lVar13 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
    *(uint *)(param_1 + 0x120) = uVar11;
    lVar13 = **(long **)(*plVar29 + 0xb8);
    if (lVar13 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_05bea9c8;
    lVar13 = lVar13 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
    uVar11 = *(uint *)(param_1 + 0x4a0);
    if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_05bea9c8;
    lVar13 = lVar13 + (long)(int)uVar11 * 0x178;
    *(undefined4 *)(lVar13 + 0x20) = 1;
    *(undefined4 *)(lVar13 + 0x50) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x120) = uVar21;
    local_200 = local_200 + 1;
    goto LAB_05be9d74;
  }
  if (bVar7) {
    if (*plVar26 == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*plVar26,0);
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar9 = FUN_05bf59d4(*(long *)(param_1 + 0xf8),0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_05c4242c(0);
      if ((uVar14 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_05bea9b0;
        lVar16 = *(long *)(*plVar26 + 0x88);
      }
      else {
        if (*plVar26 == 0) goto LAB_05bea9b0;
        uVar17 = *(undefined8 *)(*plVar26 + 0x88);
        lVar16 = *plVar28;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        lVar16 = FUN_05c3d38c(lVar16,uVar17,0);
      }
      *plVar28 = lVar16;
      thunk_FUN_02dd37b4(plVar28);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar34 = *plVar28;
      lVar23 = *plVar26;
      lVar16 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar16 = *(long *)puVar4;
      }
      uVar12 = FUN_05be3ad4(lVar34,lVar23,*(long *)(lVar16 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x120) = uVar12;
    }
  }
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_05bea9b0;
  iVar8 = FUN_06114b10(*(long *)(lVar13 + 0x20),0);
  if (0 < iVar8) {
    if (*(long *)(lVar13 + 0x20) == 0) goto LAB_05bea9b0;
    lVar16 = *plVar26;
    lVar34 = *plVar28;
    uVar12 = FUN_06114b10(*(long *)(lVar13 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    lVar13 = FUN_05c3ce0c(lVar16,lVar34,uVar12,0);
    *plVar28 = lVar13;
    thunk_FUN_02dd37b4(plVar28,lVar13);
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    lVar16 = *plVar28;
    lVar34 = *plVar26;
    lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *(long *)puVar4;
    }
    uVar12 = FUN_05be3ad4(lVar16,lVar34,*(long *)(lVar13 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
    bVar7 = true;
    *(undefined4 *)(param_1 + 0x120) = uVar12;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar14 = FUN_04f80ed4(local_228,0);
  puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((local_228 != 0x200b) && ((uVar14 & 1) == 0)) {
    lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar13 = *(long *)puVar4;
    }
    lVar16 = **(long **)(lVar13 + 0xb8);
    if (lVar16 == 0) goto LAB_05bea9b0;
    uVar11 = *(uint *)(param_1 + 0x120);
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_05bea9c8;
    if (*(int *)(lVar16 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar16 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
        if (lVar16 == 0) goto LAB_05bea9b0;
        uVar11 = *(uint *)(param_1 + 0x120);
      }
    }
    else {
      if (bVar7) {
        if (*(long *)(param_1 + 0x780) == 0) goto LAB_05bea9b0;
        uVar14 = FUN_047c3154(*(long *)(param_1 + 0x780),uVar11,&local_84,
                              *(undefined8 *)PTR_DAT_0678dea8);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar14 & 1) == 0) {
LAB_05be9ad4:
          lVar13 = *plVar28;
          uVar17 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar17,lVar13,0);
          puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          lVar16 = *plVar26;
          lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar4;
          }
          uVar11 = FUN_05be3ad4(uVar17,lVar16,*(long *)(lVar13 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
          if (*(long *)(param_1 + 0x780) == 0) goto LAB_05bea9b0;
          FUN_047c17c8(*(long *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x120),uVar11,
                       *(undefined8 *)PTR_DAT_06768b20);
          lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar4;
          }
          lVar16 = **(long **)(lVar13 + 0xb8);
          if (lVar16 == 0) goto LAB_05bea9b0;
          if (*(uint *)(lVar16 + 0x18) <= local_84) goto LAB_05bea9c8;
          uVar11 = local_84;
          if (0x3ffe < *(int *)(lVar16 + (long)(int)local_84 * 0x38 + 0x54)) goto LAB_05be9ad4;
        }
        *(uint *)(param_1 + 0x120) = uVar11;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar11 = *(uint *)(param_1 + 0x120);
          lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        lVar16 = **(long **)(lVar13 + 0xb8);
      }
      else {
        lVar13 = *plVar28;
        uVar17 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar17,lVar13,0);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar16 = *plVar26;
        lVar13 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar4;
        }
        uVar11 = FUN_05be3ad4(uVar17,lVar16,*(long *)(lVar13 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
        *(uint *)(param_1 + 0x120) = uVar11;
        lVar16 = **(long **)(*(long *)puVar4 + 0xb8);
      }
      if (lVar16 == 0) goto LAB_05bea9b0;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_05bea9c8;
    lVar16 = lVar16 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
  }
  plVar29 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_05bea9c8;
  *(long *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x48) = *plVar28;
  thunk_FUN_02dd37b4();
  if ((*plVar1 == 0) || (lVar13 = *(long *)(*plVar1 + 0x38), lVar13 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x4a0)) goto LAB_05bea9c8;
  uVar11 = *(uint *)(param_1 + 0x120);
  *(uint *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x50) = uVar11;
  lVar13 = *plVar29;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar13 = *plVar29;
    uVar11 = *(uint *)(param_1 + 0x120);
  }
  lVar16 = **(long **)(lVar13 + 0xb8);
  if (lVar16 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_05bea9c8;
  *(bool *)(lVar16 + (long)(int)uVar11 * 0x38 + 0x41) = bVar7;
  if (bVar7) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar16 = **(long **)(*plVar29 + 0xb8);
      if (lVar16 == 0) goto LAB_05bea9b0;
      uVar11 = *(uint *)(param_1 + 0x120);
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_05bea9c8;
    puVar20 = (undefined8 *)(lVar16 + (long)(int)uVar11 * 0x38 + 0x48);
    *puVar20 = uVar27;
    thunk_FUN_02dd37b4(puVar20,uVar27);
    *(undefined8 *)(param_1 + 0x100) = uVar30;
    thunk_FUN_02dd37b4(plVar26);
    *(undefined8 *)(param_1 + 0x118) = uVar27;
    thunk_FUN_02dd37b4(plVar28,uVar27);
    *(undefined4 *)(param_1 + 0x120) = uVar21;
  }
  uVar11 = *(uint *)(param_1 + 0x4a0);
LAB_05be9d74:
  *(uint *)(param_1 + 0x4a0) = uVar11 + 1;
LAB_05be9d7c:
  uVar11 = *(uint *)(param_2 + 0x18);
  uVar25 = uVar25 + 1;
  if ((int)uVar11 <= (int)uVar25) goto LAB_05bea110;
  goto LAB_05be8b1c;
}


