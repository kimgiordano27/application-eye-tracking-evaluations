/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 0566cf1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02d965b8(System_Collections_Generic_List<GameObject>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<GizmoRenderer>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<Glyph>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<GlyphPairAdjustmentRecord>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<GlyphRect>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<GlyphRenderMode>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<Graphic>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<GraphicsBuffer>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<Guid>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<Hole>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<HoleDifficulty>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<HoleStat>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<HttpConnection>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<IBaseUxmlObjectFactory>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<IBinding>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<IBindingRequest>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x696) = 1;
  in_stack_00000060 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  _uStack0000000000000050 = 0;
  if (*(int *)(unaff_x20 + 0x204) != *(int *)(unaff_x19 + 0x30)) {
    *(int *)(unaff_x20 + 0x210) = *(int *)(unaff_x19 + 0x30);
    if (*(long *)(unaff_x20 + 0x1f8) == 0) goto LAB_0566d240;
    iVar4 = FUN_04df8288(*(long *)(unaff_x20 + 0x1f8),
                         *(undefined8 *)System_Collections_Generic_List<GizmoRenderer>_TypeInfo);
    if (0 < iVar4) {
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_Generic_List<HoleDifficulty>_TypeInfo);
      FUN_03bfece4(lVar6,*(undefined8 *)System_Collections_Generic_List<Hole>_TypeInfo);
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_Generic_List<IBindingRequest>_TypeInfo);
      FUN_03fb5c9c(lVar7,*(undefined8 *)System_Collections_Generic_List<IBinding>_TypeInfo);
      puVar1 = System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo;
      if (*(int *)(unaff_x19 + 0x48) != 0) {
        uVar12 = 0;
        do {
          uVar5 = FUN_05656688();
          if (lVar6 == 0) goto LAB_0566d240;
          FUN_03bfff24(lVar6,uVar5,*(undefined8 *)puVar1);
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(unaff_x19 + 0x48));
      }
      if (*(long *)(unaff_x20 + 0x1f8) == 0) {
LAB_0566d240:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04df8a2c(*(long *)(unaff_x20 + 0x1f8),
                   *(undefined8 *)System_Collections_Generic_List<GameObject>_TypeInfo);
      puVar3 = System_Collections_Generic_List<HttpConnection>_TypeInfo;
      puVar2 = System_Collections_Generic_List<Guid>_TypeInfo;
      puVar1 = System_Collections_Generic_List<GlyphRect>_TypeInfo;
      in_stack_00000048 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000000;
      in_stack_00000058 = in_stack_00000018;
      _uStack0000000000000050 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000020;
LAB_0566d118:
      uVar8 = FUN_05219894(&stack0x00000040,*(undefined8 *)puVar1);
      uVar9 = _uStack0000000000000050;
      if ((uVar8 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = uStack0000000000000050;
        uVar8 = FUN_03bff3e8(lVar6,_uStack0000000000000050 & 0xffffffff,*(undefined8 *)puVar2);
        if ((uVar8 & 1) == 0) {
          if (lVar7 != 0) {
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar3;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar12 = *(uint *)(lVar7 + 0x18);
              if (uVar12 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar12 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar12 * 4 + 0x20) = uVar5;
              }
              else {
                FUN_03fb652c(lVar7,uVar9 & 0xffffffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0566d118;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0566d118;
      }
      FUN_052199b8(&stack0x00000040,
                   *(undefined8 *)
                    System_Collections_Generic_List<GlyphPairAdjustmentRecord>_TypeInfo);
      if (lVar7 == 0) goto LAB_0566d240;
      FUN_03fb6fa8(&stack0x00000028,lVar7,
                   *(undefined8 *)System_Collections_Generic_List<IBaseUxmlObjectFactory>_TypeInfo);
      puVar1 = System_Collections_Generic_List<GlyphRenderMode>_TypeInfo;
      while (uVar9 = FUN_0514478c(&stack0x00000028,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
        FUN_056766b4();
      }
      FUN_05144788(&stack0x00000028,*(undefined8 *)System_Collections_Generic_List<Glyph>_TypeInfo);
    }
    *(undefined4 *)(unaff_x20 + 0x204) = *(undefined4 *)(unaff_x19 + 0x30);
  }
  return;
}


