/*
FUNCTION_NAME: FUN_02cafbc0
ENTRY_POINT: 02cafbc0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 203
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_1
*/


void FUN_02cafbc0(long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 local_24;
  
  if ((DAT_0483158b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483158b = 1;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  puVar3 = (undefined4 *)
           thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
  switch(*puVar3) {
  case 1:
    lVar7 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar2 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar2 = *(long *)(param_2 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x70);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70);
    break;
  case 2:
    lVar7 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar2 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar2 = *(long *)(param_2 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    param_1 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0xa0)
    ;
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80);
    break;
  case 3:
    lVar7 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar2 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar2 = *(long *)(param_2 + 0x20);
    }
    UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    param_1 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0xc0)
    ;
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90);
    break;
  case 4:
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x60);
    param_1 = (long *)*puVar4;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02cafe4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02cafe4c:
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    uVar5 = puVar4[1];
    break;
  default:
    lVar2 = FUN_01bc4c94(*(undefined8 *)(param_2 + 0x20));
    puVar3 = (undefined4 *)
             thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20);
    local_24 = *puVar3;
    lVar2 = FUN_01bc4c94(*(undefined8 *)(param_2 + 0x20));
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50),&local_24);
    uVar6 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider2D>__);
    uVar5 = FUN_03406290(uVar6,uVar5,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x02cafe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar5);
  return;
}


