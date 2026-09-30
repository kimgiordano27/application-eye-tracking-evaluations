/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPoses
ENTRY_POINT: 01d7ff70
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


void OVRPlugin__SetControllerDrivenHandPoses(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar4 = FUN_01c42558();
  uVar7 = in_stack_00000038;
  puVar1 = PTR_DAT_0234da10;
                    /* try { // try from 01d7ff74 to 01e7ff9f has its CatchHandler @ 01d80170 */
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_0234da10;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar5 = *(long *)puVar1;
    }
                    /* try { // try from 01d7ffa0 to 01e7ffa7 has its CatchHandler @ 01d80160 */
    uVar4 = FUN_01c458dc(uVar7,**(undefined8 **)(lVar5 + 0xb8),0);
    uVar7 = in_stack_00000038;
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
                    /* try { // try from 01d7ffc4 to 01e7ffd7 has its CatchHandler @ 01d8017c */
        lVar5 = *(long *)puVar1;
      }
      uVar4 = FUN_01c458dc(uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 01d7ffe4 to 01e7fff3 has its CatchHandler @ 01d80178 */
        *unaff_x28 = 0;
        unaff_x28[1] = 0;
        unaff_x28[2] = 0;
        FUN_0174876c();
        return;
      }
    }
  }
                    /* try { // try from 01d80000 to 01e80007 has its CatchHandler @ 01d80174 */
  lVar5 = FUN_01d8010c();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
                    /* try { // try from 01d80014 to 01e8001b has its CatchHandler @ 01d80158 */
  FUN_0174876c(&stack0x00000010,*(undefined4 *)(lVar5 + 0x18),*unaff_x25);
  cVar2 = in_stack_00000030;
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar4 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar4 * 8);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar6 = FUN_01d7f868(uVar7,unaff_w22,unaff_w21);
      uVar3 = in_stack_00000038;
      if ((uVar6 & 1) != 0) {
        if (unaff_w27 != 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar6 = FUN_01d7f224(uVar7,uVar3,cVar2 != '\0');
          if ((uVar6 & 1) == 0) goto LAB_01d800c0;
        }
        FUN_0174899c(&stack0x00000010,uVar7,*(undefined8 *)PTR_DAT_02359068);
      }
LAB_01d800c0:
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  unaff_x28[2] = in_stack_00000020;
  unaff_x28[1] = in_stack_00000018;
  *unaff_x28 = in_stack_00000010;
  return;
}


