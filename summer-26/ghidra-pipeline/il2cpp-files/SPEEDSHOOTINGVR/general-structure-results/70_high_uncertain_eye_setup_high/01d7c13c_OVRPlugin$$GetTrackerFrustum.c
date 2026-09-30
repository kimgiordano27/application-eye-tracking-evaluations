/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 01d7c13c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerFrustum(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  
  iVar2 = FUN_01c4fae4();
  if (iVar2 == 0) {
    lVar6 = *unaff_x19;
  }
  else {
    iVar2 = FUN_01c4fae4();
    if (iVar2 != 0) {
                    /* try { // try from 01d7c174 to 01e7c19b has its CatchHandler @ 01d7c7e8 */
      iVar2 = FUN_01c4fae4();
      if (iVar2 == 0) {
        uVar4 = FUN_00fd8574();
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)PTR_DAT_0234bcc8);
        }
        FUN_01d790c0(uVar4);
        return;
      }
      iVar2 = FUN_01c4fae4();
      if (iVar2 != 0) {
        uVar4 = thunk_FUN_010303a8(PTR_DAT_02358f28);
        thunk_FUN_010303a8(PTR_DAT_023508f8);
        uVar5 = thunk_FUN_010400dc();
        FUN_01d36fec(uVar5,uVar4,0);
        uVar4 = thunk_FUN_010303a8(PTR_DAT_02358f30);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar5,uVar4);
      }
      plVar3 = (long *)thunk_FUN_0105d828();
      uVar4 = FUN_00fd8574();
      if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)PTR_DAT_0234bcc8);
      }
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0234bce0 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234bce0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar3);
        }
      }
      FUN_01d7974c(plVar3,uVar4);
      return;
    }
    plVar3 = (long *)FUN_00fd8574();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar6 = *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x01d7c20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x168))();
  return;
}


