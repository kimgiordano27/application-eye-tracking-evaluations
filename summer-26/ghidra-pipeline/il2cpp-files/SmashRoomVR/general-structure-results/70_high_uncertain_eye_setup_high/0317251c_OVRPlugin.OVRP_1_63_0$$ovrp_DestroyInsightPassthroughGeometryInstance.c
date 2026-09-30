/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 0317251c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightPassthroughGeometryInstance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  puVar2 = PTR_DAT_03d80ac8;
  puVar1 = PTR_DAT_03d7fd58;
  if (4 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
    thunk_FUN_01b4f09c();
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_01b4f09c();
    lVar6 = FUN_01b47fd0(*(undefined8 *)puVar1,5);
    uVar7 = FUN_01b47fd0(*unaff_x24,4);
    FUN_02f80f34(uVar7,*(undefined8 *)puVar2,0);
    puVar1 = PTR_DAT_03d7fdf0;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x20),uVar7);
      uVar7 = FUN_01b47fd0(*unaff_x24,3);
      FUN_02f80f34(uVar7,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_03d7fdf8;
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x28),uVar7);
        uVar7 = FUN_01b47fd0(*unaff_x24,3);
        FUN_02f80f34(uVar7,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_03d7fdb0;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = uVar7;
          thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x30),uVar7);
          uVar7 = FUN_01b47fd0(*unaff_x24,3);
          FUN_02f80f34(uVar7,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_03d80ae8;
          if (3 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x38),uVar7);
            uVar7 = FUN_01b47fd0(*unaff_x24,4);
            FUN_02f80f34(uVar7,*(undefined8 *)puVar1,0);
            puVar5 = PTR_DAT_03d80b00;
            puVar4 = PTR_DAT_03d80af8;
            puVar3 = PTR_DAT_03d80ac0;
            puVar2 = PTR_DAT_03d80ab8;
            puVar1 = Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = uVar7;
              thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x40),uVar7);
              plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
              *plVar8 = lVar6;
              thunk_FUN_01b4f09c(plVar8,lVar6);
              uVar7 = FUN_01b47fd0(*(undefined8 *)puVar1,0x11);
              FUN_02f80f34(uVar7,*(undefined8 *)puVar4,0);
              puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
              *puVar9 = uVar7;
              thunk_FUN_01b4f09c(puVar9,uVar7);
              uVar7 = FUN_01b47fd0(*(undefined8 *)puVar2,0x18);
              FUN_02f80f34(uVar7,*(undefined8 *)puVar5,0);
              puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
              *puVar9 = uVar7;
              thunk_FUN_01b4f09c(puVar9,uVar7);
              uVar7 = FUN_01b47fd0(*unaff_x23,0x18);
              FUN_02f80f34(uVar7,*(undefined8 *)puVar3,0);
              puVar9 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
              *puVar9 = uVar7;
              thunk_FUN_01b4f09c(puVar9,uVar7);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


