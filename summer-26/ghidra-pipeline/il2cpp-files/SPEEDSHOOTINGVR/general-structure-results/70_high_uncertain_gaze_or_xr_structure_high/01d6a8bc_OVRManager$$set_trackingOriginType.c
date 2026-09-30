/*
FUNCTION_NAME: OVRManager$$set_trackingOriginType
ENTRY_POINT: 01d6a8bc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__set_trackingOriginType(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w20;
  
  iVar1 = FUN_0105cdc0(param_1,0);
  if (iVar1 <= unaff_w20) {
    iVar1 = FUN_0105cdc0();
    iVar2 = System_Array__InternalArray__set_Item<ParameterizedStrings_FormatParam>();
    if (unaff_w20 <= iVar1 + iVar2 + -1) {
      plVar3 = (long *)thunk_FUN_0105d828();
      if (plVar3 == (long *)0x0) {
LAB_01d6a984:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410));
      if (plVar3 == (long *)0x0) goto LAB_01d6a984;
      uVar4 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
      if ((uVar4 & 1) == 0) {
        FUN_0105d0a0();
        return;
      }
      thunk_FUN_010303a8(PTR_DAT_0234ba68);
      uVar5 = thunk_FUN_010400dc();
      uVar6 = thunk_FUN_010303a8(PTR_DAT_023583b0);
      FUN_01d45cb4(uVar5,uVar6,0);
      goto LAB_01d6a9ec;
    }
  }
  thunk_FUN_010303a8(PTR_DAT_0234c200);
  uVar5 = thunk_FUN_010400dc();
  uVar6 = thunk_FUN_010303a8(PTR_DAT_02358988);
  FUN_01d45ddc(uVar5,uVar6,0);
LAB_01d6a9ec:
  uVar6 = thunk_FUN_010303a8(PTR_DAT_02358990);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,uVar6);
}


