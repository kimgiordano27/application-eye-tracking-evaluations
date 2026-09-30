/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_DiscoverSpaces
ENTRY_POINT: 04f972e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_97_0__ovrp_DiscoverSpaces(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
                    /* try { // try from 04f972f4 to 050972f7 has its CatchHandler @ 04f97310 */
                    /* try { // try from 04f972f8 to 05097313 has its CatchHandler @ 04f96fec */
  *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
                    /* catch() { ... } // from try @ 04f972f4 with catch @ 04f97310 */
  *(undefined8 *)(unaff_x22 + 0x2c) = _uStack0000000000000048;
  *(undefined8 *)(unaff_x22 + 0x24) = in_stack_00000040;
                    /* try { // try from 04f97314 to 0509731b has its CatchHandler @ 04f97324 */
  *(undefined8 *)(unaff_x22 + 0x38) = uStack0000000000000054;
  *(ulong *)(unaff_x22 + 0x30) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  uVar3 = DAT_0103298c;
  uVar2 = DAT_01032764;
  uVar1 = DAT_01032760;
                    /* try { // try from 04f9731c to 05097327 has its CatchHandler @ 04f96fec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f97314 with catch @ 04f97324
                        */
                    /* try { // try from 04f97328 to 0509745b has its CatchHandler @ 04f97328
                       catch() { ... } // from try @ 04f97328 with catch @ 04f97328
                       catch() { ... } // from try @ 04f97660 with catch @ 04f97328
                       catch() { ... } // from try @ 04f976a4 with catch @ 04f97328
                       catch() { ... } // from try @ 04f976dc with catch @ 04f97328
                       catch() { ... } // from try @ 04f97700 with catch @ 04f97328 */
  *(undefined4 *)(unaff_x20 + 0x358) = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  FUN_05c99d80(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
  uStack0000000000000014 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
  uStack000000000000000c = uStack000000000000002c;
  if (*(uint *)(unaff_x20 + 0x18) < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
  *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  *(undefined8 *)(unaff_x20 + 0x360) = uStack0000000000000020;
  *(undefined8 *)(unaff_x20 + 0x374) = uStack0000000000000014;
  *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_02bb0e9c();
    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
    thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x23 + 0xb8));
    lVar9 = thunk_FUN_02b79644(*unaff_x23);
    FUN_04f965b8();
    puVar8 = System_Func<AndroidAxis,_string>_TypeInfo;
    puVar7 = System_Func<float[],_Vector4>_TypeInfo;
    puVar6 = System_Func<float[],_Vector3>_TypeInfo;
    puVar5 = System_Func<float[],_Vector2>_TypeInfo;
    puVar4 = System_Func<float[],_Quaternion>_TypeInfo;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar10 = *(long *)System_Func<AndroidAxis,_string>_TypeInfo;
      uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar10 = *(long *)puVar8;
      }
      uVar14 = **(undefined8 **)(lVar10 + 0xb8);
      uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
      FUN_049bccb8(uVar11,uVar14,*(undefined8 *)puVar7,0);
      uVar13 = FUN_031bc914(uVar13,uVar11,*(undefined8 *)puVar4);
      uVar13 = FUN_031c7164(uVar13,*(undefined8 *)puVar5);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x10) = uVar13;
        thunk_FUN_02bb0e9c();
        plVar12 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *plVar12 = lVar9;
        thunk_FUN_02bb0e9c(plVar12,lVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


