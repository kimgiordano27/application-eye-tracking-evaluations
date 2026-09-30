/*
FUNCTION_NAME: Unity.Entities.RetainBlobAssetSystem.RetainBlobAssetSystem_2062D824_LambdaJob_0_Job$$OriginalLambdaBody
ENTRY_POINT: 0309cb9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


bool Unity_Entities_RetainBlobAssetSystem_RetainBlobAssetSystem_2062D824_LambdaJob_0_Job__OriginalLambdaBody
               (void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 (*unaff_x19) [16];
  undefined8 *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
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
  
  puVar3 = System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
  puVar2 = PTR_DAT_03cc1790;
  if (((*unaff_x23 != 0) && (lVar8 = *(long *)(*unaff_x23 + 0x28), lVar8 != 0)) &&
     (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
    FUN_02215a88(lVar8,unaff_w21,&stack0x00000020,
                 *(undefined8 *)
                  Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                );
    uVar4 = in_stack_00000020;
    lVar8 = *unaff_x23;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0309ee7c(lVar8,unaff_w21);
    puVar9 = (undefined8 *)(unaff_x22 + 0x18);
    *puVar9 = uVar5;
    lVar8 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    pcVar6 = (char *)thunk_FUN_01a59484(puVar9,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80));
    cVar1 = *pcVar6;
    if (cVar1 == '\0') {
      *(undefined8 *)*unaff_x19 = 0;
      *(undefined8 *)(*unaff_x19 + 8) = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[9] = 0;
      unaff_x20[8] = 0;
      unaff_x20[0xb] = 0;
      unaff_x20[10] = 0;
      unaff_x20[5] = 0;
      unaff_x20[4] = 0;
      unaff_x20[7] = 0;
      unaff_x20[6] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
LAB_0309cd98:
      return cVar1 != '\0';
    }
    if ((*unaff_x23 != 0) && (lVar8 = *(long *)(*unaff_x23 + 0x28), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x40);
      FUN_022412e0(puVar9,&stack0x00000020,*(undefined8 *)PTR_DAT_03cc1798);
      if ((lVar8 != 0) &&
         ((FUN_02215a88(lVar8,in_stack_00000020 & 0xffffffff,&stack0x00000020,
                        *(undefined8 *)System_Globalization_NumberFormatInfo_var), uVar4 != 0 &&
          (in_stack_00000020 != 0)))) {
        uVar5 = FUN_039a5f08(0,*(undefined8 *)(uVar4 + 0x30),
                             *(undefined8 *)(in_stack_00000020 + 0x18),0);
        puVar2 = Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var;
        if (*unaff_x23 != 0) {
          auVar10 = FUN_0309f14c(*(undefined8 *)(*unaff_x23 + 0x28),unaff_w21);
          uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_039a3ba8();
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
          FUN_039a3cd0(&stack0x00000020,uVar5,auVar10._0_8_,auVar10._8_8_,0,uVar7,0,0);
          memcpy(unaff_x20,&stack0x00000020,0x68);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          auVar10 = FUN_039a3c58();
          *unaff_x19 = auVar10;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          goto LAB_0309cd98;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


