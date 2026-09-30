/*
FUNCTION_NAME: FUN_0235e694
ENTRY_POINT: 0235e694
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0235e694(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  int local_68;
  int local_64;
  undefined *puVar11;
  
  puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d4d & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_List<HandJointId>>_ContainsKey__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_Locomotion_LocomotionGate_<>c_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef6c0);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(PTR_DAT_033eb5c8);
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRTask<OVRSceneManager_Metrics>>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ecab8);
    thunk_FUN_00d48444(PTR_DAT_033f18f8);
    thunk_FUN_00d48444(PTR_DAT_033eb3c0);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Equals__);
    thunk_FUN_00d48444(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Clear<InputDevice>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_Dispose__
                      );
    DAT_03781d4d = 1;
  }
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(param_1,0,0);
  puVar11 = PTR_DAT_033ecab8;
  if ((uVar5 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      lVar12 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_033eb3c0) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0235e83c;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)PTR_DAT_033eb3c0,0);
LAB_0235e83c:
      uVar3 = (*(code *)*puVar6)(param_2,puVar6[1]);
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar11,uVar3);
      puVar11 = Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Equals__;
      if (plVar7 != (long *)0x0) {
        if (0 < (int)plVar7[3]) {
          uVar5 = 0;
          do {
            if (param_1 == 0) goto LAB_0235ec34;
            lVar12 = *param_2;
            lVar16 = *(long *)(param_1 + 0x20);
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar11) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0235e8cc;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar11,0);
LAB_0235e8cc:
            uVar4 = (*(code *)*puVar6)(param_2,uVar5 & 0xffffffff,puVar6[1]);
            if (lVar16 == 0) goto LAB_0235ec34;
            if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_0235ec30;
            lVar12 = *(long *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar16 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar16 == 0)) {
              uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar17,0);
            }
            uVar4 = *(uint *)(plVar7 + 3);
            if (uVar4 <= uVar5) goto LAB_0235ec30;
            uVar14 = uVar5 + 1;
            plVar7[uVar5 + 4] = lVar12;
            uVar5 = uVar14;
          } while ((long)uVar14 < (long)(int)uVar4);
        }
        puVar11 = 
        Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_Dispose__
        ;
        lVar12 = *(long *)
                  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_Dispose__
        ;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar12 = *(long *)puVar11;
        }
        puVar2 = PTR_DAT_033f18f8;
        lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        if (lVar16 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar12 = *(long *)puVar11;
          }
          uVar17 = **(undefined8 **)(lVar12 + 0xb8);
          lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar16 == 0) goto LAB_0235ec34;
          FUN_012d239c(lVar16,uVar17,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Clear<InputDevice>__,0
                      );
          *(long *)(*(long *)(*(long *)puVar11 + 0xb8) + 8) = lVar16;
        }
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
        ;
        puVar11 = PTR_DAT_033eb5c8;
        uVar17 = FUN_010dd0f4(plVar7,lVar16,
                              *(undefined8 *)
                               Method_OVRObjectPool_ListScope<OVRTask<OVRSceneManager_Metrics>>__ctor__
                             );
        uVar17 = FUN_010d96e0(uVar17,*(undefined8 *)puVar11);
        lVar12 = FUN_010dfe04(uVar17,*(undefined8 *)puVar2);
        if (((lVar12 != 0) &&
            (FUN_01324eac(lVar12,*(undefined8 *)OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo),
            puVar2 = PTR_DAT_033f5aa8, puVar11 = PTR_DAT_033ef6c0, param_1 != 0)) &&
           (*(long *)(param_1 + 0x50) != 0)) {
          iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x18);
          lVar16 = FUN_010b8ac4(*(undefined8 *)(param_1 + 0x20),param_2,
                                *(undefined8 *)
                                 Oculus_Interaction_Locomotion_LocomotionGate_<>c_TypeInfo);
          uVar17 = FUN_0230bd48(param_1,0,0);
          uVar17 = FUN_010b8d3c(uVar17,lVar12,*(undefined8 *)puVar11);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar8 != 0) {
            FUN_01298da0(lVar8,*(undefined8 *)
                                Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                        );
            puVar2 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
            puVar11 = 
            Method_System_Collections_Generic_Dictionary<int,_List<HandJointId>>_ContainsKey__;
            if (0 < iVar1) {
              iVar18 = 0;
              do {
                local_64 = iVar18;
                local_68 = FUN_010b8080(lVar12,&local_64,*(undefined8 *)puVar11);
                local_68 = local_68 + 1;
                local_64 = iVar18;
                FUN_0129a054(lVar8,&local_64,&local_68,*(undefined8 *)puVar2);
                iVar18 = iVar18 + 1;
              } while (iVar1 != iVar18);
            }
            puVar11 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
            if (lVar16 != 0) {
              uVar4 = *(uint *)(lVar16 + 0x18);
              if (0 < (int)uVar4) {
                uVar19 = 0;
                do {
                  if (uVar4 <= uVar19) {
LAB_0235ec30:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar7 = (long *)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
                  lVar13 = *plVar7;
                  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0))
                  goto LAB_0235ec34;
                  if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                    uVar5 = 0;
                    uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                    do {
                      if (uVar14 <= uVar5) goto LAB_0235ec30;
                      iVar1 = *(int *)(lVar13 + 0x20 + uVar5 * 4);
                      local_64 = iVar1;
                      FUN_01299bc0(lVar8,&local_64,&local_68,*(undefined8 *)puVar11);
                      *(int *)(lVar13 + 0x20 + uVar5 * 4) = iVar1 - local_68;
                      uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
                      uVar5 = uVar5 + 1;
                    } while ((long)uVar5 < (long)(int)*(uint *)(lVar13 + 0x18));
                  }
                  if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_0235ec30;
                  lVar9 = *plVar7;
                  if (lVar9 == 0) goto LAB_0235ec34;
                  FUN_022f8ff8(lVar9,lVar13,0);
                  uVar4 = *(uint *)(lVar16 + 0x18);
                  uVar19 = uVar19 + 1;
                } while ((int)uVar19 < (int)uVar4);
              }
              puVar11 = StringLiteral_10837;
              FUN_02310a38(param_1,uVar17,0,0);
              uVar17 = FUN_0230fea8(param_1,0);
              uVar17 = FUN_0232fdec(uVar17,lVar12,0);
              FUN_0230fbe0(param_1,uVar17,0);
              uVar17 = FUN_0230ffd0(param_1,0);
              uVar17 = FUN_0232fdec(uVar17,lVar12,0);
              FUN_0230ffc8(param_1,uVar17,0);
              *(long *)(param_1 + 0x20) = lVar16;
              FUN_01325140(lVar12,*(undefined8 *)puVar11);
              return;
            }
          }
        }
      }
LAB_0235ec34:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar17 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar11 = System_Security_CodeAccessPermission_var;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar17 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar11 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar10 = thunk_FUN_00d48444(puVar11);
  FUN_016ec5b8(uVar17,uVar10,0);
  uVar10 = thunk_FUN_00d48444(Method_System_Security_Cryptography_CryptoConfig_EncodeLongNumber__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar17,uVar10);
}


