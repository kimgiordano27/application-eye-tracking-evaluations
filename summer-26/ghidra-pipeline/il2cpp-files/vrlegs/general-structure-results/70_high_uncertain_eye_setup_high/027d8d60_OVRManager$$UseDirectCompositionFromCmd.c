/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 027d8d60
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
/* WARNING: Removing unreachable block (ram,0x027d8f64) */

byte OVRManager__UseDirectCompositionFromCmd(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar5;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 uVar6;
  int unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  int unaff_w27;
  int iVar7;
  byte bVar8;
  char cStack0000000000000014;
  int in_stack_00000030;
  
  do {
    FUN_027d7fa0(&stack0x00000038);
    do {
      do {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (unaff_w20 <= unaff_w27) {
                    /* catch() { ... } // from try @ 027d8da8 with catch @ 027d8d6c
                       catch() { ... } // from try @ 027d8de8 with catch @ 027d8d6c
                       catch() { ... } // from try @ 027d8e34 with catch @ 027d8d6c */
          FUN_027d8974();
          puVar1 = PTR_DAT_03cfcbe8;
          lVar4 = *(long *)PTR_DAT_03cfcbe8;
                    /* try { // try from 027d8d84 to 028d8d93 has its CatchHandler @ 027d8df0 */
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0xb8);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    /* try { // try from 027d8da4 to 028d8da7 has its CatchHandler @ 027d8de8 */
                    /* try { // try from 027d8da8 to 028d8de3 has its CatchHandler @ 027d8d6c */
            thunk_FUN_01a58e78(*unaff_x26);
          }
          FUN_027d7a1c(&stack0x00000018,&stack0x00000038,uVar5);
          uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
          thunk_FUN_01a4b338();
          cStack0000000000000014 = '\0';
          FUN_027e0bd8(uVar5,&stack0x00000014,0);
                    /* try { // try from 027d8de4 to 028d8de7 has its CatchHandler @ 027d8dec */
          iVar2 = unaff_w21;
          goto LAB_027d8de8;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d90e4(&stack0x00000030,0x28);
        uVar3 = FUN_027d8448();
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_w27 = in_stack_00000030;
      } while (in_stack_00000030 < 100);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    } while (unaff_w25 < ((uint)(unaff_w27 * unaff_w24) >> 1 | unaff_w27 * unaff_w24 * -0x80000000))
    ;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
  } while( true );
LAB_027d8de8:
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d8da4 with catch @ 027d8de8
                       try { // try from 027d8de8 to 028d8e07 has its CatchHandler @ 027d8d6c */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d8de4 with catch @ 027d8dec
                        */
  uVar3 = FUN_027d8448();
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d8d84 with catch @ 027d8df0
                        */
  if ((uVar3 & 1) != 0) {
    bVar8 = 0;
    iVar7 = 5;
    goto LAB_027d8f18;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
                    /* try { // try from 027d8e08 to 028d8e0b has its CatchHandler @ 027d8e1c */
  FUN_027d7fa0(&stack0x00000038);
  if (unaff_w21 != -1) {
    iVar2 = thunk_FUN_01a4a380(0);
    bVar8 = 0;
    iVar7 = 0xe;
    if ((iVar2 - unaff_w22 < 0) || (iVar2 = unaff_w21 - (iVar2 - unaff_w22), iVar2 < 1))
    goto LAB_027d8f18;
  }
  FUN_027d8640();
  FUN_027d869c();
  uVar3 = FUN_027d8448();
  if ((uVar3 & 1) != 0) {
    FUN_027d8640();
    FUN_027d869c();
    bVar8 = 1;
    iVar7 = 0xe;
    goto LAB_027d8f18;
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  uVar3 = FUN_027e1070(uVar6,iVar2,0);
  iVar7 = 0xb;
  if ((uVar3 & 1) == 0) {
    iVar7 = 0xe;
  }
  FUN_027d8640();
  FUN_027d869c();
  if ((iVar7 != 0xb) && (iVar7 != 0)) {
    bVar8 = 0;
LAB_027d8f18:
    if (cStack0000000000000014 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    FUN_027d9a54(&stack0x00000018);
    return iVar7 != 0xe | bVar8;
  }
  goto LAB_027d8de8;
}


