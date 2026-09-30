/*
FUNCTION_NAME: UnityEngine.UI.Slider$$set_minValue
ENTRY_POINT: 0277a420
PROGRAM: Lovesick-libil2cpp.so
SCORE: 202
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UI_Slider__set_minValue(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined1 in_stack_00000090;
  int iStack00000000000000a0;
  int iStack00000000000000a4;
  long in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000c8;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000278;
  
  do {
    FUN_00ce4afc(param_1,param_2,param_3);
    uVar9 = in_stack_000000e8;
    lVar7 = in_stack_000000e0;
    uVar6 = in_stack_000000c8;
    uVar5 = in_stack_000000b0;
    lVar12 = in_stack_000000a8;
    uVar17 = unaff_x28[1];
    uVar16 = *unaff_x28;
    uVar1 = *(undefined4 *)(unaff_x28 + 2);
    uVar19 = unaff_x26[1];
    uVar18 = *unaff_x26;
    uVar2 = *(undefined4 *)(unaff_x26 + 2);
    if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(int *)(in_stack_000000a8 + 0x5c) == iStack00000000000000a0) &&
       (*(int *)(in_stack_000000a8 + 0x58) == iStack00000000000000a4)) {
      if (*(long *)(in_stack_000000a8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *(long *)(*(long *)(in_stack_000000a8 + 0x50) + 0x18);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar15 = (undefined8 *)(in_stack_000000a8 + 0x18);
      puVar13 = (undefined8 *)(in_stack_000000a8 + 0x1c);
      FUN_01344298(&stack0x00000170,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                   *(undefined4 *)puVar15,*(undefined4 *)puVar13,
                   *(undefined8 *)
                    Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *(long *)(lVar7 + 0x18);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01344298(&stack0x00000160,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                   uVar5,*(undefined4 *)puVar13,
                   *(undefined8 *)
                    Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
      DigitalOpus_MB_Core_MatAndTransformToMerged__GetMaterialName
                (&stack0x00000160,in_stack_00000170,in_stack_00000178,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_Clear__
                );
      if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01282738(*(long *)(lVar7 + 0x18),uVar5,*(undefined4 *)puVar13,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                  );
      puVar4 = Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__;
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar12 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *(long *)(*(long *)(lVar12 + 0x50) + 0x20);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01344298(&stack0x00000150,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                     *(undefined4 *)(lVar12 + 0x30),*(undefined4 *)(lVar12 + 0x34),
                     *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__
                    );
        lVar11 = *(long *)(lVar7 + 0x20);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01344298(&stack0x00000140,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                     uVar6,*(undefined4 *)(lVar12 + 0x34),*(undefined8 *)puVar4);
        iVar8 = FUN_01344a5c(&stack0x00000140,
                             *(undefined8 *)Method_System_Linq_Expressions_Expression_TypeIs__);
        if (0 < iVar8) {
          uVar3 = *(undefined4 *)puVar15;
          iVar14 = 0;
          do {
            DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                      (&stack0x00000150,iVar14,&stack0x000000a0,
                       *(undefined8 *)System_Func<float[],_Vector2>_TypeInfo);
            iStack00000000000000a0 =
                 CONCAT22(iStack00000000000000a0._2_2_,
                          (short)iStack00000000000000a0 + ((short)uVar5 - (short)uVar3));
            FUN_013444d4(&stack0x00000140,iVar14,&stack0x000000a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_JSONNode>_TryGetValue__
                        );
            iVar14 = iVar14 + 1;
          } while (iVar8 != iVar14);
        }
        if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01282738(*(long *)(lVar7 + 0x20),uVar6,*(undefined4 *)(lVar12 + 0x34),
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
        unaff_x25 = (undefined8 *)StringLiteral_9204;
      }
      puVar4 = System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
      in_stack_00000088 = *(undefined8 *)(lVar12 + 0x50);
      in_stack_00000078 = *(undefined8 *)(lVar12 + 0x20);
      in_stack_00000070 = *puVar15;
      in_stack_00000080 = *(undefined8 *)(lVar12 + 0x28);
      in_stack_00000090 = 1;
      uVar10 = *(undefined8 *)System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
      *(undefined4 *)((long)in_stack_00000030 + 3) = 0;
      *in_stack_00000030 = 0;
      FUN_00ce442c(in_stack_00000038,&stack0x00000070,uVar10);
      in_stack_00000058 = *(undefined8 *)(lVar12 + 0x50);
      in_stack_00000050 = *(undefined8 *)(lVar12 + 0x40);
      in_stack_00000048 = *(undefined8 *)(lVar12 + 0x38);
      in_stack_00000040 = *(undefined8 *)(lVar12 + 0x30);
      uVar10 = *(undefined8 *)puVar4;
      in_stack_00000060 = 0;
      *(undefined4 *)((long)in_stack_00000028 + 3) = 0;
      *in_stack_00000028 = 0;
      FUN_00ce442c(in_stack_00000038,&stack0x00000040,uVar10);
      *(undefined4 *)(lVar12 + 0x18) = uVar5;
      *(undefined4 *)(lVar12 + 0x2c) = uVar1;
      *(undefined8 *)(lVar12 + 0x24) = uVar17;
      *puVar13 = uVar16;
      *(undefined4 *)(lVar12 + 0x30) = uVar6;
      *(long *)(lVar12 + 0x50) = lVar7;
      *(undefined4 *)(lVar12 + 0x5c) = 0;
      *(undefined4 *)(lVar12 + 0x44) = uVar2;
      *(undefined8 *)(lVar12 + 0x3c) = uVar19;
      *(undefined8 *)(lVar12 + 0x34) = uVar18;
      unaff_x27 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_STMAudioClipData>_get_Item__;
    }
    uVar9 = FUN_012b894c(&stack0x00000180,*unaff_x25);
    if ((uVar9 & 1) == 0) {
      FUN_012b8948(&stack0x00000180,*(undefined8 *)StringLiteral_8869);
      lVar12 = *(long *)Meta_WitAi_Requests_VRequest_<>c__DisplayClass99_0_TypeInfo;
      *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
      }
      else {
        iVar8 = *(int *)(in_stack_00000010 + 0x18);
        *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
        if (0 < iVar8) {
          FUN_0179519c(*(undefined8 *)(in_stack_00000010 + 0x10),0,iVar8,0);
        }
      }
      FUN_0277ceac(in_stack_00000018);
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000278) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    param_3 = *unaff_x27;
    param_1 = (undefined8 *)&stack0x000000a0;
    param_2 = &stack0x00000180;
  } while( true );
}


