/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 031a26f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>
               (ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e57350);
    *(undefined1 *)(unaff_x20 + 0x997) = 1;
  }
  uVar1 = FUN_031d2bdc(param_2,0);
  if (uVar1 <= param_3) {
    thunk_FUN_0159f088(PTR_DAT_06df0bd0);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 031a2764 with catch @ 031a27ec
                        */
    uVar6 = thunk_FUN_015d056c();
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 031a2758 with catch @ 031a27f0
                        */
    FUN_011a9bc8();
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e56518);
                    /* try { // try from 031a2808 to 032a280b has its CatchHandler @ 031a2880 */
    System_Collections_Generic_List<UIPlayersMenu_PlayerOrSeparatorData>__Contains(uVar6,uVar5,0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06e5fda0);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,uVar5);
  }
  plVar2 = (long *)thunk_FUN_015d0480(param_2,*(undefined8 *)PTR_DAT_06e57350);
  if (plVar2 == (long *)0x0) {
    FUN_0160edb4(param_2,param_3,param_4);
    return;
  }
                    /* try { // try from 031a2758 to 032a2763 has its CatchHandler @ 031a27f0 */
                    /* try { // try from 031a2764 to 032a276f has its CatchHandler @ 031a27ec */
  if ((*(byte *)(**(long **)(param_5 + 0x38) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
                    /* try { // try from 031a2770 to 032a2807 has its CatchHandler @ 031a26e4 */
  lVar3 = thunk_FUN_015d01b0();
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,0);
  }
  if (param_3 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_3 + 4] = lVar3;
    thunk_FUN_01656ef8(plVar2 + (long)(int)param_3 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


