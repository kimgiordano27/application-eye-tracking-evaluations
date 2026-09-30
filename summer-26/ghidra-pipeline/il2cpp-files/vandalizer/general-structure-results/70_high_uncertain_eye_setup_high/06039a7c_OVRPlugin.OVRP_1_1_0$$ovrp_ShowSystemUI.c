/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_ShowSystemUI
ENTRY_POINT: 06039a7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_ShowSystemUI(void)

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
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
    *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    *(undefined8 *)(unaff_x20 + 0x344) = _uStack0000000000000048;
    *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000040;
    uVar3 = DAT_014badcc;
    uVar2 = DAT_014bad34;
    uVar1 = DAT_014ba99c;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_06e67e1c(uVar3,uVar1,uVar2,0,0,0,0xbf800000,&stack0x00000020,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
      *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
      *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_0329bf60();
        **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
        thunk_FUN_0329bf60(*(undefined8 *)(*unaff_x23 + 0xb8));
        lVar9 = thunk_FUN_0322f148(*unaff_x23);
        FUN_06038d1c();
        puVar8 = PTR_DAT_075f7b90;
        puVar7 = PTR_DAT_075f7b88;
        puVar6 = PTR_DAT_075f7b80;
        puVar5 = PTR_DAT_075f7b78;
        puVar4 = PTR_DAT_075f7b70;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          lVar10 = *(long *)PTR_DAT_075f7b90;
          uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar10 = *(long *)puVar8;
          }
          uVar14 = **(undefined8 **)(lVar10 + 0xb8);
          uVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
          FUN_042d20cc(uVar11,uVar14,*(undefined8 *)puVar7,0);
          uVar13 = FUN_03deade0(uVar13,uVar11,*(undefined8 *)puVar4);
          uVar13 = FUN_03df5de8(uVar13,*(undefined8 *)puVar5);
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = uVar13;
            thunk_FUN_0329bf60();
            plVar12 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
            *plVar12 = lVar9;
            thunk_FUN_0329bf60(plVar12,lVar9);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


