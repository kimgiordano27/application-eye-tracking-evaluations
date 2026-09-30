/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<NativeArray<NudgeJobData>>$$Sort
ENTRY_POINT: 02c73f94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Collections_Generic_ArraySortHelper<NativeArray<NudgeJobData>>__Sort(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe08));
  *(undefined1 *)(unaff_x21 + 0x4f4) = 1;
  uStack000000000000000c = *(undefined4 *)(unaff_x20 + 4);
  switch(uStack000000000000000c) {
  case 1:
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    FUN_02c71924();
    return;
  case 2:
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    FUN_02c71004(unaff_x20 + 0x20,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
    return;
  case 3:
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    FUN_02c71f3c(unaff_x20 + 0x40,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
    return;
  case 4:
    break;
  default:
    lVar2 = FUN_01bc4c94(*(undefined8 *)(unaff_x19 + 0x20));
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50),&stack0x0000000c);
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider2D>__);
    uVar3 = FUN_03406290(uVar4,uVar3,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4);
  }
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02c740b4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02c740b4:
                    /* WARNING: Could not recover jumptable at 0x02c740c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar7,puVar1[1]);
  return;
}


