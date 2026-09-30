/*
FUNCTION_NAME: FUN_03093cd8
ENTRY_POINT: 03093cd8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_10;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03093cd8(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0412b506 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdfba0);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_DummySimulationSystem___codegen__OnCreate_00000A90_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03d0c9c0);
    FUN_01ab69ac(PTR_DAT_03cbe888);
    FUN_01ab69ac(
                Unity_Physics_Systems_DummySimulationSystem___codegen__OnDestroy_00000A92_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc1548);
    FUN_01ab69ac(PTR_DAT_03cc86a8);
    FUN_01ab69ac(
                Unity_Physics_Systems_DummySimulationSystem___codegen__OnUpdate_00000A91_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ECBInterop__mono_to_burst_ProcessChainChunk_0000036B_PostfixBurstDelegate_var
                );
    DAT_0412b506 = 1;
  }
  puVar2 = PTR_DAT_03cbe438;
  if (param_2 == (long *)0x0) {
LAB_03093df4:
    uVar4 = FUN_025b4d3c(*(undefined8 *)
                          Unity_Entities_ECBInterop__mono_to_burst_ProcessChainChunk_0000036B_PostfixBurstDelegate_var
                         ,param_2,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    FUN_0367b470(uVar4,param_2,0);
    return;
  }
  lVar7 = *param_2;
  bVar1 = *(byte *)(*(long *)PTR_DAT_03cc86a8 + 0x130);
  if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cc86a8)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cc1548 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cc1548))
    goto LAB_03093df4;
  }
  else {
    lVar7 = FUN_036a0e54(param_2,0);
    if (lVar7 != 0) {
      lVar7 = FUN_036a0e54(param_2,0);
      if (lVar7 == 0) goto LAB_03094030;
      if (*(long *)(lVar7 + 0x18) != 0) {
        uVar4 = FUN_036a0e54(param_2,0);
        uVar4 = FUN_01f66b10(uVar4,*(undefined8 *)
                                    UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var
                            );
        uVar4 = FUN_01f70920(uVar4,*(undefined8 *)PTR_DAT_03d0c9c0);
        lVar7 = FUN_036a0e54(param_2,0);
        if (lVar7 != 0) {
          lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,*(undefined4 *)(lVar7 + 0x18));
          lVar5 = FUN_036a0e54(param_2,0);
          puVar2 = PTR_DAT_03cdfba0;
          if (lVar5 != 0) {
            if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
              uVar10 = 0;
              uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
              do {
                if (uVar8 <= uVar10) {
LAB_0309402c:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                uVar3 = FUN_01f242a8(uVar4,*(undefined8 *)(lVar5 + 0x20 + uVar10 * 8),
                                     *(undefined8 *)puVar2);
                if (lVar7 == 0) goto LAB_03094030;
                if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0309402c;
                *(undefined4 *)(lVar7 + 0x20 + uVar10 * 4) = uVar3;
                uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                uVar10 = uVar10 + 1;
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
            }
            lVar5 = *(long *)(param_1 + 0x20);
            local_70 = 0;
            uStack_68 = 0;
            FUN_020f03e8(&local_70,param_2,uVar4,
                         *(undefined8 *)
                          Unity_Physics_Systems_DummySimulationSystem___codegen__OnUpdate_00000A91_PostfixBurstDelegate_var
                        );
            if (lVar5 != 0) {
              local_60 = local_70;
              uStack_58 = uStack_68;
              FUN_01b5f01c(lVar5,&local_60,
                           *(undefined8 *)
                            Unity_Physics_Systems_DummySimulationSystem___codegen__OnDestroy_00000A92_PostfixBurstDelegate_var
                          );
              plVar9 = (long *)(param_1 + 0x30);
              if ((*plVar9 != 0) &&
                 (uVar10 = FUN_01f6dc88(*plVar9,lVar7,
                                        *(undefined8 *)
                                         Unity_Physics_Systems_DummySimulationSystem___codegen__OnCreate_00000A90_PostfixBurstDelegate_var
                                       ), (uVar10 & 1) == 0)) {
                thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
                uVar4 = thunk_FUN_01a89e68();
                uVar6 = thunk_FUN_01a6ca08(
                                          Unity_Entities_EnabledBitUtility_ShiftRightBurstForTests_00000A52_PostfixBurstDelegate_var
                                          );
                FUN_0276e9b0(uVar4,uVar6,0);
                uVar6 = thunk_FUN_01a6ca08(
                                          Unity_Physics_Systems_EnsureUniqueColliderSystem___codegen__OnCreate_00000ADA_PostfixBurstDelegate_var
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar4,uVar6);
              }
              *plVar9 = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar7);
              return;
            }
          }
        }
        goto LAB_03094030;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x20);
  local_70 = 0;
  uStack_68 = 0;
  FUN_020f03e8(&local_70,param_2,0,
               *(undefined8 *)
                Unity_Physics_Systems_DummySimulationSystem___codegen__OnUpdate_00000A91_PostfixBurstDelegate_var
              );
  if (lVar7 != 0) {
    local_60 = local_70;
    uStack_58 = uStack_68;
    FUN_01b5f01c(lVar7,&local_60,
                 *(undefined8 *)
                  Unity_Physics_Systems_DummySimulationSystem___codegen__OnDestroy_00000A92_PostfixBurstDelegate_var
                );
    return;
  }
LAB_03094030:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


