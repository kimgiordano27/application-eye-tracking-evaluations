/*
FUNCTION_NAME: FUN_013f1a88
ENTRY_POINT: 013f1a88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_013f1a88(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 local_70;
  long local_68;
  
  plVar6 = param_1;
  if ((DAT_03776898 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_72>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(StringLiteral_5009);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
                      );
    thunk_FUN_00d48444(FullSerializer_Internal_fsReflectedConverter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2590);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_3202);
    thunk_FUN_00d48444(Method_System_Xml_Schema_Compiler_CompileAttribute__);
    thunk_FUN_00d48444(System_ComponentModel_DateTimeOffsetConverter_var);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRInput_OVRControllerBase>_get_Item__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputActionState_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_UI_DebugUIHandlerMessageBox_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_11949);
    thunk_FUN_00d48444(System_Xml_ValidateNames_TypeInfo);
    thunk_FUN_00d48444(Method_System_RuntimeType_GetObjectData__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    plVar6 = (long *)thunk_FUN_00d48444(Newtonsoft_Json_Schema_JsonSchemaType_var);
    DAT_03776898 = 1;
  }
  puVar4 = StringLiteral_302;
  local_70 = 0;
  plVar16 = (long *)param_1[4];
  if ((int)param_1[2] == 1) {
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    if (param_1[5] != 0) {
      if (*(char *)(param_1[5] + 0x10) != '\0') {
        plVar9 = (long *)param_1[10];
        uVar17 = (int)param_1[0xb] + 1;
        *(uint *)(param_1 + 0xb) = uVar17;
joined_r0x013f1e4c:
        if (plVar9 == (long *)0x0) goto LAB_013f23ec;
        if ((int)uVar17 < (int)*(uint *)(plVar9 + 3)) {
          if (uVar17 < *(uint *)(plVar9 + 3)) {
            if ((plVar16 == (long *)0x0) || (lVar11 = plVar16[0x14], lVar11 == 0))
            goto LAB_013f23ec;
            if (uVar17 < *(uint *)(lVar11 + 0x18)) {
              uVar22 = *(undefined8 *)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
              lVar12 = plVar16[0x15];
              lVar15 = plVar16[0x16];
              lVar21 = param_1[7];
              lVar19 = plVar9[(long)(int)uVar17 + 4];
              uVar18 = (**(code **)(*plVar16 + 0x318))(plVar16,*(undefined8 *)(*plVar16 + 800));
              uVar8 = (**(code **)(*plVar16 + 0x338))(plVar16,*(undefined8 *)(*plVar16 + 0x340));
              lVar11 = FUN_01460f08(*(undefined4 *)((long)param_1 + 0x4c),uVar17,lVar19,uVar22,
                                    lVar15,lVar21,lVar12,lVar11,uVar18,uVar8,param_1[8],param_1[5],
                                    (char)param_1[9],param_1[6],0);
              param_1[3] = lVar11;
              *(undefined4 *)(param_1 + 2) = 1;
              return 1;
            }
          }
LAB_013f2428:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194(plVar6);
        }
        if (param_1[5] == 0) goto LAB_013f23ec;
        if (*(char *)(param_1[5] + 0x10) == '\0') {
          if (plVar16 == (long *)0x0) goto LAB_013f23ec;
          if (*(int *)((long)plVar16 + 0x24) < 3) {
            return 0;
          }
          iVar20 = *(int *)(*(long *)puVar4 + 0xe0);
          puVar7 = (undefined8 *)
                   Method_System_Collections_Generic_List<OVRInput_OVRControllerBase>_get_Item__;
        }
        else {
          if (plVar16 == (long *)0x0) goto LAB_013f23ec;
          FUN_013efe00(plVar16,plVar9);
          puVar1 = StringLiteral_2590;
          plVar6 = (long *)param_1[6];
          if (plVar6 != (long *)0x0) {
            uVar18 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
            lVar11 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x17) * 0x10 + 0x138);
                  goto LAB_013f21c4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar1,0x17);
LAB_013f21c4:
            (*(code *)*puVar7)(plVar6,uVar18,puVar7[1]);
          }
          lVar11 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
          if (lVar11 == 0) goto LAB_013f23ec;
          *(undefined4 *)(lVar11 + 0x1c) = 1;
          puVar1 = Method_System_Xml_Schema_Compiler_CompileAttribute__;
          lVar11 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
          uVar18 = FUN_00da4fb8(*(undefined8 *)puVar1,0);
          if (lVar11 == 0) goto LAB_013f23ec;
          *(undefined8 *)(lVar11 + 0x28) = uVar18;
          lVar11 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
          if (lVar11 == 0) goto LAB_013f23ec;
          *(long *)(lVar11 + 0x30) = plVar16[0x14];
          if (*(int *)((long)plVar16 + 0x24) < 3) {
            return 0;
          }
          iVar20 = *(int *)(*(long *)puVar4 + 0xe0);
          puVar7 = (undefined8 *)System_Xml_ValidateNames_TypeInfo;
        }
        if (iVar20 == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*puVar7,0);
      }
      return 0;
    }
  }
  else {
    plVar6 = (long *)0x0;
    if ((int)param_1[2] != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1[10] = 0;
    puVar2 = StringLiteral_11949;
    puVar1 = Newtonsoft_Json_Schema_JsonSchemaType_var;
    if (plVar16 != (long *)0x0) {
      lVar11 = plVar16[0x15];
      if ((lVar11 == 0) || (uVar13 = *(ulong *)(lVar11 + 0x18), uVar13 == 0)) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar18 = *(undefined8 *)puVar2;
LAB_013f2194:
        FUN_026610e4(uVar18,0);
        if (param_1[5] != 0) {
          *(undefined1 *)(param_1[5] + 0x11) = 1;
          return 0;
        }
      }
      else {
        if (0 < (int)uVar13) {
          uVar17 = 0;
          do {
            if ((uint)uVar13 <= uVar17) goto LAB_013f2428;
            lVar11 = *(long *)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_013f23ec;
            plVar6 = (long *)FUN_013e77e4(lVar11,param_1[6],uVar17);
            if (((ulong)plVar6 & 1) == 0) {
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar18 = *(undefined8 *)puVar1;
              goto LAB_013f2194;
            }
            lVar11 = plVar16[0x15];
            if (lVar11 == 0) goto LAB_013f23ec;
            uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)*(uint *)(lVar11 + 0x18));
        }
        puVar5 = StringLiteral_3202;
        puVar3 = 
        Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
        ;
        puVar2 = FullSerializer_Internal_fsReflectedConverter_TypeInfo;
        puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        local_70 = local_70 & 0xffffffff;
        lVar11 = plVar16[0x14];
        if (lVar11 != 0) {
          uVar17 = 0;
          while (uVar10 = (uint)*(undefined8 *)(lVar11 + 0x18), (int)uVar17 < (int)uVar10) {
            if (uVar10 <= uVar17) goto LAB_013f2428;
            lVar11 = *(long *)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_013f23ec;
            uVar18 = *(undefined8 *)(lVar11 + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar6 = (long *)FUN_0268b4e0(uVar18,0,0);
            if (((ulong)plVar6 & 1) != 0) {
              uVar18 = FUN_0176eb1c((long)&local_70 + 4,0);
              uVar18 = FUN_01600424(*(undefined8 *)
                                     UnityEngine_Rendering_UI_DebugUIHandlerMessageBox_TypeInfo,
                                    uVar18,*(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    ,0);
LAB_013f2178:
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar4);
              }
              goto LAB_013f2194;
            }
            lVar11 = *(long *)(lVar11 + 0x18);
            local_70 = local_70 & 0xffffffff00000000;
            if (lVar11 == 0) goto LAB_013f23ec;
            if (0 < *(int *)(lVar11 + 0x18)) {
              iVar20 = 0;
              do {
                plVar6 = (long *)FUN_0132138c(lVar11,iVar20,&local_68,*(undefined8 *)puVar2);
                if (local_68 == 0) goto LAB_013f23ec;
                iVar20 = 0;
                while( true ) {
                  if (*(long *)(local_68 + 0x18) == 0) goto LAB_013f23ec;
                  if (*(int *)(*(long *)(local_68 + 0x18) + 0x18) <= iVar20) break;
                  FUN_0132138c(lVar11,local_70 & 0xffffffff,&local_68,*(undefined8 *)puVar2);
                  if (((local_68 == 0) || (*(long *)(local_68 + 0x18) == 0)) ||
                     (FUN_0132138c(*(long *)(local_68 + 0x18),iVar20,&local_68,*(undefined8 *)puVar3
                                  ), lVar12 = local_68, local_68 == 0)) goto LAB_013f23ec;
                  uVar18 = *(undefined8 *)(local_68 + 0x10);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar13 = FUN_0268b4e0(uVar18,0,0);
                  if ((uVar13 & 1) != 0) {
                    uVar18 = FUN_0176eb1c((long)&local_70 + 4,0);
                    uVar8 = FUN_0176eb1c(&local_70,0);
                    uVar18 = FUN_0160073c(*(undefined8 *)Method_System_RuntimeType_GetObjectData__,
                                          uVar18,*(undefined8 *)
                                                  System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_TypeInfo
                                          ,uVar8,0);
                    goto LAB_013f2178;
                  }
                  FUN_0132138c(lVar11,local_70 & 0xffffffff,&local_68,*(undefined8 *)puVar2);
                  if (local_68 == 0) goto LAB_013f23ec;
                  if (*(char *)(local_68 + 0x10) != '\0') {
                    uVar18 = *(undefined8 *)(lVar12 + 0x18);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar13 = FUN_0268b4e0(uVar18,0,0);
                    if ((uVar13 & 1) != 0) {
                      plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                      puVar3 = 
                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                      ;
                      puVar2 = UnityEngine_InputSystem_InputActionState_TypeInfo;
                      puVar1 = 
                      System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_TypeInfo
                      ;
                      if (plVar16 == (long *)0x0) goto LAB_013f23ec;
                      plVar6 = (long *)0x0;
                      if ((*(long *)
                            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                           != 0) &&
                         (plVar6 = (long *)thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                                                  ,*(undefined8 *)(*plVar16 + 0x40)),
                         plVar6 == (long *)0x0)) goto LAB_013f242c;
                      if ((int)plVar16[3] == 0) goto LAB_013f2428;
                      plVar16[4] = *(long *)puVar3;
                      lVar11 = FUN_0176eb1c((long)&local_70 + 4,0);
                      plVar6 = (long *)0x0;
                      if ((lVar11 != 0) &&
                         (plVar6 = (long *)thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                      (*plVar16 + 0x40)),
                         plVar6 == (long *)0x0)) goto LAB_013f242c;
                      uVar17 = *(uint *)(plVar16 + 3);
                      if (uVar17 < 2) goto LAB_013f2428;
                      plVar16[5] = lVar11;
                      lVar11 = *(long *)puVar1;
                      plVar6 = (long *)0x0;
                      if (lVar11 != 0) {
                        plVar6 = (long *)thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar16 + 0x40))
                        ;
                        if (plVar6 == (long *)0x0) goto LAB_013f242c;
                        uVar17 = *(uint *)(plVar16 + 3);
                      }
                      if (uVar17 < 3) goto LAB_013f2428;
                      plVar16[6] = *(long *)puVar1;
                      lVar11 = FUN_0176eb1c(&local_70,0);
                      plVar6 = (long *)0x0;
                      if ((lVar11 != 0) &&
                         (plVar6 = (long *)thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                      (*plVar16 + 0x40)),
                         plVar6 == (long *)0x0)) goto LAB_013f242c;
                      uVar17 = *(uint *)(plVar16 + 3);
                      if (uVar17 < 4) goto LAB_013f2428;
                      plVar16[7] = lVar11;
                      lVar11 = *(long *)puVar2;
                      plVar6 = (long *)0x0;
                      if (lVar11 != 0) {
                        plVar6 = (long *)thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar16 + 0x40))
                        ;
                        if (plVar6 == (long *)0x0) goto LAB_013f242c;
                        uVar17 = *(uint *)(plVar16 + 3);
                      }
                      if (uVar17 < 5) goto LAB_013f2428;
                      plVar16[8] = *(long *)puVar2;
                      uVar18 = FUN_01600844(plVar16,0);
                      goto LAB_013f2178;
                    }
                  }
                  iVar20 = iVar20 + 1;
                  plVar6 = (long *)FUN_0132138c(lVar11,local_70 & 0xffffffff,&local_68,
                                                *(undefined8 *)puVar2);
                  if (local_68 == 0) goto LAB_013f23ec;
                }
                iVar20 = (int)local_70 + 1;
                local_70 = CONCAT44(local_70._4_4_,iVar20);
              } while (iVar20 < *(int *)(lVar11 + 0x18));
            }
            uVar17 = local_70._4_4_ + 1;
            local_70 = CONCAT44(uVar17,(int)local_70);
            lVar11 = plVar16[0x14];
            if (lVar11 == 0) goto LAB_013f23ec;
          }
          plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)
                                         System_ComponentModel_DateTimeOffsetConverter_var);
          param_1[10] = (long)plVar6;
          if (plVar6 != (long *)0x0) {
            uVar17 = 0;
            plVar9 = plVar6;
            goto LAB_013f22b4;
          }
        }
      }
    }
  }
LAB_013f23ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_013f22b4:
  if ((int)plVar9[3] <= (int)uVar17) {
    uVar17 = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    goto joined_r0x013f1e4c;
  }
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                               Field_<PrivateImplementationDetails>_6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31
                             );
  if (lVar11 == 0) goto LAB_013f23ec;
  FUN_017b46ec(lVar11,0);
  plVar6 = (long *)thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
  if (plVar6 == (long *)0x0) {
LAB_013f242c:
    uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar18,0);
  }
  if (*(uint *)(plVar9 + 3) <= uVar17) goto LAB_013f2428;
  lVar12 = (long)(int)uVar17;
  plVar9[lVar12 + 4] = lVar11;
  lVar11 = plVar16[0x14];
  if (lVar11 == 0) goto LAB_013f23ec;
  if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_013f2428;
  lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
  if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) ||
     (lVar15 = param_1[10], lVar15 == 0)) goto LAB_013f23ec;
  if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_013f2428;
  lVar12 = *(long *)(lVar15 + lVar12 * 8 + 0x20);
  uVar10 = *(uint *)(lVar11 + 0x18);
  plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                                ,(ulong)uVar10);
  if (lVar12 == 0) goto LAB_013f23ec;
  *(long **)(lVar12 + 0x10) = plVar9;
  plVar6 = plVar9;
  if (0 < (int)uVar10) {
    uVar13 = 0;
    do {
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if ((lVar11 == 0) || (FUN_017b46ec(lVar11,0), plVar9 == (long *)0x0)) goto LAB_013f23ec;
      plVar6 = (long *)thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (plVar6 == (long *)0x0) goto LAB_013f242c;
      if (*(uint *)(plVar9 + 3) <= uVar13) goto LAB_013f2428;
      plVar9[uVar13 + 4] = lVar11;
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  plVar9 = (long *)param_1[10];
  uVar17 = uVar17 + 1;
  if (plVar9 == (long *)0x0) goto LAB_013f23ec;
  goto LAB_013f22b4;
}


