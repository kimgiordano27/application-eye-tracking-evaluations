/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 031a1d74
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_BodyJointLocation>
               (undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000007237990 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e57350);
    bRam0000000007237990 = 1;
  }
  uVar1 = FUN_031d2bdc(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_0159f088(PTR_DAT_06df0bd0);
    uVar6 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e56518);
    System_Collections_Generic_List<UIPlayersMenu_PlayerOrSeparatorData>__Contains(uVar6,uVar5,0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e22d80);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,uVar5);
  }
  plVar2 = (long *)thunk_FUN_015d0480(param_1,*(undefined8 *)PTR_DAT_06e57350);
  if (plVar2 == (long *)0x0) {
    FUN_0160edb4(param_1,param_2,param_3);
    return;
  }
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  lVar3 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790();
  }
  lVar3 = thunk_FUN_015d01b0(lVar3,&uStack_50);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01656ef8(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


