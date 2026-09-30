/*
FUNCTION_NAME: FUN_06a94a58
ENTRY_POINT: 06a94a58
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_6
*/


void FUN_06a94a58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_073aaf0e & 1) == 0) {
    FUN_02fe925c(System_Linq_Expressions_Interpreter_DivInstruction_DivUInt64_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f76830);
    FUN_02fe925c(Pathfinding_FollowerEntity_<>c_TypeInfo);
    FUN_02fe925c(System_Net_Dns_GetHostAddressesCallback_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_Interpreter_DivInstruction_DivDouble_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_DominantHandRef_<>c_TypeInfo);
    FUN_02fe925c(System_Linq_Expressions_Interpreter_DivInstruction_DivInt16_TypeInfo);
    FUN_02fe925c(Door_<moveDoor>d__13_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06f9bc30);
    FUN_02fe925c(PTR_DAT_06f9b2f0);
    FUN_02fe925c(DinoFracture_FractureGeometry_<>c_TypeInfo);
                    /* try { // try from 06a94b0c to 06b94b13 has its CatchHandler @ 06a94b94 */
    FUN_02fe925c(DinoFracture_FractureGeometry_SlicePlaneSerializable_TypeInfo);
                    /* try { // try from 06a94b14 to 06b94b87 has its CatchHandler @ 06a94a4c */
    FUN_02fe925c(System_Net_FtpWebRequest_<>c_TypeInfo);
    FUN_02fe925c(FractureOnShot_<>c__DisplayClass5_0_TypeInfo);
    FUN_02fe925c(FracturePiece_<DestroyRigidbodyDeferred>d__18_TypeInfo);
    FUN_02fe925c(FracturePieceCollider_<AddColliderNextFrame>d__2_TypeInfo);
    FUN_02fe925c(UnityEngine_Rendering_FrameTimeSampleHistory_<>c_TypeInfo);
    FUN_02fe925c(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0_TypeInfo)
    ;
    FUN_02fe925c(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass23_0_TypeInfo)
    ;
    FUN_02fe925c(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_02fe925c(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
                    /* try { // try from 06a94b88 to 06b94b8b has its CatchHandler @ 06a94b90 */
    FUN_02fe925c(System_Net_FtpWebResponse_EmptyStream_TypeInfo);
                    /* try { // try from 06a94b8c to 06b94bab has its CatchHandler @ 06a94a4c */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06a94b88 with catch @ 06a94b90
                        */
    DAT_073aaf0e = 1;
  }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06a94b0c with catch @ 06a94b94
                        */
  puVar3 = System_Net_FtpWebRequest_RequestStage_TypeInfo;
  puVar2 = PTR_DAT_06f9bc30;
  puVar1 = PTR_DAT_06f9b2f0;
  plVar6 = (long *)(param_1 + 0x20);
                    /* try { // try from 06a94bac to 06b94baf has its CatchHandler @ 06a94bd8 */
  if (*plVar6 != 0) {
                    /* try { // try from 06a94bb0 to 06b94be7 has its CatchHandler @ 06a94a4c */
    lVar5 = *(long *)(*plVar6 + 0x440);
    if (lVar5 == 0) goto LAB_06a94f78;
    lVar5 = *(long *)(lVar5 + 0x420);
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f76830);
                    /* catch() { ... } // from try @ 06a94bac with catch @ 06a94bd8 */
    FUN_05112d0c(uVar4,param_1,*(undefined8 *)puVar3,0);
                    /* try { // try from 06a94be8 to 06b94bef has its CatchHandler @ 06a94c04 */
    if (lVar5 == 0) goto LAB_06a94f78;
                    /* try { // try from 06a94bf0 to 06b94bfb has its CatchHandler @ 06a94a4c */
    FUN_06aa1f94(lVar5,uVar4,0);
    puVar3 = System_Net_FtpWebResponse_EmptyStream_TypeInfo;
                    /* try { // try from 06a94bfc to 06b94c03 has its CatchHandler @ 06a94c04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06a94be8 with catch @ 06a94c04
                       catch(type#2 @ 00000000) { ... } // from try @ 06a94bfc with catch @ 06a94c04
                        */
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x440), lVar5 == 0)) goto LAB_06a94f78;
    lVar5 = *(long *)(lVar5 + 0x418);
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
    FUN_0579bad0(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_06a94f78;
    FUN_03bb1674(lVar5,uVar4,0,*(undefined8 *)puVar2);
    *plVar6 = 0;
    thunk_FUN_03048534(plVar6,0);
  }
  puVar3 = System_Net_FtpWebRequest_<>c_TypeInfo;
  plVar6 = (long *)(param_1 + 0x30);
  if (*plVar6 != 0) {
    lVar5 = *(long *)(*plVar6 + 0x410);
    uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
    FUN_0579bad0(uVar4,param_1,*(undefined8 *)puVar3,0);
    puVar3 = UnityEngine_Rendering_FrameTimeSampleHistory_<>c_TypeInfo;
    puVar1 = PTR_DAT_06f73f20;
    if (lVar5 != 0) {
      FUN_03bb1674(lVar5,uVar4,0,*(undefined8 *)puVar2);
      lVar5 = *(long *)(param_1 + 0x30);
      uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
      FUN_05a645d0(uVar4,param_1,*(undefined8 *)puVar3,0);
      puVar3 = Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass23_0_TypeInfo;
      puVar2 = System_Linq_Expressions_Interpreter_DivInstruction_DivInt16_TypeInfo;
      if (lVar5 != 0) {
        FUN_06a7aac4(lVar5,uVar4,0);
        lVar5 = *(long *)(param_1 + 0x30);
        uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
        FUN_0511d18c(uVar4,param_1,*(undefined8 *)puVar3,0);
        puVar3 = FracturePieceCollider_<AddColliderNextFrame>d__2_TypeInfo;
        puVar2 = System_Linq_Expressions_Interpreter_DivInstruction_DivDouble_TypeInfo;
        if (lVar5 != 0) {
          FUN_06a7ac18(lVar5,uVar4,0);
          lVar5 = *(long *)(param_1 + 0x30);
          uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
          FUN_0511c0d8(uVar4,param_1,*(undefined8 *)puVar3,0);
          puVar2 = 
          Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo;
          if (lVar5 != 0) {
            FUN_06a7a970(lVar5,uVar4,0);
            lVar5 = *(long *)(param_1 + 0x30);
            uVar4 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
            FUN_05a645d0(uVar4,param_1,*(undefined8 *)puVar2,0);
            if (lVar5 != 0) {
              FUN_06a7ad6c(lVar5,uVar4,0);
              puVar1 = DinoFracture_FractureGeometry_<>c_TypeInfo;
              if (*plVar6 != 0) {
                lVar5 = *(long *)(*plVar6 + 0x420);
                uVar4 = thunk_FUN_0301080c(*(undefined8 *)
                                            Oculus_Interaction_Input_DominantHandRef_<>c_TypeInfo);
                FUN_0511ce28(uVar4,param_1,*(undefined8 *)puVar1,0);
                if (lVar5 != 0) {
                  FUN_06a91b5c(lVar5,uVar4);
                  puVar1 = FractureOnShot_<>c__DisplayClass5_0_TypeInfo;
                  if (*plVar6 != 0) {
                    lVar5 = *(long *)(*plVar6 + 0x420);
                    uVar4 = thunk_FUN_0301080c(*(undefined8 *)
                                                System_Linq_Expressions_Interpreter_DivInstruction_DivUInt64_TypeInfo
                                              );
                    FUN_051110bc(uVar4,param_1,*(undefined8 *)puVar1,0);
                    if (lVar5 != 0) {
                      FUN_06a91c0c(lVar5,uVar4);
                      puVar1 = FracturePiece_<DestroyRigidbodyDeferred>d__18_TypeInfo;
                      if (*plVar6 != 0) {
                        lVar5 = *(long *)(*plVar6 + 0x420);
                        uVar4 = thunk_FUN_0301080c(*(undefined8 *)Door_<moveDoor>d__13_TypeInfo);
                        FUN_0511e504(uVar4,param_1,*(undefined8 *)puVar1,0);
                        if (lVar5 != 0) {
                          FUN_06a91f7c(lVar5,uVar4);
                          puVar1 = 
                          Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0_TypeInfo
                          ;
                          if (*plVar6 != 0) {
                            lVar5 = *(long *)(*plVar6 + 0x420);
                            uVar4 = thunk_FUN_0301080c(*(undefined8 *)
                                                                                                                
                                                  System_Net_Dns_GetHostAddressesCallback_TypeInfo);
                            FUN_0511cf48(uVar4,param_1,*(undefined8 *)puVar1,0);
                            if (lVar5 != 0) {
                              FUN_06a91d6c(lVar5,uVar4);
                              puVar1 = DinoFracture_FractureGeometry_SlicePlaneSerializable_TypeInfo
                              ;
                              if (*plVar6 != 0) {
                                lVar5 = *(long *)(*plVar6 + 0x420);
                                uVar4 = thunk_FUN_0301080c(*(undefined8 *)
                                                            Pathfinding_FollowerEntity_<>c_TypeInfo)
                                ;
                                FUN_0510f5fc(uVar4,param_1,*(undefined8 *)puVar1,0);
                                if (lVar5 != 0) {
                                  FUN_06a91a74(lVar5,uVar4);
                                  if (*plVar6 != 0) {
                                    FUN_06b18de4(*plVar6,0);
                                    if (*plVar6 != 0) {
                                      FUN_06a7f9d0(*plVar6,0);
                                      *(undefined8 *)(param_1 + 0x30) = 0;
                                      thunk_FUN_03048534(plVar6,0);
                                      plVar6 = (long *)(param_1 + 0x28);
                                      if (*plVar6 != 0) {
                                        FUN_06b18de4(*plVar6,0);
                                        *plVar6 = 0;
                                        thunk_FUN_03048534(plVar6,0);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06a94f78:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


