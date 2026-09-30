/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 0532df78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SaveSpaceList(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  plVar1 = (long *)FUN_0532da50();
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0532dfdc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02f421d0(plVar1,*(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo,0);
LAB_0532dfdc:
    plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
                    /* try { // try from 0532dff8 to 0542dfff has its CatchHandler @ 0532e3fc */
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 0532e014 to 0542e017 has its CatchHandler @ 0532e3d0 */
                    /* try { // try from 0532e018 to 0542e023 has its CatchHandler @ 0532e3f8 */
          if (*(long *)(piVar6 + -2) == *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0532e048;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
                    /* try { // try from 0532e024 to 0542e033 has its CatchHandler @ 0532e3f0 */
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02f421d0(plVar1,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,2);
                    /* try { // try from 0532e034 to 0542e03f has its CatchHandler @ 0532e3f4 */
LAB_0532e048:
      uVar5 = (*(code *)*puVar2)(plVar1,unaff_w20,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        FUN_0532de04();
        if (*(long *)(unaff_x21 + 0x80) == 0) goto LAB_0532e0ac;
        FUN_05344d94(&stack0x00000000 + 4,*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        uVar3 = 1;
        unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *unaff_x19 = in_stack_00000000._4_8_;
        *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      }
      return uVar3;
    }
  }
LAB_0532e0ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


