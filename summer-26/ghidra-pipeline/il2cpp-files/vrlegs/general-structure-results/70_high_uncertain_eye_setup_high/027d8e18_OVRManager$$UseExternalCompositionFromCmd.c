/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 027d8e18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027d8fb4) */
/* WARNING: Removing unreachable block (ram,0x027d8f64) */

byte OVRManager__UseExternalCompositionFromCmd(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  undefined8 uVar3;
  int iVar4;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  byte bVar5;
  undefined8 in_stack_00000010;
  
  do {
    iVar1 = thunk_FUN_01a4a380(param_1);
                    /* catch() { ... } // from try @ 027d8e08 with catch @ 027d8e1c */
    bVar5 = 0;
                    /* try { // try from 027d8e28 to 028d8e33 has its CatchHandler @ 027d8e48 */
    iVar4 = 0xe;
                    /* try { // try from 027d8e34 to 028d8e3f has its CatchHandler @ 027d8d6c */
    if ((iVar1 - unaff_w22 < 0) || (iVar1 = unaff_w21 - (iVar1 - unaff_w22), iVar1 < 1)) {
LAB_027d8f18:
      if (in_stack_00000010._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      FUN_027d9a54(&stack0x00000018);
      return iVar4 != 0xe | bVar5;
    }
    do {
                    /* try { // try from 027d8e40 to 028d8e47 has its CatchHandler @ 027d8e48 */
      FUN_027d8640();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027d8e28 with catch @ 027d8e48
                       catch(type#2 @ 00000000) { ... } // from try @ 027d8e40 with catch @ 027d8e48
                        */
                    /* catch() { ... } // from try @ 027d8e88 with catch @ 027d8e4c
                       catch() { ... } // from try @ 027d8ec8 with catch @ 027d8e4c
                       catch() { ... } // from try @ 027d8f14 with catch @ 027d8e4c */
      FUN_027d869c();
      uVar2 = FUN_027d8448();
      if ((uVar2 & 1) != 0) {
        FUN_027d8640();
        FUN_027d869c();
        bVar5 = 1;
        iVar4 = 0xe;
        goto LAB_027d8f18;
      }
      uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
      thunk_FUN_01a4b338();
                    /* try { // try from 027d8e64 to 028d8e73 has its CatchHandler @ 027d8ed0 */
      uVar2 = FUN_027e1070(uVar3,iVar1,0);
      iVar4 = unaff_w28;
      if ((uVar2 & 1) == 0) {
        iVar4 = unaff_w27;
      }
                    /* try { // try from 027d8e84 to 028d8e87 has its CatchHandler @ 027d8ec8 */
      FUN_027d8640();
                    /* try { // try from 027d8e88 to 028d8ec3 has its CatchHandler @ 027d8e4c */
      FUN_027d869c();
      if ((iVar4 != 0xb) && (iVar4 != 0)) {
        bVar5 = 0;
        goto LAB_027d8f18;
      }
      uVar2 = FUN_027d8448();
      if ((uVar2 & 1) != 0) {
        bVar5 = 0;
        iVar4 = 5;
        goto LAB_027d8f18;
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d7fa0(&stack0x00000038);
    } while (unaff_w21 == -1);
    param_1 = 0;
  } while( true );
}


