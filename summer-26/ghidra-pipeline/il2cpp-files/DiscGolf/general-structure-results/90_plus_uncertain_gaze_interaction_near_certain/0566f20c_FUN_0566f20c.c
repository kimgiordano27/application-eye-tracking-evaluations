/*
FUNCTION_NAME: FUN_0566f20c
ENTRY_POINT: 0566f20c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_5
*/


void FUN_0566f20c(long param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long local_50;
  long lStack_48;
  undefined1 local_40 [16];
  
  puVar4 = System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo;
  if ((DAT_06dbc648 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_List<IXRHoverInteractable>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IXRInteractable>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<ERSORoadLog>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IXRInteractionGroup>_TypeInfo);
    DAT_06dbc648 = 1;
  }
  puVar3 = PTR_DAT_06a0f1a0;
  local_40._8_8_ = 0;
  lStack_48 = 0;
  local_40._0_8_ = 0;
  local_50 = 0;
  plVar5 = (long *)thunk_FUN_02dd3048(param_2,*(undefined8 *)puVar4);
  if (plVar5 == (long *)0x0) {
    local_50 = 0;
    lStack_48 = 0;
    if (param_2 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo +
                       0x130);
      if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)System_Collections_Generic_List<IXRHoverInteractor>_TypeInfo)) {
        lStack_48 = param_2[0x14];
        local_50 = param_2[0x13];
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0564d988(uVar1,&local_50,0);
  }
  else {
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto OVRPlugin__GetActionStatePose;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar5,lVar7,0);
OVRPlugin__GetActionStatePose:
    local_40 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    uVar1 = *(undefined4 *)(param_1 + 0xc0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0564da1c(uVar1,local_40,0);
  }
  return;
}


