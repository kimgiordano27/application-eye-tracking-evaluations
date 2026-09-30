/*
FUNCTION_NAME: Unity.Entities.RetainBlobAssetSystem.RetainBlobAssetSystem_76247ABD_LambdaJob_4_Job$$Execute
ENTRY_POINT: 0309d780
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


bool Unity_Entities_RetainBlobAssetSystem_RetainBlobAssetSystem_76247ABD_LambdaJob_4_Job__Execute
               (void)

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
  undefined1 (*unaff_x19) [16];
  undefined8 *unaff_x20;
  undefined4 unaff_w21;
  long *plVar10;
  long unaff_x24;
  undefined8 *puVar11;
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
  
  lVar5 = thunk_FUN_01a89e68();
                    /* try { // try from 0309d784 to 0319d7ab has its CatchHandler @ 0309d8d0 */
  FUN_027b3d9c(lVar5,0);
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 0x10);
    *plVar10 = unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
    puVar3 = System_Tuple<T1,_T2,_T3,_T4,_T5,_T6,_T7,_TRest>_var;
    puVar2 = PTR_DAT_03cc1790;
                    /* try { // try from 0309d7ac to 0319d8e7 has its CatchHandler @ 0309d4a0 */
    if (((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x28), lVar9 != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
      FUN_02215a88(lVar9,unaff_w21,&stack0x00000020,
                   *(undefined8 *)
                    Unity_Physics_Systems_SyncCustomPhysicsProxySystem___codegen__OnUpdate_00000B43_PostfixBurstDelegate_var
                  );
      uVar4 = in_stack_00000020;
      lVar9 = *plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_0309ee7c(lVar9,unaff_w21);
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
LAB_0309d9a4:
        return cVar1 != '\0';
      }
      if ((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x28), lVar9 != 0)) {
        lVar9 = *(long *)(lVar9 + 0x40);
        FUN_022412e0(puVar11,&stack0x00000020,*(undefined8 *)PTR_DAT_03cc1798);
        if ((lVar9 != 0) &&
           ((FUN_02215a88(lVar9,in_stack_00000020 & 0xffffffff,&stack0x00000020,
                          *(undefined8 *)System_Globalization_NumberFormatInfo_var), uVar4 != 0 &&
            (in_stack_00000020 != 0)))) {
          uVar6 = FUN_039a5f08(1,*(undefined8 *)(uVar4 + 0x30),
                               *(undefined8 *)(in_stack_00000020 + 0x18),0);
          puVar3 = Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastPreUpdate_var;
          puVar2 = Cysharp_Threading_Tasks_UniTask_WaitUntilPromise_var;
          if (*plVar10 != 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0309d784 with catch @ 0309d8d0
                        */
            auVar12 = FUN_0309f14c(*(undefined8 *)(*plVar10 + 0x28),unaff_w21);
            uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                    /* try { // try from 0309d8e8 to 0319d8ff has its CatchHandler @ 0309d964 */
            FUN_039a3ba8(uVar8,lVar5,*(undefined8 *)puVar3,0);
                    /* try { // try from 0309d900 to 0319d953 has its CatchHandler @ 0309d4a0 */
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
            FUN_039a3cd0(&stack0x00000020,uVar6,auVar12._0_8_,auVar12._8_8_,1,uVar8,0,0);
                    /* try { // try from 0309d954 to 0319d963 has its CatchHandler @ 0309d964 */
            memcpy(unaff_x20,&stack0x00000020,0x68);
                    /* catch() { ... } // from try @ 0309d8e8 with catch @ 0309d964
                       catch() { ... } // from try @ 0309d954 with catch @ 0309d964 */
                    /* try { // try from 0309d968 to 0319d96b has its CatchHandler @ 0309d974 */
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* try { // try from 0309d96c to 0319d977 has its CatchHandler @ 0309d4a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0309d968 with catch @ 0309d974
                        */
            auVar12 = FUN_039a3c58();
            *unaff_x19 = auVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            goto LAB_0309d9a4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


