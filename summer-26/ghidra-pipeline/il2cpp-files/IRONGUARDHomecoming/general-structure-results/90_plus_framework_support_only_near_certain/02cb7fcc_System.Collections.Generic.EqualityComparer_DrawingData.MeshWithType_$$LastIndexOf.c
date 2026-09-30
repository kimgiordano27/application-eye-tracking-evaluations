/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<DrawingData.MeshWithType>$$LastIndexOf
ENTRY_POINT: 02cb7fcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Collections_Generic_EqualityComparer<DrawingData_MeshWithType>__LastIndexOf(void)

{
  ushort uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  undefined4 uStack000000000000000c;
  
  switch(in_w8) {
  case 1:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44(lVar4);
    }
    break;
  case 2:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44(lVar4);
    }
    thunk_FUN_01ee7388();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44(*(long *)(unaff_x19 + 0x20));
    }
    break;
  case 3:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44(lVar4);
    }
    thunk_FUN_01ee7388();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44(*(long *)(unaff_x19 + 0x20));
    }
    break;
  case 4:
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    puVar2 = (undefined8 *)thunk_FUN_01ee7388();
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02cb81f8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02cb81f8:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    break;
  default:
    FUN_01bc4c94(*(undefined8 *)(unaff_x19 + 0x20));
    puVar3 = (undefined4 *)thunk_FUN_01ee7388();
    uStack000000000000000c = *puVar3;
    lVar4 = FUN_01bc4c94(*(undefined8 *)(unaff_x19 + 0x20));
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50),&stack0x0000000c);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider2D>__);
    uVar5 = FUN_03406290(uVar6,uVar5,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x02cb820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


