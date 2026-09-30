/*
FUNCTION_NAME: FUN_0153db8c
ENTRY_POINT: 0153db8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0153e6d0) */
/* WARNING: Removing unreachable block (ram,0x0153e554) */

undefined8 FUN_0153db8c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = Sirenix_Serialization_SerializationContext_TypeInfo;
  if ((DAT_03777a92 & 1) == 0) {
    thunk_FUN_00d48444(Sirenix_Serialization_SerializationContext_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4624);
    thunk_FUN_00d48444(PTR_DAT_033f2bd8);
    thunk_FUN_00d48444(Method_OVRObjectPool_List<OVRSpatialAnchor>__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ReadInit__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec4e8);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<object,_object>_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_Message_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(StringLiteral_4814);
    thunk_FUN_00d48444(Method_System_Array_Empty<ShapeRecognizer_FingerFeatureConfig>__);
    DAT_03777a92 = 1;
  }
  lVar9 = *(long *)puVar3;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  local_80 = 0;
  local_90 = 0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *(long *)puVar3;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
  if ((lVar9 == 0) ||
     ((**(code **)(lVar9 + 0x18))
                (*(undefined8 *)(lVar9 + 0x40),&local_b0,*(undefined8 *)(lVar9 + 0x28)),
     lVar9 = local_b0,
     puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__,
     puVar6 = Method_System_Xml_XmlSqlBinaryReader_ReadInit__,
     puVar5 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__,
     puVar4 = Method_System_Array_Empty<ShapeRecognizer_FingerFeatureConfig>__,
     puVar2 = System_Collections_Generic_Dictionary<object,_object>_TypeInfo, local_b0 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar12 = local_88;
  if ((int)*(ulong *)(local_b0 + 0x18) < 1) {
LAB_0153e5c0:
    puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    local_88 = plVar12;
    if (*(int *)(*(long *)
                  Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03777b33 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                        );
      DAT_03777b33 = '\x01';
    }
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *(long *)puVar3;
    }
    return *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30);
  }
  uVar15 = 0;
  uVar13 = *(ulong *)(local_b0 + 0x18) & 0xffffffff;
LAB_0153dd28:
  if (uVar13 <= uVar15) {
    local_88 = plVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar10 = *(long *)puVar3;
  plVar16 = *(long **)(lVar9 + uVar15 * 8 + 0x20);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar3;
  }
  uVar17 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x28);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  }
  uVar13 = FUN_02681b9c(uVar17,0,0);
  if ((uVar13 & 1) == 0) {
    if (plVar16 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar10);
        lVar10 = *(long *)puVar4;
      }
      lVar18 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      if (lVar18 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar10);
          lVar10 = *(long *)puVar4;
        }
        uVar19 = **(undefined8 **)(lVar10 + 0xb8);
        lVar18 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec4e8);
        if (lVar18 == 0) goto LAB_0153e6c0;
        FUN_012d239c(lVar18,uVar19,*(undefined8 *)StringLiteral_4814,0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar18;
      }
      plVar16 = (long *)System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                                  (uVar17,lVar18,
                                   *(undefined8 *)Method_OVRObjectPool_List<OVRSpatialAnchor>__);
      if (plVar16 != (long *)0x0) {
        lVar10 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0153e3e0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_00d59724(plVar16,*(long *)
                                        Method_System_Collections_Generic_HashSet_Enumerator<int>_get_Current__
                               ,0);
LAB_0153e3e0:
        plVar12 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar10 = *plVar12;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0153e440;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,0);
LAB_0153e440:
          uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          if ((uVar13 & 1) == 0) goto LAB_0153e4dc;
          lVar10 = *plVar12;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0153e49c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_0153e49c:
          uVar17 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar3;
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00acc5dc(**(long **)(lVar10 + 0xb8),uVar17,*(undefined8 *)puVar2);
        } while( true );
      }
    }
LAB_0153e6c0:
    local_88 = plVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar3;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
  if ((lVar10 == 0) || (plVar16 == (long *)0x0)) goto LAB_0153e6c0;
  lVar18 = *(long *)(lVar10 + 0x20);
  lVar10 = (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
  if ((lVar10 == 0) || (lVar18 == 0)) goto LAB_0153e6c0;
  uVar13 = FUN_0129aa60(lVar18,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)StringLiteral_4624);
  if ((uVar13 & 1) != 0) {
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    if (lVar10 == 0) goto LAB_0153e6c0;
    lVar18 = *(long *)(lVar10 + 0x20);
    lVar10 = (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
    if (((lVar10 == 0) || (lVar18 == 0)) ||
       (FUN_01299bc0(lVar18,*(undefined8 *)(lVar10 + 0x10),&local_b0,*(undefined8 *)PTR_DAT_033f2bd8
                    ), local_b0 == 0)) goto LAB_0153e6c0;
    FUN_01323390(local_b0,&local_b0,*(undefined8 *)Oculus_Platform_Message_TypeInfo);
    uVar8 = local_90;
    local_70 = local_a0;
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    while (uVar13 = FUN_012b894c(&local_80,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
      uVar17 = FUN_00ac2d00(&local_80,*(undefined8 *)OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo
                           );
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar3;
      }
      lVar10 = **(long **)(lVar10 + 0xb8);
      uVar17 = (**(code **)(*plVar16 + 0x248))(plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x250));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar17,uVar17);
      }
      FUN_00acc5dc(lVar10,uVar17,*(undefined8 *)puVar2);
    }
    local_90 = uVar8;
    FUN_012b8948(&local_80,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo);
  }
  goto LAB_0153e560;
LAB_0153e4dc:
  if (plVar12 != (long *)0x0) {
    lVar10 = *plVar12;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_10310) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0153e53c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
LAB_0153e53c:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
LAB_0153e560:
  uVar1 = *(uint *)(lVar9 + 0x18);
  uVar13 = (ulong)uVar1;
  uVar15 = uVar15 + 1;
  if ((long)(int)uVar1 <= (long)uVar15) goto LAB_0153e5c0;
  goto LAB_0153dd28;
}


