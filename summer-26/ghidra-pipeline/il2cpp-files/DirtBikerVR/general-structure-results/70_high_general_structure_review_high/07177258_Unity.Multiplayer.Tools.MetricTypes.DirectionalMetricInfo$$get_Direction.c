/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo$$get_Direction
ENTRY_POINT: 07177258
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Multiplayer_Tools_MetricTypes_DirectionalMetricInfo__get_Direction
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 unaff_x19;
  uint *unaff_x20;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x25;
  uint unaff_w26;
  uint *unaff_x27;
  uint *puVar11;
  long unaff_x28;
  ulong unaff_x29;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  do {
    _uStack0000000000000070 = auVar12;
    auVar12 = FUN_0719aa28(&stack0x00000070,unaff_x27[-1],0);
    _uStack0000000000000070 = auVar12;
    uVar1 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor(unaff_x20);
    auVar12 = FUN_0719a7fc(&stack0x00000070,uVar1,0);
    _uStack0000000000000070 = auVar12;
    auVar12 = FUN_071774c4(unaff_x20);
    auVar12 = FUN_0719afb0(&stack0x00000070,auVar12._0_8_,auVar12._8_8_,0);
    _uStack0000000000000070 = auVar12;
    uVar4 = FUN_07177590(unaff_x20);
    auVar12 = FUN_0719aed4(&stack0x00000070,uVar4,0);
    _in_stack_00000060 = auVar12;
    uVar4 = FUN_07177370(unaff_x20);
    uVar5 = FUN_065cd268(uVar4,0);
    if ((uVar5 & 1) == 0) {
      FUN_0719ae14(&stack0x00000060,uVar4,0);
    }
    lVar6 = FUN_07177b68(unaff_x20);
    if (lVar6 != 0) {
      FUN_0719ab0c(&stack0x00000060,lVar6,0);
    }
    FUN_07177d50(unaff_x20,unaff_x20,unaff_x21,&stack0x00000118);
    do {
      puVar11 = unaff_x27;
      unaff_x29 = unaff_x29 + 1;
      unaff_x27 = puVar11 + 0x12;
      if (in_stack_00000010 == unaff_x29) {
        FUN_0719a488(unaff_x19,0);
        return;
      }
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
    } while (((puVar11[0xe] != 1) ||
             (((unaff_x20 = puVar11 + 6, (unaff_w26 & 1) == 0 && (puVar11[7] == 1)) &&
              ((*unaff_x20 & 0xfffffffe) == 0x30)))) ||
            (lVar6 = FUN_07177624(unaff_x20), lVar6 == 0));
    uVar4 = FUN_0717772c(unaff_x20);
    auVar12 = FUN_0719a1fc(unaff_x19,0);
    _in_stack_00000018 = auVar12;
    uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,&stack0x00000018);
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar7);
      lVar7 = *unaff_x25;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar9 = puVar8[3];
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar7);
        puVar8 = *(undefined8 **)(*unaff_x25 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
      FUN_04968870(lVar9,uVar10,*(undefined8 *)PTR_DAT_084e4e18,0);
      plVar3 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
      *plVar3 = lVar9;
      thunk_FUN_03afed3c(plVar3,lVar9);
      unaff_w26 = in_stack_00000008._4_4_;
    }
    unaff_x21 = FUN_04761f9c(uVar4,uVar2,lVar9,*(undefined8 *)PTR_DAT_084e4e00);
    auVar12 = FUN_0719a264(unaff_x19,unaff_x21,0);
    _uStack0000000000000070 = auVar12;
    uVar4 = FUN_07177924(unaff_x20);
    auVar12 = FUN_0719a6c0(&stack0x00000070,uVar4,0);
    _uStack0000000000000070 = auVar12;
    auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                        (&stack0x00000070,lVar6,0);
    _uStack0000000000000070 = auVar12;
    auVar12 = FUN_0719a878(&stack0x00000070,*unaff_x27 >> 3,0);
    _uStack0000000000000070 = auVar12;
    auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                        (&stack0x00000070,*unaff_x27 & 7,0);
  } while( true );
}


