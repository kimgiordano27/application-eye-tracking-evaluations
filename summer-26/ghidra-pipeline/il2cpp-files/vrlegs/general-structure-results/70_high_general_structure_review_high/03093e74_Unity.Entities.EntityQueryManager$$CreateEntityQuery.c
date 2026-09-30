/*
FUNCTION_NAME: Unity.Entities.EntityQueryManager$$CreateEntityQuery
ENTRY_POINT: 03093e74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_5;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_EntityQueryManager__CreateEntityQuery(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long *plVar8;
  ulong uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    FUN_020f03e8();
    if (lVar4 != 0) {
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_01b5f01c(lVar4,&stack0x00000010,
                   *(undefined8 *)
                    Unity_Physics_Systems_DummySimulationSystem___codegen__OnDestroy_00000A92_PostfixBurstDelegate_var
                  );
      return;
    }
  }
  else {
    uVar3 = FUN_036a0e54();
    uVar3 = FUN_01f66b10(uVar3,*(undefined8 *)
                                UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var);
    uVar3 = FUN_01f70920(uVar3,*(undefined8 *)PTR_DAT_03d0c9c0);
    lVar4 = FUN_036a0e54();
    if (lVar4 != 0) {
      lVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,*(undefined4 *)(lVar4 + 0x18));
      lVar5 = FUN_036a0e54();
      puVar1 = PTR_DAT_03cdfba0;
      if (lVar5 != 0) {
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar9 = 0;
          uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar9) {
LAB_0309402c:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            uVar2 = FUN_01f242a8(uVar3,*(undefined8 *)(lVar5 + 0x20 + uVar9 * 8),
                                 *(undefined8 *)puVar1);
            if (lVar4 == 0) goto LAB_03094030;
            if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0309402c;
            *(undefined4 *)(lVar4 + 0x20 + uVar9 * 4) = uVar2;
            uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
        lVar5 = *(long *)(unaff_x20 + 0x20);
        FUN_020f03e8();
        if (lVar5 != 0) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_01b5f01c(lVar5,&stack0x00000010,
                       *(undefined8 *)
                        Unity_Physics_Systems_DummySimulationSystem___codegen__OnDestroy_00000A92_PostfixBurstDelegate_var
                      );
          plVar8 = (long *)(unaff_x20 + 0x30);
          if ((*plVar8 != 0) &&
             (uVar9 = FUN_01f6dc88(*plVar8,lVar4,
                                   *(undefined8 *)
                                    Unity_Physics_Systems_DummySimulationSystem___codegen__OnCreate_00000A90_PostfixBurstDelegate_var
                                  ), (uVar9 & 1) == 0)) {
            thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
            uVar3 = thunk_FUN_01a89e68();
            uVar6 = thunk_FUN_01a6ca08(
                                      Unity_Entities_EnabledBitUtility_ShiftRightBurstForTests_00000A52_PostfixBurstDelegate_var
                                      );
            FUN_0276e9b0(uVar3,uVar6,0);
            uVar6 = thunk_FUN_01a6ca08(
                                      Unity_Physics_Systems_EnsureUniqueColliderSystem___codegen__OnCreate_00000ADA_PostfixBurstDelegate_var
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar3,uVar6);
          }
          *plVar8 = lVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar4);
          return;
        }
      }
    }
  }
LAB_03094030:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


