/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 01d87090
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__IsValidBone(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  if (param_1 != 0) {
    if ((int)unaff_x21[3] != 0) {
      unaff_x21[4] = unaff_x22;
      thunk_FUN_0106e12c();
      lVar2 = FUN_01d5e86c(*(undefined8 *)PTR_DAT_023593e0,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0103ffe0(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
      goto LAB_01d871b4;
      if (1 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[5] = lVar2;
        thunk_FUN_0106e12c(unaff_x21 + 5,lVar2);
        plVar4 = (long *)FUN_01d626f8();
        if (plVar4 == (long *)0x0) {
          *unaff_x19 = 0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_02353ea0 + 0x130);
          if (*(byte *)(*plVar4 + 0x130) < bVar1) {
            plVar4 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                   *(long *)PTR_DAT_02353ea0) {
            plVar4 = (long *)0x0;
          }
          *unaff_x19 = (long)plVar4;
        }
        thunk_FUN_0106e12c();
        return *unaff_x19;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
LAB_01d871b4:
  uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar5,0);
}


