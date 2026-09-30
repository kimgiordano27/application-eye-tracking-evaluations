/*
FUNCTION_NAME: FUN_0142ed58
ENTRY_POINT: 0142ed58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


bool FUN_0142ed58(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

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
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  
  if ((DAT_037769c9 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__0__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_4997);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4842);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(StringLiteral_13354);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    thunk_FUN_00d48444(StringLiteral_13287);
    thunk_FUN_00d48444(PTR_DAT_033f17f8);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(PTR_DAT_033eaaf8);
    thunk_FUN_00d48444(Autohand_GrabbableBase_<IgnoreHandCollision>d__49_TypeInfo);
    thunk_FUN_00d48444(Method_TinyJSON_JSON_SupportTypeForAOT<double>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7233);
    thunk_FUN_00d48444(PTR_DAT_033ec5a0);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                      );
    thunk_FUN_00d48444(StringLiteral_10260);
    DAT_037769c9 = 1;
  }
  puVar6 = Method_System_Net_WebResponseStream_<>c__DisplayClass41_0_<ProcessRead>b__0__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar2 = System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo;
  local_70 = 0;
  iStack_6c = 0;
  lVar10 = param_1[0x13];
  if (lVar10 != 0) {
    iVar9 = 0;
    do {
      puVar7 = StringLiteral_13354;
      iVar19 = *(int *)(lVar10 + 0x18);
      if (iVar19 <= iVar9) {
        if (iVar19 < 1) goto LAB_0142f6d0;
        iVar9 = 0;
        goto LAB_0142f63c;
      }
      FUN_0132138c(lVar10,iVar9,&local_68,*(undefined8 *)StringLiteral_13354);
      lVar10 = CONCAT44(uStack_64,local_68);
      if ((lVar10 == 0) || (plVar11 = *(long **)(lVar10 + 0x10), plVar11 == (long *)0x0)) break;
      uVar12 = (**(code **)(*plVar11 + 0x4d8))(plVar11,*(undefined8 *)(*plVar11 + 0x4e0));
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar13 = FUN_0268b4e0(uVar12,0,0);
      if ((uVar13 & 1) == 0) {
        uVar12 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar13 = FUN_02681b9c(uVar12,0,0);
        if ((uVar13 & 1) != 0) {
          plVar11 = *(long **)(lVar10 + 0x10);
          if (((plVar11 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar11 + 0x4d8))(plVar11,*(undefined8 *)(*plVar11 + 0x4e0)),
              lVar14 == 0)) || (lVar14 = FUN_0268fd10(lVar14,0), lVar14 == 0)) break;
          uVar12 = FUN_0269fe30(lVar14,0);
          lVar14 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
          if (lVar14 == 0) break;
          uVar17 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar14,0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar13 = FUN_02681b9c(uVar12,uVar17,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)StringLiteral_7233,0);
            return false;
          }
        }
      }
      else {
        plVar11 = *(long **)(lVar10 + 0x10);
        if (plVar11 == (long *)0x0) break;
        (**(code **)(*plVar11 + 0x4c8))(plVar11,param_1[5],*(undefined8 *)(*plVar11 + 0x4d0));
        if (*(long *)(lVar10 + 0x10) == 0) break;
        FUN_01402b58(*(long *)(lVar10 + 0x10),param_2,1,0);
        if (3 < (int)param_1[7]) {
          plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
          local_68 = iVar9;
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
          if (plVar11 == (long *)0x0) break;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if ((int)plVar11[3] == 0) goto LAB_0142fba0;
          plVar11[4] = lVar14;
          plVar16 = *(long **)(lVar10 + 0x10);
          if (((plVar16 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
              lVar14 == 0)) || (lVar14 = FUN_0268fd4c(lVar14,0), lVar14 == 0)) break;
          local_74 = FUN_02681c0c(lVar14,0);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_74);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 2) goto LAB_0142fba0;
          plVar11[5] = lVar14;
          plVar16 = *(long **)(lVar10 + 0x10);
          if ((plVar16 == (long *)0x0) ||
             (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
             lVar14 == 0)) break;
          local_78 = FUN_02681c0c(lVar14,0);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 3) goto LAB_0142fba0;
          plVar11[6] = lVar14;
          if ((*(long *)(lVar10 + 0x10) == 0) ||
             (lVar14 = FUN_013fba34(*(long *)(lVar10 + 0x10),0), lVar14 == 0)) break;
          local_7c = FUN_02681c0c(lVar14,0);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_7c);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 4) goto LAB_0142fba0;
          plVar11[7] = lVar14;
          FUN_013f38b0(*(undefined8 *)Method_System_Collections_Generic_List<WeakReference>__ctor__,
                       plVar11,0);
        }
      }
      lVar14 = *(long *)(lVar10 + 0x28);
      if (lVar14 == 0) break;
      if (*(int *)(lVar14 + 0x18) < 1) {
        if (*(long *)(lVar10 + 0x30) == 0) break;
        if (0 < *(int *)(*(long *)(lVar10 + 0x30) + 0x18)) goto LAB_0142f27c;
      }
      else {
LAB_0142f27c:
        plVar11 = *(long **)(lVar10 + 0x10);
        uVar12 = FUN_01325140(lVar14,*(undefined8 *)
                                      Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                             );
        if ((*(long *)(lVar10 + 0x30) == 0) ||
           (uVar17 = FUN_01325140(*(long *)(lVar10 + 0x30),*(undefined8 *)StringLiteral_10837),
           plVar11 == (long *)0x0)) break;
        (**(code **)(*plVar11 + 0x8e8))
                  (plVar11,uVar12,uVar17,param_4 & 1,*(undefined8 *)(*plVar11 + 0x8f0));
        if (3 < (int)param_1[7]) {
          plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
          local_68 = iVar9;
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
          if (plVar11 == (long *)0x0) break;
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if ((int)plVar11[3] == 0) goto LAB_0142fba0;
          plVar11[4] = lVar14;
          if (*(long *)(lVar10 + 0x28) == 0) break;
          local_74 = *(undefined4 *)(*(long *)(lVar10 + 0x28) + 0x18);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_74);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 2) goto LAB_0142fba0;
          plVar11[5] = lVar14;
          if (*(long *)(lVar10 + 0x30) == 0) break;
          local_78 = *(undefined4 *)(*(long *)(lVar10 + 0x30) + 0x18);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 3) goto LAB_0142fba0;
          plVar11[6] = lVar14;
          plVar16 = *(long **)(lVar10 + 0x10);
          if (((plVar16 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
              lVar14 == 0)) || (lVar14 = FUN_0268fd4c(lVar14,0), lVar14 == 0)) break;
          local_7c = FUN_02681c0c(lVar14,0);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_7c);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 4) goto LAB_0142fba0;
          plVar11[7] = lVar14;
          plVar16 = *(long **)(lVar10 + 0x10);
          if ((plVar16 == (long *)0x0) ||
             (lVar14 = (**(code **)(*plVar16 + 0x4d8))(plVar16,*(undefined8 *)(*plVar16 + 0x4e0)),
             lVar14 == 0)) break;
          local_80 = FUN_02681c0c(lVar14,0);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_80);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 5) goto LAB_0142fba0;
          plVar11[8] = lVar14;
          if ((*(long *)(lVar10 + 0x10) == 0) ||
             (lVar14 = FUN_013fba34(*(long *)(lVar10 + 0x10),0), lVar14 == 0)) break;
          local_84 = FUN_02681c0c(lVar14,0);
          lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_84);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar11 + 3) < 6) goto LAB_0142fba0;
          plVar11[9] = lVar14;
          FUN_013f38b0(*(undefined8 *)PTR_DAT_033eaaf8,plVar11,0);
        }
      }
      plVar11 = *(long **)(lVar10 + 0x10);
      if (plVar11 == (long *)0x0) break;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x4d8))(plVar11,*(undefined8 *)(*plVar11 + 0x4e0));
      if ((*(long *)(lVar10 + 0x10) == 0) ||
         (uVar12 = FUN_013fba34(*(long *)(lVar10 + 0x10),0), plVar11 == (long *)0x0)) break;
      lVar10 = *plVar11;
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((*(byte *)(lVar10 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f17f8))
      {
        lVar14 = *(long *)
                  Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__;
        if ((*(byte *)(lVar10 + 300) < *(byte *)(lVar14 + 300)) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar14 + 300) * 8 + -8) != lVar14))
        {
LAB_0142fbb0:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar11);
        }
        if ((*(byte *)(*plVar11 + 300) < *(byte *)(lVar14 + 300)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar14 + 300) * 8 + -8) != lVar14
           )) goto LAB_0142fbb0;
        FUN_02669a58(plVar11,uVar12,0);
      }
      else {
        lVar10 = FUN_0268fd4c(plVar11,0);
        if (lVar10 == 0) break;
        FUN_010e58e8(lVar10,&local_68,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
        if (CONCAT44(uStack_64,local_68) == 0) break;
        FUN_02666150(CONCAT44(uStack_64,local_68),uVar12,0);
      }
      lVar10 = param_1[0x13];
      iVar9 = iVar9 + 1;
      if (lVar10 == 0) break;
    } while( true );
  }
  goto LAB_0142fb9c;
  while( true ) {
    iVar19 = 0;
    while (iVar19 < *(int *)(lVar14 + 0x18)) {
      lVar15 = param_1[0x12];
      FUN_0132138c(lVar14,iVar19,&local_68,*(undefined8 *)puVar4);
      if (lVar15 == 0) goto LAB_0142fb9c;
      FUN_0129de0c(lVar15,&local_68,*(undefined8 *)puVar2);
      lVar14 = *(long *)(lVar10 + 0x30);
      iVar19 = iVar19 + 1;
      if (lVar14 == 0) goto LAB_0142fb9c;
    }
    lVar10 = param_1[0x13];
    if (lVar10 == 0) goto LAB_0142fb9c;
    iVar19 = *(int *)(lVar10 + 0x18);
    iVar9 = iVar9 + 1;
    if (iVar19 <= iVar9) break;
LAB_0142f63c:
    FUN_0132138c(lVar10,iVar9,&local_68,*(undefined8 *)puVar7);
    lVar10 = CONCAT44(uStack_64,local_68);
    if ((lVar10 == 0) || (lVar14 = *(long *)(lVar10 + 0x30), lVar14 == 0)) goto LAB_0142fb9c;
  }
LAB_0142f6d0:
  puVar3 = StringLiteral_4997;
  puVar2 = Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
  if (0 < iVar19) {
    iVar9 = 0;
    do {
      FUN_0132138c(lVar10,iVar9,&local_68,*(undefined8 *)puVar7);
      lVar10 = CONCAT44(uStack_64,local_68);
      if ((lVar10 == 0) || (lVar14 = *(long *)(lVar10 + 0x28), lVar14 == 0)) goto LAB_0142fb9c;
      iVar19 = 0;
      while (iVar19 < *(int *)(lVar14 + 0x18)) {
        lVar15 = param_1[0x12];
        FUN_0132138c(lVar14,iVar19,&local_68,*(undefined8 *)puVar5);
        if ((CONCAT44(uStack_64,local_68) == 0) ||
           (iVar8 = FUN_02681c0c(CONCAT44(uStack_64,local_68),0), lVar15 == 0)) goto LAB_0142fb9c;
        local_68 = iVar8;
        FUN_0129a054(lVar15,&local_68,lVar10,*(undefined8 *)puVar6);
        lVar14 = *(long *)(lVar10 + 0x28);
        iVar19 = iVar19 + 1;
        if (lVar14 == 0) goto LAB_0142fb9c;
      }
      lVar15 = *(long *)(lVar10 + 0x30);
      if (*(int *)(lVar14 + 0x18) < 1) {
        if (lVar15 == 0) goto LAB_0142fb9c;
        if (0 < *(int *)(lVar15 + 0x18)) goto LAB_0142f794;
      }
      else {
        if (lVar15 == 0) goto LAB_0142fb9c;
LAB_0142f794:
        lVar14 = *(long *)puVar2;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        uVar13 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
        if ((uVar13 & 1) == 0) {
          *(undefined4 *)(lVar15 + 0x18) = 0;
        }
        else {
          iVar19 = *(int *)(lVar15 + 0x18);
          *(undefined4 *)(lVar15 + 0x18) = 0;
          if (0 < iVar19) {
            FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar19,0);
          }
        }
        lVar14 = *(long *)(lVar10 + 0x28);
        if (lVar14 == 0) goto LAB_0142fb9c;
        lVar15 = *(long *)puVar3;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        uVar13 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
        if ((uVar13 & 1) == 0) {
          *(undefined4 *)(lVar14 + 0x18) = 0;
        }
        else {
          iVar19 = *(int *)(lVar14 + 0x18);
          *(undefined4 *)(lVar14 + 0x18) = 0;
          if (0 < iVar19) {
            FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
          }
        }
        *(undefined4 *)(lVar10 + 0x1c) = 0;
        *(undefined4 *)(lVar10 + 0x20) = 0;
        *(undefined1 *)(lVar10 + 0x40) = 1;
      }
      lVar10 = param_1[0x13];
      if (lVar10 == 0) goto LAB_0142fb9c;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar10 + 0x18));
  }
  iVar9 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
  puVar5 = Method_TinyJSON_JSON_SupportTypeForAOT<double>__;
  puVar4 = 
  Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__;
  puVar3 = Autohand_GrabbableBase_<IgnoreHandCollision>d__49_TypeInfo;
  puVar2 = PTR_DAT_033ea8a0;
  if (iVar9 < 4) {
LAB_0142fb34:
    if (param_1[0x13] != 0) {
      return 0 < *(int *)(param_1[0x13] + 0x18);
    }
  }
  else {
    iStack_6c = 0;
    lVar14 = param_1[0x13];
    lVar10 = *(long *)PTR_DAT_033ec5a0;
    if (lVar14 != 0) {
      while (iStack_6c < *(int *)(lVar14 + 0x18)) {
        plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
        if (plVar11 == (long *)0x0) goto LAB_0142fb9c;
        if ((lVar10 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
        goto LAB_0142fba4;
        uVar18 = *(uint *)(plVar11 + 3);
        if (uVar18 == 0) goto LAB_0142fba0;
        plVar11[4] = lVar10;
        lVar10 = *(long *)puVar3;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar10 == 0) goto LAB_0142fba4;
          uVar18 = *(uint *)(plVar11 + 3);
        }
        if (uVar18 < 2) goto LAB_0142fba0;
        plVar11[5] = *(long *)puVar3;
        lVar10 = FUN_0176eb1c(&iStack_6c,0);
        if ((lVar10 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
        goto LAB_0142fba4;
        uVar18 = *(uint *)(plVar11 + 3);
        if (uVar18 < 3) goto LAB_0142fba0;
        plVar11[6] = lVar10;
        lVar10 = *(long *)puVar4;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar10 == 0) goto LAB_0142fba4;
          uVar18 = *(uint *)(plVar11 + 3);
        }
        if (uVar18 < 4) goto LAB_0142fba0;
        plVar11[7] = *(long *)puVar4;
        if (param_1[0x13] == 0) goto LAB_0142fb9c;
        FUN_0132138c(param_1[0x13],iStack_6c,&local_68,*(undefined8 *)puVar7);
        if (((CONCAT44(uStack_64,local_68) == 0) ||
            (plVar16 = *(long **)(CONCAT44(uStack_64,local_68) + 0x10), plVar16 == (long *)0x0)) ||
           (lVar10 = (**(code **)(*plVar16 + 0x818))(plVar16,*(undefined8 *)(*plVar16 + 0x820)),
           lVar10 == 0)) goto LAB_0142fb9c;
        local_70 = *(undefined4 *)(lVar10 + 0x18);
        lVar10 = FUN_0176eb1c(&local_70,0);
        if ((lVar10 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
        goto LAB_0142fba4;
        uVar18 = *(uint *)(plVar11 + 3);
        if (uVar18 < 5) goto LAB_0142fba0;
        plVar11[8] = lVar10;
        lVar10 = *(long *)puVar5;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar10 == 0) goto LAB_0142fba4;
          uVar18 = *(uint *)(plVar11 + 3);
        }
        if (uVar18 < 6) goto LAB_0142fba0;
        plVar11[9] = *(long *)puVar5;
        lVar10 = FUN_01600844(plVar11,0);
        iStack_6c = iStack_6c + 1;
        lVar14 = param_1[0x13];
        if (lVar14 == 0) goto LAB_0142fb9c;
      }
      lVar14 = (**(code **)(*param_1 + 0x4b8))(param_1,*(undefined8 *)(*param_1 + 0x4c0));
      if ((lVar14 != 0) &&
         (lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar14,0), lVar14 != 0)) {
        local_70 = FUN_026a103c(lVar14,0);
        uVar12 = FUN_0176eb1c(&local_70,0);
        uVar12 = FUN_01600424(lVar10,*(undefined8 *)StringLiteral_10260,uVar12,0);
        plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
        local_68 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
        lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_13287,&local_68);
        if (plVar11 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar14 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0)) {
LAB_0142fba4:
            uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar12,0);
          }
          if ((int)plVar11[3] == 0) {
LAB_0142fba0:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar11[4] = lVar10;
          FUN_013f38b0(uVar12,plVar11,0);
          goto LAB_0142fb34;
        }
      }
    }
  }
LAB_0142fb9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


