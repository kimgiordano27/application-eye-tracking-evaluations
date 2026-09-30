/*
FUNCTION_NAME: OVRPlugin.OVRP_1_67_0$$.cctor
ENTRY_POINT: 05d4d1f8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_67_0___cctor(undefined4 param_1)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  long in_stack_00000068;
  
  while (!(bool)in_CY) {
    *unaff_x22 = param_1;
    unaff_x22[8] = 0;
    unaff_x20 = unaff_x20 + 1;
    *(undefined8 *)(unaff_x22 + 6) = uStack0000000000000014;
    *(ulong *)(unaff_x22 + 4) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
                    /* try { // try from 05d4d214 to 05e4d253 has its CatchHandler @ 05d4cee4 */
    *(ulong *)(unaff_x22 + 3) = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    *(undefined8 *)(unaff_x22 + 1) = in_stack_00000000;
    unaff_x22 = unaff_x22 + 9;
    if (in_stack_00000068 == 0) {
LAB_05d4d268:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4d19c with catch @ 05d4d268
                        */
      FUN_02fe94e8();
    }
    if ((long)(int)*(uint *)(in_stack_00000068 + 0x18) <= (long)unaff_x20) {
      lVar1 = thunk_FUN_0301080c(*unaff_x21);
      FUN_05d4d368();
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = unaff_x19;
        thunk_FUN_03048534();
                    /* try { // try from 05d4d254 to 05e4d257 has its CatchHandler @ 05d4d25c */
                    /* try { // try from 05d4d258 to 05e4d287 has its CatchHandler @ 05d4cee4 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4d254 with catch @ 05d4d25c
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4d010 with catch @ 05d4d260
                        */
        return lVar1;
      }
      goto LAB_05d4d268;
    }
    if (*(uint *)(in_stack_00000068 + 0x18) <= unaff_x20) break;
    FUN_05caf184(&stack0x00000020,*(undefined8 *)(in_stack_00000068 + unaff_x20 * 8 + 0x20),1,0);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack0000000000000054 = uStack0000000000000034;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    param_1 = FUN_05d4d26c(unaff_x20 & 0xffffffff,&stack0x00000068);
    uStack0000000000000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack000000000000002c = uStack000000000000004c;
    uStack0000000000000030 = uStack0000000000000050;
    if (unaff_x19 == 0) goto LAB_05d4d268;
    uStack0000000000000008 = in_stack_00000048;
    in_stack_00000000 = in_stack_00000040;
    uStack0000000000000014 = uStack0000000000000054;
    uStack000000000000000c = uStack000000000000004c;
    uStack0000000000000010 = uStack0000000000000050;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4d120 with catch @ 05d4d264
                        */
  FUN_02fe94f0();
}


