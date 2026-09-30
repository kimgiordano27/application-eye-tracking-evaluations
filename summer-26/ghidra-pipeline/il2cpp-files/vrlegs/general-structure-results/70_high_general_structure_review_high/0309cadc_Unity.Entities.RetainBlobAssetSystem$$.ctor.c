/*
FUNCTION_NAME: Unity.Entities.RetainBlobAssetSystem$$.ctor
ENTRY_POINT: 0309cadc
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


bool Unity_Entities_RetainBlobAssetSystem___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  puVar10 = *(undefined8 **)(unaff_x23 + 0x1a8);
  if ((*(byte *)(unaff_x22 + 0x566) & 1) == 0) {
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
    *(undefined1 *)(unaff_x22 + 0x566) = 1;
  }
  lVar5 = thunk_FUN_01a89e68(*puVar10);
  FUN_027b3d9c(lVar5,0);
  if (lVar5 != 0) {
    plVar11 = (long *)(lVar5 + 0x10);
    *plVar11 = param_5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,param_5);
    puVar3 = System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
    puVar2 = PTR_DAT_03cc1790;
    if (((*plVar11 != 0) && (lVar9 = *(long *)(*plVar11 + 0x28), lVar9 != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
      FUN_02215a88(lVar9,param_6,&stack0x00000020,
                   *(undefined8 *)
                    Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                  );
      uVar4 = in_stack_00000020;
      lVar9 = *plVar11;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_0309ee7c(lVar9,param_6);
      puVar10 = (undefined8 *)(lVar5 + 0x18);
      *puVar10 = uVar6;
      lVar9 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar7 = (char *)thunk_FUN_01a59484(puVar10,*(undefined8 *)
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
      if ((*plVar11 != 0) && (lVar9 = *(long *)(*plVar11 + 0x28), lVar9 != 0)) {
        lVar9 = *(long *)(lVar9 + 0x40);
        FUN_022412e0(puVar10,&stack0x00000020,*(undefined8 *)PTR_DAT_03cc1798);
        if ((lVar9 != 0) &&
           ((FUN_02215a88(lVar9,in_stack_00000020 & 0xffffffff,&stack0x00000020,
                          *(undefined8 *)System_Globalization_NumberFormatInfo_var), uVar4 != 0 &&
            (in_stack_00000020 != 0)))) {
          uVar6 = FUN_039a5f08(0,*(undefined8 *)(uVar4 + 0x30),
                               *(undefined8 *)(in_stack_00000020 + 0x18),0);
          puVar3 = Cysharp_Threading_Tasks_UniTask_WaitWhilePromise_var;
          puVar2 = Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var;
          if (*plVar11 != 0) {
            auVar12 = FUN_0309f14c(*(undefined8 *)(*plVar11 + 0x28),param_6);
            uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
            FUN_039a3ba8(uVar8,lVar5,*(undefined8 *)puVar3,0);
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            in_stack_00000078 = 0;
            in_stack_00000070 = 0;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000080 = 0;
            FUN_039a3cd0(param_1,param_2,param_3,param_4,0,0,&stack0x00000020,uVar6,auVar12._0_8_,
                         auVar12._8_8_,0,uVar8,0,0);
            memcpy(param_8,&stack0x00000020,0x68);
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


