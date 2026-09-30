/*
FUNCTION_NAME: Oculus.Interaction.OneGrabPhysicsJointTransformer$$CreateJointHolder
ENTRY_POINT: 0187dd30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Oculus_Interaction_OneGrabPhysicsJointTransformer__CreateJointHolder(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x25;
  undefined8 uVar15;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  FUN_018651d4(*unaff_x23,param_1,*(undefined8 *)(unaff_x20 + 0x60));
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x27);
  }
  thunk_FUN_00d6225c();
  FUN_01802a3c();
  if (unaff_x25 != (long *)0x0) {
    lVar12 = *unaff_x25;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_0187ddd0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_0187ddd0:
    (*(code *)*puVar6)();
    uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)System_Dynamic_ExpandoObject_ValueCollection_TypeInfo
                               );
    puVar1 = 
    UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
    ;
    if (lVar12 != 0) {
      FUN_01875010();
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar7 != 0) &&
         (FUN_0168354c(lVar7,uVar15,lVar12,0), puVar3 = StringLiteral_3033,
         puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__,
         puVar1 = 
         Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
         , unaff_x19 != (long *)0x0)) {
        do {
          iVar4 = (**(code **)(*unaff_x19 + 0x238))();
          if (iVar4 == 4) {
            plVar8 = (long *)(**(code **)(*unaff_x19 + 0x248))();
            if (plVar8 == (long *)0x0) goto LAB_0187e03c;
            uVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            uVar13 = (**(code **)(*unaff_x19 + 0x288))();
            if ((uVar13 & 1) == 0) {
              thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
              FUN_00acb0a4();
              uVar10 = FUN_01731954(0);
              uVar11 = thunk_FUN_00d48444(Method_Obi_ObiActorBlueprint_GenerateImmediate__);
              goto LAB_0187e1cc;
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_018b8dec();
            FUN_0166bc70(lVar7,uVar15,uVar10,0);
          }
          else if (iVar4 != 5) {
            if (iVar4 == 0xd) goto LAB_0187df34;
            FUN_00ac2be8();
            uVar5 = (**(code **)(*unaff_x19 + 0x238))();
            in_stack_00000010 =
                 thunk_FUN_00d48444(
                                   Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                   );
            in_stack_00000018 = 0xffffffffffffffff;
            in_stack_00000020 = uVar5;
            uVar15 = FUN_017a7f78(&stack0x00000010,0);
            uVar10 = thunk_FUN_00d48444(StringLiteral_13059);
            FUN_015f5b28(uVar10,uVar15,0);
            goto LAB_0187e1d0;
          }
          uVar13 = (**(code **)(*unaff_x19 + 0x288))();
        } while ((uVar13 & 1) != 0);
        FUN_0188082c();
LAB_0187df34:
        if (*(char *)(unaff_x20 + 0x2a) == '\0') {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar10 = FUN_01731954(0);
          FUN_00ac2be8();
          uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
          uVar11 = thunk_FUN_00d48444(PTR_DAT_033f6e58);
        }
        else {
          lVar12 = *(long *)(unaff_x20 + 0xc0);
          if (lVar12 != 0) {
            plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
            if (plVar8 != (long *)0x0) {
              lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar9 == 0) {
LAB_0187e0a8:
                uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar15,0);
              }
              if ((int)plVar8[3] != 0) {
                plVar8[4] = lVar7;
                lVar7 = *(long *)(unaff_x21 + 0x20);
                if (lVar7 == 0) goto LAB_0187e03c;
                in_stack_00000018 = *(undefined8 *)(lVar7 + 0x68);
                in_stack_00000010 = *(undefined8 *)(lVar7 + 0x60);
                lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000010);
                if ((lVar7 != 0) &&
                   (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_0187e0a8;
                if (1 < *(uint *)(plVar8 + 3)) {
                  plVar8[5] = lVar7;
                  uVar15 = (**(code **)(lVar12 + 0x18))
                                     (*(undefined8 *)(lVar12 + 0x40),plVar8,
                                      *(undefined8 *)(lVar12 + 0x28));
                  if (unaff_x22 != 0) {
                    FUN_01880014();
                  }
                  FUN_018803d4();
                  FUN_01880600();
                  return uVar15;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            goto LAB_0187e03c;
          }
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar10 = FUN_01731954(0);
          uVar11 = thunk_FUN_00d48444(PTR_DAT_033f3628);
          uVar15 = in_stack_00000008;
        }
LAB_0187e1cc:
        FUN_018651d4(uVar11,uVar10,uVar15);
LAB_0187e1d0:
        uVar15 = FUN_01801b58();
        uVar10 = thunk_FUN_00d48444(
                                   Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar15,uVar10);
      }
    }
  }
LAB_0187e03c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


