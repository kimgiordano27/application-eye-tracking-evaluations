/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Bone>
ENTRY_POINT: 031a1f0c
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


void System_Array__InternalArray__IndexOf<OVRPlugin_Bone>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 in_w8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x991) = in_w8;
  uVar1 = FUN_031d2bdc();
  if (uVar1 <= unaff_w19) {
    thunk_FUN_0159f088(PTR_DAT_06df0bd0);
    uVar6 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e56518);
    System_Collections_Generic_List<UIPlayersMenu_PlayerOrSeparatorData>__Contains(uVar6,uVar5,0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06d8df10);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,uVar5);
  }
  plVar2 = (long *)thunk_FUN_015d0480();
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(**(long **)(unaff_x21 + 0x38) + 0x132) & 1) == 0) {
      FUN_015c2790();
    }
    lVar3 = thunk_FUN_015d01b0();
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar6,0);
    }
    if (unaff_w19 < *(uint *)(plVar2 + 3)) {
      plVar2[(long)(int)unaff_w19 + 4] = lVar3;
      thunk_FUN_01656ef8(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  FUN_0160edb4();
  return;
}


