/*
FUNCTION_NAME: FUN_0625c8b4
ENTRY_POINT: 0625c8b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_0625c8b4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
                    /* try { // try from 0625c8b4 to 0635c8b7 has its CatchHandler @ 0625ca9c */
                    /* try { // try from 0625c8b8 to 0635c8bb has its CatchHandler @ 0625ca98 */
                    /* try { // try from 0625c8c0 to 0635c8c3 has its CatchHandler @ 0625cb84 */
                    /* try { // try from 0625c8c4 to 0635c8c7 has its CatchHandler @ 0625ca8c */
                    /* try { // try from 0625c8c8 to 0635c8cb has its CatchHandler @ 0625ca88 */
                    /* try { // try from 0625c8cc to 0635c8d3 has its CatchHandler @ 0625c9cc */
                    /* try { // try from 0625c8d4 to 0635c8d7 has its CatchHandler @ 0625c9b8 */
                    /* try { // try from 0625c8dc to 0635c8df has its CatchHandler @ 0625ca84 */
  if ((DAT_076de1c9 & 1) == 0) {
                    /* try { // try from 0625c8e0 to 0635c8e3 has its CatchHandler @ 0625c9b0 */
                    /* try { // try from 0625c8e4 to 0635c8e7 has its CatchHandler @ 0625c9a8 */
                    /* try { // try from 0625c8e8 to 0635c8eb has its CatchHandler @ 0625c9a0 */
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
                    /* try { // try from 0625c8ec to 0635c8ef has its CatchHandler @ 0625c99c */
                    /* try { // try from 0625c8f0 to 0635c8f3 has its CatchHandler @ 0625c990 */
    thunk_FUN_032e1da0(PTR_DAT_0727f888);
                    /* try { // try from 0625c8f8 to 0635c8fb has its CatchHandler @ 0625c9ac */
                    /* try { // try from 0625c8fc to 0635c8ff has its CatchHandler @ 0625c98c */
                    /* try { // try from 0625c900 to 0635c903 has its CatchHandler @ 0625c988 */
    thunk_FUN_032e1da0(PTR_DAT_07294bd0);
                    /* try { // try from 0625c904 to 0635c907 has its CatchHandler @ 0625c984 */
                    /* try { // try from 0625c908 to 0635c90b has its CatchHandler @ 0625c974 */
                    /* try { // try from 0625c90c to 0635c90f has its CatchHandler @ 0625c970 */
    thunk_FUN_032e1da0(PTR_DAT_07279510);
                    /* try { // try from 0625c910 to 0635c913 has its CatchHandler @ 0625bce4 */
                    /* try { // try from 0625c914 to 0635c917 has its CatchHandler @ 0625c968 */
    DAT_076de1c9 = 1;
  }
  puVar1 = PTR_DAT_07279510;
                    /* try { // try from 0625c918 to 0635c91b has its CatchHandler @ 0625c960 */
  if (param_2 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar5 = thunk_FUN_032a56a0();
    uVar7 = thunk_FUN_032e1da0(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_05897d14(uVar5,uVar7,0);
  }
  else {
                    /* try { // try from 0625c91c to 0635c91f has its CatchHandler @ 0625c95c */
                    /* try { // try from 0625c920 to 0635c927 has its CatchHandler @ 0625bce4 */
    uVar7 = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 0625c928 to 0635c92b has its CatchHandler @ 0625c950 */
                    /* try { // try from 0625c92c to 0635c92f has its CatchHandler @ 0625c94c */
                    /* try { // try from 0625c930 to 0635c933 has its CatchHandler @ 0625c944 */
    if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
                    /* try { // try from 0625c934 to 0635c937 has its CatchHandler @ 0625c940 */
      thunk_FUN_032cd7c0();
    }
                    /* try { // try from 0625c938 to 0635c9e3 has its CatchHandler @ 0625bce4 */
                    /* catch() { ... } // from try @ 0625c934 with catch @ 0625c940 */
                    /* catch() { ... } // from try @ 0625c930 with catch @ 0625c944 */
    uVar2 = FUN_0593b434(uVar7,0,0);
                    /* catch() { ... } // from try @ 0625c4c0 with catch @ 0625c948 */
    if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0625c92c with catch @ 0625c94c */
                    /* catch() { ... } // from try @ 0625c928 with catch @ 0625c950 */
                    /* catch() { ... } // from try @ 0625c4cc with catch @ 0625c954 */
      if ((param_4 == 0) && (param_4 = *(long *)(param_1 + 0x10), param_4 == 0)) {
                    /* catch() { ... } // from try @ 0625c4a4 with catch @ 0625c958 */
                    /* catch() { ... } // from try @ 0625c91c with catch @ 0625c95c */
                    /* catch() { ... } // from try @ 0625c918 with catch @ 0625c960 */
                    /* catch() { ... } // from try @ 0625c7e4 with catch @ 0625c964 */
                    /* catch() { ... } // from try @ 0625c914 with catch @ 0625c968 */
        param_4 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      }
                    /* catch() { ... } // from try @ 0625c7c4 with catch @ 0625c96c */
                    /* catch() { ... } // from try @ 0625c90c with catch @ 0625c970 */
                    /* catch() { ... } // from try @ 0625c908 with catch @ 0625c974 */
                    /* catch() { ... } // from try @ 0625c7bc with catch @ 0625c978 */
                    /* catch() { ... } // from try @ 0625c798 with catch @ 0625c97c */
                    /* catch() { ... } // from try @ 0625c79c with catch @ 0625c980 */
                    /* catch() { ... } // from try @ 0625c904 with catch @ 0625c984 */
                    /* catch() { ... } // from try @ 0625c900 with catch @ 0625c988 */
                    /* catch() { ... } // from try @ 0625c8fc with catch @ 0625c98c */
                    /* catch() { ... } // from try @ 0625c8f0 with catch @ 0625c990 */
      switch(*(undefined4 *)(param_2 + 0x20)) {
      case 1:
                    /* catch() { ... } // from try @ 0625c788 with catch @ 0625c994 */
                    /* catch() { ... } // from try @ 0625c754 with catch @ 0625c998 */
                    /* catch() { ... } // from try @ 0625c8ec with catch @ 0625c99c */
                    /* catch() { ... } // from try @ 0625c8e8 with catch @ 0625c9a0 */
                    /* catch() { ... } // from try @ 0625c46c with catch @ 0625c9a4 */
        lVar3 = FUN_0625eca8(param_1,param_2,param_3,param_4);
        break;
      case 2:
        lVar3 = FUN_0625ed5c(param_1,param_2,param_3,param_4);
        break;
      case 3:
        lVar3 = FUN_0625dd1c(param_1,param_2,param_3,param_4,0,0);
        break;
      case 4:
        lVar3 = FUN_0625cd34(param_1,param_2,param_3,param_4,0);
        break;
      case 5:
        lVar3 = FUN_0625f368(param_1,param_2,param_3,param_4);
        break;
      case 6:
        lVar3 = FUN_0625eac8(param_1,param_2,param_3,param_4);
        break;
      default:
        plVar4 = *(long **)(param_2 + 0x10);
        if (plVar4 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
          uVar5 = thunk_FUN_032e1da0(OVRPlugin_BodyJointLocation___TypeInfo);
          uVar6 = thunk_FUN_032e1da0(OVRPlugin_Bone___TypeInfo);
          uVar7 = FUN_057aaeec(uVar5,uVar7,uVar6,0);
          thunk_FUN_032e1da0(PTR_DAT_07279980);
          uVar5 = thunk_FUN_032a56a0();
          FUN_0591ef6c(uVar5,uVar7,0);
          uVar7 = thunk_FUN_032e1da0(OVRPlugin_AppPerfFrameStats___TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar5,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar4 = *(long **)(param_2 + 0x10);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      thunk_FUN_0333a630();
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x38);
      thunk_FUN_0333a630();
      *(undefined4 *)(lVar3 + 0x20) = 1;
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 != (long *)0x0) {
        uVar7 = *(undefined8 *)PTR_DAT_07294bd0;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar7 = FUN_059324dc(uVar7,0);
        (**(code **)(*plVar4 + 0x428))(plVar4,uVar7,*(undefined8 *)(*plVar4 + 0x430));
      }
      return lVar3;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar5 = thunk_FUN_032a56a0();
    uVar7 = thunk_FUN_032e1da0(OVROverlay_LayerTexture___TypeInfo);
    FUN_0589e7ac(uVar5,uVar7,0);
  }
  uVar7 = thunk_FUN_032e1da0(OVRPlugin_AppPerfFrameStats___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar5,uVar7);
}


