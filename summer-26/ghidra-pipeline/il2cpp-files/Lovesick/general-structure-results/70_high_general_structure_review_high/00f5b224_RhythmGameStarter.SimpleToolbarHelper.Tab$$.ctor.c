/*
FUNCTION_NAME: RhythmGameStarter.SimpleToolbarHelper.Tab$$.ctor
ENTRY_POINT: 00f5b224
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void RhythmGameStarter_SimpleToolbarHelper_Tab___ctor(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  int iVar10;
  long unaff_x21;
  long lVar11;
  undefined8 uVar12;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
                      );
    thunk_FUN_00d48444(StringLiteral_14102);
    thunk_FUN_00d48444(StringLiteral_659);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Light>__);
    thunk_FUN_00d48444(PTR_DAT_033eebf0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__
                      );
    *(undefined1 *)(unaff_x21 + 0x75b) = 1;
  }
  lVar11 = *(long *)(param_2 + 0x38);
  if (lVar11 != 0) {
    lVar9 = *(long *)Method_UnityEngine_U2D_SpriteDataAccessExtensions_GetVertexAttribute<Vector2>__
    ;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
    }
    else {
      iVar10 = *(int *)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if (0 < iVar10) {
        FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar10,0);
        if (unaff_x19 == 0) goto LAB_00f5b4ac;
        goto LAB_00f5b2f8;
      }
    }
    if (unaff_x19 != 0) {
LAB_00f5b2f8:
      puVar5 = Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__;
      puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
      puVar3 = Method_UnityEngine_Component_GetComponent<Light>__;
      puVar2 = Method_System_Collections_Generic_List_Enumerator<StylePropertyName>_get_Current__;
      puVar1 = PTR_DAT_033eebf0;
      if (0 < *(int *)(unaff_x19 + 0x18)) {
        iVar10 = 0;
        do {
          FUN_0132138c();
          if (in_stack_00000008 == 0) goto LAB_00f5b4ac;
          uVar12 = *(undefined8 *)(in_stack_00000008 + 0x18);
          uVar7 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar1,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar3,0);
            if ((uVar7 & 1) == 0) {
              uVar7 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar2,0);
              if ((uVar7 & 1) == 0) {
                uVar7 = thunk_FUN_015fe514(uVar12,*(undefined8 *)puVar5,0);
                if ((uVar7 & 1) != 0) {
                  lVar11 = *(long *)(param_2 + 0x38);
                  FUN_0132138c();
                  if (((in_stack_00000008 == 0) ||
                      (plVar8 = *(long **)(in_stack_00000008 + 0x30), plVar8 == (long *)0x0)) ||
                     (uVar12 = (**(code **)(*plVar8 + 0x168))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x170)), lVar11 == 0))
                  goto LAB_00f5b4ac;
                  FUN_00ac1158(lVar11,uVar12,*(undefined8 *)puVar4);
                }
              }
              else {
                FUN_0132138c();
                if (in_stack_00000008 == 0) goto LAB_00f5b4ac;
                uVar6 = FUN_0176ee4c(*(undefined8 *)(in_stack_00000008 + 0x30),0);
                *(undefined4 *)(param_2 + 0x30) = uVar6;
              }
            }
            else {
              FUN_0132138c();
              if (in_stack_00000008 == 0) goto LAB_00f5b4ac;
              uVar6 = FUN_0176ee4c(*(undefined8 *)(in_stack_00000008 + 0x30),0);
              *(undefined4 *)(param_2 + 0x2c) = uVar6;
            }
          }
          else {
            FUN_0132138c();
            if (in_stack_00000008 == 0) goto LAB_00f5b4ac;
            uVar6 = FUN_0176ee4c(*(undefined8 *)(in_stack_00000008 + 0x30),0);
            *(undefined4 *)(param_2 + 0x28) = uVar6;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(unaff_x19 + 0x18));
      }
      return;
    }
  }
LAB_00f5b4ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


