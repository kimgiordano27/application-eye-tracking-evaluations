/*
FUNCTION_NAME: FUN_02108f38
ENTRY_POINT: 02108f38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02108f38(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  puVar2 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__;
  if ((DAT_0482fbf1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_0482fbf1 = 1;
  }
  *(undefined8 *)(param_1 + 0x74) = 0x63f800000;
  lVar5 = FUN_01f08890(*(undefined8 *)puVar2,2);
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  FUN_04038e44(0,0,&local_50,0);
  if (lVar5 != 0) {
    uStack_5c = CONCAT44(local_38,uStack_3c);
    uStack_68 = uStack_48;
    local_70 = local_50;
    uStack_64 = uStack_44;
    uStack_60 = local_40;
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x34) = uStack_5c;
      *(ulong *)(lVar5 + 0x2c) = CONCAT44(local_40,uStack_44);
      *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar5 + 0x20) = local_50;
      local_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      FUN_04038e44(0x3f800000,0x3f800000,&local_90,0);
      puVar2 = Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>__ctor__;
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(ulong *)(lVar5 + 0x50) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar5 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar5 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar5 + 0x3c) = local_90;
        puVar3 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_04039790(uVar6,lVar5,0);
        *(undefined8 *)(param_1 + 0x80) = uVar6;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x80),uVar6);
        *(undefined4 *)(param_1 + 0x88) = 1;
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)puVar3;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x90));
        uVar6 = DAT_00c8ed70;
        *(undefined4 *)(param_1 + 0xb4) = 0x3c23d70a;
        *(undefined2 *)(param_1 + 0xb8) = 0x101;
        *(undefined8 *)(param_1 + 0xc0) = uVar6;
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee1d = '\x01';
        }
        puVar2 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
        lVar5 = *(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
        uVar7 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x50);
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48);
        *(undefined4 *)(param_1 + 0xd8) = uVar7;
        puVar4 = 
        Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
        ;
        puVar3 = 
        Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
        ;
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4(puVar2);
          lVar5 = *(long *)puVar2;
          DAT_0482ee19 = '\x01';
        }
        uVar7 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x20);
        *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
        *(undefined4 *)(param_1 + 0xe4) = uVar7;
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_0317f814(uVar6,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0xf0) = uVar6;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0xf0),uVar6);
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_0317f814(uVar6,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0xf8) = uVar6;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0xf8),uVar6);
        uVar1 = _UNK_00c91418;
        uVar6 = _DAT_00c91410;
        *(undefined1 *)(param_1 + 0x114) = 1;
        *(undefined1 *)(param_1 + 0x120) = 1;
        *(undefined4 *)(param_1 + 0x11c) = 0x3f000000;
        *(undefined8 *)(param_1 + 300) = uVar1;
        *(undefined8 *)(param_1 + 0x124) = uVar6;
        thunk_FUN_0406f928(param_1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


