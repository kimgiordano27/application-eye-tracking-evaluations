/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore.<InstantiateSpatialAnchor>d__10$$SetStateMachine
ENTRY_POINT: 0142eef8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__10__SetStateMachine
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long *unaff_x19;
  int iVar19;
  uint unaff_w22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  puVar6 = Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__0__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar2 = System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo;
  if (param_1 != 0) {
    iVar9 = 0;
    do {
      puVar7 = StringLiteral_13354;
      iVar19 = *(int *)(param_1 + 0x18);
      if (iVar19 <= iVar9) {
        if (iVar19 < 1) goto LAB_0142f6d0;
        iVar9 = 0;
        goto LAB_0142f63c;
      }
      FUN_0132138c(param_1,iVar9,&stack0x00000028,*(undefined8 *)StringLiteral_13354);
      lVar18 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
      if ((lVar18 == 0) || (plVar10 = *(long **)(lVar18 + 0x10), plVar10 == (long *)0x0)) break;
      uVar11 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0));
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar12 = FUN_0268b4e0(uVar11,0,0);
      if ((uVar12 & 1) == 0) {
        uVar11 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar12 = FUN_02681b9c(uVar11,0,0);
        if ((uVar12 & 1) != 0) {
          plVar10 = *(long **)(lVar18 + 0x10);
          if (((plVar10 == (long *)0x0) ||
              (lVar13 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0)),
              lVar13 == 0)) || (lVar13 = FUN_0268fd10(lVar13,0), lVar13 == 0)) break;
          uVar11 = FUN_0269fe30(lVar13,0);
          lVar13 = (**(code **)(*unaff_x19 + 0x4b8))();
          if (lVar13 == 0) break;
          uVar16 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar13,0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar12 = FUN_02681b9c(uVar11,uVar16,0);
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)StringLiteral_7233,0);
            return false;
          }
        }
      }
      else {
        plVar10 = *(long **)(lVar18 + 0x10);
        if (plVar10 == (long *)0x0) break;
        (**(code **)(*plVar10 + 0x4c8))(plVar10,unaff_x19[5],*(undefined8 *)(*plVar10 + 0x4d0));
        if (*(long *)(lVar18 + 0x10) == 0) break;
        FUN_01402b58(*(long *)(lVar18 + 0x10),in_stack_00000000,1,0);
        if (3 < (int)unaff_x19[7]) {
          plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
          iStack0000000000000028 = iVar9;
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000028);
          if (plVar10 == (long *)0x0) break;
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if ((int)plVar10[3] == 0) goto LAB_0142fba0;
          plVar10[4] = lVar13;
          plVar15 = *(long **)(lVar18 + 0x10);
          if (((plVar15 == (long *)0x0) ||
              (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
              lVar13 == 0)) || (lVar13 = FUN_0268fd4c(lVar13,0), lVar13 == 0)) break;
          uStack000000000000001c = FUN_02681c0c(lVar13,0);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000018 + 4);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 2) goto LAB_0142fba0;
          plVar10[5] = lVar13;
          plVar15 = *(long **)(lVar18 + 0x10);
          if ((plVar15 == (long *)0x0) ||
             (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
             lVar13 == 0)) break;
          uStack0000000000000018 = FUN_02681c0c(lVar13,0);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000018);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 3) goto LAB_0142fba0;
          plVar10[6] = lVar13;
          if ((*(long *)(lVar18 + 0x10) == 0) ||
             (lVar13 = FUN_013fba34(*(long *)(lVar18 + 0x10),0), lVar13 == 0)) break;
          uStack0000000000000014 = FUN_02681c0c(lVar13,0);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 4) goto LAB_0142fba0;
          plVar10[7] = lVar13;
          FUN_013f38b0(*(undefined8 *)Method_System_Collections_Generic_List<WeakReference>__ctor__,
                       plVar10,0);
        }
      }
      lVar13 = *(long *)(lVar18 + 0x28);
      if (lVar13 == 0) break;
      if (*(int *)(lVar13 + 0x18) < 1) {
        if (*(long *)(lVar18 + 0x30) == 0) break;
        if (0 < *(int *)(*(long *)(lVar18 + 0x30) + 0x18)) goto LAB_0142f27c;
      }
      else {
LAB_0142f27c:
        plVar10 = *(long **)(lVar18 + 0x10);
        uVar11 = FUN_01325140(lVar13,*(undefined8 *)
                                      Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                             );
        if ((*(long *)(lVar18 + 0x30) == 0) ||
           (uVar16 = FUN_01325140(*(long *)(lVar18 + 0x30),*(undefined8 *)StringLiteral_10837),
           plVar10 == (long *)0x0)) break;
        (**(code **)(*plVar10 + 0x8e8))
                  (plVar10,uVar11,uVar16,unaff_w22 & 1,*(undefined8 *)(*plVar10 + 0x8f0));
        if (3 < (int)unaff_x19[7]) {
          plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
          iStack0000000000000028 = iVar9;
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000028);
          if (plVar10 == (long *)0x0) break;
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if ((int)plVar10[3] == 0) goto LAB_0142fba0;
          plVar10[4] = lVar13;
          if (*(long *)(lVar18 + 0x28) == 0) break;
          uStack000000000000001c = *(undefined4 *)(*(long *)(lVar18 + 0x28) + 0x18);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000018 + 4);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 2) goto LAB_0142fba0;
          plVar10[5] = lVar13;
          if (*(long *)(lVar18 + 0x30) == 0) break;
          uStack0000000000000018 = *(undefined4 *)(*(long *)(lVar18 + 0x30) + 0x18);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000018);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 3) goto LAB_0142fba0;
          plVar10[6] = lVar13;
          plVar15 = *(long **)(lVar18 + 0x10);
          if (((plVar15 == (long *)0x0) ||
              (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
              lVar13 == 0)) || (lVar13 = FUN_0268fd4c(lVar13,0), lVar13 == 0)) break;
          uStack0000000000000014 = FUN_02681c0c(lVar13,0);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 4) goto LAB_0142fba0;
          plVar10[7] = lVar13;
          plVar15 = *(long **)(lVar18 + 0x10);
          if ((plVar15 == (long *)0x0) ||
             (lVar13 = (**(code **)(*plVar15 + 0x4d8))(plVar15,*(undefined8 *)(*plVar15 + 0x4e0)),
             lVar13 == 0)) break;
          uStack0000000000000010 = FUN_02681c0c(lVar13,0);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000010);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 5) goto LAB_0142fba0;
          plVar10[8] = lVar13;
          if ((*(long *)(lVar18 + 0x10) == 0) ||
             (lVar13 = FUN_013fba34(*(long *)(lVar18 + 0x10),0), lVar13 == 0)) break;
          in_stack_00000008._4_4_ = FUN_02681c0c(lVar13,0);
          lVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar10 + 3) < 6) goto LAB_0142fba0;
          plVar10[9] = lVar13;
          FUN_013f38b0(*(undefined8 *)PTR_DAT_033eaaf8,plVar10,0);
        }
      }
      plVar10 = *(long **)(lVar18 + 0x10);
      if (plVar10 == (long *)0x0) break;
      plVar10 = (long *)(**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0));
      if ((*(long *)(lVar18 + 0x10) == 0) ||
         (uVar11 = FUN_013fba34(*(long *)(lVar18 + 0x10),0), plVar10 == (long *)0x0)) break;
      lVar18 = *plVar10;
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((*(byte *)(lVar18 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f17f8))
      {
        lVar13 = *(long *)
                  Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__;
        if ((*(byte *)(lVar18 + 300) < *(byte *)(lVar13 + 300)) ||
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)*(byte *)(lVar13 + 300) * 8 + -8) != lVar13))
        {
LAB_0142fbb0:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar10);
        }
        if ((*(byte *)(*plVar10 + 300) < *(byte *)(lVar13 + 300)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar13 + 300) * 8 + -8) != lVar13
           )) goto LAB_0142fbb0;
        FUN_02669a58(plVar10,uVar11,0);
      }
      else {
        lVar18 = FUN_0268fd4c(plVar10,0);
        if (lVar18 == 0) break;
        FUN_010e58e8(lVar18,&stack0x00000028,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
        if (CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) break;
        FUN_02666150(CONCAT44(uStack000000000000002c,iStack0000000000000028),uVar11,0);
      }
      param_1 = unaff_x19[0x13];
      iVar9 = iVar9 + 1;
      if (param_1 == 0) break;
    } while( true );
  }
  goto LAB_0142fb9c;
  while( true ) {
    iVar19 = 0;
    while (iVar19 < *(int *)(lVar13 + 0x18)) {
      lVar14 = unaff_x19[0x12];
      FUN_0132138c(lVar13,iVar19,&stack0x00000028,*(undefined8 *)puVar4);
      if (lVar14 == 0) goto LAB_0142fb9c;
      FUN_0129de0c(lVar14,&stack0x00000028,*(undefined8 *)puVar2);
      lVar13 = *(long *)(lVar18 + 0x30);
      iVar19 = iVar19 + 1;
      if (lVar13 == 0) goto LAB_0142fb9c;
    }
    param_1 = unaff_x19[0x13];
    if (param_1 == 0) goto LAB_0142fb9c;
    iVar19 = *(int *)(param_1 + 0x18);
    iVar9 = iVar9 + 1;
    if (iVar19 <= iVar9) break;
LAB_0142f63c:
    FUN_0132138c(param_1,iVar9,&stack0x00000028,*(undefined8 *)puVar7);
    lVar18 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    if ((lVar18 == 0) || (lVar13 = *(long *)(lVar18 + 0x30), lVar13 == 0)) goto LAB_0142fb9c;
  }
LAB_0142f6d0:
  puVar3 = StringLiteral_4997;
  puVar2 = Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
  if (0 < iVar19) {
    iVar9 = 0;
    do {
      FUN_0132138c(param_1,iVar9,&stack0x00000028,*(undefined8 *)puVar7);
      lVar18 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
      if ((lVar18 == 0) || (lVar13 = *(long *)(lVar18 + 0x28), lVar13 == 0)) goto LAB_0142fb9c;
      iVar19 = 0;
      while (iVar19 < *(int *)(lVar13 + 0x18)) {
        lVar14 = unaff_x19[0x12];
        FUN_0132138c(lVar13,iVar19,&stack0x00000028,*(undefined8 *)puVar5);
        if ((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
           (iVar8 = FUN_02681c0c(CONCAT44(uStack000000000000002c,iStack0000000000000028),0),
           lVar14 == 0)) goto LAB_0142fb9c;
        iStack0000000000000028 = iVar8;
        FUN_0129a054(lVar14,&stack0x00000028,lVar18,*(undefined8 *)puVar6);
        lVar13 = *(long *)(lVar18 + 0x28);
        iVar19 = iVar19 + 1;
        if (lVar13 == 0) goto LAB_0142fb9c;
      }
      lVar14 = *(long *)(lVar18 + 0x30);
      if (*(int *)(lVar13 + 0x18) < 1) {
        if (lVar14 == 0) goto LAB_0142fb9c;
        if (0 < *(int *)(lVar14 + 0x18)) goto LAB_0142f794;
      }
      else {
        if (lVar14 == 0) goto LAB_0142fb9c;
LAB_0142f794:
        lVar13 = *(long *)puVar2;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
        if ((uVar12 & 1) == 0) {
          *(undefined4 *)(lVar14 + 0x18) = 0;
        }
        else {
          iVar19 = *(int *)(lVar14 + 0x18);
          *(undefined4 *)(lVar14 + 0x18) = 0;
          if (0 < iVar19) {
            FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
          }
        }
        lVar13 = *(long *)(lVar18 + 0x28);
        if (lVar13 == 0) goto LAB_0142fb9c;
        lVar14 = *(long *)puVar3;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        uVar12 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
        if ((uVar12 & 1) == 0) {
          *(undefined4 *)(lVar13 + 0x18) = 0;
        }
        else {
          iVar19 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < iVar19) {
            FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
          }
        }
        *(undefined4 *)(lVar18 + 0x1c) = 0;
        *(undefined4 *)(lVar18 + 0x20) = 0;
        *(undefined1 *)(lVar18 + 0x40) = 1;
      }
      param_1 = unaff_x19[0x13];
      if (param_1 == 0) goto LAB_0142fb9c;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x18));
  }
  iVar9 = (**(code **)(*unaff_x19 + 0x4f8))();
  puVar5 = Method_TinyJSON_JSON_SupportTypeForAOT<double>__;
  puVar4 = 
  Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__;
  puVar3 = Autohand_GrabbableBase_<IgnoreHandCollision>d__49_TypeInfo;
  puVar2 = PTR_DAT_033ea8a0;
  if (iVar9 < 4) {
LAB_0142fb34:
    if (unaff_x19[0x13] != 0) {
      return 0 < *(int *)(unaff_x19[0x13] + 0x18);
    }
  }
  else {
    iStack0000000000000024 = 0;
    lVar13 = unaff_x19[0x13];
    lVar18 = *(long *)PTR_DAT_033ec5a0;
    if (lVar13 != 0) {
      while (iStack0000000000000024 < *(int *)(lVar13 + 0x18)) {
        plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
        if (plVar10 == (long *)0x0) goto LAB_0142fb9c;
        if ((lVar18 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_0142fba4;
        uVar17 = *(uint *)(plVar10 + 3);
        if (uVar17 == 0) goto LAB_0142fba0;
        plVar10[4] = lVar18;
        lVar18 = *(long *)puVar3;
        if (lVar18 != 0) {
          lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar18 == 0) goto LAB_0142fba4;
          uVar17 = *(uint *)(plVar10 + 3);
        }
        if (uVar17 < 2) goto LAB_0142fba0;
        plVar10[5] = *(long *)puVar3;
        lVar18 = FUN_0176eb1c((long)&stack0x00000020 + 4,0);
        if ((lVar18 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_0142fba4;
        uVar17 = *(uint *)(plVar10 + 3);
        if (uVar17 < 3) goto LAB_0142fba0;
        plVar10[6] = lVar18;
        lVar18 = *(long *)puVar4;
        if (lVar18 != 0) {
          lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar18 == 0) goto LAB_0142fba4;
          uVar17 = *(uint *)(plVar10 + 3);
        }
        if (uVar17 < 4) goto LAB_0142fba0;
        plVar10[7] = *(long *)puVar4;
        if (unaff_x19[0x13] == 0) goto LAB_0142fb9c;
        FUN_0132138c(unaff_x19[0x13],iStack0000000000000024,&stack0x00000028,*(undefined8 *)puVar7);
        if (((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
            (plVar15 = *(long **)(CONCAT44(uStack000000000000002c,iStack0000000000000028) + 0x10),
            plVar15 == (long *)0x0)) ||
           (lVar18 = (**(code **)(*plVar15 + 0x818))(plVar15,*(undefined8 *)(*plVar15 + 0x820)),
           lVar18 == 0)) goto LAB_0142fb9c;
        uStack0000000000000020 = *(undefined4 *)(lVar18 + 0x18);
        lVar18 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar18 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0))
        goto LAB_0142fba4;
        uVar17 = *(uint *)(plVar10 + 3);
        if (uVar17 < 5) goto LAB_0142fba0;
        plVar10[8] = lVar18;
        lVar18 = *(long *)puVar5;
        if (lVar18 != 0) {
          lVar18 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar18 == 0) goto LAB_0142fba4;
          uVar17 = *(uint *)(plVar10 + 3);
        }
        if (uVar17 < 6) goto LAB_0142fba0;
        plVar10[9] = *(long *)puVar5;
        lVar18 = FUN_01600844(plVar10,0);
        iStack0000000000000024 = iStack0000000000000024 + 1;
        lVar13 = unaff_x19[0x13];
        if (lVar13 == 0) goto LAB_0142fb9c;
      }
      lVar13 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar13 != 0) &&
         (lVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar13,0), lVar13 != 0)) {
        uStack0000000000000020 = FUN_026a103c(lVar13,0);
        uVar11 = FUN_0176eb1c(&stack0x00000020,0);
        uVar11 = FUN_01600424(lVar18,*(undefined8 *)StringLiteral_10260,uVar11,0);
        plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
        iStack0000000000000028 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar18 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_13287,&stack0x00000028);
        if (plVar10 != (long *)0x0) {
          if ((lVar18 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar18,*(undefined8 *)(*plVar10 + 0x40)), lVar13 == 0)) {
LAB_0142fba4:
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_0142fba0:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar10[4] = lVar18;
          FUN_013f38b0(uVar11,plVar10,0);
          goto LAB_0142fb34;
        }
      }
    }
  }
LAB_0142fb9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


