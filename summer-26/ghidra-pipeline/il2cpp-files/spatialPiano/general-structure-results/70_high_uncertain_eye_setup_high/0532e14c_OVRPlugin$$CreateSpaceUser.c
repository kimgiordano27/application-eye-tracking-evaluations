/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 0532e14c
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


undefined8 OVRPlugin__CreateSpaceUser(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  thunk_FUN_02f6670c();
  FUN_060fdf88(&stack0x00000000 + 4,0);
  unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *unaff_x19 = in_stack_00000000._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  uVar1 = FUN_0532daa8();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_0532da50();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
                    /* try { // try from 0532e18c to 0542e1b7 has its CatchHandler @ 0532e400 */
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0532e1dc;
        }
        uVar1 = uVar1 - 1;
                    /* try { // try from 0532e1b8 to 0542e3bb has its CatchHandler @ 0532de30 */
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar2,*(long *)OVR_OpenVR_EVRApplicationTransitionState_TypeInfo,0);
LAB_0532e1dc:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0532e248;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_02f421d0(plVar2,*(long *)System_Tuple<bool,_bool,_bool,_bool>_TypeInfo,2);
LAB_0532e248:
      uVar1 = (*(code *)*puVar3)(plVar2,unaff_w20,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_0532de04();
      if (*(long *)(unaff_x21 + 0x80) != 0) {
        FUN_05344e1c(&stack0x00000000 + 4,*(long *)(unaff_x21 + 0x80),unaff_w20,0);
        unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *unaff_x19 = in_stack_00000000._4_8_;
        *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


