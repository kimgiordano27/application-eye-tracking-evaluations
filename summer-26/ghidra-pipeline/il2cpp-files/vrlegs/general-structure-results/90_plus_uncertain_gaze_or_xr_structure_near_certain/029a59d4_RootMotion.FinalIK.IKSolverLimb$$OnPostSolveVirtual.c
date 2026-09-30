/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverLimb$$OnPostSolveVirtual
ENTRY_POINT: 029a59d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a5aec) */

void RootMotion_FinalIK_IKSolverLimb__OnPostSolveVirtual(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_d8;
  char cStack000000000000000c;
  
  if ((param_3 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb98c(param_2,100,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar7,&stack0x0000000c,0);
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(lVar6 + 0x20) = unaff_d8;
  FUN_0279cdc8(lVar6,0,*(undefined8 *)(param_1 + 0x40),0,8,0);
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = *(undefined1 *)(lVar6 + 0x20);
  uVar3 = *(undefined1 *)(lVar6 + 0x21);
  uVar4 = *(undefined1 *)(lVar6 + 0x23);
  *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(lVar6 + 0x27);
  *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)(lVar6 + 0x26);
  uVar5 = *(undefined1 *)(lVar6 + 0x22);
  *(undefined1 *)(lVar6 + 0x22) = *(undefined1 *)(lVar6 + 0x25);
  *(undefined1 *)(lVar6 + 0x23) = *(undefined1 *)(lVar6 + 0x24);
  *(undefined1 *)(lVar6 + 0x24) = uVar4;
  *(undefined1 *)(lVar6 + 0x25) = uVar5;
  *(undefined1 *)(lVar6 + 0x26) = uVar3;
  *(undefined1 *)(lVar6 + 0x27) = uVar2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_029b3ef8(param_2,lVar6,0,8,0);
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


