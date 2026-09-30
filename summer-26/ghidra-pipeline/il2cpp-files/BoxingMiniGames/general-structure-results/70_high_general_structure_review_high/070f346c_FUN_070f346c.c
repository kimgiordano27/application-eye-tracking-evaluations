/*
FUNCTION_NAME: FUN_070f346c
ENTRY_POINT: 070f346c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_070f346c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long param_6)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  int *piVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  
  local_a0 = param_2;
  uStack_98 = param_3;
  if ((DAT_07eec35c & 1) == 0) {
    FUN_03642964(OVRHandTest_BoolMonitor_BoolGenerator_TypeInfo);
    FUN_03642964(System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo);
    FUN_03642964(System_Dynamic_ExpandoObject_MetaExpando_<>c__DisplayClass3_0_TypeInfo);
    FUN_03642964(
                Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate_TypeInfo
                );
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(
                Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_BurstDirectCall_TypeInfo
                );
    FUN_03642964(PTR_DAT_07a2e4f0);
    FUN_03642964(System_Dynamic_ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6_TypeInfo);
    FUN_03642964(OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker_TypeInfo);
    FUN_03642964(UnityEngine_InputSystem_InputControlScheme_MatchResult_Enumerator_TypeInfo);
    FUN_03642964(OVRInput_OVRControllerBase_VirtualAxis1DMap_TypeInfo);
    FUN_03642964(Oculus_Interaction_Locomotion_LocomotionActionsBroadcaster_Decorator_<>c_TypeInfo);
    FUN_03642964(PTR_DAT_079feaf0);
    FUN_03642964(MetaXRAcousticGeometry_ColliderGatherer_<>c_TypeInfo);
    FUN_03642964(PTR_DAT_079fea70);
    FUN_03642964(OVRInput_OVRControllerBase_VirtualAxis2DMap_TypeInfo);
    DAT_07eec35c = 1;
  }
  puVar8 = System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  auVar29 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar5 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if (param_5 != (long *)0x0) {
    lVar18 = *param_5;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_070f35ec;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_0367cd30(param_5,*(long *)
                                    System_Dynamic_ExpandoObject_KeyCollection_<GetEnumerator>d__15_TypeInfo
                           ,0);
LAB_070f35ec:
    uVar11 = (*(code *)*puVar13)(param_5,puVar13[1]);
    local_b0 = FUN_0716782c(param_2,param_3,uVar11,0,0);
    uVar21 = FUN_070ed0e4(param_1);
    if ((uVar21 & 1) != 0) {
      local_c0 = FUN_07167a90(local_b0,0);
      auVar6._8_8_ = local_d0._8_8_;
      auVar6._0_8_ = local_d0._0_8_;
      auVar29._8_8_ = local_e0._8_8_;
      auVar29._0_8_ = local_e0._0_8_;
      plVar14 = *(long **)(param_1 + 0xa0);
      auVar4 = local_c0;
      auVar5 = local_b0;
      if (plVar14 == (long *)0x0) goto LAB_070f3b20;
      uVar15 = (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
      if (*(int *)(*(long *)PTR_DAT_079feaf0 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079feaf0);
      }
      FUN_071dd1c8(local_c0,uVar15,0);
    }
    fVar7 = DAT_01651100;
    uVar15 = DAT_0164fa68;
    fVar28 = 1.0;
    iVar23 = 0;
    plVar14 = (long *)System_Dynamic_ExpandoObject_MetaExpando_<>c__DisplayClass3_0_TypeInfo;
    plVar24 = (long *)
              Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_BurstDirectCall_TypeInfo
    ;
    plVar25 = (long *)PTR_DAT_079f4e28;
    do {
      lVar18 = *param_5;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_070f3704;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar13 = (undefined8 *)FUN_0367cd30(param_5,*(long *)puVar8,0);
LAB_070f3704:
      iVar12 = (*(code *)*puVar13)(param_5,puVar13[1]);
      if (iVar12 <= iVar23) {
        auVar29 = FUN_07167a9c(local_b0._0_8_,local_b0._8_8_,0);
        FUN_070f05a8(param_1,param_6,param_4,auVar29._0_8_,auVar29._8_8_);
        FUN_07167a9c(local_b0._0_8_,local_b0._8_8_,0);
        return;
      }
      lVar18 = *param_5;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *plVar14) {
            puVar13 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_070f3764;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar13 = (undefined8 *)FUN_0367cd30(param_5,*plVar14,0);
LAB_070f3764:
      lVar18 = (*(code *)*puVar13)(param_5,iVar23,puVar13[1]);
      auVar29 = local_e0;
      auVar4 = local_c0;
      auVar5 = local_b0;
      auVar6 = local_d0;
      if (lVar18 == 0) break;
      plVar19 = *(long **)(lVar18 + 0x28);
      if (plVar19 == (long *)0x0) {
LAB_070f379c:
        plVar19 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*plVar24 + 0x130);
        if (*(byte *)(*plVar19 + 0x130) < bVar1) goto LAB_070f379c;
        if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar24) {
          plVar19 = (long *)0x0;
        }
      }
      if (*(int *)(*plVar25 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar21 = FUN_071c24dc(plVar19,0,0);
      if ((uVar21 & 1) == 0) {
        plVar20 = *(long **)(lVar18 + 0x28);
        if (plVar20 == (long *)0x0) {
LAB_070f3804:
          plVar20 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)OVRHandTest_BoolMonitor_BoolGenerator_TypeInfo + 0x130);
          if (*(byte *)(*plVar20 + 0x130) < bVar1) goto LAB_070f3804;
          if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)OVRHandTest_BoolMonitor_BoolGenerator_TypeInfo) {
            plVar20 = (long *)0x0;
          }
        }
        if (*(int *)(*plVar25 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar21 = FUN_071c0684(plVar20,0,0);
        fVar27 = fVar7;
        auVar29 = local_e0;
        auVar4 = local_c0;
        auVar5 = local_b0;
        auVar6 = local_d0;
        if ((uVar21 & 1) != 0) {
          if (plVar20 == (long *)0x0) break;
          fVar27 = *(float *)((long)plVar20 + 0x24);
        }
        if (plVar19 == (long *)0x0) break;
        auVar29 = (**(code **)(*plVar19 + 0x198))
                            (plVar19,local_a0,uStack_98,param_4,*(undefined8 *)(*plVar19 + 0x1a0));
        local_d0 = auVar29;
        uVar21 = FUN_03e5277c(auVar29._0_8_,auVar29._8_8_,*(undefined8 *)PTR_DAT_07a2e4f0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_079fea70 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar21 = FUN_03e51274(local_d0,*(undefined8 *)
                                          MetaXRAcousticGeometry_ColliderGatherer_<>c_TypeInfo);
          if ((uVar21 & 1) != 0) {
            auVar29 = FUN_07166d1c(local_d0._0_8_,local_d0._8_8_,0);
            local_e0 = auVar29;
            auVar29 = FUN_07166ce0(local_e0,0);
            local_c0 = auVar29;
            if (*(int *)(*(long *)PTR_DAT_079feaf0 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            lVar16 = FUN_03e54f40(local_c0,*(undefined8 *)
                                            Oculus_Interaction_Locomotion_LocomotionActionsBroadcaster_Decorator_<>c_TypeInfo
                                 );
            auVar29 = local_e0;
            auVar4 = local_c0;
            auVar5 = local_b0;
            auVar6 = local_d0;
            if ((*(long *)(param_1 + 0xa0) == 0) || (lVar16 == 0)) break;
            fVar26 = *(float *)(*(long *)(param_1 + 0xa0) + 0x10) * *(float *)(lVar16 + 0x10);
            fVar2 = fVar28;
            if (fVar26 <= 1.0) {
              fVar2 = fVar26;
            }
            fVar3 = 0.0;
            if (0.0 <= fVar26) {
              fVar3 = fVar2;
            }
            FUN_07166e18(fVar3,local_e0,0);
            auVar29 = local_e0;
            auVar4 = local_c0;
            auVar5 = local_b0;
            auVar6 = local_d0;
            if (*(long *)(param_1 + 0xa0) == 0) break;
            fVar26 = *(float *)(*(long *)(param_1 + 0xa0) + 0x14);
            fVar2 = fVar28;
            if (fVar26 <= 1.0) {
              fVar2 = fVar26;
            }
            fVar3 = -1.0;
            if (-1.0 <= fVar26) {
              fVar3 = fVar2;
            }
            FUN_07166f34(fVar3,local_e0,0);
            auVar29 = local_e0;
            auVar4 = local_c0;
            auVar5 = local_b0;
            auVar6 = local_d0;
            if (*(long *)(param_1 + 0xa0) == 0) break;
            fVar26 = *(float *)(*(long *)(param_1 + 0xa0) + 0x18);
            fVar2 = fVar28;
            if (fVar26 <= 1.0) {
              fVar2 = fVar26;
            }
            fVar3 = 0.0;
            if (0.0 <= fVar26) {
              fVar3 = fVar2;
            }
            FUN_07167050(fVar3,local_e0,0);
          }
          uVar10 = local_d0._8_8_;
          uVar9 = local_d0._0_8_;
          auVar29 = FUN_07167a9c(local_b0._0_8_,local_b0._8_8_,0);
          uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                       OVRInput_OVRControllerBase_VirtualAxis2DMap_TypeInfo);
          FUN_05e5ae34(uVar17,0);
          FUN_070f9338((double)fVar27,uVar15,uVar17,lVar18,uVar9,uVar10,auVar29._0_8_,auVar29._8_8_)
          ;
          auVar29 = local_e0;
          auVar4 = local_c0;
          auVar5 = local_b0;
          auVar6 = local_d0;
          if (param_6 == 0) break;
          FUN_0437db84(param_6,uVar17,
                       *(undefined8 *)
                        Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate_TypeInfo
                      );
          FUN_03e54c28(&local_a0,local_d0._0_8_,local_d0._8_8_,0,local_b0._0_8_,local_b0._8_8_,
                       iVar23,*(undefined8 *)OVRInput_OVRControllerBase_VirtualAxis1DMap_TypeInfo);
          uVar10 = local_d0._8_8_;
          uVar9 = local_d0._0_8_;
          UnityEngine_Rendering_CommandBuffer__Internal_DispatchComputeIndirect_Injected(lVar18);
          FUN_03e53ea0(uVar9,uVar10,
                       *(undefined8 *)
                        UnityEngine_InputSystem_InputControlScheme_MatchResult_Enumerator_TypeInfo);
          uVar10 = local_d0._8_8_;
          uVar9 = local_d0._0_8_;
          FUN_070e7dd8(lVar18);
          FUN_03e52dcc(uVar9,uVar10,
                       *(undefined8 *)
                        System_Dynamic_ExpandoObject_MetaExpando_<GetDynamicMemberNames>d__6_TypeInfo
                      );
          FUN_03e538d0(0x3f800000,local_b0._0_8_,local_b0._8_8_,local_d0._0_8_,local_d0._8_8_,
                       *(undefined8 *)OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker_TypeInfo);
          plVar14 = (long *)System_Dynamic_ExpandoObject_MetaExpando_<>c__DisplayClass3_0_TypeInfo;
          plVar24 = (long *)
                    Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_BurstDirectCall_TypeInfo
          ;
          plVar25 = (long *)PTR_DAT_079f4e28;
        }
      }
      iVar23 = iVar23 + 1;
    } while( true );
  }
LAB_070f3b20:
  local_e0 = auVar29;
  local_c0 = auVar4;
  local_d0 = auVar6;
  local_b0 = auVar5;
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


