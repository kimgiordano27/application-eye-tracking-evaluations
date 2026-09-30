/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 03172598
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x25 + 0xdf0);
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x20));
  uVar6 = FUN_01b47fd0(*unaff_x24,3);
  FUN_02f80f34(uVar6,*puVar7,0);
  puVar1 = PTR_DAT_03d7fdf8;
  if (1 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x28),uVar6);
    uVar6 = FUN_01b47fd0(*unaff_x24,3);
    FUN_02f80f34(uVar6,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_03d7fdb0;
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x30),uVar6);
      uVar6 = FUN_01b47fd0(*unaff_x24,3);
      FUN_02f80f34(uVar6,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_03d80ae8;
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
        thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),uVar6);
        uVar6 = FUN_01b47fd0(*unaff_x24,4);
        FUN_02f80f34(uVar6,*(undefined8 *)puVar1,0);
        puVar5 = PTR_DAT_03d80b00;
        puVar4 = PTR_DAT_03d80af8;
        puVar3 = PTR_DAT_03d80ac0;
        puVar2 = PTR_DAT_03d80ab8;
        puVar1 = Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__;
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
          thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x40),uVar6);
          *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x19;
          thunk_FUN_01b4f09c();
          uVar6 = FUN_01b47fd0(*(undefined8 *)puVar1,0x11);
          FUN_02f80f34(uVar6,*(undefined8 *)puVar4,0);
          puVar7 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
          *puVar7 = uVar6;
          thunk_FUN_01b4f09c(puVar7,uVar6);
          uVar6 = FUN_01b47fd0(*(undefined8 *)puVar2,0x18);
          FUN_02f80f34(uVar6,*(undefined8 *)puVar5,0);
          puVar7 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
          *puVar7 = uVar6;
          thunk_FUN_01b4f09c(puVar7,uVar6);
          uVar6 = FUN_01b47fd0(*unaff_x23,0x18);
          FUN_02f80f34(uVar6,*(undefined8 *)puVar3,0);
          puVar7 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
          *puVar7 = uVar6;
          thunk_FUN_01b4f09c(puVar7,uVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


