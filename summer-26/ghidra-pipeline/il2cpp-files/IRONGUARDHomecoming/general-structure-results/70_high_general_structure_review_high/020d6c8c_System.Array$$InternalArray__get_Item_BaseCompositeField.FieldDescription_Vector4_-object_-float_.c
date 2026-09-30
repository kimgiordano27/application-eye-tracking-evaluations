/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<BaseCompositeField.FieldDescription<Vector4,-object,-float>>
ENTRY_POINT: 020d6c8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__get_Item<BaseCompositeField_FieldDescription<Vector4,_object,_float>>
               (void)

{
  ulong uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding();
  uVar3 = *(undefined8 *)(unaff_x19 + 0xe);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = FUN_04073094(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = FUN_04073258();
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_04073258(*(long *)(unaff_x19 + 0xe),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    FUN_0407dcac(lVar2,uVar3,0);
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_Platform_Request<AppDownloadResult>__ctor__);
  FUN_020816ac();
  if (lVar2 != 0) {
    FUN_020816dc(lVar2,*(undefined8 *)(unaff_x19 + 0x10),0,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = System_Array__InternalArray__ICollection_Contains<BaseCompositeField_FieldDescription<Vector2Int,_object,_int>>
                      ();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementProgressList>_OnComplete__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = FUN_0373da38(&stack0x00000048,0);
      if ((uVar1 & 1) != 0) {
        FUN_020826c0(lVar2,in_stack_00000048,0);
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = FUN_023a3f6c();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Request<AchievementUpdate>__ctor__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = FUN_0373e354(&stack0x00000040,0);
      if ((uVar1 & 1) != 0) {
        FUN_02082984(lVar2,in_stack_00000040,0);
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar1 = FUN_023a44cc();
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Stack<IEnumerator<int>>_Pop__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = Shapes_Draw__RegularPolygonBorder(&stack0x00000038,0);
      if ((uVar1 & 1) != 0) {
        FUN_02082cc8(lVar2,in_stack_00000038,0);
      }
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_026f6f9c(unaff_x19 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


