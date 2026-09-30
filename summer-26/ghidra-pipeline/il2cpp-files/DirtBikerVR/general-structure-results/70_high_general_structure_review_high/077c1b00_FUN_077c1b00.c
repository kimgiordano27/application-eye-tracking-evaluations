/*
FUNCTION_NAME: FUN_077c1b00
ENTRY_POINT: 077c1b00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long FUN_077c1b00(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_08987112 & 1) == 0) {
    FUN_03a8a718(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IDiagnosticsFactory>_TypeInfo
                );
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IFriendsEvents>_TypeInfo);
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_TypeInfo);
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_TypeInfo);
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_TypeInfo);
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_TypeInfo);
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_TypeInfo);
    FUN_03a8a718(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JConstructor>_TypeInfo);
    DAT_08987112 = 1;
  }
  puVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_TypeInfo;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_100[0] = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JConstructor>_TypeInfo
                                );
      FUN_04dda86c(lVar5,*(undefined8 *)puVar2);
      puVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_TypeInfo;
      puVar3 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IFriendsEvents>_TypeInfo;
      puVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IDiagnosticsFactory>_TypeInfo;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_077c1db4;
      FUN_04de90b8(&local_90,*(long *)(param_1 + 0x10),
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_TypeInfo);
      local_e0 = local_80;
      uStack_e8 = uStack_88;
      local_f0 = local_90;
      while (uVar6 = FUN_061c1964(&local_f0,*(undefined8 *)puVar3), lVar7 = local_e0,
            (uVar6 & 1) != 0) {
        local_100[0] = 0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        local_110 = 0;
        if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        local_130 = *(undefined8 *)(local_e0 + 0x10);
        thunk_FUN_03afed3c(&local_130);
        uStack_128 = *(undefined8 *)(lVar7 + 0x18);
        thunk_FUN_03afed3c((ulong)&local_130 | 8);
        local_100[0] = *(undefined8 *)(lVar7 + 0x40);
        thunk_FUN_03afed3c(local_100);
        local_120 = *(long *)(lVar7 + 0x20);
        thunk_FUN_03afed3c(&local_120);
        uStack_118 = *(undefined8 *)(lVar7 + 0x28);
        thunk_FUN_03afed3c(&uStack_118);
        local_110 = *(undefined8 *)(lVar7 + 0x30);
        thunk_FUN_03afed3c(&local_110);
        uStack_108 = *(undefined8 *)(lVar7 + 0x38);
        thunk_FUN_03afed3c(&uStack_108);
        if (lVar5 == 0) {
LAB_077c1dac:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        local_a0 = local_100[0];
        lVar8 = *(long *)puVar4;
        uStack_c8 = uStack_128;
        local_d0 = local_130;
        uStack_b8 = uStack_118;
        lStack_c0 = local_120;
        uStack_a8 = uStack_108;
        local_b0 = local_110;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_077c1dac;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x38;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + 0x48) = uStack_108;
          *(undefined8 *)(lVar7 + 0x40) = local_110;
          *(undefined8 *)(lVar7 + 0x28) = uStack_128;
          *(undefined8 *)(lVar7 + 0x20) = local_130;
          *(undefined8 *)(lVar7 + 0x38) = uStack_118;
          *(long *)(lVar7 + 0x30) = local_120;
          *(undefined8 *)(lVar7 + 0x50) = local_100[0];
          thunk_FUN_03afed3c(lVar7 + 0x20,0);
        }
        else {
          uStack_88 = uStack_128;
          local_90 = local_130;
          uStack_78 = uStack_118;
          local_80 = local_120;
          uStack_68 = uStack_108;
          local_70 = local_110;
          local_60 = local_100[0];
          FUN_04ddb1bc(lVar5,&local_90,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_061c1960(&local_f0,*(undefined8 *)puVar2);
    }
    return lVar5;
  }
LAB_077c1db4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


