/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 04f5f740
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(undefined8 param_1,undefined1 param_2 [16])

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined1 in_stack_00000060 [16];
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uStack0000000000000088 = param_2._8_8_;
  uStack0000000000000080 = param_2._0_8_;
  uStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000cc = 0;
  uStack00000000000000d8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d4 = 0;
  uStack00000000000000e8 = *(undefined8 *)(unaff_x20 + 2);
  uStack00000000000000e0 = *(undefined8 *)unaff_x20;
  uStack00000000000000f8 = *(undefined8 *)(unaff_x20 + 6);
  uStack00000000000000f0 = *(undefined8 *)(unaff_x20 + 4);
  uStack00000000000000b0 = 0;
                    /* try { // try from 04f5f76c to 0505f77f has its CatchHandler @ 04f5f878 */
  uStack0000000000000108 = *(undefined8 *)(unaff_x20 + 10);
  uStack0000000000000100 = *(undefined8 *)(unaff_x20 + 8);
  uStack0000000000000090 = uStack0000000000000080;
  uStack0000000000000098 = uStack0000000000000088;
  uStack00000000000000a0 = uStack0000000000000080;
  uStack00000000000000a8 = uStack0000000000000088;
  uStack0000000000000110 = param_1;
  FUN_03bf30a8();
  uVar12 = *(undefined8 *)(unaff_x19 + 0xd0);
                    /* try { // try from 04f5f784 to 0505f793 has its CatchHandler @ 04f5f874 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8e378(uVar12,0,0);
                    /* try { // try from 04f5f7a0 to 0505f7af has its CatchHandler @ 04f5f870 */
  if ((uVar7 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
LAB_04f5f934:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) != '\0') {
                    /* try { // try from 04f5f7c0 to 0505f7c3 has its CatchHandler @ 04f5f868 */
      iVar1 = *unaff_x20;
                    /* try { // try from 04f5f7c4 to 0505f85f has its CatchHandler @ 04f5f6a4 */
      iVar5 = FUN_04af0f7c();
      if ((iVar1 != iVar5) && ((unaff_x20[4] & 0xfffffffeU) == 2)) {
        FUN_04f5dad4(&stack0x00000060 + 4);
        *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack0000000000000070,in_stack_00000060._12_4_);
        *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000060._4_8_;
        *(undefined8 *)(unaff_x19 + 0x1cc) = in_stack_00000078;
        *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
        FUN_04f5f938();
        uVar12 = FUN_04f5d040();
        *(undefined8 *)(unaff_x19 + 0x198) = uVar12;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x198,uVar12);
        FUN_04f5d128(&stack0x000000c0);
        uVar6 = FUN_04af0f7c();
        uStack0000000000000054 = CONCAT44(uStack00000000000000d8,uStack00000000000000d4);
        uStack0000000000000048 = uStack00000000000000c8;
                    /* try { // try from 04f5f860 to 0505f863 has its CatchHandler @ 04f5f874 */
                    /* try { // try from 04f5f864 to 0505f867 has its CatchHandler @ 04f5f86c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5f7c0 with catch @ 04f5f868
                       try { // try from 04f5f868 to 0505f893 has its CatchHandler @ 04f5f6a4 */
        in_stack_00000040 = uStack00000000000000c0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5f864 with catch @ 04f5f86c
                        */
        uStack000000000000004c = uStack00000000000000cc;
        uStack0000000000000050 = uStack00000000000000d0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5f7a0 with catch @ 04f5f870
                        */
        FUN_04ee4ab0(&stack0x00000080,uVar6,4,&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x108),0)
        ;
        uVar4 = uStack00000000000000b0;
        uVar3 = uStack00000000000000a0;
        uVar2 = uStack0000000000000090;
        uVar12 = uStack0000000000000080;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5f784 with catch @ 04f5f874
                       catch(type#1 @ 05fbf508) { ... } // from try @ 04f5f860 with catch @ 04f5f874
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f5f76c with catch @ 04f5f878
                        */
        if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
           (plVar11 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar11 == (long *)0x0))
        goto LAB_04f5f934;
        lVar9 = *plVar11;
                    /* try { // try from 04f5f894 to 0505f897 has its CatchHandler @ 04f5f8a4 */
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch() { ... } // from try @ 04f5f894 with catch @ 04f5f8a4 */
                    /* try { // try from 04f5f8a8 to 0505f8af has its CatchHandler @ 04f5f8b8 */
                    /* try { // try from 04f5f8b0 to 0505f8bb has its CatchHandler @ 04f5f6a4 */
        if (uVar7 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f5f8a8 with catch @ 04f5f8b8
                        */
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06321098) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04f5f8f0;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)PTR_DAT_06321098,0);
LAB_04f5f8f0:
        uStack00000000000000e8 = uStack0000000000000088;
        uStack00000000000000e0 = uVar12;
        uStack00000000000000f8 = uStack0000000000000098;
        uStack00000000000000f0 = uVar2;
        uStack0000000000000108 = uStack00000000000000a8;
        uStack0000000000000100 = uVar3;
        uStack0000000000000110 = uVar4;
        (*(code *)*puVar8)(plVar11,&stack0x000000e0,puVar8[1]);
      }
    }
  }
  return;
}


