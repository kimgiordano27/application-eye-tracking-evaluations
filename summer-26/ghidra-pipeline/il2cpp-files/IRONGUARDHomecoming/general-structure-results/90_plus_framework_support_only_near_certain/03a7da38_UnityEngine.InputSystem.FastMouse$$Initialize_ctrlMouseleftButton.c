/*
FUNCTION_NAME: UnityEngine.InputSystem.FastMouse$$Initialize_ctrlMouseleftButton
ENTRY_POINT: 03a7da38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a7d96c) */
/* WARNING: Removing unreachable block (ram,0x03a7d988) */
/* WARNING: Removing unreachable block (ram,0x03a7d98c) */
/* WARNING: Removing unreachable block (ram,0x03a7d964) */
/* WARNING: Removing unreachable block (ram,0x03a7db04) */

void UnityEngine_InputSystem_FastMouse__Initialize_ctrlMouseleftButton
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined8 uVar8;
  long lVar9;
  int unaff_w23;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar3 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar3;
    __cxa_end_catch();
    if ((unaff_w23 < 0) && (plVar3 = *(long **)(unaff_x19 + 10), plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03a7d950;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03a7d950:
      (*(code *)*puVar1)(plVar3,puVar1[1]);
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar9);
    }
    lVar9 = -1;
  }
  else {
    if ((unaff_w23 < 0) && (plVar3 = *(long **)(unaff_x19 + 10), plVar3 != (long *)0x0)) {
      lVar9 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03a7daf4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x03a7daf4:
      (*(code *)*puVar1)(plVar3,puVar1[1]);
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(param_1);
    }
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar8 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar6 = thunk_FUN_01ef6ec0(uVar8,*(undefined8 *)*puVar1);
    if ((uVar6 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    in_stack_00000000 = *puVar1;
    in_stack_00000008 = 1;
    __cxa_end_catch();
    lVar9 = 0;
  }
  uVar8 = (&stack0x00000000)[lVar9];
  *unaff_x19 = 0xfffffffe;
  lVar9 = thunk_FUN_01efb3a4(StringLiteral_7972);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = thunk_FUN_01efb3a4(StringLiteral_8026);
  FUN_026f71cc(unaff_x19 + 2,uVar8,uVar2);
  return;
}


