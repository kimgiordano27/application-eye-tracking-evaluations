/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Input.OpenXRInput$$CreateActions
ENTRY_POINT: 036e0448
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_12;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x036e0d08) */
/* WARNING: Removing unreachable block (ram,0x036e0d0c) */
/* WARNING: Removing unreachable block (ram,0x036e0c8c) */
/* WARNING: Removing unreachable block (ram,0x036e0dec) */
/* WARNING: Removing unreachable block (ram,0x036e0ef8) */
/* WARNING: Removing unreachable block (ram,0x036e0ef0) */

bool UnityEngine_XR_OpenXR_Input_OpenXRInput__CreateActions(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_03ef73af & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue___03ce76b0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item___03ce76b8
                );
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Distinct<string>___03cd3710);
    FUN_01c5c92c(
                PTR_Method_System_Linq_Enumerable_SelectMany<OpenXRInteractionFeature_ActionBinding,_string>___03ce76c0
                );
    FUN_01c5c92c(
                PTR_Method_System_Linq_Enumerable_Select<OpenXRInteractionFeature_DeviceConfig,_string>___03ce76c8
                );
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ToArray<string>___03ccce28);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ToList<string>___03ce76d0);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Union<string>___03ce76d8);
    FUN_01c5c92c(
                PTR_Method_System_Linq_Enumerable_Where<OpenXRInteractionFeature_ActionBinding>___03ce76e0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_Dispose___03ce76e8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_Dispose___03ce76f0
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<string>_Dispose___03cd1a88);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionMapConfig>_Dispose___03ce7670
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_MoveNext___03ce76f8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionMapConfig>_MoveNext___03ce7680
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_MoveNext___03ce7700
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<string>_MoveNext___03cd1aa0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<string>_get_Current___03cd1aa8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_get_Current___03ce7708
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionMapConfig>_get_Current___03ce7698
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_get_Current___03ce7710
                );
    FUN_01c5c92c(
                PTR_System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo_03ce7718
                );
    FUN_01c5c92c(PTR_System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo_03ce7720);
    FUN_01c5c92c(PTR_System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo_03ce7728);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add___03ce7730
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_GetEnumerator___03ce76a0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator___03ce7738
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_GetEnumerator___03cd1ae8);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_GetEnumerator___03ce7740
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_ToArray___03cb5fa8);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor___03ce7748
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_get_Count___03cb5fb8);
    FUN_01c5c92c(
                PTR_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo_03ce7750
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_0___03ce7758
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1___03ce7760
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_2___03ce7768
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500);
    DAT_03ef73af = 1;
  }
  puVar4 = PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add___03ce7730;
  puVar3 = PTR_Method_System_Collections_Generic_List_Enumerator<string>_MoveNext___03cd1aa0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_110,param_1,
             *(undefined8 *)
              PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_GetEnumerator___03ce76a0
            );
  local_70 = local_100;
  uStack_78 = uStack_108;
  local_80 = local_110;
  do {
    uVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       *(undefined8 *)
                        PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionMapConfig>_MoveNext___03ce7680
                      );
    lVar5 = local_70;
    if ((uVar7 & 1) == 0) {
      uVar17 = 0x18;
      break;
    }
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar18 = *(undefined8 *)(local_70 + 0x18);
    if (*(int *)(*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0 + 0xe4) == 0
       ) {
      thunk_FUN_01cb0d4c();
    }
    uVar18 = UnityEngine_XR_OpenXR_Input_OpenXRInput__SanitizeStringForOpenXRPath(uVar18);
    uVar8 = UnityEngine_XR_OpenXR_Input_OpenXRInput__SanitizeStringForOpenXRPath
                      (*(undefined8 *)(lVar5 + 0x10));
    lVar9 = UnityEngine_XR_OpenXR_Input_OpenXRInput__Internal_CreateActionSet(uVar8,uVar18,0,0);
    if (lVar9 == 0) {
      UnityEngine_XR_OpenXR_OpenXRRuntime__LogLastError();
      bVar6 = false;
      goto LAB_036e0ea8;
    }
    uVar18 = *(undefined8 *)(lVar5 + 0x20);
    lVar10 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar10 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
    }
    puVar15 = *(undefined8 **)(lVar10 + 0xb8);
    lVar19 = puVar15[3];
    if (lVar19 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar15 = *(undefined8 **)
                   (*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500 +
                   0xb8);
      }
      uVar8 = *puVar15;
      lVar19 = thunk_FUN_01c8fc48(*(undefined8 *)
                                   PTR_System_Func<OpenXRInteractionFeature_DeviceConfig,_string>_TypeInfo_03ce7728
                                 );
      System_Func<object,_object>___ctor
                (lVar19,uVar8,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_0___03ce7758
                 ,0);
      plVar11 = (long *)(*(long *)(*(long *)
                                    PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500
                                  + 0xb8) + 0x18);
      *plVar11 = lVar19;
      thunk_FUN_01cc8040(plVar11,lVar19);
    }
    uVar18 = System_Linq_Enumerable__Select<object,_object>
                       (uVar18,lVar19,
                        *(undefined8 *)
                         PTR_Method_System_Linq_Enumerable_Select<OpenXRInteractionFeature_DeviceConfig,_string>___03ce76c8
                       );
    lVar10 = System_Linq_Enumerable__ToList<object>
                       (uVar18,*(undefined8 *)
                                PTR_Method_System_Linq_Enumerable_ToList<string>___03ce76d0);
    if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_110,*(long *)(lVar5 + 0x28),
               *(undefined8 *)
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_GetEnumerator___03ce7738
              );
    local_90 = local_100;
    uStack_98 = uStack_108;
    local_a0 = local_110;
    while (uVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              *(undefined8 *)
                               PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_MoveNext___03ce7700
                             ), lVar19 = local_90, (uVar7 & 1) != 0) {
      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      uVar18 = *(undefined8 *)(local_90 + 0x28);
      lVar12 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar12 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
      }
      puVar15 = *(undefined8 **)(lVar12 + 0xb8);
      lVar21 = puVar15[4];
      if (lVar21 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          puVar15 = *(undefined8 **)
                     (*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500 +
                     0xb8);
        }
        uVar8 = *puVar15;
        lVar21 = thunk_FUN_01c8fc48(*(undefined8 *)
                                     PTR_System_Func<OpenXRInteractionFeature_ActionBinding,_bool>_TypeInfo_03ce7720
                                   );
        System_Func<object,_bool>___ctor
                  (lVar21,uVar8,
                   *(undefined8 *)
                    PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1___03ce7760
                   ,0);
        plVar11 = (long *)(*(long *)(*(long *)
                                      PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500
                                    + 0xb8) + 0x20);
        *plVar11 = lVar21;
        thunk_FUN_01cc8040(plVar11,lVar21);
      }
      uVar18 = System_Linq_Enumerable__Where<object>
                         (uVar18,lVar21,
                          *(undefined8 *)
                           PTR_Method_System_Linq_Enumerable_Where<OpenXRInteractionFeature_ActionBinding>___03ce76e0
                         );
      lVar12 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar12 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
      }
      puVar15 = *(undefined8 **)(lVar12 + 0xb8);
      lVar21 = puVar15[5];
      if (lVar21 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          puVar15 = *(undefined8 **)
                     (*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500 +
                     0xb8);
        }
        uVar8 = *puVar15;
        lVar21 = thunk_FUN_01c8fc48(*(undefined8 *)
                                     PTR_System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo_03ce7718
                                   );
        System_Func<object,_object>___ctor
                  (lVar21,uVar8,
                   *(undefined8 *)
                    PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_2___03ce7768
                   ,0);
        plVar11 = (long *)(*(long *)(*(long *)
                                      PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500
                                    + 0xb8) + 0x28);
        *plVar11 = lVar21;
        thunk_FUN_01cc8040(plVar11,lVar21);
      }
      uVar18 = System_Linq_Enumerable__SelectMany<object,_object>
                         (uVar18,lVar21,
                          *(undefined8 *)
                           PTR_Method_System_Linq_Enumerable_SelectMany<OpenXRInteractionFeature_ActionBinding,_string>___03ce76c0
                         );
      uVar18 = System_Linq_Enumerable__Distinct<object>
                         (uVar18,*(undefined8 *)
                                  PTR_Method_System_Linq_Enumerable_Distinct<string>___03cd3710);
      uVar18 = System_Linq_Enumerable__ToList<object>
                         (uVar18,*(undefined8 *)
                                  PTR_Method_System_Linq_Enumerable_ToList<string>___03ce76d0);
      uVar18 = System_Linq_Enumerable__Union<object>
                         (uVar18,lVar10,
                          *(undefined8 *)PTR_Method_System_Linq_Enumerable_Union<string>___03ce76d8)
      ;
      lVar12 = System_Linq_Enumerable__ToArray<object>
                         (uVar18,*(undefined8 *)
                                  PTR_Method_System_Linq_Enumerable_ToArray<string>___03ccce28);
      uVar18 = *(undefined8 *)(lVar19 + 0x10);
      if (*(int *)(*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0 + 0xe4) ==
          0) {
        thunk_FUN_01cb0d4c();
      }
      uVar18 = UnityEngine_XR_OpenXR_Input_OpenXRInput__SanitizeStringForOpenXRPath(uVar18);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      uVar23 = *(undefined8 *)(lVar19 + 0x20);
      uVar1 = *(undefined4 *)(lVar19 + 0x18);
      cVar2 = *(char *)(lVar19 + 0x38);
      uVar8 = *(undefined8 *)(lVar12 + 0x18);
      if (*(long *)(lVar19 + 0x30) == 0) {
        uVar13 = 0;
LAB_036e0a64:
        uVar22 = 0;
      }
      else {
        uVar13 = System_Collections_Generic_List<object>__ToArray
                           (*(long *)(lVar19 + 0x30),
                            *(undefined8 *)
                             PTR_Method_System_Collections_Generic_List<string>_ToArray___03cb5fa8);
        if (*(long *)(lVar19 + 0x30) == 0) goto LAB_036e0a64;
        uVar22 = *(undefined4 *)(*(long *)(lVar19 + 0x30) + 0x18);
      }
      if (*(int *)(*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0 + 0xe4) ==
          0) {
        thunk_FUN_01cb0d4c();
      }
      lVar12 = UnityEngine_XR_OpenXR_Input_OpenXRInput__Internal_CreateAction
                         (lVar9,uVar18,uVar23,uVar1,0,0,lVar12,uVar8,cVar2 != '\0',uVar13,uVar22);
      if (lVar12 == 0) {
        UnityEngine_XR_OpenXR_OpenXRRuntime__LogLastError();
        uVar17 = 5;
        goto LAB_036e0da8;
      }
      if (*(long *)(lVar19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_110,*(long *)(lVar19 + 0x28),
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_GetEnumerator___03ce7740
                );
      local_b0 = local_100;
      uStack_b8 = uStack_108;
      local_c0 = local_110;
      while (uVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_c0,
                                *(undefined8 *)
                                 PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_MoveNext___03ce76f8
                               ), lVar21 = local_b0, (uVar7 & 1) != 0) {
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar16 = lVar10;
        if (*(long *)(local_b0 + 0x20) != 0) {
          lVar16 = *(long *)(local_b0 + 0x20);
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_110,lVar16,
                   *(undefined8 *)
                    PTR_Method_System_Collections_Generic_List<string>_GetEnumerator___03cd1ae8);
        uStack_d8 = uStack_108;
        local_e0 = local_110;
        local_d0 = local_100;
        while (uVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_e0,*(undefined8 *)puVar3), lVar16 = local_d0,
              (uVar7 & 1) != 0) {
          if ((*(char *)(lVar19 + 0x38) != '\0') || (lVar20 = *(long *)(lVar21 + 0x10), lVar20 == 0)
             ) {
            lVar20 = *(long *)(lVar5 + 0x30);
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          uVar7 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                            (param_2,lVar20,&local_e8,
                             *(undefined8 *)
                              PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TryGetValue___03ce76b0
                            );
          if ((uVar7 & 1) == 0) {
            lVar14 = thunk_FUN_01c8fc48(*(undefined8 *)
                                         PTR_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo_03ce7750
                                       );
            System_Collections_Generic_List<OpenXRInput_SerializedBinding>___ctor
                      (lVar14,*(undefined8 *)
                               PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor___03ce7748
                      );
            local_e8 = lVar14;
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (param_2,lVar20,lVar14,
                       *(undefined8 *)
                        PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item___03ce76b8
                      );
          }
          lVar20 = local_e8;
          local_f0 = 0;
          local_f8 = lVar12;
          local_f0 = System_String__Concat(lVar16,*(undefined8 *)(lVar21 + 0x18),0);
          thunk_FUN_01cc8040(&local_f0);
          if (lVar20 == 0) {
LAB_036e0c90:
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          lVar16 = *(long *)(lVar20 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_036e0c90;
          uVar17 = *(uint *)(lVar20 + 0x18);
          if (uVar17 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar17 * 0x10;
            *(uint *)(lVar20 + 0x18) = uVar17 + 1;
            puVar15 = (undefined8 *)(lVar16 + 0x28);
            *puVar15 = local_f0;
            *(long *)(lVar16 + 0x20) = local_f8;
            thunk_FUN_01cc8040(puVar15,0);
          }
          else {
            System_Collections_Generic_List<OpenXRInput_SerializedBinding>__AddWithResize
                      (lVar20,local_f8,local_f0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_e0,
                   *(undefined8 *)
                    PTR_Method_System_Collections_Generic_List_Enumerator<string>_Dispose___03cd1a88
                  );
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_c0,
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_Dispose___03ce76f0
                );
    }
    uVar17 = 2;
LAB_036e0da8:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,
               *(undefined8 *)
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionConfig>_Dispose___03ce76e8
              );
  } while ((uVar17 | 2) == 2);
  bVar6 = uVar17 != 5;
LAB_036e0ea8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,
             *(undefined8 *)
              PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionMapConfig>_Dispose___03ce7670
            );
  return bVar6;
}


