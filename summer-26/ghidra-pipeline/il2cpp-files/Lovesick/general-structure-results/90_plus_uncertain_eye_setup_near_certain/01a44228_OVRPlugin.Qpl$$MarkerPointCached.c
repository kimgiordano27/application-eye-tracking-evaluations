/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 01a44228
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPointCached(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  int unaff_w22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x01a44228:
  uVar5 = FUN_00aeb078(&stack0x00000030,*unaff_x28);
  plVar6 = (long *)FUN_00aeb17c(&stack0x00000030,*unaff_x25);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c();
  }
  puVar7 = (undefined8 *)thunk_FUN_00d624a0();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  uVar8 = *puVar7;
  *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x24 + 0x28) = unaff_d9;
  *(undefined8 *)(unaff_x24 + 0x30) = 0;
  *(undefined8 *)(unaff_x24 + 0x38) = 0;
  *(undefined8 *)(unaff_x24 + 0x40) = uVar8;
  do {
    unaff_w29 = unaff_w29 + 1;
    uVar2 = FUN_012bf140(&stack0x00000040,*unaff_x23);
    if ((uVar2 & 1) == 0) {
      FUN_012bf83c(&stack0x00000040,*(undefined8 *)PTR_DAT_033ead80);
      return;
    }
    auVar9 = FUN_00bc3474(&stack0x00000040,*(undefined8 *)StringLiteral_13664);
    _in_stack_00000030 = auVar9;
    lVar3 = FUN_00aeb17c(&stack0x00000030,*unaff_x25);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = thunk_FUN_00d93c64(lVar3,0);
    uVar8 = *unaff_x26;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01780344(uVar8,0);
    uVar2 = FUN_01789ac0(uVar5,uVar8,0);
    unaff_x24 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w22;
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = thunk_FUN_00d93c64(lVar3,0);
      uVar8 = *(undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01780344(uVar8,0);
      uVar2 = FUN_01789ac0(uVar5,uVar8,0);
      if ((uVar2 & 1) == 0) break;
      uVar5 = FUN_00aeb078(&stack0x00000030,*unaff_x28);
      plVar6 = (long *)FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (plVar6 != (long *)0x0) {
        if (*plVar6 !=
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
      *(undefined8 *)(unaff_x24 + 0x28) = 0;
      *(long **)(unaff_x24 + 0x30) = plVar6;
      *(undefined8 *)(unaff_x24 + 0x38) = 0;
    }
    else {
      uVar5 = FUN_00aeb078(&stack0x00000030,*unaff_x28);
      plVar6 = (long *)FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(*plVar6 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar4 = (undefined4 *)thunk_FUN_00d624a0();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *puVar4;
      *(undefined8 *)(unaff_x24 + 0x20) = uVar5;
      *(undefined8 *)(unaff_x24 + 0x28) = unaff_d8;
      *(undefined8 *)(unaff_x24 + 0x30) = 0;
      *(undefined4 *)(unaff_x24 + 0x38) = uVar1;
      *(undefined4 *)(unaff_x24 + 0x3c) = 0;
    }
    *(undefined8 *)(unaff_x24 + 0x40) = 0;
  } while( true );
  lVar3 = FUN_00aeb17c(&stack0x00000030,*unaff_x25);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = thunk_FUN_00d93c64(lVar3,0);
  uVar8 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01780344(uVar8,0);
  uVar2 = FUN_01789ac0(uVar5,uVar8,0);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    lVar3 = thunk_FUN_00d62348();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<int,_TransformFeatureStateCollection_TransformStateInfo>_Remove__
                              );
    FUN_017a9608(lVar3,uVar5,0);
    uVar5 = thunk_FUN_00d48444(Obi_PriorityQueue<VoxelPathFinder_TargetVoxel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(lVar3,uVar5);
  }
  goto code_r0x01a44228;
}


