/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 027d8ed0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027d8fb4) */

byte OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd(void)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  undefined8 uVar3;
  int iVar4;
  int unaff_w25;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  byte bVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d8e64 with catch @ 027d8ed0
                        */
  iVar4 = 0;
  while( true ) {
    FUN_027d8640();
    FUN_027d869c();
    if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(in_stack_00000008);
    }
    if ((iVar4 != 0xb) && (iVar4 != 0)) break;
    uVar2 = FUN_027d8448();
    if ((uVar2 & 1) != 0) {
      bVar5 = 0;
      iVar4 = 5;
                    /* try { // try from 027d8ee8 to 028d8eeb has its CatchHandler @ 027d8efc */
      goto LAB_027d8f18;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d7fa0(&stack0x00000038);
    if (unaff_w21 != -1) {
      iVar1 = thunk_FUN_01a4a380(0);
      bVar5 = 0;
      iVar4 = 0xe;
      if ((iVar1 - unaff_w22 < 0) || (unaff_w25 = unaff_w21 - (iVar1 - unaff_w22), unaff_w25 < 1))
      goto LAB_027d8f18;
    }
    FUN_027d8640();
    FUN_027d869c();
    uVar2 = FUN_027d8448();
    if ((uVar2 & 1) != 0) {
      FUN_027d8640();
                    /* catch() { ... } // from try @ 027d8ee8 with catch @ 027d8efc */
      FUN_027d869c();
      bVar5 = 1;
                    /* try { // try from 027d8f08 to 028d8f13 has its CatchHandler @ 027d8f28 */
      iVar4 = 0xe;
      goto LAB_027d8f18;
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
    thunk_FUN_01a4b338();
    uVar2 = FUN_027e1070(uVar3,unaff_w25,0);
    in_stack_00000008 = 0;
    iVar4 = unaff_w28;
    if ((uVar2 & 1) == 0) {
      iVar4 = unaff_w27;
    }
  }
                    /* try { // try from 027d8f14 to 028d8f1f has its CatchHandler @ 027d8e4c */
  bVar5 = 0;
LAB_027d8f18:
  if (in_stack_00000010._4_1_ != '\0') {
                    /* try { // try from 027d8f20 to 028d8f27 has its CatchHandler @ 027d8f28 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027d8f08 with catch @ 027d8f28
                       catch(type#2 @ 00000000) { ... } // from try @ 027d8f20 with catch @ 027d8f28
                        */
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
                    /* catch() { ... } // from try @ 027d8f74 with catch @ 027d8f2c
                       catch() { ... } // from try @ 027d8fac with catch @ 027d8f2c
                       catch() { ... } // from try @ 027d8ff0 with catch @ 027d8f2c */
  FUN_027d9a54(&stack0x00000018);
                    /* try { // try from 027d8f48 to 028d8f57 has its CatchHandler @ 027d8fac */
  return iVar4 != 0xe | bVar5;
}


