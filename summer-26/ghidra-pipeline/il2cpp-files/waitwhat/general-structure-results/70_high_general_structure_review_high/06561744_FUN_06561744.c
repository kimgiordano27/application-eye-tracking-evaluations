/*
FUNCTION_NAME: FUN_06561744
ENTRY_POINT: 06561744
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_06561744(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int extraout_var;
  undefined8 uVar7;
  int extraout_var_00;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 local_1f0;
  undefined8 *puStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 *puStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_070f1380;
  if ((DAT_07557376 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_ICollection<char>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SentryThread>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SerializationCallback>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(PTR_DAT_070f1380);
    FUN_03188a78(System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
    FUN_03188a78(Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_EventBase<ContextClickEvent>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_EventBase<PointerCancelEvent>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SerializedCommand>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<ServerName>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SessionInfo>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SessionUpdate>_TypeInfo);
    DAT_07557376 = 1;
  }
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar1 = PTR_DAT_070c1b68;
  uVar4 = FUN_0656220c(param_1 + 0xa8);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06565020(param_1 + 0xa8);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar1 = System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo;
  uVar4 = FUN_069d8404(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    if (*(int *)(*(long *)(lVar5 + 0xb8) + 0x18) < 1) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      return;
    }
    uVar4 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar1;
      }
      lVar9 = *(long *)(lVar5 + 0xb8);
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar4) {
        return;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      lVar5 = *(long *)(lVar9 + 0x20);
      if (lVar5 == 0) goto LAB_06562024;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) break;
      uVar3 = *(undefined4 *)(param_1 + 0xa8);
      uVar11 = *(undefined8 *)(lVar5 + uVar4 * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_065652b0(uVar11,uVar3,0);
      lVar5 = *(long *)puVar1;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(param_1 + 0xa8) = uVar3;
    }
LAB_06562028:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_06562024;
  FUN_064bd17c(*(long *)(param_1 + 0x28),0);
  if (extraout_var < 1) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    if (0 < *(int *)(*(long *)(lVar5 + 0xb8) + 0x18)) {
      uVar4 = 0;
      while( true ) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar5 = *(long *)puVar1;
        }
        lVar9 = *(long *)(lVar5 + 0xb8);
        if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar4) goto LAB_06561fd0;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
        }
        lVar5 = *(long *)(lVar9 + 0x20);
        if (lVar5 == 0) goto LAB_06562024;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) break;
        uVar3 = *(undefined4 *)(param_1 + 0xa8);
        uVar11 = *(undefined8 *)(lVar5 + uVar4 * 8 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar3 = FUN_065652b0(uVar11,uVar3,0);
        lVar5 = *(long *)puVar1;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(param_1 + 0xa8) = uVar3;
      }
      goto LAB_06562028;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06565770(&local_120);
    puVar1 = System_Collections_Generic_List<SentryThread>_TypeInfo;
    local_1b0 = 0;
    puStack_1a8 = &local_120;
    if (0 < (int)local_120) {
      iVar10 = 0;
      do {
        uVar11 = FUN_03f5c7d0(&local_120,iVar10,*(undefined8 *)puVar1);
        uVar4 = FUN_06565810(param_1,uVar11);
        if ((uVar4 & 1) != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0xa8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar3 = FUN_065652b0(uVar11,uVar3,0);
          *(undefined4 *)(param_1 + 0xa8) = uVar3;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)local_120);
    }
    puVar6 = &local_120;
  }
  else {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    uVar4 = FUN_057bebf8(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (lVar5 == 0) goto LAB_06562024;
      FUN_064be764(&local_60,lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),0);
      puStack_78 = puStack_58;
      local_80 = local_60;
      uVar11 = local_80;
      uStack_68 = uStack_48;
      uStack_70 = local_50;
      local_80._0_1_ = (char)local_60;
      local_80 = uVar11;
      if ((char)local_80 != '\0') {
        FUN_04667080(&local_60,&local_80,
                     *(undefined8 *)System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo
                    );
        puVar6 = &local_140;
        puStack_138 = puStack_58;
        local_140 = local_60;
        local_130 = local_50;
        goto LAB_06561ab8;
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar1;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30);
      uVar11 = *(undefined8 *)System_Collections_Generic_List<SessionInfo>_TypeInfo;
LAB_06561b08:
      uVar11 = FUN_057c02e8(uVar11,uVar7,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
      }
      FUN_0698f1f0(uVar11,param_1,0);
    }
    else {
      uVar4 = FUN_057bebf8(*(undefined8 *)(param_1 + 0x68),0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_06562024;
        FUN_064be764(&local_60,*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x68),0);
        puStack_98 = puStack_58;
        local_a0 = local_60;
        uVar11 = local_a0;
        uStack_88 = uStack_48;
        uStack_90 = local_50;
        local_a0._0_1_ = (char)local_60;
        local_a0 = uVar11;
        if ((char)local_a0 == '\0') {
          uVar7 = *(undefined8 *)(param_1 + 0x68);
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          uVar11 = *(undefined8 *)System_Collections_Generic_List<SerializedCommand>_TypeInfo;
          goto LAB_06561b08;
        }
        FUN_04667080(&local_60,&local_a0,
                     *(undefined8 *)System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo
                    );
        puVar6 = &local_160;
        puStack_158 = puStack_58;
        local_160 = local_60;
        local_150 = local_50;
LAB_06561ab8:
        FUN_06565520(param_1,puVar6);
      }
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    if (0 < *(int *)(*(long *)(lVar5 + 0xb8) + 0x18)) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_0656220c(param_1 + 0xa8);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_065622dc(&local_60,param_1 + 0xa8);
        if ((char)local_60 != '\0') goto LAB_06561ba4;
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar1;
      }
      local_60 = 0;
      puStack_58 = (undefined8 *)0x0;
      FUN_04884b00(&local_60,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),0,
                   *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                   *(undefined8 *)
                    Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo);
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_06562024:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      auVar12 = FUN_064bd17c(*(long *)(param_1 + 0x28),0);
      FUN_03ae7350(&local_c0,local_60,puStack_58,auVar12._0_8_,auVar12._8_8_,0,1,
                   *(undefined8 *)
                    System_Collections_Generic_List<SerializationErrorCallback>_TypeInfo);
      if ((char)local_c0 != '\0') {
        FUN_04667080(&local_60,&local_c0,
                     *(undefined8 *)System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo
                    );
        puStack_178 = puStack_58;
        local_180 = local_60;
        local_170 = local_50;
        FUN_06565520(param_1,&local_180);
      }
      goto LAB_06561fd0;
    }
LAB_06561ba4:
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_0656220c(param_1 + 0xa8);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_065622dc(&local_60,param_1 + 0xa8);
      if ((char)local_60 != '\0') goto LAB_06561fd0;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)puVar1;
    }
    uVar4 = FUN_057bebf8(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),0);
    if ((uVar4 & 1) == 0) goto LAB_06561fd0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06565770(&local_60);
    puStack_188 = &local_e0;
    local_190 = 0;
    puStack_1a8 = puStack_58;
    local_1b0 = local_60;
    uStack_198 = uStack_48;
    uStack_1a0 = local_50;
    puStack_d8 = puStack_58;
    local_e0 = local_60;
    uStack_c8 = uStack_48;
    uStack_d0 = local_50;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    auVar12 = FUN_064bd17c(*(long *)(param_1 + 0x28),0);
    puStack_58 = puStack_1a8;
    local_60 = local_1b0;
    uStack_48 = uStack_198;
    local_50 = uStack_1a0;
    FUN_03ae7250(&local_1d0,&local_60,auVar12._0_8_,auVar12._8_8_,0,0,
                 *(undefined8 *)System_Collections_Generic_List<SerializationCallback>_TypeInfo);
    uStack_f8 = uStack_1c8;
    local_100 = local_1d0;
    uVar11 = local_100;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    local_100._0_1_ = (char)local_1d0;
    local_100 = uVar11;
    if ((char)local_100 == '\0') {
      if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_064f87e4(0);
      if ((0 < extraout_var_00) && ((int)local_e0 == 0)) {
        uVar11 = thunk_FUN_069dc13c(param_1,0);
        uVar11 = FUN_057bf780(*(undefined8 *)System_Collections_Generic_List<SessionUpdate>_TypeInfo
                              ,uVar11,*(undefined8 *)
                                       System_Collections_Generic_List<ServerName>_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_0698f53c(uVar11,param_1,0);
      }
    }
    else {
      FUN_04667080(&local_60,&local_100,
                   *(undefined8 *)System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo);
      puStack_1e8 = puStack_58;
      local_1f0 = local_60;
      local_1e0 = local_50;
      FUN_06565520(param_1,&local_1f0);
    }
    puVar6 = &local_e0;
  }
  FUN_03f5dcc8(puVar6,*(undefined8 *)
                       System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo
              );
LAB_06561fd0:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_0656220c(param_1 + 0xa8);
  if ((uVar4 & 1) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06565918(param_1 + 0xa8,uVar11);
  }
  return;
}


