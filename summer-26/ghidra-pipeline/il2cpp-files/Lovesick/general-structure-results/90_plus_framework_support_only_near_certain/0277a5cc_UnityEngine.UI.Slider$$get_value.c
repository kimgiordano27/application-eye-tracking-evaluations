/*
FUNCTION_NAME: UnityEngine.UI.Slider$$get_value
ENTRY_POINT: 0277a5cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 167
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UI_Slider__get_value
               (undefined1 *param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  int *unaff_x29;
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
  int in_stack_000000b0;
  undefined4 in_stack_000000c8;
  long in_stack_000000e0;
  ulong in_stack_000000e8;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined4 in_stack_00000250;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined4 in_stack_00000270;
  long in_stack_00000278;
  
  do {
    FUN_013444d4(param_1,param_2,param_3,param_4);
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w24 == unaff_w25) {
      do {
        if (*(long *)(unaff_x27 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01282738(*(long *)(unaff_x27 + 0x20),unaff_w22,*(undefined4 *)(unaff_x20 + 0x34),
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
        puVar3 = StringLiteral_9204;
        do {
          puVar2 = System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
          in_stack_00000088 = *(undefined8 *)(unaff_x20 + 0x50);
          in_stack_00000078 = *(undefined8 *)(unaff_x29 + 2);
          in_stack_00000070 = *(undefined8 *)unaff_x29;
          in_stack_00000080 = *(undefined8 *)(unaff_x29 + 4);
          in_stack_00000090 = 1;
          uVar5 = *(undefined8 *)System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
          *(undefined4 *)((long)in_stack_00000030 + 3) = 0;
          *in_stack_00000030 = 0;
          FUN_00ce442c(in_stack_00000038,&stack0x00000070,uVar5);
          in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0x50);
          in_stack_00000050 = *(undefined8 *)(unaff_x20 + 0x40);
          in_stack_00000048 = *(undefined8 *)(unaff_x20 + 0x38);
          in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x30);
          uVar5 = *(undefined8 *)puVar2;
          in_stack_00000060 = 0;
          *(undefined4 *)((long)in_stack_00000028 + 3) = 0;
          *in_stack_00000028 = 0;
          FUN_00ce442c(in_stack_00000038,&stack0x00000040,uVar5);
          *(int *)(unaff_x20 + 0x18) = unaff_w23;
          *(undefined4 *)(unaff_x21 + 2) = in_stack_00000270;
          unaff_x21[1] = in_stack_00000268;
          *unaff_x21 = in_stack_00000260;
          *(undefined4 *)(unaff_x20 + 0x30) = unaff_w22;
          *(long *)(unaff_x20 + 0x50) = unaff_x27;
          *(undefined4 *)(unaff_x20 + 0x5c) = 0;
          *(undefined4 *)(unaff_x20 + 0x44) = in_stack_00000250;
          *(undefined8 *)(unaff_x20 + 0x3c) = in_stack_00000248;
          *(undefined8 *)(unaff_x20 + 0x34) = in_stack_00000240;
          puVar2 = Method_System_Collections_Generic_Dictionary<string,_STMAudioClipData>_get_Item__
          ;
          do {
            uVar4 = FUN_012b894c(&stack0x00000180,*(undefined8 *)puVar3);
            if ((uVar4 & 1) == 0) {
              FUN_012b8948(&stack0x00000180,*(undefined8 *)StringLiteral_8869);
              lVar6 = *(long *)Meta_WitAi_Requests_VRequest_<>c__DisplayClass99_0_TypeInfo;
              *(int *)(in_stack_00000010 + 0x1c) = *(int *)(in_stack_00000010 + 0x1c) + 1;
              uVar4 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200))
              ;
              if ((uVar4 & 1) == 0) {
                *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
              }
              else {
                iVar1 = *(int *)(in_stack_00000010 + 0x18);
                *(undefined4 *)(in_stack_00000010 + 0x18) = 0;
                if (0 < iVar1) {
                  FUN_0179519c(*(undefined8 *)(in_stack_00000010 + 0x10),0,iVar1,0);
                }
              }
              FUN_0277ceac(in_stack_00000018);
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000278) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            FUN_00ce4afc(&stack0x000000a0,&stack0x00000180,*(undefined8 *)puVar2);
            uVar4 = in_stack_000000e8;
            unaff_x27 = in_stack_000000e0;
            unaff_w22 = in_stack_000000c8;
            unaff_w23 = in_stack_000000b0;
            unaff_x20 = in_stack_000000a8;
            in_stack_00000268 = unaff_x28[1];
            in_stack_00000260 = *unaff_x28;
            in_stack_00000270 = *(undefined4 *)(unaff_x28 + 2);
            in_stack_00000248 = unaff_x26[1];
            in_stack_00000240 = *unaff_x26;
            in_stack_00000250 = *(undefined4 *)(unaff_x26 + 2);
            if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
          } while ((*(int *)(in_stack_000000a8 + 0x5c) != iStack00000000000000a0) ||
                  (*(int *)(in_stack_000000a8 + 0x58) != iStack00000000000000a4));
          if (*(long *)(in_stack_000000a8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *(long *)(*(long *)(in_stack_000000a8 + 0x50) + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          unaff_x29 = (int *)(in_stack_000000a8 + 0x18);
          unaff_x21 = (undefined8 *)(in_stack_000000a8 + 0x1c);
          FUN_01344298(&stack0x00000170,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                       *unaff_x29,*(undefined4 *)unaff_x21,
                       *(undefined8 *)
                        Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
          if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *(long *)(unaff_x27 + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01344298(&stack0x00000160,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                       unaff_w23,*(undefined4 *)unaff_x21,
                       *(undefined8 *)
                        Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
          DigitalOpus_MB_Core_MatAndTransformToMerged__GetMaterialName
                    (&stack0x00000160,in_stack_00000170,in_stack_00000178,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_Clear__
                    );
          if (*(long *)(unaff_x27 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01282738(*(long *)(unaff_x27 + 0x18),unaff_w23,*(undefined4 *)unaff_x21,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                      );
          puVar2 = Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__;
        } while ((uVar4 & 1) == 0);
        if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar6 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0x20);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01344298(&stack0x00000150,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                     *(undefined4 *)(unaff_x20 + 0x30),*(undefined4 *)(unaff_x20 + 0x34),
                     *(undefined8 *)Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__
                    );
        lVar6 = *(long *)(unaff_x27 + 0x20);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01344298(&stack0x00000140,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                     unaff_w22,*(undefined4 *)(unaff_x20 + 0x34),*(undefined8 *)puVar2);
        unaff_w24 = FUN_01344a5c(&stack0x00000140,
                                 *(undefined8 *)Method_System_Linq_Expressions_Expression_TypeIs__);
      } while ((int)unaff_w24 < 1);
      unaff_w25 = 0;
      unaff_w19 = unaff_w23 - *unaff_x29;
    }
    DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
              (&stack0x00000150,unaff_w25,&stack0x000000a0,
               *(undefined8 *)System_Func<float[],_Vector2>_TypeInfo);
    param_4 = *(undefined8 *)
               Method_System_Collections_Generic_Dictionary<string,_JSONNode>_TryGetValue__;
    iStack00000000000000a0 =
         CONCAT22(iStack00000000000000a0._2_2_,(short)iStack00000000000000a0 + (short)unaff_w19);
    param_1 = &stack0x00000140;
    param_3 = (undefined8 *)&stack0x000000a0;
    param_2 = (ulong)unaff_w25;
  } while( true );
}


