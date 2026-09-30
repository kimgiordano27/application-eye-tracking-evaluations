/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 01d833e0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__SetTrackingOriginType(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bcc8);
    *(undefined1 *)(unaff_x20 + 0x7ee) = 1;
  }
  uVar2 = (**(code **)(*unaff_x19 + 0x568))();
  puVar1 = PTR_DAT_0234bcc8;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 01d834d4 to 01e834e7 has its CatchHandler @ 01d836fc */
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02358358);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar6 = thunk_FUN_010400dc();
    uVar7 = thunk_FUN_010303a8(PTR_DAT_02358360);
    FUN_01c5e198(uVar6,uVar5,uVar7,0);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_023591c8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar6,uVar5);
  }
                    /* try { // try from 01d83414 to 01e8343b has its CatchHandler @ 01d83708 */
  if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar3 = FUN_01d7ad74();
  if (lVar3 != 0) {
    lVar4 = FUN_01d6df4c();
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar5 = FUN_01d7aaec();
        if (lVar4 == 0) goto LAB_01d834cc;
        FUN_01d6a894(lVar4,uVar5,uVar2 & 0xffffffff,0);
        uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    return lVar4;
  }
LAB_01d834cc:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


