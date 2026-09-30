/*
FUNCTION_NAME: Unity.VisualScripting.Lerp<Vector2>$$set_a
ENTRY_POINT: 02f2924c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void Unity_VisualScripting_Lerp<Vector2>__set_a(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  long unaff_x20;
  
  if ((in_w10 <= *(byte *)(in_x9 + 0x130)) &&
     (*(long *)(*(long *)(in_x9 + 200) + CONCAT44(in_register_00004054,in_w10) * 8 + -8) == param_1)
     ) {
    FUN_02f0de58(unaff_x20 + 0xe0);
    return;
  }
  uVar1 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            );
  uVar1 = FUN_01f08890(uVar1,5);
  FUN_01bc50c0();
  uVar2 = thunk_FUN_01efb3a4(Method_System_IO_File_Delete__);
  FUN_01bc5408(uVar1,0,uVar2);
  FUN_01bc50c0();
  plVar3 = (long *)thunk_FUN_01ecaf38();
  FUN_01bc50c0();
  uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
  FUN_01bc50c0(uVar1);
  FUN_01bc5408(uVar1,1,uVar2);
  FUN_01bc50c0(uVar1);
  uVar2 = thunk_FUN_01efb3a4(Method_System_IO_File_Move__);
  FUN_01bc5408(uVar1,2,uVar2);
  FUN_01bc50c0();
  plVar3 = (long *)thunk_FUN_01ecaf38();
  FUN_01bc50c0();
  uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
  FUN_01bc50c0(uVar1);
  FUN_01bc5408(uVar1,3,uVar2);
  FUN_01bc50c0(uVar1);
  uVar2 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                            );
  FUN_01bc5408(uVar1,4,uVar2);
  uVar1 = FUN_0340efe8(uVar1,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar2 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(Method_System_IO_File_OpenText__);
  FUN_034efd98(uVar2,uVar1,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2);
}


