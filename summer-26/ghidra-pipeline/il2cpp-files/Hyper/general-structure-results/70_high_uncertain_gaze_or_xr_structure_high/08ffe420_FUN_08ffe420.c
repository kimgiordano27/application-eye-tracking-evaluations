/*
FUNCTION_NAME: FUN_08ffe420
ENTRY_POINT: 08ffe420
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_08ffe420(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_0ac76288;
  puVar1 = PTR_DAT_0ac75888;
  if ((DAT_0b32fc1f & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac76288);
    FUN_04947ee4(PTR_DAT_0ac75888);
    DAT_0b32fc1f = 1;
  }
  plVar3 = (long *)FUN_04947fd0(*(undefined8 *)puVar2,2);
                    /* try { // try from 08ffe47c to 090fe483 has its CatchHandler @ 08ffe5c8 */
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  OVRPlugin_BodyJointLocation__get_OrientationValid(lVar4,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* try { // try from 08ffe49c to 090fe49f has its CatchHandler @ 08ffe5b8 */
                    /* try { // try from 08ffe4a0 to 090fe4e3 has its CatchHandler @ 08ffe5cc */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_08ffe53c:
    uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_049ee3d8(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    OVRPlugin_BodyJointLocation__get_OrientationValid(lVar4,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_08ffe53c;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_049ee3d8(plVar3 + 5,lVar4);
      *(long *)(param_1 + 0x20) = (long)plVar3;
      thunk_FUN_049ee3d8((long *)(param_1 + 0x20),plVar3);
      thunk_FUN_0a177cbc(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


