/*
FUNCTION_NAME: FUN_01878678
ENTRY_POINT: 01878678
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8
FUN_01878678(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
            long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_03779776 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputBindingComposite<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StylePropertyValue>_Add__);
    thunk_FUN_00d48444(Method_System_Reflection_RuntimeConstructorInfo_DoInvoke__);
    thunk_FUN_00d48444(PTR_DAT_033f3538);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IXRInteractable,_float3>_Remove__
                      );
    thunk_FUN_00d48444(StringLiteral_12442);
    thunk_FUN_00d48444(StringLiteral_14186);
    thunk_FUN_00d48444(PTR_DAT_033f3b78);
    thunk_FUN_00d48444(StringLiteral_10364);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcalt_f32__);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>__ctor__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_Input_Compatibility_OVR_HandSkeleton_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_BinaryDataWriter_WritePrimitiveArray_sbyte__);
    thunk_FUN_00d48444(StringLiteral_4170);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DataTable>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_11458);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
    DAT_03779776 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  FUN_018803d4(param_1,param_3,param_4,param_2);
  if (param_4 == 0) goto LAB_01879064;
  uVar7 = FUN_01875aa4(param_4);
  puVar1 = Method_System_Collections_Generic_List<DataTable>_get_Count__;
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_01879064;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1) != 0) goto LAB_01878800;
    local_c0 = 0;
  }
  else {
LAB_01878800:
    uVar9 = *(undefined8 *)(param_4 + 0xd8);
    lVar10 = *(long *)Method_System_Collections_Generic_List<DataTable>_get_Count__;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar1;
    }
    puVar2 = StringLiteral_14186;
    lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
    if (lVar16 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar10 + 0xb8);
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar16 == 0) goto LAB_01879064;
      FUN_012d239c(lVar16,uVar14,
                   *(undefined8 *)
                    Method_Sirenix_Serialization_BinaryDataWriter_WritePrimitiveArray_sbyte__,0);
      lVar10 = *(long *)puVar1;
      *(long *)(*(long *)(lVar10 + 0xb8) + 0x18) = lVar16;
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar1;
    }
    puVar2 = StringLiteral_12442;
    lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
    if (lVar18 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar10 + 0xb8);
      lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar18 == 0) goto LAB_01879064;
      FUN_012d239c(lVar18,uVar14,*(undefined8 *)StringLiteral_4170,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar18;
    }
    local_c0 = FUN_010df764(uVar9,lVar16,lVar18,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List<StylePropertyValue>_Add__);
  }
  if (param_6 != 0) {
    FUN_01880014(param_1,param_3,param_6,param_2);
  }
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcalt_f32__;
  puVar2 = 
  Method_System_Xml_Serialization_XmlSerializationWriterInterpreter_WriteAnyElementContent__;
  puVar1 = PTR_DAT_033f3538;
  if (param_3 != (long *)0x0) {
    uVar4 = (**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270));
    do {
      iVar5 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
      if (iVar5 == 0xd) goto LAB_01878f8c;
      if (iVar5 != 5) {
        if (iVar5 != 4) {
          FUN_00ac2be8(param_3);
          uVar4 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
          local_b8 = thunk_FUN_00d48444(
                                       Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                       );
          uStack_b0 = 0xffffffffffffffff;
          local_a8 = uVar4;
          uVar9 = FUN_017a7f78(&local_b8,0);
          uVar14 = thunk_FUN_00d48444(StringLiteral_13059);
          uVar9 = FUN_015f5b28(uVar14,uVar9,0);
          uVar9 = FUN_01801b58(param_3,uVar9,0);
          uVar14 = thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<float>__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,uVar14);
        }
        plVar8 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
        if (plVar8 == (long *)0x0) goto LAB_01879064;
        uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        uVar7 = FUN_0187a7c0(param_1,param_3,uVar9);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(param_4 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = FUN_0186a620(*(long *)(param_4 + 0xd8),uVar9);
          if (lVar10 == 0) {
            plVar8 = *(long **)(param_1 + 0x28);
            if (plVar8 != (long *)0x0) {
              lVar10 = *plVar8;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar7 != 0) {
                piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10364) {
                    puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_01878b44;
                  }
                  uVar7 = uVar7 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10364,0);
LAB_01878b44:
              iVar5 = (*(code *)*puVar11)(plVar8,puVar11[1]);
              if (3 < iVar5) {
                plVar8 = *(long **)(param_1 + 0x28);
                uVar14 = (**(code **)(*param_3 + 0x278))(param_3,*(undefined8 *)(*param_3 + 0x280));
                if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0
                            ) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar15 = FUN_01731954(0);
                uVar15 = FUN_018652e8(*(undefined8 *)StringLiteral_11458,uVar15,uVar9,
                                      *(undefined8 *)(param_4 + 0x60));
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<IXmlNode>__ctor__ +
                            0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar12 = thunk_FUN_00d6225c(param_3,*(undefined8 *)PTR_DAT_033f3b78);
                uVar14 = FUN_01802a3c(uVar12,uVar14,uVar15,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar10 = *plVar8;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
                if (uVar7 != 0) {
                  piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10364) {
                      puVar11 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto LAB_01878c54;
                    }
                    uVar7 = uVar7 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar7 != 0);
                }
                puVar11 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_10364,1);
LAB_01878c54:
                (*(code *)*puVar11)(plVar8,4,uVar14,0,puVar11[1]);
              }
            }
            local_68 = *(undefined8 *)(param_4 + 0xc0);
            lVar10 = *(long *)(*(long *)
                                Oculus_Interaction_Input_Compatibility_OVR_HandSkeleton_<>c_TypeInfo
                              + 0x20);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            pcVar13 = (char *)thunk_FUN_00d32ed4(&local_68,*(undefined8 *)(lVar10 + 0x80));
            if (*pcVar13 == '\0') {
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
            }
            else {
              iVar5 = FUN_00bea4ac(&local_68,
                                   *(undefined8 *)
                                    Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_DiscriminatedUnionConverter_Union>__ctor__
                                  );
            }
            if (iVar5 == 1) {
              lVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_01731954(0);
              plVar8 = *(long **)(param_4 + 0x60);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar15 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              uVar12 = thunk_FUN_00d48444(Method_System_Security_SecurityElement_AddChild__);
              uVar9 = FUN_018652e8(uVar12,uVar14,uVar9,uVar15);
              uVar9 = FUN_01801b58(param_3,uVar9,0);
              uVar14 = thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<float>__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar9,uVar14);
            }
            uVar7 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
            if ((uVar7 & 1) != 0) {
              FUN_018834d4(param_1,param_4,param_5,param_3,uVar9,param_2);
            }
          }
          else if ((*(char *)(lVar10 + 0x80) == '\0') &&
                  (uVar7 = FUN_01883644(param_1,param_3,lVar10,param_2), (uVar7 & 1) != 0)) {
            lVar16 = *(long *)(lVar10 + 0x48);
            if (lVar16 == 0) {
              lVar16 = FUN_018791ac(param_1,*(undefined8 *)(lVar10 + 0x40));
              *(long *)(lVar10 + 0x48) = lVar16;
            }
            lVar16 = FUN_01879628(param_1,lVar16,*(undefined8 *)(lVar10 + 0x78),param_4,param_5);
            uVar7 = FUN_01808ca8(param_3,*(undefined8 *)(lVar10 + 0x48),lVar16 != 0,0);
            if ((uVar7 & 1) == 0) {
              lVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_01731954(0);
              uVar15 = thunk_FUN_00d48444(Method_Obi_ObiActorBlueprint_GenerateImmediate__);
              uVar9 = FUN_018651d4(uVar15,uVar14,uVar9);
              uVar9 = FUN_01801b58(param_3,uVar9,0);
              uVar14 = thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<float>__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar9,uVar14);
            }
            FUN_018838b8(uVar7,param_3,lVar10,local_c0);
            uVar7 = FUN_0187f46c(param_1,lVar10,lVar16,param_4,param_5,param_3,param_2);
            if ((uVar7 & 1) == 0) {
              FUN_018834d4(param_1,param_4,param_5,param_3,uVar9,param_2);
            }
          }
          else {
            uVar7 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
            if ((uVar7 & 1) != 0) {
              FUN_018838b8(uVar7,param_3,lVar10,local_c0);
              FUN_018834d4(param_1,param_4,param_5,param_3,uVar9,param_2);
            }
          }
        }
      }
      uVar7 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
    } while ((uVar7 & 1) != 0);
    FUN_0188082c(param_1,param_3,param_4,param_2,
                 *(undefined8 *)Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
LAB_01878f8c:
    if (local_c0 != 0) {
      FUN_0129b5d0(local_c0,&local_90,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputBindingComposite<float>__ctor__);
      while( true ) {
        uVar7 = FUN_012bf140(&local_90,*(undefined8 *)puVar1);
        if ((uVar7 & 1) == 0) break;
        auVar19 = FUN_00bef328(&local_90,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<IXRInteractable,_float3>_Remove__
                              );
        local_a0 = auVar19;
        uVar9 = FUN_00bef430(local_a0,*(undefined8 *)puVar2);
        uVar6 = FUN_00bef534(local_a0,*(undefined8 *)puVar3);
        FUN_01882ef0(param_1,param_2,param_3,param_4,uVar4,uVar9,uVar6,1);
      }
      FUN_012bf83c(&local_90,
                   *(undefined8 *)Method_System_Reflection_RuntimeConstructorInfo_DoInvoke__);
    }
    FUN_01880600(param_1,param_3,param_4,param_2);
    return param_2;
  }
LAB_01879064:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


