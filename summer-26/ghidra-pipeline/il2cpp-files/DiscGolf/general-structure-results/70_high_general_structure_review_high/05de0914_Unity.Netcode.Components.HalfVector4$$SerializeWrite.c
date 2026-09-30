/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector4$$SerializeWrite
ENTRY_POINT: 05de0914
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Netcode_Components_HalfVector4__SerializeWrite(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  ulong uVar6;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x27;
  ulong uVar7;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000048;
  
  FUN_05e1fdb0();
  if (*(long *)(unaff_x19 + 0x1b8) == 0) {
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
                    /* try { // try from 05de0924 to 05ee092f has its CatchHandler @ 05de0948 */
                    /* try { // try from 05de0930 to 05ee093b has its CatchHandler @ 05de0944 */
    FUN_0367daa8(*(undefined8 *)(*(long *)(unaff_x19 + 0x1b8) + 0x1a8),4,0);
    puVar2 = Method_System_Collections_Generic_List<ApplicationInvite>__ctor__;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05de08d0 with catch @ 05de093c
                       try { // try from 05de093c to 05ee0963 has its CatchHandler @ 05de080c */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05de0888 with catch @ 05de0940
                        */
    in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05de08fc with catch @ 05de0944
                       catch(type#1 @ 066567d8) { ... } // from try @ 05de0930 with catch @ 05de0944
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05de0924 with catch @ 05de0948
                        */
    lVar3 = FUN_04517d7c(&stack0x00000010,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<ApplicationInvite>__ctor__);
    if (lVar3 == 0) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0x14);
                    /* try { // try from 05de0964 to 05ee0967 has its CatchHandler @ 05de0980 */
                    /* try { // try from 05de0968 to 05ee0983 has its CatchHandler @ 05de080c */
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x27);
      }
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
      in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
      uVar7 = in_stack_00000018 >> 0x20;
                    /* catch() { ... } // from try @ 05de0964 with catch @ 05de0980 */
                    /* try { // try from 05de0984 to 05ee098b has its CatchHandler @ 05de0994 */
      if (0 < (int)(in_stack_00000018 >> 0x20)) {
        uVar6 = 0;
                    /* try { // try from 05de098c to 05ee0997 has its CatchHandler @ 05de080c */
        lVar3 = (ulong)uVar1 + unaff_x21;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05de0984 with catch @ 05de0994
                        */
        do {
                    /* try { // try from 05de09a0 to 05ee09df has its CatchHandler @ 05de09a0
                       catch() { ... } // from try @ 05de09a0 with catch @ 05de09a0
                       catch() { ... } // from try @ 05de0a10 with catch @ 05de09a0
                       catch() { ... } // from try @ 05de0a44 with catch @ 05de09a0
                       catch() { ... } // from try @ 05de0a88 with catch @ 05de09a0 */
          if (*(byte *)(lVar3 + 0x20) < 6 &&
              (1 << (ulong)(*(byte *)(lVar3 + 0x20) & 0x1f) & 0x26U) != 0) {
            uVar4 = FUN_05e2ca14();
            FUN_062ffb9c(uVar4,lVar3,0x38,0);
            uVar4 = FUN_05e2ca14();
                    /* try { // try from 05de09e0 to 05ee09f7 has its CatchHandler @ 05de0a10 */
            FUN_05e1fdb0(uVar4,4,0);
            in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
            in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
            lVar5 = FUN_04517d7c(&stack0x00000010,uVar6 & 0xffffffff,*(undefined8 *)puVar2);
            if (lVar5 == 0) {
              if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              goto LAB_05de0b74;
            }
            FUN_0367daa8(*(undefined8 *)(lVar5 + 0x1a8),4,0);
          }
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 0x38;
        } while (uVar7 != uVar6);
      }
      FUN_0422c8ec(&stack0x00000020,*unaff_x24);
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
        return;
      }
    }
  }
LAB_05de0b74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


