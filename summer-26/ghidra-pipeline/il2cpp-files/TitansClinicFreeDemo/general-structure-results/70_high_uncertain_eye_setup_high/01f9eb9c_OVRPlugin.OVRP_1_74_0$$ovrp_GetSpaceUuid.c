/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetSpaceUuid
ENTRY_POINT: 01f9eb9c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  int in_w8;
  int unaff_w19;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x28;
  int unaff_w29;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  
  do {
                    /* catch() { ... } // from try @ 01f9e924 with catch @ 01f9eb9c */
    if (in_w8 == 0) {
                    /* catch() { ... } // from try @ 01f9e664 with catch @ 01f9eba0 */
      thunk_FUN_01220628();
    }
                    /* catch() { ... } // from try @ 01f9eb40 with catch @ 01f9eba4 */
                    /* catch() { ... } // from try @ 01f9e9cc with catch @ 01f9eba8 */
                    /* try { // try from 01f9ebb8 to 0209ebbb has its CatchHandler @ 01f9ebcc */
    uVar3 = FUN_01f9e2bc(unaff_x25,unaff_x26,in_stack_00000008._4_4_ != 0);
    if ((uVar3 & 1) == 0) goto LAB_01f9ebd8;
    do {
                    /* catch() { ... } // from try @ 01f9ebb8 with catch @ 01f9ebcc */
                    /* try { // try from 01f9ebd4 to 0209ec47 has its CatchHandler @ 01f9ecf0 */
      FUN_018de888(&stack0x00000010,unaff_x25,*(undefined8 *)PTR_DAT_027c1ee0);
LAB_01f9ebd8:
      do {
        unaff_x28 = unaff_x28 + 1;
        if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x28) {
          in_stack_00000000[2] = in_stack_00000020;
          in_stack_00000000[1] = in_stack_00000018;
          *in_stack_00000000 = in_stack_00000010;
          return;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        unaff_x25 = *(long **)(unaff_x21 + unaff_x28 * 8);
        if (unaff_w19 != -1) {
          if (unaff_x25 == (long *)0x0) {
OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          bVar1 = (**(code **)(*unaff_x25 + 0x2b8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2c0));
          if ((unaff_w19 == 0 & bVar1) == (unaff_w19 < 1 | bVar1 & 1)) goto LAB_01f9ebd8;
          lVar2 = (**(code **)(*unaff_x25 + 0x2d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x2e0));
          if (lVar2 == 0) goto OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard;
          if (*(int *)(lVar2 + 0x18) != unaff_w19) goto LAB_01f9ebd8;
        }
        if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar3 = FUN_01f9e620(unaff_x25,unaff_w23,unaff_w22);
      } while ((uVar3 & 1) == 0);
    } while (unaff_w29 == 0);
    in_w8 = *(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0);
    unaff_x26 = in_stack_00000038;
  } while( true );
}


