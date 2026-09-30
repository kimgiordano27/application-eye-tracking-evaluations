/*
FUNCTION_NAME: UnityEngine.GUILayout$$MaxWidth
ENTRY_POINT: 025dfd68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUILayout__MaxWidth(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  ulong unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x390));
  *(undefined1 *)(unaff_x20 + 600) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 != 0) {
    if ((*(char *)(lVar6 + 0x18) == '\0') && ((unaff_x23 & 1) == 0)) {
      return;
    }
    *(undefined1 *)(lVar6 + 0x18) = 0;
    lVar6 = FUN_0268fd10(lVar6,0);
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar6 == 0) goto LAB_025e0190;
    lVar7 = FUN_0269fe30(lVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar8 = FUN_02681b9c(lVar7,0,0);
    if ((uVar8 & 1) == 0) {
      lVar13 = 0;
    }
    else {
      if (lVar7 == 0) goto LAB_025e0190;
      FUN_010c31a0(lVar7,&stack0x00000028,
                   *(undefined8 *)Method_Sirenix_Serialization_FormatterUtilities_GetContainedType__
                  );
      lVar13 = in_stack_00000028;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    bVar5 = FUN_02681b9c(lVar13,0,0);
    *(byte *)(unaff_x19 + 0x31) = bVar5 & 1;
    if ((bVar5 & 1) != 0) {
      if (*(char *)(unaff_x19 + 0x30) != '\x01' || (unaff_x23 & 1) != 0) {
        uVar8 = FUN_010c3738(lVar6,&stack0x00000020,
                             *(undefined8 *)
                              Method_RCG_IO_QuestFileSystemController_Load<PlayerPreferences>__);
        puVar2 = Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3>__ctor__;
        lVar11 = *(long *)(unaff_x19 + 0x20);
        if (lVar11 == 0) goto LAB_025e0190;
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(lVar11 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar11 + 0x10) = 1;
          UnityEngine_GUISkin__set_horizontalSliderThumb(lVar11,in_stack_00000020);
          uVar9 = in_stack_00000020;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c114(uVar9,0);
        }
        uVar8 = FUN_010c3738(lVar6,&stack0x00000018,*(undefined8 *)puVar2);
        lVar11 = in_stack_00000018;
        lVar12 = *(long *)(unaff_x19 + 0x28);
        if (lVar12 == 0) goto LAB_025e0190;
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(lVar12 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar12 + 0x10) = 1;
          if (in_stack_00000018 == 0) goto LAB_025e0190;
          *(undefined4 *)(lVar12 + 0x14) = *(undefined4 *)(in_stack_00000018 + 0x28);
          *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(in_stack_00000018 + 0x24);
          *(undefined1 *)(lVar12 + 0x1c) = *(undefined1 *)(in_stack_00000018 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c114(lVar11,0);
        }
        uVar8 = FUN_010c3738(lVar6,&stack0x00000010,
                             *(undefined8 *)
                              Method_OVRRuntimeAssetsBase_LoadAsset<OVROverlayCanvasSettings>__);
        puVar2 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__;
        lVar11 = *(long *)(unaff_x19 + 0x18);
        if (lVar11 == 0) goto LAB_025e0190;
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(lVar11 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar11 + 0x10) = 1;
          UnityEngine_GUISkin__set_horizontalScrollbarLeftButton(lVar11,in_stack_00000010);
          uVar9 = in_stack_00000010;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c114(uVar9,0);
        }
        uVar8 = FUN_010c3738(lVar6,(long *)(unaff_x19 + 0x48),*(undefined8 *)puVar2);
        if ((uVar8 & 1) != 0) {
          if (lVar13 == 0) goto LAB_025e0190;
          uVar8 = FUN_010c3738(lVar13,&stack0x00000008,*(undefined8 *)puVar2);
          puVar4 = StringLiteral_9927;
          puVar3 = StringLiteral_302;
          puVar2 = Method_System_Collections_Generic_List<RenderChain>_Add__;
          if ((uVar8 & 1) == 0) {
            if (lVar7 == 0) goto LAB_025e0190;
            uVar9 = FUN_0268b6ac(lVar7,0);
            uVar10 = FUN_0268b6ac(lVar6,0);
            uVar9 = FUN_0160073c(*(undefined8 *)puVar2,uVar9,*(undefined8 *)puVar4,uVar10,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            FUN_0266185c(uVar9,lVar6,0);
          }
          lVar7 = *(long *)(unaff_x19 + 0x48);
          if (lVar7 == 0) goto LAB_025e0190;
          FUN_02689f9c(lVar7,0,0);
        }
      }
      if (*(char *)(unaff_x19 + 0x31) != '\0') goto LAB_025e016c;
    }
    if ((unaff_x23 & 1) == 0 && *(char *)(unaff_x19 + 0x30) == '\0') {
LAB_025e016c:
      *(undefined1 *)(unaff_x19 + 0x30) = *(undefined1 *)(unaff_x19 + 0x31);
      return;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x18) + 0x10) == '\0') goto LAB_025e016c;
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (lVar6 != 0) {
        uVar9 = FUN_010e5800(lVar6,*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__
                            );
        *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_025e06a0(*(long *)(unaff_x19 + 0x18),uVar9);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x10) != '\0') {
              uVar9 = FUN_010e5800(lVar6,*(undefined8 *)System_Func<Vector4,_int,_float>_TypeInfo);
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_025e0190;
              FUN_025e0780(*(long *)(unaff_x19 + 0x20),uVar9);
            }
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              if (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x10) != '\0') {
                lVar6 = FUN_010e5800(lVar6,*(undefined8 *)
                                            System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo
                                    );
                lVar7 = *(long *)(unaff_x19 + 0x28);
                *(long *)(unaff_x19 + 0x40) = lVar6;
                if ((lVar7 == 0) || (lVar6 == 0)) goto LAB_025e0190;
                *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar7 + 0x14);
                *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar7 + 0x18);
                *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(lVar7 + 0x1c);
              }
              uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_02681b9c(uVar9,0,0);
              if ((uVar8 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_025e0190;
                FUN_02689f9c(*(long *)(unaff_x19 + 0x48),1,0);
              }
              goto LAB_025e016c;
            }
          }
        }
      }
    }
  }
LAB_025e0190:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


