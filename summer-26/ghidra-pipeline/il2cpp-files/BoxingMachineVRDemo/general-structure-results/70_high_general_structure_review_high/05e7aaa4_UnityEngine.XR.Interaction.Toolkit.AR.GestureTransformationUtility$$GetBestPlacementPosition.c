/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility$$GetBestPlacementPosition
ENTRY_POINT: 05e7aaa4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long * UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility__GetBestPlacementPosition
                 (undefined8 param_1,undefined1 param_2 [16])

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *plVar8;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  
  uStack00000000000000f8 = param_2._8_8_;
  uStack00000000000000f0 = param_2._0_8_;
  lVar7 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
  ;
  uStack0000000000000100 = param_1;
  if (lVar7 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
      *(undefined8 *)(lVar7 + 0x30) = param_1;
      *(undefined8 *)(lVar7 + 0x28) = uStack00000000000000f8;
      *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000f0;
                    /* try { // try from 05e7ab08 to 05f7ab0f has its CatchHandler @ 05e7ada0 */
      thunk_FUN_02dd37b4(lVar7 + 0x20,0);
    }
    else {
                    /* try { // try from 05e7ab28 to 05f7ab33 has its CatchHandler @ 05e7ad14 */
      FUN_03b3ee64();
    }
    in_stack_00000098 = *(undefined8 *)puVar3;
                    /* try { // try from 05e7ab40 to 05f7ab47 has its CatchHandler @ 05e7ad18 */
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
                    /* try { // try from 05e7ab48 to 05f7ab53 has its CatchHandler @ 05e7ad88 */
    thunk_FUN_02dd37b4(&stack0x00000098);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,6);
    uStack00000000000000f8 = unaff_x24[1];
    uStack00000000000000f0 = *unaff_x24;
                    /* try { // try from 05e7ab60 to 05f7ab6b has its CatchHandler @ 05e7ad9c */
    uStack0000000000000100 = in_stack_000000a8;
    lVar7 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuid>d__26>__
    ;
                    /* try { // try from 05e7ab78 to 05f7ab83 has its CatchHandler @ 05e7ad94 */
    if (lVar7 != 0) {
      uVar2 = *(uint *)(unaff_x23 + 0x18);
                    /* try { // try from 05e7ab90 to 05f7ab9b has its CatchHandler @ 05e7ad98 */
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
        lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
                    /* try { // try from 05e7abac to 05f7abb3 has its CatchHandler @ 05e7ad90 */
        *(undefined8 *)(lVar7 + 0x30) = in_stack_000000a8;
                    /* try { // try from 05e7abb8 to 05f7abc7 has its CatchHandler @ 05e7ad8c */
        *(undefined8 *)(lVar7 + 0x28) = uStack00000000000000f8;
        *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000f0;
        thunk_FUN_02dd37b4(lVar7 + 0x20,0);
      }
      else {
                    /* try { // try from 05e7abc8 to 05f7ad3b has its CatchHandler @ 05e7a818 */
        FUN_03b3ee64();
      }
      in_stack_00000098 = *(undefined8 *)puVar3;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      thunk_FUN_02dd37b4(&stack0x00000098);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,5);
      uStack00000000000000f8 = unaff_x24[1];
      uStack00000000000000f0 = *unaff_x24;
      uStack0000000000000100 = in_stack_000000a8;
      lVar7 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadAndInstantiateAnchorsFromGroup>d__18>__
      ;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
          lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
          *(undefined8 *)(lVar7 + 0x30) = in_stack_000000a8;
          *(undefined8 *)(lVar7 + 0x28) = uStack00000000000000f8;
          *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000f0;
          thunk_FUN_02dd37b4(lVar7 + 0x20,0);
        }
        else {
          FUN_03b3ee64();
        }
        in_stack_00000098 = *(undefined8 *)puVar3;
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        thunk_FUN_02dd37b4(&stack0x00000098);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,6);
        uStack00000000000000f8 = unaff_x24[1];
        uStack00000000000000f0 = *unaff_x24;
        uStack0000000000000100 = in_stack_000000a8;
        lVar7 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
        ;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(unaff_x23 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                    /* catch() { ... } // from try @ 05e7a9ec with catch @ 05e7ad0c */
                    /* catch() { ... } // from try @ 05e7aa04 with catch @ 05e7ad10 */
            lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
                    /* catch() { ... } // from try @ 05e7ab28 with catch @ 05e7ad14 */
                    /* catch() { ... } // from try @ 05e7ab40 with catch @ 05e7ad18 */
                    /* catch() { ... } // from try @ 05e7aa0c with catch @ 05e7ad1c */
            *(undefined8 *)(lVar7 + 0x30) = in_stack_000000a8;
                    /* catch() { ... } // from try @ 05e7aa1c with catch @ 05e7ad20 */
            *(undefined8 *)(lVar7 + 0x28) = uStack00000000000000f8;
            *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000f0;
                    /* catch() { ... } // from try @ 05e7a9cc with catch @ 05e7ad24 */
            thunk_FUN_02dd37b4(lVar7 + 0x20,0);
          }
          else {
                    /* try { // try from 05e7ad3c to 05f7ad3f has its CatchHandler @ 05e7ad64 */
                    /* try { // try from 05e7ad40 to 05f7ad73 has its CatchHandler @ 05e7a818 */
            FUN_03b3ee64();
          }
          in_stack_00000098 = *(undefined8 *)puVar3;
          in_stack_000000a0 = 0;
          in_stack_000000a8 = 0;
                    /* catch() { ... } // from try @ 05e7ad3c with catch @ 05e7ad64 */
          thunk_FUN_02dd37b4(&stack0x00000098);
          in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,5);
          uStack00000000000000f8 = unaff_x24[1];
          uStack00000000000000f0 = *unaff_x24;
                    /* try { // try from 05e7ad74 to 05f7ad87 has its CatchHandler @ 05e7ae10 */
          uStack0000000000000100 = in_stack_000000a8;
                    /* catch() { ... } // from try @ 05e7ab48 with catch @ 05e7ad88
                       try { // try from 05e7ad88 to 05f7adb7 has its CatchHandler @ 05e7a818 */
          lVar7 = *(long *)(unaff_x23 + 0x10);
                    /* catch() { ... } // from try @ 05e7abb8 with catch @ 05e7ad8c */
                    /* catch() { ... } // from try @ 05e7abac with catch @ 05e7ad90 */
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorsAsync>d__28>__
          ;
                    /* catch() { ... } // from try @ 05e7ab78 with catch @ 05e7ad94 */
          if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 05e7ab90 with catch @ 05e7ad98 */
            uVar2 = *(uint *)(unaff_x23 + 0x18);
                    /* catch() { ... } // from try @ 05e7ab60 with catch @ 05e7ad9c */
                    /* catch() { ... } // from try @ 05e7ab08 with catch @ 05e7ada0 */
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                    /* try { // try from 05e7adb8 to 05f7adbb has its CatchHandler @ 05e7ade4 */
                    /* try { // try from 05e7adbc to 05f7adf3 has its CatchHandler @ 05e7a818 */
              lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
              *(undefined8 *)(lVar7 + 0x30) = in_stack_000000a8;
              *(undefined8 *)(lVar7 + 0x28) = uStack00000000000000f8;
              *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000f0;
              thunk_FUN_02dd37b4(lVar7 + 0x20,0);
            }
            else {
                    /* catch() { ... } // from try @ 05e7adb8 with catch @ 05e7ade4 */
                    /* try { // try from 05e7adf4 to 05f7adfb has its CatchHandler @ 05e7ae10 */
                    /* try { // try from 05e7adfc to 05f7ae07 has its CatchHandler @ 05e7a818 */
              FUN_03b3ee64();
            }
                    /* try { // try from 05e7ae08 to 05f7ae0f has its CatchHandler @ 05e7ae10 */
            in_stack_00000098 = *(undefined8 *)puVar3;
                    /* catch() { ... } // from try @ 05e7ad74 with catch @ 05e7ae10
                       catch() { ... } // from try @ 05e7adf4 with catch @ 05e7ae10
                       catch() { ... } // from try @ 05e7ae08 with catch @ 05e7ae10 */
            in_stack_000000a0 = 0;
            in_stack_000000a8 = 0;
            thunk_FUN_02dd37b4(&stack0x00000098);
                    /* try { // try from 05e7ae1c to 05f7aea7 has its CatchHandler @ 05e7ae1c
                       catch() { ... } // from try @ 05e7ae1c with catch @ 05e7ae1c
                       catch() { ... } // from try @ 05e7aecc with catch @ 05e7ae1c
                       catch() { ... } // from try @ 05e7af54 with catch @ 05e7ae1c
                       catch() { ... } // from try @ 05e7afec with catch @ 05e7ae1c */
            in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,6);
            uStack00000000000000f8 = unaff_x24[1];
            uStack00000000000000f0 = *unaff_x24;
            uStack0000000000000100 = in_stack_000000a8;
            lVar7 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            puVar3 = PTR_DAT_06768438;
            if (lVar7 != 0) {
              uVar2 = *(uint *)(unaff_x23 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
                *(undefined8 *)(lVar7 + 0x30) = in_stack_000000a8;
                *(undefined8 *)(lVar7 + 0x28) = uStack00000000000000f8;
                *(undefined8 *)(lVar7 + 0x20) = uStack00000000000000f0;
                thunk_FUN_02dd37b4(lVar7 + 0x20,0);
              }
              else {
                    /* try { // try from 05e7aea8 to 05f7aeb7 has its CatchHandler @ 05e7af5c */
                FUN_03b3ee64();
              }
              *(long *)(unaff_x22 + 0x30) = unaff_x23;
                    /* try { // try from 05e7aec4 to 05f7aecb has its CatchHandler @ 05e7af54 */
              thunk_FUN_02dd37b4();
                    /* try { // try from 05e7aecc to 05f7af4f has its CatchHandler @ 05e7ae1c */
              in_stack_000000e0 = FUN_058d09f4();
              thunk_FUN_02dd37b4(&stack0x000000e0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              plVar4 = (long *)FUN_05856444();
              puVar3 = 
              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
              ;
              if (plVar4 != (long *)0x0) {
                    /* try { // try from 05e7af50 to 05f7af53 has its CatchHandler @ 05e7af58 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05e7aec4 with catch @ 05e7af54
                       try { // try from 05e7af54 to 05f7af73 has its CatchHandler @ 05e7ae1c */
                bVar1 = *(byte *)(*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopDiscoveringColocationSessions>d__22>__
                                 + 0x130);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05e7af50 with catch @ 05e7af58
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05e7aea8 with catch @ 05e7af5c
                        */
                if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)
                     Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopDiscoveringColocationSessions>d__22>__
                   )) {
                  if (unaff_x20 == 0) goto LAB_05e7b048;
                  plVar8 = (long *)(unaff_x20 + 0xb8);
                  lVar7 = *plVar8;
                  uVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                                            );
                    /* try { // try from 05e7afc4 to 05f7afeb has its CatchHandler @ 05e7b000 */
                  FUN_047dc430(uVar5,plVar4,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__15>__
                               ,0);
                  lVar7 = FUN_0504c61c(lVar7,uVar5,0);
                  if (lVar7 != 0) {
                    uVar5 = *(undefined8 *)puVar3;
                    /* try { // try from 05e7afec to 05f7aff7 has its CatchHandler @ 05e7ae1c */
                    lVar6 = thunk_FUN_02d9d438(lVar7,uVar5);
                    if (lVar6 != 0) {
                    /* try { // try from 05e7aff8 to 05f7afff has its CatchHandler @ 05e7b000 */
                      *plVar8 = lVar6;
                      uVar5 = *(undefined8 *)puVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e7afc4 with catch @ 05e7b000
                       catch(type#2 @ 00000000) { ... } // from try @ 05e7aff8 with catch @ 05e7b000
                        */
                      lVar6 = thunk_FUN_02d9d438(lVar7,uVar5);
                      if (lVar6 != 0) goto LAB_05e7b028;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02d60e88(lVar7,uVar5);
                  }
                  lVar6 = 0;
                  *plVar8 = 0;
LAB_05e7b028:
                  thunk_FUN_02dd37b4(plVar8,lVar6);
                  *(undefined4 *)(plVar4 + 0x3b) = unaff_w21;
                  FUN_05e7b04c(plVar4);
                  return plVar4;
                }
              }
                    /* try { // try from 05e7af74 to 05f7af77 has its CatchHandler @ 05e7af8c */
                    /* catch() { ... } // from try @ 05e7af74 with catch @ 05e7af8c */
              return (long *)0x0;
            }
          }
        }
      }
    }
  }
LAB_05e7b048:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


