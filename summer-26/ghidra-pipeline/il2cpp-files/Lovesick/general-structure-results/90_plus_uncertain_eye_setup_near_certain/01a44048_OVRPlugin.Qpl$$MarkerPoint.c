/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 01a44048
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


void OVRPlugin_Qpl__MarkerPoint(undefined1 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    auVar10 = FUN_00bc3474(param_1,param_2);
    _in_stack_00000030 = auVar10;
    lVar2 = FUN_00aeb17c(&stack0x00000030,*unaff_x25);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = thunk_FUN_00d93c64(lVar2,0);
    uVar9 = *unaff_x26;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01780344(uVar9,0);
    uVar4 = FUN_01789ac0(uVar3,uVar9,0);
    lVar2 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w22;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = thunk_FUN_00d93c64(lVar7,0);
      uVar9 = *(undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar4 = FUN_01789ac0(uVar3,uVar9,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_00aeb078(&stack0x00000030,*unaff_x28);
        plVar5 = (long *)FUN_00aeb17c(&stack0x00000030,*unaff_x25);
        if (plVar5 != (long *)0x0) {
          if (*plVar5 !=
              *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
          {
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
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(long **)(lVar2 + 0x30) = plVar5;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        goto LAB_01a441c8;
      }
      lVar7 = FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar3 = thunk_FUN_00d93c64(lVar7,0);
      uVar9 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar4 = FUN_01789ac0(uVar3,uVar9,0);
      if ((uVar4 & 1) == 0) {
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        lVar2 = thunk_FUN_00d62348();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar3 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<int,_TransformFeatureStateCollection_TransformStateInfo>_Remove__
                                  );
        FUN_017a9608(lVar2,uVar3,0);
        uVar3 = thunk_FUN_00d48444(Obi_PriorityQueue<VoxelPathFinder_TargetVoxel>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar2,uVar3);
      }
      uVar3 = FUN_00aeb078(&stack0x00000030,*unaff_x28);
      plVar5 = (long *)FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar8 = (undefined8 *)thunk_FUN_00d624a0();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar9 = *puVar8;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x28) = unaff_d9;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = uVar9;
    }
    else {
      uVar3 = FUN_00aeb078(&stack0x00000030,*unaff_x28);
      plVar5 = (long *)FUN_00aeb17c(&stack0x00000030,*unaff_x25);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(*plVar5 + 0x40) !=
          *(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
                   0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar6 = (undefined4 *)thunk_FUN_00d624a0();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *puVar6;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar2 + 0x28) = unaff_d8;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined4 *)(lVar2 + 0x38) = uVar1;
      *(undefined4 *)(lVar2 + 0x3c) = 0;
LAB_01a441c8:
      *(undefined8 *)(lVar2 + 0x40) = 0;
    }
    unaff_w29 = unaff_w29 + 1;
    uVar4 = FUN_012bf140(&stack0x00000040,*unaff_x23);
    if ((uVar4 & 1) == 0) {
      FUN_012bf83c(&stack0x00000040,*(undefined8 *)PTR_DAT_033ead80);
      return;
    }
    param_2 = *(undefined8 *)StringLiteral_13664;
    param_1 = &stack0x00000040;
  } while( true );
}


