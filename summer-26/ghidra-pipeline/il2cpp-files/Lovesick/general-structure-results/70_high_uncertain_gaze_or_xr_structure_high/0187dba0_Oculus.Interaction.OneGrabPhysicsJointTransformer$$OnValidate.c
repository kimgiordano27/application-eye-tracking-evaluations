/*
FUNCTION_NAME: Oculus.Interaction.OneGrabPhysicsJointTransformer$$OnValidate
ENTRY_POINT: 0187dba0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_OneGrabPhysicsJointTransformer__OnValidate(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x758));
  thunk_FUN_00d48444(PTR_DAT_033f3b78);
  thunk_FUN_00d48444(StringLiteral_10364);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                    );
  thunk_FUN_00d48444(System_Dynamic_ExpandoObject_ValueCollection_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXmlNode>__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033ee840);
  thunk_FUN_00d48444(StringLiteral_3033);
  thunk_FUN_00d48444(
                    UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
                    );
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__);
  thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
  thunk_FUN_00d48444(PTR_DAT_033eff68);
  *(undefined1 *)(unaff_x23 + 0x770) = 1;
  if (unaff_x20 == 0) goto LAB_0187e03c;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
  if (*(int *)(*(long *)PTR_DAT_033ee840 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0188a5d0(0);
  puVar2 = StringLiteral_10364;
  if ((uVar7 & 1) == 0) {
    uVar9 = FUN_017b7e58(0);
    uVar10 = FUN_017b7e58(0);
    uVar11 = thunk_FUN_00d48444(PTR_DAT_033eb7e0);
    uVar14 = thunk_FUN_00d48444(PTR_DAT_033f6b28);
    uVar10 = FUN_0160073c(uVar11,uVar9,uVar14,uVar10,0);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar9 = FUN_01731954(0);
    goto LAB_0187e1cc;
  }
  plVar18 = *(long **)(unaff_x21 + 0x28);
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10364) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0187dcc0;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar18,*(long *)StringLiteral_10364,0);
LAB_0187dcc0:
    iVar5 = (*(code *)*puVar8)(plVar18,puVar8[1]);
    puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    puVar3 = Method_System_Collections_Generic_List<IXmlNode>__ctor__;
    puVar1 = PTR_DAT_033eff68;
    if (2 < iVar5) {
      if (unaff_x19 == (long *)0x0) goto LAB_0187e03c;
      plVar18 = *(long **)(unaff_x21 + 0x28);
      uVar9 = (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar10 = FUN_01731954(0);
      uVar10 = FUN_018651d4(*(undefined8 *)puVar1,uVar10,*(undefined8 *)(unaff_x20 + 0x60));
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar11 = thunk_FUN_00d6225c();
      uVar9 = FUN_01802a3c(uVar11,uVar9,uVar10,0);
      if (plVar18 == (long *)0x0) goto LAB_0187e03c;
      lVar15 = *plVar18;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0187ddd0;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar2,1);
LAB_0187ddd0:
      (*(code *)*puVar8)(plVar18,3,uVar9,0,puVar8[1]);
    }
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)System_Dynamic_ExpandoObject_ValueCollection_TypeInfo);
  puVar2 = 
  UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
  ;
  if (lVar15 != 0) {
    FUN_01875010();
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar12 != 0) &&
       (FUN_0168354c(lVar12,uVar9,lVar15,0), puVar3 = StringLiteral_3033,
       puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__,
       puVar2 = 
       Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
       , unaff_x19 != (long *)0x0)) {
      do {
        iVar5 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar5 == 4) {
          plVar18 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar18 == (long *)0x0) goto LAB_0187e03c;
          uVar11 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
          uVar7 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar7 & 1) == 0) {
            thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            FUN_00acb0a4();
            uVar9 = FUN_01731954(0);
            uVar10 = thunk_FUN_00d48444(Method_Obi_ObiActorBlueprint_GenerateImmediate__);
            uVar16 = uVar11;
            goto LAB_0187e1cc;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_018b8dec();
          FUN_0166bc70(lVar12,uVar11,uVar9,0);
        }
        else if (iVar5 != 5) {
          if (iVar5 == 0xd) goto LAB_0187df34;
          FUN_00ac2be8();
          uVar6 = (**(code **)(*unaff_x19 + 0x238))();
          in_stack_00000010 =
               thunk_FUN_00d48444(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                 );
          in_stack_00000018 = 0xffffffffffffffff;
          in_stack_00000020 = uVar6;
          uVar16 = FUN_017a7f78(&stack0x00000010,0);
          uVar9 = thunk_FUN_00d48444(StringLiteral_13059);
          FUN_015f5b28(uVar9,uVar16,0);
          goto LAB_0187e1d0;
        }
        uVar7 = (**(code **)(*unaff_x19 + 0x288))();
      } while ((uVar7 & 1) != 0);
      FUN_0188082c();
LAB_0187df34:
      if (*(char *)(unaff_x20 + 0x2a) == '\0') {
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar9 = FUN_01731954(0);
        FUN_00ac2be8();
        uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
        uVar10 = thunk_FUN_00d48444(PTR_DAT_033f6e58);
      }
      else {
        lVar15 = *(long *)(unaff_x20 + 0xc0);
        if (lVar15 != 0) {
          plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
          if (plVar18 != (long *)0x0) {
            lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar18 + 0x40));
            if (lVar13 == 0) {
LAB_0187e0a8:
              uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar16,0);
            }
            if ((int)plVar18[3] != 0) {
              plVar18[4] = lVar12;
              lVar12 = *(long *)(unaff_x21 + 0x20);
              if (lVar12 == 0) goto LAB_0187e03c;
              in_stack_00000018 = *(undefined8 *)(lVar12 + 0x68);
              in_stack_00000010 = *(undefined8 *)(lVar12 + 0x60);
              lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&stack0x00000010);
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar18 + 0x40)), lVar13 == 0)
                 ) goto LAB_0187e0a8;
              if (1 < *(uint *)(plVar18 + 3)) {
                plVar18[5] = lVar12;
                uVar16 = (**(code **)(lVar15 + 0x18))
                                   (*(undefined8 *)(lVar15 + 0x40),plVar18,
                                    *(undefined8 *)(lVar15 + 0x28));
                if (unaff_x22 != 0) {
                  FUN_01880014();
                }
                FUN_018803d4();
                FUN_01880600();
                return uVar16;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          goto LAB_0187e03c;
        }
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar9 = FUN_01731954(0);
        uVar10 = thunk_FUN_00d48444(PTR_DAT_033f3628);
      }
LAB_0187e1cc:
      FUN_018651d4(uVar10,uVar9,uVar16);
LAB_0187e1d0:
      uVar16 = FUN_01801b58();
      uVar9 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar16,uVar9);
    }
  }
LAB_0187e03c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


