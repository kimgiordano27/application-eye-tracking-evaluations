/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 090a0250
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__SetExternalCameraProperties(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  float *unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  float fVar6;
  float unaff_s8;
  uint uStack000000000000000c;
  
  FUN_04947ee4(PTR_DAT_0ac78e08);
  FUN_04947ee4(PTR_DAT_0ac09788);
  *(undefined1 *)(unaff_x22 + 0x267) = 1;
  iVar1 = *(int *)(unaff_x20 + 0x84);
  uStack000000000000000c = 0;
  *unaff_x21 = 1.0;
  if ((iVar1 == 2) || (uStack000000000000000c = FUN_0909e1ec(), uStack000000000000000c == 0)) {
    fVar6 = (float)FUN_0909de30();
    *unaff_x21 = fVar6;
  }
  else {
                    /* try { // try from 090a029c to 091a03e3 has its CatchHandler @ 090a029c
                       catch() { ... } // from try @ 090a029c with catch @ 090a029c
                       catch() { ... } // from try @ 090a04a4 with catch @ 090a029c
                       catch() { ... } // from try @ 090a0530 with catch @ 090a029c
                       catch() { ... } // from try @ 090a053c with catch @ 090a029c
                       catch() { ... } // from try @ 090a0584 with catch @ 090a029c
                       catch() { ... } // from try @ 090a05d0 with catch @ 090a029c */
    fVar6 = *unaff_x21;
  }
  puVar2 = PTR_DAT_0ac09788;
  if (unaff_s8 <= fVar6) {
    if (uStack000000000000000c == 0) {
      if (*(char *)(unaff_x20 + 0x13c) == '\0') goto LAB_090a02c4;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uStack000000000000000c = *(uint *)(unaff_x20 + 0x138) & *(uint *)(unaff_x19 + 0xe4);
    }
    uVar4 = uStack000000000000000c;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x150);
    if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = FUN_0a17b398(uVar5,0,0);
    if ((((uVar3 & 1) != 0) && ((uVar4 >> 1 & 1) != 0)) &&
       (uVar3 = FUN_090a0494(), (uVar3 & 1) == 0)) {
      uVar4 = uVar4 & 0xfffffffd;
      uStack000000000000000c = uVar4;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x160);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = FUN_0a17b398(uVar5,0,0);
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && (uVar3 = FUN_090a0494(), (uVar3 & 1) == 0)) {
      uVar4 = uVar4 & 0xfffffffe;
    }
  }
  else {
LAB_090a02c4:
    uVar4 = 0;
  }
  return uVar4;
}


