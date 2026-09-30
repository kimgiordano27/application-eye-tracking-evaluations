/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppMonoscopic
ENTRY_POINT: 06039af8
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppMonoscopic(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  if (in_w8 < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
  *(undefined8 *)(unaff_x20 + 0x374) = uStack0000000000000014;
  *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  *(undefined8 *)(unaff_x20 + 0x368) = in_stack_00000008;
  *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000000;
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_0329bf60();
    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
    thunk_FUN_0329bf60(*(undefined8 *)(*unaff_x23 + 0xb8));
    lVar6 = thunk_FUN_0322f148(*unaff_x23);
    FUN_06038d1c();
    puVar5 = PTR_DAT_075f7b90;
    puVar4 = PTR_DAT_075f7b88;
    puVar3 = PTR_DAT_075f7b80;
    puVar2 = PTR_DAT_075f7b78;
    puVar1 = PTR_DAT_075f7b70;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar7 = *(long *)PTR_DAT_075f7b90;
      uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar5;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
      FUN_042d20cc(uVar8,uVar11,*(undefined8 *)puVar4,0);
      uVar10 = FUN_03deade0(uVar10,uVar8,*(undefined8 *)puVar1);
      uVar10 = FUN_03df5de8(uVar10,*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        thunk_FUN_0329bf60();
        plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *plVar9 = lVar6;
        thunk_FUN_0329bf60(plVar9,lVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


