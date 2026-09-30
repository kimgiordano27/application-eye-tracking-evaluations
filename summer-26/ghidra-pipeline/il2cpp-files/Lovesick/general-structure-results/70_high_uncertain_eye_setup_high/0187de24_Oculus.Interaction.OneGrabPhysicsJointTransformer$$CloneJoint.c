/*
FUNCTION_NAME: Oculus.Interaction.OneGrabPhysicsJointTransformer$$CloneJoint
ENTRY_POINT: 0187de24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Oculus_Interaction_OneGrabPhysicsJointTransformer__CloneJoint(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  if ((param_1 != 0) &&
     (FUN_0168354c(), puVar3 = StringLiteral_3033,
     puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerOverEvent>_GetPooled__,
     puVar1 = 
     Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
     , unaff_x19 != (long *)0x0)) {
    do {
      iVar4 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar4 == 4) {
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) goto LAB_0187e03c;
        uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        uVar6 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar6 & 1) == 0) {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar11 = FUN_01731954(0);
          uVar12 = thunk_FUN_00d48444(Method_Obi_ObiActorBlueprint_GenerateImmediate__);
          goto LAB_0187e1cc;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_018b8dec();
        FUN_0166bc70(param_1,uVar10,uVar11,0);
      }
      else if (iVar4 != 5) {
        if (iVar4 == 0xd) goto LAB_0187df34;
        FUN_00ac2be8();
        uVar5 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000010 =
             thunk_FUN_00d48444(Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__);
        in_stack_00000018 = 0xffffffffffffffff;
        in_stack_00000020 = uVar5;
        uVar10 = FUN_017a7f78(&stack0x00000010,0);
        uVar11 = thunk_FUN_00d48444(StringLiteral_13059);
        FUN_015f5b28(uVar11,uVar10,0);
        goto LAB_0187e1d0;
      }
      uVar6 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar6 & 1) != 0);
    FUN_0188082c();
LAB_0187df34:
    if (*(char *)(unaff_x20 + 0x2a) == '\0') {
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar11 = FUN_01731954(0);
      FUN_00ac2be8();
      uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
      uVar12 = thunk_FUN_00d48444(PTR_DAT_033f6e58);
    }
    else {
      lVar13 = *(long *)(unaff_x20 + 0xc0);
      if (lVar13 != 0) {
        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,2);
        if (plVar7 != (long *)0x0) {
          lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar8 == 0) {
LAB_0187e0a8:
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          if ((int)plVar7[3] != 0) {
            plVar7[4] = param_1;
            lVar8 = *(long *)(unaff_x21 + 0x20);
            if (lVar8 == 0) goto LAB_0187e03c;
            in_stack_00000018 = *(undefined8 *)(lVar8 + 0x68);
            in_stack_00000010 = *(undefined8 *)(lVar8 + 0x60);
            lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000010);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_0187e0a8;
            if (1 < *(uint *)(plVar7 + 3)) {
              plVar7[5] = lVar8;
              uVar10 = (**(code **)(lVar13 + 0x18))
                                 (*(undefined8 *)(lVar13 + 0x40),plVar7,
                                  *(undefined8 *)(lVar13 + 0x28));
              if (unaff_x22 != 0) {
                FUN_01880014();
              }
              FUN_018803d4();
              FUN_01880600();
              return uVar10;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        goto LAB_0187e03c;
      }
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar11 = FUN_01731954(0);
      uVar12 = thunk_FUN_00d48444(PTR_DAT_033f3628);
      uVar10 = in_stack_00000008;
    }
LAB_0187e1cc:
    FUN_018651d4(uVar12,uVar11,uVar10);
LAB_0187e1d0:
    uVar10 = FUN_01801b58();
    uVar11 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar11);
  }
LAB_0187e03c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


