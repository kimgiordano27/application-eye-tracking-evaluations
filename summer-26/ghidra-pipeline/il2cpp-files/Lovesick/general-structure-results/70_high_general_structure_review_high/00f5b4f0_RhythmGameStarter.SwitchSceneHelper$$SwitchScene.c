/*
FUNCTION_NAME: RhythmGameStarter.SwitchSceneHelper$$SwitchScene
ENTRY_POINT: 00f5b4f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void RhythmGameStarter_SwitchSceneHelper__SwitchScene(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(StringLiteral_6915);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
  thunk_FUN_00d48444(Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
                    );
  thunk_FUN_00d48444(Method_System_Data_DataView_CheckSort__);
  thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Light>__);
  thunk_FUN_00d48444(PTR_DAT_033eebf0);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                    );
  *(undefined1 *)(unaff_x21 + 0x75d) = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  lVar11 = *(long *)(unaff_x19 + 0x38);
  if (lVar11 != 0) {
    lVar10 = *(long *)
              Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
      }
    }
    FUN_0268b6ac();
    if ((unaff_x20 != 0) && (lVar11 = FUN_00f25898(), lVar11 != 0)) {
      uVar6 = FUN_0176ee4c(*(undefined8 *)(lVar11 + 0x30),0);
      *(undefined4 *)(unaff_x19 + 0x28) = uVar6;
      FUN_0268b6ac();
      lVar11 = FUN_00f25898();
      if (lVar11 != 0) {
        uVar6 = FUN_0176ee4c(*(undefined8 *)(lVar11 + 0x30),0);
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar6;
        FUN_0268b6ac();
        lVar11 = FUN_00f25898();
        if (lVar11 != 0) {
          uVar6 = FUN_0176ee4c(*(undefined8 *)(lVar11 + 0x30),0);
          *(undefined4 *)(unaff_x19 + 0x30) = uVar6;
          FUN_0268b6ac();
          lVar11 = FUN_00f2599c();
          puVar5 = StringLiteral_11446;
          puVar4 = StringLiteral_6915;
          puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
          puVar2 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
          if (lVar11 != 0) {
            FUN_01323390(lVar11,&stack0x00000008,
                         *(undefined8 *)Method_System_Data_DataView_CheckSort__);
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            while( true ) {
              uVar7 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar5);
              if ((uVar7 & 1) == 0) {
                FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar2);
                return;
              }
              lVar11 = FUN_00acea78(&stack0x00000020,*(undefined8 *)puVar4);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar8 = *(long **)(lVar11 + 0x30);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar11 = *(long *)(unaff_x19 + 0x38);
              uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
              if (lVar11 == 0) break;
              FUN_00ac1158(lVar11,uVar9,*(undefined8 *)puVar3);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar9,uVar9);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


