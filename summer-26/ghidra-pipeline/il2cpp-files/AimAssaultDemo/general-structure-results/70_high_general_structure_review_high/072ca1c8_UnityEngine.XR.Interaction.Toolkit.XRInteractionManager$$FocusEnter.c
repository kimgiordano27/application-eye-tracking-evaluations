/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager$$FocusEnter
ENTRY_POINT: 072ca1c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__FocusEnter(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x21;
  
  puVar1 = System_Collections_Generic_List<FieldInfo>_TypeInfo;
  if (unaff_x19 != 0) {
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x30) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x38) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x40) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x48) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x50) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x68) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x70) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x78) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x80) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(undefined8 *)PTR_DAT_07da84a0,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x90) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x88) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x28) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x20) + 0x20,0);
    FUN_05b0f700();
    FUN_062519f8(*(long *)(unaff_x21 + 0x10) + 0x20,0);
    FUN_05b0f700();
    **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
    thunk_FUN_037aeb94(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    lVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8cfe8);
    FUN_05b0e950(lVar11,*(undefined8 *)PTR_DAT_07d8cff0);
    puVar10 = PTR_DAT_07dc6db0;
    puVar9 = PTR_DAT_07dc6358;
    puVar8 = PTR_DAT_07dc6350;
    puVar7 = PTR_DAT_07dc6348;
    puVar6 = PTR_DAT_07dc6340;
    puVar5 = PTR_DAT_07d8f8f0;
    puVar4 = PTR_DAT_07d8cff8;
    puVar3 = PTR_DAT_07d8b768;
    puVar2 = PTR_DAT_07d8ad30;
    puVar1 = PTR_DAT_07d86598;
    if (lVar11 != 0) {
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6338,*(undefined8 *)PTR_DAT_07d8a638,
                   *(undefined8 *)PTR_DAT_07d8cff8);
      FUN_05b0f700(lVar11,*(undefined8 *)puVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63c0,*(undefined8 *)puVar10,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6378,*(undefined8 *)PTR_DAT_07da5f28,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6388,*(undefined8 *)PTR_DAT_07dc6dc0,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>_TypeInfo
                   ,*(undefined8 *)PTR_DAT_07db6680,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           Unity_Multiplayer_Tools_NetStats_EventMetric<NamedMessageEvent>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07db6688,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           System_Collections_Generic_Dictionary<RFShatter_Kortez<int,_int,_int>,_List<int>>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07da41f0,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63e8,*(undefined8 *)PTR_DAT_07dc6d70,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63e0,*(undefined8 *)PTR_DAT_07dc6d58,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6188,*(undefined8 *)PTR_DAT_07db66e8,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63a8,*(undefined8 *)PTR_DAT_07d980d0,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6398,*(undefined8 *)PTR_DAT_07d980c8,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63b8,*(undefined8 *)PTR_DAT_07db66f8,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63b0,*(undefined8 *)PTR_DAT_07db66d8,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc63a0,*(undefined8 *)PTR_DAT_07db66d0,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6de0,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>___TypeInfo,
                   *(undefined8 *)PTR_DAT_07dc6df0,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6dd8,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           Unity_Multiplayer_Tools_NetStats_EventMetric<ObjectDestroyedEvent>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6db8,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6dd0,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6da8,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           Unity_Multiplayer_Tools_NetStats_EventMetric<NetworkVariableEvent>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6d68,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           Unity_Multiplayer_Tools_NetStats_EventMetric<NetworkMessageEvent>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6de8,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_TypeInfo
                   ,*(undefined8 *)PTR_DAT_07d960e8,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)
                           UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo
                   ,*(undefined8 *)PTR_DAT_07dc6d78,*(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6838,*(undefined8 *)PTR_DAT_07d8a238,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6830,*(undefined8 *)PTR_DAT_07dc6e90,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc67e8,*(undefined8 *)puVar2,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc6820,*(undefined8 *)PTR_DAT_07d8a638,
                   *(undefined8 *)puVar4);
      FUN_05b0f700(lVar11,*(undefined8 *)PTR_DAT_07dc67f8,*(undefined8 *)PTR_DAT_07db5418,
                   *(undefined8 *)puVar4);
      plVar12 = (long *)(*(long *)(*(long *)System_Collections_Generic_List<FieldInfo>_TypeInfo +
                                  0xb8) + 8);
      *plVar12 = lVar11;
      thunk_FUN_037aeb94(plVar12,lVar11);
      lVar11 = thunk_FUN_037788cc(*(undefined8 *)
                                   DigitalOpus_MB_Core_MB3_AgglomerativeClustering_ClusterNode___TypeInfo
                                 );
      FUN_04576f9c(lVar11,*(undefined8 *)
                           DigitalOpus_MB_Core_MB2_TexturePackerRegular_Node___TypeInfo);
      puVar1 = DigitalOpus_MB_Core_MB2_TexturePacker_Image___TypeInfo;
      if (lVar11 != 0) {
        FUN_04578188(lVar11,0x3c,
                     *(undefined8 *)DigitalOpus_MB_Core_MB2_TexturePacker_Image___TypeInfo);
        FUN_04578188(lVar11,0x3e,*(undefined8 *)puVar1);
        FUN_04578188(lVar11,0x3f,*(undefined8 *)puVar1);
        FUN_04578188(lVar11,0x20,*(undefined8 *)puVar1);
        FUN_04578188(lVar11,0x2c,*(undefined8 *)puVar1);
        FUN_04578188(lVar11,0x3a,*(undefined8 *)puVar1);
        plVar12 = (long *)(*(long *)(*(long *)System_Collections_Generic_List<FieldInfo>_TypeInfo +
                                    0xb8) + 0x10);
        *plVar12 = lVar11;
        thunk_FUN_037aeb94(plVar12,lVar11);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


