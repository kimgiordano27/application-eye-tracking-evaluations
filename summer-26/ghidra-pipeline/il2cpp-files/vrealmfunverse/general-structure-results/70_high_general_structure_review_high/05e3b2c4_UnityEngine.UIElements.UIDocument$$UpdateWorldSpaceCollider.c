/*
FUNCTION_NAME: UnityEngine.UIElements.UIDocument$$UpdateWorldSpaceCollider
ENTRY_POINT: 05e3b2c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_UIDocument__UpdateWorldSpaceCollider(long *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *in_stack_000000d0;
  long in_stack_000000e8;
  
                    /* catch() { ... } // from try @ 05e3b2b4 with catch @ 05e3b2c8 */
                    /* try { // try from 05e3b2cc to 05f3b2d3 has its CatchHandler @ 05e3b2dc */
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* try { // try from 05e3b2d4 to 05f3b2df has its CatchHandler @ 05e3b168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e3b2cc with catch @ 05e3b2dc
                        */
  FUN_05c45700(unaff_w19 == 1,0);
  if (in_stack_000000e8 != 0) {
    lVar12 = FUN_037a6268(in_stack_000000e8,0,
                          *(undefined8 *)
                           Method_System_Linq_Expressions_Interpreter_InitializeLocalInstruction_MutableValue_Run__
                         );
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_IMGUIEvent_<>c_<_cctor>b__0_0__ + 0xe4) == 0
       ) {
      thunk_FUN_02b9ad44(*(long *)Method_UnityEngine_UIElements_IMGUIEvent_<>c_<_cctor>b__0_0__);
    }
    FUN_05e44884(lVar12,in_stack_00000018);
    FUN_05e448f0(lVar12,in_stack_00000018);
    if (in_stack_000000e8 != 0) {
      iVar1 = *(int *)(in_stack_000000e8 + 0x18);
      *(undefined4 *)(in_stack_000000e8 + 0x18) = 0;
      *(int *)(in_stack_000000e8 + 0x1c) = *(int *)(in_stack_000000e8 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_04d9e084(*(undefined8 *)(in_stack_000000e8 + 0x10),0,iVar1,0);
      }
      if (lVar12 != 0) {
        FUN_0445a80c();
        lVar12 = in_stack_000000e8;
        if ((in_stack_000000e8 != 0) && (*(int *)(in_stack_000000e8 + 0x18) != 0)) {
          uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c_<GetKeyWallDebugger>b__79_1__
                                     );
          FUN_042e1010(uVar13,0,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<Quaternion>__
                       ,0);
          FUN_037a7f8c(lVar12,uVar13,
                       *(undefined8 *)
                        Method_Oculus_Interaction_IndexPinchSafeReleaseSelector_<>c_<_ctor>b__35_0__
                      );
          if (in_stack_000000e8 == 0) goto LAB_05e3b60c;
          FUN_037a6fdc(&stack0x00000060,in_stack_000000e8,
                       *(undefined8 *)
                        Method_System_Data_Index_<>c__DisplayClass86_0_<MaintainDataView>b__0__);
          puVar10 = 
          Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass24_0_<TryBuildImmutableForArrayContract>b__0__
          ;
          puVar9 = 
          Method_Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c_<GetClosestSeatPoseDebugger>b__82_1__
          ;
          puVar8 = Method_DG_Tweening_DOVirtual_<>c__DisplayClass3_0_<Vector3>b__2__;
          puVar7 = PTR_DAT_06321e30;
          puVar6 = PTR_DAT_0631ee10;
          in_stack_000000c8 = in_stack_00000068;
          in_stack_000000c0 = in_stack_00000060;
          in_stack_000000d0 = in_stack_00000070;
          in_stack_00000068 = &stack0x000000c0;
          in_stack_00000060 = 0;
          while (uVar14 = FUN_0472eaf4(&stack0x000000c0,*(undefined8 *)puVar10),
                plVar11 = in_stack_000000d0, (uVar14 & 1) != 0) {
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_03119ca8(plVar11,*(undefined8 *)puVar9);
            if (plVar11 == (long *)0x0) {
LAB_05e3b490:
              bVar4 = false;
            }
            else {
              bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar8))
              goto LAB_05e3b490;
              if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar12 = *(long *)(unaff_x20 + 8);
              if (lVar12 == 0) {
LAB_05e3b660:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar15 = *(long *)(lVar12 + 0x10);
              lVar5 = plVar11[5];
              lVar16 = *(long *)PTR_DAT_06316c50;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_05e3b660;
              uVar3 = *(uint *)(lVar12 + 0x18);
              if (uVar3 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                *(int *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = (int)lVar5;
              }
              else {
                FUN_03753114(lVar12,(int)lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              bVar4 = true;
            }
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05e47d30(&stack0x00000080,*(undefined8 *)(unaff_x20 + 0x18),
                         *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
            lVar12 = FUN_05e44aa8();
            if (bVar4) {
              if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(long *)(unaff_x20 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_037545a0(*(long *)(unaff_x20 + 8),(int)plVar11[5],
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_BloomPassData>__
                          );
            }
            if (lVar12 != 0) {
              *(undefined8 *)(lVar12 + 0x2a8) = unaff_x21;
              thunk_FUN_02bb0e9c(lVar12 + 0x2a8);
              in_stack_00000078 = *(undefined8 *)(in_stack_00000018 + 0x268);
              FUN_05dfc1ec(&stack0x00000078,lVar12,0);
            }
          }
          FUN_0472eaf0(&stack0x000000c0,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_<TryBuildImmutableForDictionaryContract>b__25_1__
                      );
        }
        return;
      }
    }
  }
LAB_05e3b60c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


