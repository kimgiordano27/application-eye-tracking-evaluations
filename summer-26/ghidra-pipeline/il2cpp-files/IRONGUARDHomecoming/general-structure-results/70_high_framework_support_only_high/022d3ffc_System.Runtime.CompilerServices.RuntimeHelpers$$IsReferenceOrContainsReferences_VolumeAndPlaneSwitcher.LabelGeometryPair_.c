/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<VolumeAndPlaneSwitcher.LabelGeometryPair>
ENTRY_POINT: 022d3ffc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d4204) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<VolumeAndPlaneSwitcher_LabelGeometryPair>
               (void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 unaff_w19;
  long *plVar7;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x29;
  
  plVar7 = *(long **)(unaff_x29 + -0x58);
  plVar1 = (long *)(**(code **)(*unaff_x25 + 0x398))();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar1 + 0x198))(plVar1,plVar7,*(undefined8 *)(*plVar1 + 0x1a0));
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_041d84e4(plVar7,0);
  if ((uVar2 & 1) != 0) {
    FUN_041c73ec(*(undefined8 *)(unaff_x29 + -0xa8));
  }
  lVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
  if (*(int *)(*(long *)Method_System_Char_IsSurrogate__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsHighSurrogate__);
  if (lVar3 == lVar4) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_041e2260(unaff_w19);
  }
  else {
    lVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (*(int *)(*(long *)Method_System_Char_IsNumber__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar4 = FUN_02df8e70(*(undefined8 *)Method_System_Char_IsLower__);
    if (lVar3 == lVar4) {
      if (*plVar7 != *(long *)Method_System_Char_Parse__) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      if ((int)plVar7[0x16] == 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_041e2260(unaff_w19,0,0);
      }
    }
  }
  lVar3 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_022d4190;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022d4190:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -0x30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


