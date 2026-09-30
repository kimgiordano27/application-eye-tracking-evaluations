/*
FUNCTION_NAME: FUN_02c7b260
ENTRY_POINT: 02c7b260
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1
*/


void FUN_02c7b260(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 local_24;
  
  if ((DAT_048314f6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048314f6 = 1;
  }
  local_24 = *(undefined4 *)(param_1 + 4);
  switch(local_24) {
  case 1:
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    FUN_02c7b428(param_1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    return;
  case 2:
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    FUN_02c7a3f0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
    return;
  case 3:
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    FUN_02c7ba04(param_1 + 0x38,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x90));
    return;
  case 4:
    break;
  default:
    lVar2 = FUN_01bc4c94(*(undefined8 *)(param_2 + 0x20));
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50),&local_24);
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider2D>__);
    uVar3 = FUN_03406290(uVar4,uVar3,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_2);
  }
  plVar7 = *(long **)(param_1 + 0x10);
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
        goto LAB_02c7b3a4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02c7b3a4:
                    /* WARNING: Could not recover jumptable at 0x02c7b3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar7,puVar1[1]);
  return;
}


