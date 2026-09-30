/*
FUNCTION_NAME: FUN_05d15094
ENTRY_POINT: 05d15094
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05d1557c) */
/* WARNING: Removing unreachable block (ram,0x05d15700) */

void FUN_05d15094(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  long local_68;
  
  puVar6 = PTR_DAT_065c8c40;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_06a7a608 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Concurrent_ConcurrentDictionary<Type,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9448);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9440);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9438);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Concurrent_ConcurrentDictionary<uint,_AkAddressableBankManager_EventContainer>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Concurrent_ConcurrentDictionary<uint,_Wamp_PublishHandler>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Newtonsoft_Json_Serialization_CachedAttributeGetter<DataMemberAttribute>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Concurrent_ConcurrentDictionary<ServicePointManager_SPKey,_ServicePoint>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Niantic_Platform_Analytics_Telemetry_Utils_ConcurrentObjectPool<ReaderWriterLockScope>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Concurrent_ConcurrentQueue<Action>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
    DAT_06a7a608 = 1;
  }
  uStack_70 = 0;
  local_e0 = 0;
  local_138 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_71 = 0;
  uStack_80 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_a1 = 0;
  uStack_b0 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar10 = FUN_05ef739c(uVar18,0,0);
  auVar5._8_8_ = local_d0._8_8_;
  auVar5._0_8_ = local_d0._0_8_;
  auVar4._8_8_ = local_d0._8_8_;
  auVar4._0_8_ = local_d0._0_8_;
  if ((uVar10 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 0x108);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    local_d0 = auVar4;
    if ((*(long *)(lVar11 + 0x20) != 0) &&
       (local_d0 = auVar5, *(char *)(*(long *)(lVar11 + 0x20) + 0x10) != '\0')) {
      local_d0 = FUN_05d11040(lVar11,2);
      if ((local_d0._0_8_ == 0) || (local_d0._8_4_ < 1)) {
        FUN_03c41030(local_d0,*(undefined8 *)
                               System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo
                    );
      }
      else {
        lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                  (lVar11,*(undefined8 *)PTR_DAT_065c9440);
        FUN_03c41364(&local_1a0,local_d0,
                     *(undefined8 *)
                      System_Collections_Concurrent_ConcurrentDictionary<uint,_AkAddressableBankManager_EventContainer>_TypeInfo
                    );
        puVar8 = 
        System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo;
        puVar7 = PTR_DAT_065c8a08;
        puVar6 = PTR_DAT_065c8668;
        uStack_108 = CONCAT71(uStack_197,uStack_198);
        local_110 = CONCAT44(uStack_19c,local_1a0);
        uStack_f8 = CONCAT71(uStack_187,uStack_188);
        local_f0 = CONCAT71(uStack_17f,local_180);
        uStack_e8 = uStack_178;
        local_e0 = local_170;
        local_100._0_4_ = (int)CONCAT71(uStack_18f,uStack_190);
        iVar19 = (int)local_100 + 1;
        lVar17 = *(long *)
                  System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
        ;
        local_100._4_4_ = (undefined4)((uint7)uStack_18f >> 0x18);
        local_100 = CONCAT44(local_100._4_4_,iVar19);
        if (iVar19 < (int)uStack_108) {
          do {
            lVar13 = local_110;
            if ((*(byte *)(*(long *)(lVar17 + 0x20) + 0x135) & 1) == 0) {
              FUN_02ce0978();
            }
            puVar20 = (undefined8 *)(lVar13 + (long)iVar19 * 0x20);
            uStack_128 = puVar20[1];
            local_130 = *puVar20;
            uStack_118 = puVar20[3];
            local_120 = puVar20[2];
            uStack_198 = (undefined1)uStack_128;
            uStack_197 = (undefined7)((ulong)uStack_128 >> 8);
            local_1a0 = (undefined4)local_130;
            uStack_19c = (undefined4)((ulong)local_130 >> 0x20);
            uStack_188 = (undefined1)uStack_118;
            uStack_187 = (undefined7)((ulong)uStack_118 >> 8);
            uStack_190 = (undefined1)local_120;
            uStack_18f = (undefined7)((ulong)local_120 >> 8);
            uStack_f8 = local_130;
            local_f0 = uStack_128;
            uStack_e8 = local_120;
            local_e0 = uStack_118;
            plVar12 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,4);
            local_1a0 = FUN_05d379d4(&local_130,0);
            lVar17 = thunk_FUN_02cea4e8(*(undefined8 *)puVar7,&local_1a0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (lVar17 != 0) {
              lVar13 = thunk_FUN_02cea798(lVar17,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar13 == 0) {
                uVar18 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar18,0);
              }
            }
            if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            plVar12[4] = lVar17;
            local_1a4 = FUN_05d379dc(&local_130,0);
            lVar17 = thunk_FUN_02cea4e8(*(undefined8 *)puVar7,&local_1a4);
            if (lVar17 != 0) {
              lVar13 = thunk_FUN_02cea798(lVar17,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar13 == 0) {
                uVar18 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar18,0);
              }
            }
            if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            plVar12[5] = lVar17;
            local_138 = FUN_05d379ec(&local_130,0);
            uVar18 = *(undefined8 *)
                      Niantic_Platform_Analytics_Telemetry_Utils_ConcurrentObjectPool<ReaderWriterLockScope>_TypeInfo
            ;
            if ((local_138 & 0xff) == 0) {
              lVar17 = *(long *)puVar6;
            }
            else {
              local_138 = FUN_05d379ec(&local_130,0);
              local_1a0 = FUN_03c868c4(&local_138,*(undefined8 *)PTR_DAT_065cefb0);
              uVar14 = thunk_FUN_02cea4e8(*(undefined8 *)puVar7,&local_1a0);
              lVar17 = FUN_04db0cfc(*(undefined8 *)
                                     System_Collections_Concurrent_ConcurrentDictionary<ServicePointManager_SPKey,_ServicePoint>_TypeInfo
                                    ,uVar14,0);
            }
            if (lVar17 != 0) {
              lVar13 = thunk_FUN_02cea798(lVar17,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar13 == 0) {
                uVar18 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar18,0);
              }
            }
            uVar16 = *(uint *)(plVar12 + 3);
            if (uVar16 < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            plVar12[6] = lVar17;
            plVar2 = (long *)System_Collections_Concurrent_ConcurrentQueue<Action>_TypeInfo;
            if ((int)uStack_118 != 2) {
              plVar2 = (long *)puVar6;
            }
            lVar17 = *plVar2;
            if (lVar17 != 0) {
              lVar13 = thunk_FUN_02cea798(lVar17,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar13 == 0) {
                uVar18 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar18,0);
              }
              uVar16 = *(uint *)(plVar12 + 3);
            }
            if (uVar16 < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            plVar12[7] = lVar17;
            uVar18 = FUN_04db9b3c(uVar18,plVar12,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar17 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_065c9448;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            uVar16 = *(uint *)(lVar11 + 0x18);
            if (uVar16 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar16 + 1;
              *(undefined8 *)(lVar17 + (long)(int)uVar16 * 8 + 0x20) = uVar18;
            }
            else {
              FUN_039683cc(lVar11,uVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar17 = *(long *)puVar8;
            iVar19 = (int)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar19);
          } while (iVar19 < (int)uStack_108);
        }
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_f8 = 0;
        FUN_0482fea8(&local_110,
                     *(undefined8 *)
                      System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo);
        if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_05f9e8e4(*(long *)(param_1 + 0xf0),lVar11,0);
        if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_05d110d4(&local_1a0);
        cVar9 = (char)local_1a0;
        uStack_88 = CONCAT17(uStack_190,uStack_197);
        local_90 = CONCAT17(uStack_198,CONCAT43(uStack_19c,local_1a0._1_3_));
        uStack_80 = CONCAT17(uStack_188,uStack_18f);
        uStack_78 = uStack_187;
        local_71 = local_180;
        uStack_70 = uStack_17f;
        if (0 < (int)local_d0._8_4_) {
          lVar11 = 0;
          uVar10 = 0;
          puVar20 = (undefined8 *)((ulong)&local_c0 | 7);
          do {
            uStack_b8 = uStack_88;
            local_c0 = local_90;
            uStack_a8 = uStack_78;
            uStack_b0 = uStack_80;
            local_a1 = local_71;
            uStack_a0 = uStack_70;
            puVar1 = (undefined8 *)(local_d0._0_8_ + lVar11);
            uStack_158 = puVar1[1];
            local_160 = *puVar1;
            uStack_148 = puVar1[3];
            uStack_150 = puVar1[2];
            if (cVar9 != '\0') {
              uStack_1c8 = puVar20[1];
              local_1d0 = *puVar20;
              uStack_1b8 = puVar20[3];
              uStack_1c0 = puVar20[2];
              local_1f0 = local_160;
              uStack_1e8 = uStack_158;
              uStack_1e0 = uStack_150;
              uStack_1d8 = uStack_148;
              uVar15 = FUN_05d381b0(&local_1d0,&local_1f0,0);
              if ((uVar15 & 1) != 0) {
                if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                FUN_05f9e1cc(*(long *)(param_1 + 0xf0),uVar10 & 0xffffffff,0);
              }
            }
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 0x20;
          } while ((long)uVar10 < (long)(int)local_d0._8_4_);
        }
        FUN_03c41030(local_d0,*(undefined8 *)
                               System_Collections_Concurrent_ConcurrentDictionary<Type,_TypeUtility_ITypeConstructor>_TypeInfo
                    );
        *(undefined1 *)(param_1 + 0x171) = 1;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


