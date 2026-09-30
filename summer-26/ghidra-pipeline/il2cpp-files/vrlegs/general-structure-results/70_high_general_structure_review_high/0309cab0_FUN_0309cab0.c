/*
FUNCTION_NAME: FUN_0309cab0
ENTRY_POINT: 0309cab0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool FUN_0309cab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined4 param_6,undefined1 (*param_7) [16],undefined8 *param_8)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  ulong local_f0 [14];
  
  puVar2 = Cysharp_Threading_Tasks_UniTask_NextFramePromise_var;
  if ((DAT_0412b566 & 1) == 0) {
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var);
    FUN_01ab69ac(System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Globalization_NumberFormatInfo_var);
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(PTR_DAT_03cc1798);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTask_WaitWhilePromise_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_UniTask_NextFramePromise_var);
    DAT_0412b566 = 1;
  }
  lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_027b3d9c(lVar5,0);
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 0x10);
    *plVar10 = param_5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,param_5);
    puVar3 = System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
    puVar2 = PTR_DAT_03cc1790;
    if (((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x28), lVar9 != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
      FUN_02215a88(lVar9,param_6,local_f0,
                   *(undefined8 *)
                    Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                  );
      uVar4 = local_f0[0];
      lVar9 = *plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_0309ee7c(lVar9,param_6);
      puVar11 = (undefined8 *)(lVar5 + 0x18);
      *puVar11 = uVar6;
      lVar9 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar7 = (char *)thunk_FUN_01a59484(puVar11,*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      cVar1 = *pcVar7;
      if (cVar1 == '\0') {
        *(undefined8 *)*param_7 = 0;
        *(undefined8 *)(*param_7 + 8) = 0;
        param_8[0xc] = 0;
        param_8[9] = 0;
        param_8[8] = 0;
        param_8[0xb] = 0;
        param_8[10] = 0;
        param_8[5] = 0;
        param_8[4] = 0;
        param_8[7] = 0;
        param_8[6] = 0;
        param_8[1] = 0;
        *param_8 = 0;
        param_8[3] = 0;
        param_8[2] = 0;
LAB_0309cd98:
        return cVar1 != '\0';
      }
      if ((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x28), lVar9 != 0)) {
        lVar9 = *(long *)(lVar9 + 0x40);
        FUN_022412e0(puVar11,local_f0,*(undefined8 *)PTR_DAT_03cc1798);
        if ((lVar9 != 0) &&
           ((FUN_02215a88(lVar9,local_f0[0] & 0xffffffff,local_f0,
                          *(undefined8 *)System_Globalization_NumberFormatInfo_var), uVar4 != 0 &&
            (local_f0[0] != 0)))) {
          uVar6 = FUN_039a5f08(0,*(undefined8 *)(uVar4 + 0x30),*(undefined8 *)(local_f0[0] + 0x18),0
                              );
          puVar3 = Cysharp_Threading_Tasks_UniTask_WaitWhilePromise_var;
          puVar2 = Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var;
          if (*plVar10 != 0) {
            auVar12 = FUN_0309f14c(*(undefined8 *)(*plVar10 + 0x28),param_6);
            uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
            FUN_039a3ba8(uVar8,lVar5,*(undefined8 *)puVar3,0);
            local_f0[9] = 0;
            local_f0[8] = 0;
            local_f0[0xb] = 0;
            local_f0[10] = 0;
            local_f0[5] = 0;
            local_f0[4] = 0;
            local_f0[7] = 0;
            local_f0[6] = 0;
            local_f0[1] = 0;
            local_f0[0] = 0;
            local_f0[3] = 0;
            local_f0[2] = 0;
            local_f0[0xc] = 0;
            FUN_039a3cd0(param_1,param_2,param_3,param_4,0,0,local_f0,uVar6,auVar12._0_8_,
                         auVar12._8_8_,0,uVar8,0,0,0,0,0,0);
            memcpy(param_8,local_f0,0x68);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_8,0);
            auVar12 = FUN_039a3c58(param_8,0);
            *param_7 = auVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_7,0);
            goto LAB_0309cd98;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


