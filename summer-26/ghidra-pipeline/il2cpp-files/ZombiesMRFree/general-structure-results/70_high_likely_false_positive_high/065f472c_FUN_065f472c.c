/*
FUNCTION_NAME: FUN_065f472c
ENTRY_POINT: 065f472c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined8 FUN_065f472c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_dc;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar3 = System_Action<InstanceHandle>_TypeInfo;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_073a08d6 & 1) == 0) {
    FUN_02fe925c(System_Action<int>_TypeInfo);
    FUN_02fe925c(UnityEngine_ParticleSystem_VelocityOverLifetimeModule_var);
    FUN_02fe925c(System_Action<IntPtr>_TypeInfo);
    FUN_02fe925c(System_Action<InteractableStateChangeArgs>_TypeInfo);
    FUN_02fe925c(System_Action<InteractorStateChangeArgs>_TypeInfo);
    FUN_02fe925c(System_Action<LayoutRebuilder>_TypeInfo);
    FUN_02fe925c(System_Action<LocomotionEvent>_TypeInfo);
    FUN_02fe925c(System_Action<LogEntry>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f99a80);
    FUN_02fe925c(PTR_DAT_06f99928);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
    FUN_02fe925c(
                Unity_Scenes_ResolveSceneReferenceSystem_ResolveSceneReferenceSystem_2E14F795_LambdaJob_1_Job_var
                );
    FUN_02fe925c(PTR_DAT_06f6df38);
    FUN_02fe925c(System_Action<MRUKRoom>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d620);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(System_Action<MemorySnapshotMetadata>_TypeInfo);
    FUN_02fe925c(System_Action<InstanceHandle>_TypeInfo);
    FUN_02fe925c(System_Action<MeshGenerationContext>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06fac4d8);
    FUN_02fe925c(System_Action<MeshHandle>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d5e0);
    FUN_02fe925c(System_Action<MultipleChoiceRequestInfo>_TypeInfo);
    FUN_02fe925c(UIButtonSound_var);
    FUN_02fe925c(System_Action<NativeInputUpdateType>_TypeInfo);
    FUN_02fe925c(System_Action<NavmeshClipper>_TypeInfo);
    FUN_02fe925c(System_Action<OVRCameraRig>_TypeInfo);
    FUN_02fe925c(
                Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A57_PostfixBurstDelegate_var
                );
    FUN_02fe925c(System_Action<OVRRuntimeSettings>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d5f0);
    FUN_02fe925c(System_Action<object>_TypeInfo);
    DAT_073a08d6 = 1;
  }
  local_88 = 0;
  local_d8 = 0;
  lVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
  FUN_065f9260(lVar8,0);
  uVar9 = System_Convert__ToDouble(param_2,0);
  puVar3 = System_Action<OVRRuntimeSettings>_TypeInfo;
  uVar17 = 0;
  if ((uVar9 & 1) != 0) {
    uVar9 = System_Convert__ToUInt64
                      (*param_1,*(undefined8 *)System_Action<OVRRuntimeSettings>_TypeInfo,0);
    uVar17 = 0;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)System_Action<LayoutRebuilder>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_065f50f0(local_d0,param_1,param_3);
      uVar14 = local_d0._8_8_;
      uVar4 = local_d0._0_4_;
      uVar5 = local_d0._4_4_;
      uVar6 = local_d0._8_4_;
      uVar7 = local_d0._12_4_;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      local_d0 = FUN_065fa578(0);
      uVar17 = thunk_FUN_0301043c(*(undefined8 *)System_Action<MRUKRoom>_TypeInfo,local_d0);
      local_120 = 0;
      FUN_065fa814(&local_120,uVar7,uVar14 & 0xffffffff,0);
      uVar9 = FUN_03c2f7a0(uVar17,local_120,*(undefined8 *)System_Action<int>_TypeInfo);
      uVar17 = 0;
      if ((local_b0 != 0) && ((uVar9 & 1) != 0)) {
        if (0 < (int)*(ulong *)(local_b0 + 0x18)) {
          uVar9 = 0;
          uVar18 = *(ulong *)(local_b0 + 0x18) & 0xffffffff;
          lVar16 = 0x20;
          do {
            if (uVar18 <= uVar9) goto LAB_065f50d8;
            memcpy(local_d0,(void *)(local_b0 + lVar16),0x48);
            if ((local_d0._0_4_ & 0xfffffffe) == 0x30) {
              if (local_d0._4_4_ == 1) {
LAB_065f4a6c:
                puVar2 = PTR_DAT_06f6d6a0;
                uVar17 = *(undefined8 *)System_Action<InteractorStateChangeArgs>_TypeInfo;
                if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                lVar16 = FUN_05afde1c(uVar17,0);
                uVar15 = *(undefined8 *)puVar3;
                if ((uVar7 == 1) && ((uVar6 & 0xfffffffe) == 4)) {
                  uVar15 = *(undefined8 *)
                            Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A57_PostfixBurstDelegate_var
                  ;
                  uVar17 = *(undefined8 *)System_Xml_Serialization_XmlSchemaProviderAttribute_var;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  lVar16 = FUN_05afde1c(uVar17,0);
                }
                lVar19 = *(long *)PTR_DAT_06f6d5f0;
                uVar9 = System_Convert__ToUInt64
                                  (uVar15,*(undefined8 *)
                                           Unity_Entities_ChunkIterationUtility_CalculateEntityCountAndSingleton_00000A57_PostfixBurstDelegate_var
                                   ,0);
                if ((uVar9 & 1) != 0) {
                  if (uVar7 == 1) {
                    local_120 = CONCAT44(local_120._4_4_,uVar6);
                    uVar17 = thunk_FUN_0301043c(*(undefined8 *)System_Action<IntPtr>_TypeInfo,
                                                &local_120);
                    lVar19 = FUN_059693f4(*(undefined8 *)PTR_DAT_06fac4d8,uVar17,0);
                  }
                  else {
                    local_120 = CONCAT44(local_120._4_4_,uVar7);
                    uVar17 = thunk_FUN_0301043c(*(undefined8 *)
                                                 System_Action<MeshGenerationContext>_TypeInfo,
                                                &local_120);
                    local_dc = uVar6;
                    uVar10 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_dc);
                    lVar19 = FUN_059725f8(*(undefined8 *)System_Action<MeshHandle>_TypeInfo,uVar17,
                                          uVar10,0);
                  }
                }
                uStack_118 = param_1[1];
                local_120 = *param_1;
                uStack_108 = param_1[3];
                local_110 = param_1[2];
                local_f0 = param_1[6];
                uStack_f8 = param_1[5];
                local_100 = param_1[4];
                if (*(int *)(*(long *)PTR_DAT_06f99a80 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                uStack_158 = uStack_118;
                local_160 = local_120;
                uStack_148 = uStack_108;
                uStack_150 = local_110;
                uStack_138 = uStack_f8;
                local_140 = local_100;
                local_130 = local_f0;
                local_88 = FUN_06548a5c(&local_160,0);
                uVar9 = System_Convert__ToDouble(param_1[3],0);
                if ((uVar9 & 1) == 0) {
                  uVar9 = System_Convert__ToDouble(param_1[2],0);
                  if ((uVar9 & 1) != 0) goto LAB_065f4c28;
                  lVar12 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d620,5);
                  if (lVar12 == 0) goto LAB_065f50dc;
                  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_065f50d8;
                  *(undefined8 *)(lVar12 + 0x20) =
                       *(undefined8 *)System_Action<NativeInputUpdateType>_TypeInfo;
                  thunk_FUN_03048534((undefined8 *)(lVar12 + 0x20));
                  if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_065f50d8;
                  *(undefined8 *)(lVar12 + 0x28) = param_1[2];
                  thunk_FUN_03048534((undefined8 *)(lVar12 + 0x28));
                  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_065f50d8;
                  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_06f6d5e0;
                  thunk_FUN_03048534((undefined8 *)(lVar12 + 0x30));
                  if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_065f50d8;
                  *(undefined8 *)(lVar12 + 0x38) = param_1[3];
                  thunk_FUN_03048534((undefined8 *)(lVar12 + 0x38));
                  if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_065f50d8;
                  *(long *)(lVar12 + 0x40) = lVar19;
                  thunk_FUN_03048534((long *)(lVar12 + 0x40),lVar19);
                  uVar17 = FUN_059722f0(lVar12,0);
                  plVar20 = (long *)PTR_DAT_06f99a80;
                }
                else {
LAB_065f4c28:
                  uVar9 = System_Convert__ToDouble(param_1[3],0);
                  if ((uVar9 & 1) == 0) {
                    uVar17 = FUN_05971ec8(*(undefined8 *)
                                           System_Action<NativeInputUpdateType>_TypeInfo,param_1[3],
                                          lVar19,0);
                    plVar20 = (long *)PTR_DAT_06f99a80;
                  }
                  else {
                    if (uVar4 == 0) break;
                    plVar11 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
                    if (plVar11 == (long *)0x0) goto LAB_065f50dc;
                    if (*(long *)puVar3 == 0) {
                      lVar12 = 0;
                    }
                    else {
                      lVar12 = thunk_FUN_03010710(*(long *)puVar3,*(undefined8 *)(*plVar11 + 0x40));
                      if (lVar12 == 0) goto LAB_065f50e0;
                      lVar12 = *(long *)puVar3;
                    }
                    if ((int)plVar11[3] == 0) {
LAB_065f50d8:
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    plVar11[4] = lVar12;
                    thunk_FUN_03048534();
                    local_120 = CONCAT44(local_120._4_4_,uVar4);
                    lVar12 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_120);
                    if (lVar12 != 0) {
                      lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                      if (lVar13 == 0) goto LAB_065f50e0;
                    }
                    if (*(uint *)(plVar11 + 3) < 2) goto LAB_065f50d8;
                    plVar11[5] = lVar12;
                    thunk_FUN_03048534(plVar11 + 5,lVar12);
                    local_dc = uVar5;
                    lVar12 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_dc);
                    if (lVar12 != 0) {
                      lVar13 = thunk_FUN_03010710(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                      if (lVar13 == 0) goto LAB_065f50e0;
                    }
                    if (*(uint *)(plVar11 + 3) < 3) goto LAB_065f50d8;
                    plVar11[6] = lVar12;
                    thunk_FUN_03048534(plVar11 + 6,lVar12);
                    if (lVar19 != 0) {
                      lVar12 = thunk_FUN_03010710(lVar19,*(undefined8 *)(*plVar11 + 0x40));
                      if (lVar12 == 0) {
LAB_065f50e0:
                        uVar17 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                           ();
                    /* WARNING: Subroutine does not return */
                        FUN_02fe93c0(uVar17,0);
                      }
                    }
                    plVar20 = (long *)PTR_DAT_06f99a80;
                    if (*(uint *)(plVar11 + 3) < 4) goto LAB_065f50d8;
                    plVar11[7] = lVar19;
                    thunk_FUN_03048534(plVar11 + 7,lVar19);
                    uVar17 = FUN_05972680(*(undefined8 *)System_Action<object>_TypeInfo,plVar11,0);
                    lVar19 = *plVar20;
                    if (*(int *)(lVar19 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0(lVar19);
                    }
                    puVar3 = System_Action<LocomotionEvent>_TypeInfo;
                    local_d8 = FUN_03ca0ef4(&local_88,
                                            *(undefined8 *)
                                             System_Action<MultipleChoiceRequestInfo>_TypeInfo,uVar5
                                            ,*(undefined8 *)System_Action<LocomotionEvent>_TypeInfo)
                    ;
                    local_88 = FUN_03ca0ef4(&local_d8,
                                            *(undefined8 *)System_Action<OVRCameraRig>_TypeInfo,
                                            uVar4,*(undefined8 *)puVar3);
                  }
                }
                if (*(int *)(*plVar20 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0();
                }
                local_d8 = FUN_03ca0ef4(&local_88,*(undefined8 *)UIButtonSound_var,
                                        uVar14 & 0xffffffff,
                                        *(undefined8 *)System_Action<LocomotionEvent>_TypeInfo);
                local_88 = FUN_03ca0fac(&local_d8,
                                        *(undefined8 *)System_Action<NavmeshClipper>_TypeInfo,uVar7,
                                        *(undefined8 *)System_Action<LogEntry>_TypeInfo);
                lVar19 = thunk_FUN_0301080c(*(undefined8 *)
                                             System_Action<InteractableStateChangeArgs>_TypeInfo);
                FUN_05b32c00(lVar19,0);
                if (lVar19 != 0) {
                  *(undefined8 *)(lVar19 + 0x10) = param_1[3];
                  thunk_FUN_03048534();
                  *(undefined4 *)(lVar19 + 0x20) = uVar6;
                  *(undefined4 *)(lVar19 + 0x24) = uVar7;
                  *(undefined4 *)(lVar19 + 0x18) = uVar4;
                  *(undefined4 *)(lVar19 + 0x1c) = uVar5;
                  *(undefined8 *)(lVar19 + 0x30) = uStack_78;
                  *(undefined8 *)(lVar19 + 0x28) = local_80;
                  *(long *)(lVar19 + 0x38) = local_b0;
                  *(undefined8 *)(lVar19 + 0x40) = uStack_a8;
                  thunk_FUN_03048534((long *)(lVar19 + 0x38),0);
                  *(undefined8 *)(lVar19 + 0x48) = uVar15;
                  thunk_FUN_03048534((undefined8 *)(lVar19 + 0x48),uVar15);
                  if (lVar16 == 0) {
                    uVar14 = *(undefined8 *)System_Action<InteractorStateChangeArgs>_TypeInfo;
                    if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    lVar16 = FUN_05afde1c(uVar14,0);
                  }
                  *(long *)(lVar19 + 0x50) = lVar16;
                  thunk_FUN_03048534((long *)(lVar19 + 0x50),lVar16);
                  if (lVar8 != 0) {
                    *(long *)(lVar8 + 0x10) = lVar19;
                    thunk_FUN_03048534((long *)(lVar8 + 0x10),lVar19);
                    uVar14 = thunk_FUN_0301080c(*(undefined8 *)
                                                 UnityEngine_ParticleSystem_VelocityOverLifetimeModule_var
                                               );
                    FUN_057f17c4(uVar14,lVar8,
                                 *(undefined8 *)System_Action<MemorySnapshotMetadata>_TypeInfo,0);
                    local_120 = 0;
                    uStack_118 = 0;
                    FUN_0481caf8(&local_120,local_88,
                                 *(undefined8 *)
                                  Unity_Scenes_ResolveSceneReferenceSystem_ResolveSceneReferenceSystem_2E14F795_LambdaJob_1_Job_var
                                );
                    if (*(int *)(*(long *)PTR_DAT_06f99928 + 0xe0) == 0) {
                      thunk_FUN_02fdcff0();
                    }
                    FUN_06562544(uVar14,uVar17,uVar15,local_120,uStack_118,0);
                    goto LAB_065f50a4;
                  }
                }
LAB_065f50dc:
                    /* WARNING: Subroutine does not return */
                FUN_02fe94e8();
              }
            }
            else {
              lVar19 = FUN_065f7880(local_d0);
              if (lVar19 != 0) goto LAB_065f4a6c;
              uVar18 = (ulong)*(uint *)(local_b0 + 0x18);
            }
            uVar9 = uVar9 + 1;
            lVar16 = lVar16 + 0x48;
          } while ((long)uVar9 < (long)(int)uVar18);
        }
        uVar17 = 0;
      }
    }
  }
LAB_065f50a4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}


