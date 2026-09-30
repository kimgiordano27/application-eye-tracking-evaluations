/*
FUNCTION_NAME: FUN_05fa9b98
ENTRY_POINT: 05fa9b98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5
*/


undefined8
FUN_05fa9b98(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,long param_4,
            undefined8 param_5,int *param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_06bc4ef6 & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_<>c_<ThrowAsync>b__7_1__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__
                );
    FUN_02f08768(Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_u32__);
    DAT_06bc4ef6 = 1;
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_u32__;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  if ((*(long *)(param_4 + 0x400) == 0) ||
     (iVar11 = *(int *)(*(long *)(param_4 + 0x400) + 0x18), iVar11 < 2)) {
    uVar7 = 0;
    *param_6 = 0;
  }
  else {
    if (*(char *)(param_4 + 0x27c) == '\0') {
      *param_6 = iVar11;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05faa0b4(param_5,iVar11);
      lVar5 = FUN_0303d294(param_5,*(undefined8 *)
                                    Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__
                          );
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__;
      if (0 < *param_6) {
        uVar10 = 0;
        puVar8 = (undefined4 *)(lVar5 + 8);
        do {
          if (*(long *)(param_4 + 0x400) == 0) goto LAB_05fa9eb4;
          uVar12 = FUN_03c96d84(*(long *)(param_4 + 0x400),uVar10 & 0xffffffff,*(undefined8 *)puVar2
                               );
          puVar8[-2] = uVar12;
          puVar8[-1] = (int)param_2;
          uVar10 = uVar10 + 1;
          *puVar8 = param_3;
          puVar8 = puVar8 + 3;
        } while ((long)uVar10 < (long)*param_6);
      }
    }
    else {
      FUN_05fa85b4(param_4);
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_u32__;
      if (*(long *)(param_4 + 0x400) == 0) {
LAB_05fa9eb4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar12 = *(undefined4 *)(*(long *)(param_4 + 0x400) + 0x18);
      lVar5 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_u32__;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar5 = *(long *)puVar2;
      }
      local_f0 = *param_7;
      uStack_dc = *(undefined8 *)((long)param_7 + 0x14);
      uVar7 = *(undefined8 *)((long)param_7 + 0xc);
      uStack_e8 = (undefined4)param_7[1];
      uStack_e4 = (undefined4)uVar7;
      uStack_e0 = (undefined4)((ulong)uVar7 >> 0x20);
      FUN_05faa164(param_4,uVar12,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),&local_f0);
      uVar12 = (undefined4)uVar7;
      if (*(int *)(param_4 + 0x278) == 0) {
        lVar5 = *(long *)puVar2;
        *param_6 = 2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05faa0b4(param_5,2);
        puVar8 = (undefined4 *)
                 FUN_0303d294(param_5,*(undefined8 *)
                                       Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__
                             );
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__
        ;
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        if (lVar5 != 0) {
          uVar13 = FUN_03c96d84(lVar5,0,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__
                               );
          *puVar8 = uVar13;
          puVar8[1] = uVar12;
          puVar8[2] = param_3;
          lVar5 = *(long *)(param_4 + 0x400);
          if (lVar5 != 0) {
            uVar13 = FUN_03c96d84(lVar5,*(int *)(lVar5 + 0x18) + -1,*(undefined8 *)puVar3);
            puVar8[3] = uVar13;
            puVar8[4] = uVar12;
            puVar8[5] = param_3;
            return 1;
          }
        }
        goto LAB_05fa9eb4;
      }
      uVar4 = FUN_05fa7fcc(param_4);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar5);
        lVar5 = *(long *)puVar2;
      }
      local_110 = *param_7;
      uStack_fc = *(undefined8 *)((long)param_7 + 0x14);
      uStack_108 = (undefined4)param_7[1];
      uStack_104 = (undefined4)*(undefined8 *)((long)param_7 + 0xc);
      uStack_100 = (undefined4)((ulong)*(undefined8 *)((long)param_7 + 0xc) >> 0x20);
      FUN_05faa63c(param_4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),(ulong)uVar4,
                   *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),&local_110);
      lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      if (lVar5 == 0) goto LAB_05fa9eb4;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
LAB_05faa0b0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pinchReady
                (lVar5 + 0x20,lVar5 + 0x2c,lVar5 + 0x38,&local_60,&local_70,&local_a0,&local_b0,0);
      lVar5 = *(long *)(param_4 + 0x420);
      if (lVar5 == 0) goto LAB_05fa9eb4;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) goto LAB_05faa0b0;
      UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pinchReady
                (lVar5 + 0x20,lVar5 + 0x2c,lVar5 + 0x38,&local_b0,&local_a0,&local_80,&local_90,0);
      if (0 < (int)uVar4) {
        if (*(long *)(param_4 + 0x400) == 0) goto LAB_05fa9eb4;
        iVar11 = *(int *)(*(long *)(param_4 + 0x400) + 0x18);
        if ((uVar4 != iVar11 - 1U) && (*(int *)(param_4 + 0x278) == 1)) {
          lVar5 = *(long *)puVar2;
          *param_6 = iVar11;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05faa0b4(param_5,iVar11);
          puVar6 = (undefined8 *)
                   FUN_0303d294(param_5,*(undefined8 *)
                                         Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__
                               );
          uVar7 = 0x3f800000;
          iVar11 = 1;
          *puVar6 = local_60;
          *(undefined4 *)(puVar6 + 1) = local_58;
          do {
            thunk_FUN_05f5b47c((1.0 / (float)(int)uVar4) * (float)iVar11,&local_60,&local_70,
                               &local_80,&local_90,&local_c0,0);
            puVar9 = (undefined8 *)((long)puVar6 + (long)iVar11 * 0xc);
            iVar11 = iVar11 + 1;
            *(undefined4 *)(puVar9 + 1) = local_b8;
            *puVar9 = local_c0;
            puVar2 = 
            Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner_InvokeMoveNext__
            ;
          } while (iVar11 <= (int)uVar4);
          lVar5 = *(long *)(param_4 + 0x400);
          if (lVar5 != 0) {
            puVar8 = (undefined4 *)((long)puVar6 + (ulong)uVar4 * 0xc + 0x14);
            do {
              uVar4 = uVar4 + 1;
              if (*(int *)(lVar5 + 0x18) <= (int)uVar4) goto LAB_05fa9ffc;
              uVar12 = FUN_03c96d84(lVar5,uVar4,*(undefined8 *)puVar2);
              puVar8[-2] = uVar12;
              puVar8[-1] = (int)uVar7;
              *puVar8 = param_3;
              lVar5 = *(long *)(param_4 + 0x400);
              puVar8 = puVar8 + 3;
            } while (lVar5 != 0);
          }
          goto LAB_05fa9eb4;
        }
      }
      iVar11 = *(int *)(param_4 + 0x2b8);
      lVar5 = *(long *)puVar2;
      *param_6 = iVar11;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05faa0b4(param_5,iVar11);
      puVar6 = (undefined8 *)
               FUN_0303d294(param_5,*(undefined8 *)
                                     Method_Mono_Net_Security_AsyncProtocolRequest_<InnerRead>d__25_MoveNext__
                           );
      *puVar6 = local_60;
      *(undefined4 *)(puVar6 + 1) = local_58;
      iVar11 = *(int *)(param_4 + 0x2b8);
      if (1 < iVar11) {
        lVar5 = 1;
        do {
          thunk_FUN_05f5b47c((1.0 / (float)(iVar11 + -1)) * (float)(int)lVar5,&local_60,&local_70,
                             &local_80,&local_90,&local_d0,0);
          lVar5 = lVar5 + 1;
          *(undefined4 *)((long)puVar6 + 0x14) = local_c8;
          *(undefined8 *)((long)puVar6 + 0xc) = local_d0;
          puVar6 = (undefined8 *)((long)puVar6 + 0xc);
        } while (lVar5 < *(int *)(param_4 + 0x2b8));
      }
    }
LAB_05fa9ffc:
    uVar7 = 1;
  }
  return uVar7;
}


