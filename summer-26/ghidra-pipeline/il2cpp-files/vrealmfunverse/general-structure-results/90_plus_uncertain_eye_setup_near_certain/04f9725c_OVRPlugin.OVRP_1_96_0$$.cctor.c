/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$.cctor
ENTRY_POINT: 04f9725c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_96_0___cctor(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool in_ZR;
  bool in_CY;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 uStack0000000000000080;
  
  uStack0000000000000080 = param_1._0_8_;
  *(long *)(unaff_x21 + 0x14) = param_2._8_8_;
  *(long *)(unaff_x21 + 0xc) = param_2._0_8_;
  if (in_CY && !in_ZR) {
    uVar11 = *(undefined8 *)(unaff_x21 + 0x14);
    uVar13 = *(undefined8 *)(unaff_x21 + 0xc);
    *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
    *(long *)(unaff_x20 + 800) = param_1._8_8_;
    *(undefined8 *)(unaff_x20 + 0x318) = uStack0000000000000080;
    uVar2 = DAT_01031c7c;
    uVar1 = DAT_01031c78;
    *(undefined8 *)(unaff_x20 + 0x32c) = uVar11;
    *(undefined8 *)(unaff_x20 + 0x324) = uVar13;
    uVar3 = DAT_0103203c;
    *(undefined4 *)(unaff_x20 + 0x334) = 0;
                    /* try { // try from 04f972b8 to 050972bb has its CatchHandler @ 04f972d8 */
    in_stack_00000060 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0;
                    /* try { // try from 04f972bc to 050972bf has its CatchHandler @ 04f972c8 */
    in_stack_00000078 = 0;
                    /* try { // try from 04f972c0 to 050972f3 has its CatchHandler @ 04f96fec */
    uStack0000000000000070 = 0;
    uStack0000000000000074 = 0;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9724c with catch @ 04f972c4
                        */
    FUN_05c99d80(uVar1,uVar3,uVar2,0,0,0,0xbf800000,&stack0x00000060,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f972bc with catch @ 04f972c8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f97124 with catch @ 04f972cc
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9716c with catch @ 04f972d0
                        */
    uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
    uStack0000000000000048 = uStack0000000000000068;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f971cc with catch @ 04f972d4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f972b8 with catch @ 04f972d8
                        */
    in_stack_00000040 = in_stack_00000060;
    uStack000000000000004c = uStack000000000000006c;
    uStack0000000000000050 = uStack0000000000000070;
    if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
      *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
      *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
      *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      uVar3 = DAT_0103298c;
      uVar2 = DAT_01032764;
      uVar1 = DAT_01032760;
      *(undefined4 *)(unaff_x20 + 0x358) = 0;
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_05c99d80(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
      if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
        *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
        *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


