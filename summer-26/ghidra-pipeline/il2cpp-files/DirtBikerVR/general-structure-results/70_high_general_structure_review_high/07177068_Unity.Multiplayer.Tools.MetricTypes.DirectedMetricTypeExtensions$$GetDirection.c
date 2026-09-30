/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions$$GetDirection
ENTRY_POINT: 07177068
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Multiplayer_Tools_MetricTypes_DirectedMetricTypeExtensions__GetDirection(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar10;
  long lVar11;
  long *unaff_x25;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  uVar2 = FUN_04760f28(*unaff_x26);
  FUN_0719ae14(&stack0x00000070,uVar2,0);
  lVar14 = *(long *)(unaff_x20 + 0x38);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar7 = *(ulong *)(lVar14 + 0x18);
  if (0 < (int)uVar7) {
    uVar15 = 0;
    puVar13 = (uint *)(lVar14 + 0x50);
    do {
      if (*(uint *)(lVar14 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (((puVar13[-4] == 1) &&
          (((puVar10 = puVar13 + -0xc, (in_stack_00000008 & 0x100000000) != 0 ||
            (puVar13[-0xb] != 1)) || ((*puVar10 & 0xfffffffe) != 0x30)))) &&
         (lVar3 = FUN_07177624(puVar10), lVar3 != 0)) {
        uVar2 = FUN_0717772c(puVar10);
        auVar16 = FUN_0719a1fc(unaff_x19,0);
        _in_stack_00000018 = auVar16;
        uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084e4df8,&stack0x00000018);
        lVar8 = *unaff_x25;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(lVar8);
          lVar8 = *unaff_x25;
        }
        puVar9 = *(undefined8 **)(lVar8 + 0xb8);
        lVar11 = puVar9[3];
        if (lVar11 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar8);
            puVar9 = *(undefined8 **)(*unaff_x25 + 0xb8);
          }
          uVar12 = *puVar9;
          lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084e4de8);
          FUN_04968870(lVar11,uVar12,*(undefined8 *)PTR_DAT_084e4e18,0);
          plVar5 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
          *plVar5 = lVar11;
          thunk_FUN_03afed3c(plVar5,lVar11);
        }
        uVar2 = FUN_04761f9c(uVar2,uVar4,lVar11,*(undefined8 *)PTR_DAT_084e4e00);
        auVar16 = FUN_0719a264(unaff_x19,uVar2,0);
        _in_stack_00000070 = auVar16;
        uVar4 = FUN_07177924(puVar10);
        auVar16 = FUN_0719a6c0(&stack0x00000070,uVar4,0);
        _in_stack_00000070 = auVar16;
        auVar16 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                            (&stack0x00000070,lVar3,0);
        _in_stack_00000070 = auVar16;
        auVar16 = FUN_0719a878(&stack0x00000070,*puVar13 >> 3,0);
        _in_stack_00000070 = auVar16;
        auVar16 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                            (&stack0x00000070,*puVar13 & 7,0);
        _in_stack_00000070 = auVar16;
        auVar16 = FUN_0719aa28(&stack0x00000070,puVar13[-1],0);
        _in_stack_00000070 = auVar16;
        uVar1 = Unity_Multiplayer_Tools_MetricTypes_NetworkVariableEvent___ctor(puVar10);
        auVar16 = FUN_0719a7fc(&stack0x00000070,uVar1,0);
        _in_stack_00000070 = auVar16;
        auVar16 = FUN_071774c4(puVar10);
        auVar16 = FUN_0719afb0(&stack0x00000070,auVar16._0_8_,auVar16._8_8_,0);
        _in_stack_00000070 = auVar16;
        uVar4 = FUN_07177590(puVar10);
        auVar16 = FUN_0719aed4(&stack0x00000070,uVar4,0);
        _in_stack_00000060 = auVar16;
        uVar4 = FUN_07177370(puVar10);
        uVar6 = FUN_065cd268(uVar4,0);
        if ((uVar6 & 1) == 0) {
          FUN_0719ae14(&stack0x00000060,uVar4,0);
        }
        lVar3 = FUN_07177b68(puVar10);
        if (lVar3 != 0) {
          FUN_0719ab0c(&stack0x00000060,lVar3,0);
        }
        FUN_07177d50(puVar10,puVar10,uVar2,&stack0x00000118);
      }
      uVar15 = uVar15 + 1;
      puVar13 = puVar13 + 0x12;
    } while ((uVar7 & 0xffffffff) != uVar15);
  }
  FUN_0719a488(unaff_x19,0);
  return;
}


