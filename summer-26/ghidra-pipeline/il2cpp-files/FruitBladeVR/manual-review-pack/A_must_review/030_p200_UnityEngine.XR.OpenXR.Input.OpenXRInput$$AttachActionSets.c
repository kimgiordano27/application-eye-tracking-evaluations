/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Input.OpenXRInput$$AttachActionSets
ENTRY_POINT: 036da7ec
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_17;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x036dafbc) */
/* WARNING: Removing unreachable block (ram,0x036db168) */

void UnityEngine_XR_OpenXR_Input_OpenXRInput__AttachActionSets(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long **pplStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar5 = 
  PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor___03ce7458
  ;
  puVar4 = 
  PTR_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo_03ce7450;
  if ((DAT_03ef73ad & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator___03ce7460
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor___03ce7468
                );
    FUN_01c5c92c(
                PTR_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TypeInfo_03ce7470
                );
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_OfType<OpenXRInteractionFeature>___03ce7478);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Where<OpenXRInteractionFeature>___03ce7480);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_Dispose___03ce7488
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext___03ce7490
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_get_Current___03ce7498
                );
    FUN_01c5c92c(PTR_System_Func<OpenXRInteractionFeature,_bool>_TypeInfo_03ce74a0);
    FUN_01c5c92c(PTR_System_IDisposable_TypeInfo_03cb5b98);
    FUN_01c5c92c(
                PTR_System_Collections_Generic_IEnumerable<OpenXRInteractionFeature>_TypeInfo_03ce74a8
                );
    FUN_01c5c92c(
                PTR_System_Collections_Generic_IEnumerator<OpenXRInteractionFeature>_TypeInfo_03ce74b0
                );
    FUN_01c5c92c(PTR_System_Collections_IEnumerator_TypeInfo_03cb5ba0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Key___03ce74b8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value___03ce74c0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_RemoveAt___03ce74c8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray___03ce74d0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>__ctor___03ce7458
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Count___03ce74d8
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count___03ce74e0
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Item___03ce74e8
                );
    FUN_01c5c92c(
                PTR_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo_03ce7450
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_0___03ce74f0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_1___03ce74f8
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500);
    DAT_03ef73ad = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
  System_Collections_Generic_List<object>___ctor(lVar9,*(undefined8 *)puVar5);
  lVar10 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
  System_Collections_Generic_List<object>___ctor(lVar10,*(undefined8 *)puVar5);
  lVar11 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
  puVar4 = PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
  if (lVar11 != 0) {
    uVar12 = System_Linq_Enumerable__OfType<object>
                       (*(undefined8 *)(lVar11 + 0x18),
                        *(undefined8 *)
                         PTR_Method_System_Linq_Enumerable_OfType<OpenXRInteractionFeature>___03ce7478
                       );
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar5 = PTR_Method_System_Linq_Enumerable_Where<OpenXRInteractionFeature>___03ce7480;
    puVar14 = *(undefined8 **)(lVar11 + 0xb8);
    lVar18 = puVar14[1];
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(lVar11);
        puVar14 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar19 = *puVar14;
      lVar18 = thunk_FUN_01c8fc48(*(undefined8 *)
                                   PTR_System_Func<OpenXRInteractionFeature,_bool>_TypeInfo_03ce74a0
                                 );
      System_Func<object,_bool>___ctor
                (lVar18,uVar19,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_0___03ce74f0
                 ,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar13 = lVar18;
      thunk_FUN_01cc8040(plVar13,lVar18);
    }
    plVar13 = (long *)System_Linq_Enumerable__Where<object>(uVar12,lVar18,*(undefined8 *)puVar5);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               PTR_System_Collections_Generic_IEnumerable<OpenXRInteractionFeature>_TypeInfo_03ce74a8
             ) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_036daab8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_01c8cb54(plVar13,*(long *)
                                      PTR_System_Collections_Generic_IEnumerable<OpenXRInteractionFeature>_TypeInfo_03ce74a8
                             ,0);
LAB_036daab8:
      puVar5 = PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0;
      plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar8 = 
      PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Item___03ce74e8
      ;
      puVar7 = 
      PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_RemoveAt___03ce74c8
      ;
      puVar6 = 
      PTR_System_Collections_Generic_IEnumerator<OpenXRInteractionFeature>_TypeInfo_03ce74b0;
      puVar4 = PTR_System_Collections_IEnumerator_TypeInfo_03cb5ba0;
      pplStack_b0 = &local_68;
      local_b8 = 0;
      do {
        local_68 = plVar13;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar11 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036dab4c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c8cb54(plVar13,*(long *)puVar4,0);
LAB_036dab4c:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        plVar13 = local_68;
        puVar3 = PTR_System_IDisposable_TypeInfo_03cb5b98;
        if ((uVar15 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_036dacb0;
          lVar11 = *local_68;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_036dac88;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_036dac70;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036dabb0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar6,0);
LAB_036dabb0:
        lVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        iVar1 = *(int *)(lVar9 + 0x18);
        UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature__CreateActionMaps(lVar11,lVar9);
        iVar17 = *(int *)(lVar9 + 0x18);
        while (iVar17 = iVar17 + -1, plVar13 = local_68, iVar1 <= iVar17) {
          uVar12 = System_Collections_Generic_List<object>__get_Item
                             (lVar9,iVar17,*(undefined8 *)puVar8);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar15 = UnityEngine_XR_OpenXR_Input_OpenXRInput__ValidateActionMapConfig(lVar11,uVar12);
          if ((uVar15 & 1) == 0) {
            System_Collections_Generic_List<object>__RemoveAt(lVar9,iVar17,*(undefined8 *)puVar7);
          }
        }
      } while( true );
    }
  }
  goto LAB_036db164;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_036dac70:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_System_IDisposable_TypeInfo_03cb5b98) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_036daca4;
    }
  }
LAB_036dac88:
  puVar14 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)PTR_System_IDisposable_TypeInfo_03cb5b98,0)
  ;
LAB_036daca4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_036dacb0:
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar15 = UnityEngine_XR_OpenXR_Input_OpenXRInput__RegisterDevices(lVar9,0);
  if ((uVar15 & 1) == 0) {
    return;
  }
  lVar11 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
  if (lVar11 != 0) {
    uVar12 = System_Linq_Enumerable__OfType<object>
                       (*(undefined8 *)(lVar11 + 0x18),
                        *(undefined8 *)
                         PTR_Method_System_Linq_Enumerable_OfType<OpenXRInteractionFeature>___03ce7478
                       );
    puVar4 = PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
    lVar11 = *(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar14 = *(undefined8 **)(lVar11 + 0xb8);
    lVar18 = puVar14[2];
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(lVar11);
        puVar14 = *(undefined8 **)
                   (*(long *)PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500 +
                   0xb8);
      }
      uVar19 = *puVar14;
      lVar18 = thunk_FUN_01c8fc48(*(undefined8 *)
                                   PTR_System_Func<OpenXRInteractionFeature,_bool>_TypeInfo_03ce74a0
                                 );
      System_Func<object,_bool>___ctor
                (lVar18,uVar19,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_1___03ce74f8
                 ,0);
      plVar13 = (long *)(*(long *)(*(long *)
                                    PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_TypeInfo_03ce7500
                                  + 0xb8) + 0x10);
      *plVar13 = lVar18;
      thunk_FUN_01cc8040(plVar13,lVar18);
    }
    plVar13 = (long *)System_Linq_Enumerable__Where<object>
                                (uVar12,lVar18,
                                 *(undefined8 *)
                                  PTR_Method_System_Linq_Enumerable_Where<OpenXRInteractionFeature>___03ce7480
                                );
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               PTR_System_Collections_Generic_IEnumerable<OpenXRInteractionFeature>_TypeInfo_03ce74a8
             ) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_036dae04;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_01c8cb54(plVar13,*(long *)
                                      PTR_System_Collections_Generic_IEnumerable<OpenXRInteractionFeature>_TypeInfo_03ce74a8
                             ,0);
LAB_036dae04:
      local_68 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar7 = 
      PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_get_Item___03ce74e8
      ;
      puVar6 = 
      PTR_System_Collections_Generic_IEnumerator<OpenXRInteractionFeature>_TypeInfo_03ce74b0;
      puVar4 = PTR_System_Collections_IEnumerator_TypeInfo_03cb5ba0;
      pplStack_b0 = &local_68;
      local_b8 = 0;
      do {
        plVar13 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036dae88;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar4,0);
LAB_036dae88:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        plVar13 = local_68;
        if ((uVar15 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_036dafb0;
          lVar11 = *local_68;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_036daf88;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_036daf70;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036daeec;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar6,0);
LAB_036daeec:
        plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature__CreateActionMaps(plVar13,lVar10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        uVar12 = System_Collections_Generic_List<object>__get_Item
                           (lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar7);
        (**(code **)(*plVar13 + 0x358))(plVar13,lVar9,uVar12,*(undefined8 *)(*plVar13 + 0x360));
      } while( true );
    }
  }
  goto LAB_036db164;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_036daf70:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_036dafa4;
    }
  }
LAB_036daf88:
  puVar14 = (undefined8 *)FUN_01c8cb54(local_68,*(long *)puVar3,0);
LAB_036dafa4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_036dafb0:
  lVar11 = thunk_FUN_01c8fc48(*(undefined8 *)
                               PTR_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_TypeInfo_03ce7470
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (lVar11,*(undefined8 *)
                     PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor___03ce7468
            );
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar15 = UnityEngine_XR_OpenXR_Input_OpenXRInput__CreateActions(lVar9,lVar11);
  if ((uVar15 & 1) == 0) {
    return;
  }
  if (lVar10 != 0) {
    if (0 < *(int *)(lVar10 + 0x18)) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_OpenXR_Input_OpenXRInput__RegisterDevices(lVar10,1);
      UnityEngine_XR_OpenXR_Input_OpenXRInput__CreateActions(lVar10,lVar11);
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    UnityEngine_XR_OpenXR_Input_OpenXRInput__SetDpadBindingCustomValues();
    if (lVar11 != 0) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_b8,lVar11,
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator___03ce7460
                );
      puVar6 = 
      PTR_Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray___03ce74d0;
      puVar4 = 
      PTR_Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_MoveNext___03ce7490
      ;
      pplStack_88 = pplStack_b0;
      local_90 = local_b8;
      local_78 = lStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      local_b8 = 0;
      pplStack_b0 = (long **)&local_90;
      while (uVar15 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                (&local_90,*(undefined8 *)puVar4), lVar9 = local_78,
            uVar12 = local_80, (uVar15 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        uVar19 = System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ToArray
                           (local_78,*(undefined8 *)puVar6);
        uVar2 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar15 = UnityEngine_XR_OpenXR_Input_OpenXRInput__Internal_SuggestBindings
                           (uVar12,uVar19,uVar2);
        if ((uVar15 & 1) == 0) {
          UnityEngine_XR_OpenXR_OpenXRRuntime__LogLastError();
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                (&local_90,
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_Dispose___03ce7488
                );
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar15 = UnityEngine_XR_OpenXR_Input_OpenXRInput__Internal_AttachActionSets();
      if ((uVar15 & 1) != 0) {
        return;
      }
      UnityEngine_XR_OpenXR_OpenXRRuntime__LogLastError();
      return;
    }
  }
LAB_036db164:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


