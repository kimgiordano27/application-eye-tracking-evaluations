/*
FUNCTION_NAME: FUN_0377fff0
ENTRY_POINT: 0377fff0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_7;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0378065c) */

undefined4 FUN_0377fff0(long param_1,undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__;
  if ((DAT_041374aa & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_01ab69ac(Mono_CSharp_Operator_OpType_TypeInfo);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(_Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(Mono_CSharp_PendingImplementation_<>c_TypeInfo);
    FUN_01ab69ac(
                Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Collider>_Clear__);
    DAT_041374aa = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x40);
  uVar5 = FUN_027bcf38(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    FUN_036697cc(uVar8,0);
  }
  *param_3 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,0);
  if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_60 = param_2;
  uVar5 = FUN_0219c130(*(long *)(param_1 + 0x120),&local_60,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_54 = param_2;
    FUN_0219b634(*(long *)(param_1 + 0x120),&local_54,&local_60,
                 *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
    *param_3 = CONCAT44(uStack_5c,local_60);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3);
    goto LAB_03780164;
  }
  iVar3 = FUN_0377baf8(param_1);
  if (iVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x140);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6 = *(long **)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if ((uVar5 & 1) == 0) {
      lVar4 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar4 + 0x20) =
           *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_Collider>_Clear__;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar11 = FUN_036d3824(param_1,0);
      if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar4 + 0x28) = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar4 + 0x30) =
           *(undefined8 *)
            Koenigz_PerfectCulling_PerfectCullingBakingBehaviour_<PerformBakeAsync>d__19_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar7 = *(long *)(param_1 + 0x140);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = FUN_036d3824(lVar7,0);
      if (*(uint *)(lVar4 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar4 + 0x38) = uVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(uint *)(lVar4 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)Mono_CSharp_PendingImplementation_<>c_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar11 = FUN_025be564(lVar4,0);
      lVar4 = *(long *)(param_1 + 0x140);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar10 = *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b470(uVar11,uVar10,0);
      goto LAB_037804e4;
    }
    lVar4 = *(long *)(param_1 + 0x140);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6 = *(long **)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (iVar3 == *(int *)(param_1 + 0x150)) {
      lVar4 = *(long *)(param_1 + 0x140);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar6 = *(long **)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (iVar3 != *(int *)(param_1 + 0x154)) goto LAB_03780228;
    }
    else {
LAB_03780228:
      lVar4 = *(long *)(param_1 + 0x140);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_036afd58(lVar4,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),0);
      lVar4 = *(long *)(param_1 + 0x140);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar11 = *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
      if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03778c94(uVar11,0);
    }
    puVar2 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
    if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03777934(0,0);
    lVar4 = *(long *)(param_1 + 0x140);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar5 = FUN_03777970(param_2,*(undefined4 *)(param_1 + 0x158),0,*(undefined8 *)(param_1 + 0x168)
                         ,*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x15c),
                         *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20),
                         param_3,0);
    if ((uVar5 & 1) == 0) {
      if (*(char *)(param_1 + 0x14c) != '\0') {
        FUN_03780838(param_1);
        lVar4 = *(long *)(param_1 + 0x140);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x148)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar9 = *(undefined4 *)(param_1 + 0x158);
        uVar11 = *(undefined8 *)(param_1 + 0x160);
        uVar10 = *(undefined8 *)(param_1 + 0x168);
        uVar1 = *(undefined4 *)(param_1 + 0x15c);
        uVar12 = *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x148) * 8 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_03777970(param_2,uVar9,0,uVar10,uVar11,uVar1,uVar12,param_3,0);
        if ((uVar5 & 1) != 0) {
          if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_03776ec0(*param_3,*(undefined4 *)(param_1 + 0x148),0);
          if (*(long *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(*(long *)(param_1 + 0x118),*param_3,
                       *(undefined8 *)
                        _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo
                      );
          if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_60 = param_2;
          FUN_0219b9a4(*(long *)(param_1 + 0x120),&local_60,*param_3,
                       *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
          puVar2 = 
          Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
          ;
          if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_60 = param_2;
          FUN_01b5f01c(*(long *)(param_1 + 0x1b0),&local_60,
                       *(undefined8 *)
                        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                      );
          if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          local_60 = param_2;
          FUN_01b5f01c(*(long *)(param_1 + 0x1b8),&local_60,*(undefined8 *)puVar2);
          goto LAB_03780164;
        }
      }
      uVar9 = 0;
      iVar3 = 0xc;
      goto LAB_037804f0;
    }
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_03776ec0(*param_3,*(undefined4 *)(param_1 + 0x148),0);
    if (*(long *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*(long *)(param_1 + 0x118),*param_3,
                 *(undefined8 *)
                  _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo);
    if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_60 = param_2;
    FUN_0219b9a4(*(long *)(param_1 + 0x120),&local_60,*param_3,
                 *(undefined8 *)Photon_Voice_OpusCodec_EncoderFloat_TypeInfo);
    puVar2 = 
    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
    ;
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_60 = param_2;
    FUN_01b5f01c(*(long *)(param_1 + 0x1b0),&local_60,
                 *(undefined8 *)
                  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_60 = param_2;
    FUN_01b5f01c(*(long *)(param_1 + 0x1b8),&local_60,*(undefined8 *)puVar2);
LAB_03780164:
    uVar9 = 1;
  }
  else {
LAB_037804e4:
    uVar9 = 0;
  }
  iVar3 = 3;
LAB_037804f0:
  uVar5 = FUN_027bcf38(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    FUN_03669868(uVar8,0);
  }
  if ((iVar3 == 0xc) || (iVar3 == 0)) {
    uVar9 = 0;
  }
  return uVar9;
}


