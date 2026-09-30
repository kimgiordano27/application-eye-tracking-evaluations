/*
FUNCTION_NAME: FUN_065874c0
ENTRY_POINT: 065874c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_065874c0(byte *param_1,int param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  undefined8 *puVar36;
  ulong uVar37;
  undefined1 auVar38 [12];
  int local_1dc;
  undefined8 local_190;
  undefined8 uStack_188;
  int local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  int local_174;
  undefined8 local_170;
  ulong local_160;
  undefined4 local_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong auStack_108 [12];
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar11 = System_Collections_Generic_Queue<BufferSegment>_TypeInfo;
  puVar10 = System_Collections_Generic_Queue<bool>_TypeInfo;
  puVar9 = System_Collections_Generic_Queue<Action>_TypeInfo;
  puVar8 = System_Collections_Generic_Queue<short[]>_TypeInfo;
  puVar7 = System_Linq_Expressions_PrimitiveParameterExpression<float>_TypeInfo;
  puVar6 = System_Linq_Expressions_PrimitiveParameterExpression<sbyte>_TypeInfo;
                    /* try { // try from 065874d0 to 0668752b has its CatchHandler @ 0658774c */
  if ((DAT_075574c6 & 1) == 0) {
    FUN_03188a78(System_Collections_Generic_Queue<DripPhysics>_TypeInfo);
                    /* try { // try from 06587534 to 06687537 has its CatchHandler @ 06587764 */
    FUN_03188a78(System_Collections_Generic_Queue<Event>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<EventBase>_TypeInfo);
    FUN_03188a78(System_Predicate<string>_TypeInfo);
                    /* try { // try from 06587554 to 066875bf has its CatchHandler @ 06587714 */
    FUN_03188a78(System_Collections_Generic_Queue<HTTP2FrameHeaderAndPayload>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<HTTPRequest>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<ValueTuple<int,_object>>_TypeInfo);
    FUN_03188a78(System_Predicate<StyleSelectorPart>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<Action>_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_PrimitiveParameterExpression<sbyte>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<BufferSegment>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<IDataNode>_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_PrimitiveParameterExpression<uint>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<IEnumerator>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<ISpawned>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<int>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<JobHandle>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<short[]>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Queue<bool>_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_PrimitiveParameterExpression<float>_TypeInfo);
    FUN_03188a78(PTR_DAT_070d6558);
    FUN_03188a78(PTR_DAT_070c34b0);
    FUN_03188a78(PTR_DAT_070cb5c8);
    DAT_075574c6 = 1;
  }
  local_158 = 0;
  local_160 = 0;
  local_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_174 = 0;
  local_180 = 0;
  local_17c = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  auStack_108[0] = 0;
  local_110 = 0;
  auStack_108[2] = 0;
  auStack_108[1] = 0;
  auStack_108[4] = 0;
  auStack_108[3] = 0;
  auStack_108[6] = 0;
  auStack_108[5] = 0;
  auStack_108[8] = 0;
  auStack_108[7] = 0;
  auStack_108[10] = 0;
  auStack_108[9] = 0;
  lVar27 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar8);
  FUN_043f3e2c(lVar27,*(undefined8 *)puVar9);
  lVar28 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar7);
  FUN_043f1128(lVar28,*(undefined8 *)puVar6);
  lVar29 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar10);
  FUN_043ee4e8(lVar29,*(undefined8 *)puVar11);
  pbVar1 = param_1 + param_2;
  if (param_1 < pbVar1) {
    local_1dc = -1;
    puVar36 = (undefined8 *)PTR_DAT_070c34b0;
    do {
      bVar4 = *param_1;
      if (bVar4 == 0xfe) {
        thunk_FUN_031edd38(PTR_DAT_070c28b0);
        uVar30 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        uVar31 = thunk_FUN_031edd38(System_Collections_Generic_Queue<LocomotionEvent>_TypeInfo);
        FUN_05931f6c(uVar30,uVar31,0);
        uVar31 = thunk_FUN_031edd38(System_Collections_Generic_Queue<NCommand>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar30,uVar31);
      }
      bVar3 = bVar4 & 0xfc;
      uVar37 = (ulong)bVar4 & 3;
      pbVar2 = param_1 + 1;
      if (bVar3 < 0x55) {
        if (bVar3 < 0x19) {
          if (bVar3 < 9) {
            if (bVar3 == 4) {
              uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
              local_a8 = 0;
              FUN_04668ea8(&local_a8,uVar13,*puVar36);
              local_150 = local_a8;
            }
            else if (bVar3 == 8) {
              uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
              FUN_06588104(auStack_108 + 1,uVar13);
            }
          }
          else if (bVar3 == 0x14) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            uStack_148 = local_a8;
          }
          else if (bVar3 == 0x18) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            auStack_108[2] = local_a8;
          }
        }
        else if (bVar3 < 0x29) {
          if (bVar3 == 0x24) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            local_140 = local_a8;
          }
          else if (bVar3 == 0x28) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            auStack_108[3] = local_a8;
          }
        }
        else if (bVar3 == 0x34) {
          uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_04668ea8(&local_a8,uVar13,*puVar36);
          local_138 = local_a8;
        }
        else if (bVar3 == 0x44) {
          uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_04668ea8(&local_a8,uVar13,*puVar36);
          local_130 = local_a8;
        }
        else if (bVar3 == 0x54) {
          uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_04668ea8(&local_a8,uVar13,*puVar36);
          uStack_128 = local_a8;
        }
      }
      else if (bVar3 < 0x85) {
        if (bVar3 < 0x75) {
          if (bVar3 == 100) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            local_120 = local_a8;
          }
          else if (bVar3 == 0x74) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            local_118 = local_a8;
          }
        }
        else {
          if (bVar3 == 0x80) {
            uVar13 = 1;
            goto LAB_06587ae0;
          }
          if (bVar3 == 0x84) {
            uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_04668ea8(&local_a8,uVar13,*puVar36);
            auStack_108[0] = local_a8;
          }
        }
      }
      else if (bVar3 < 0x95) {
        if (bVar3 == 0x90) {
          uVar13 = 2;
LAB_06587ae0:
          uVar14 = FUN_0658846c(auStack_108[0],uVar13,lVar27);
          if (lVar27 == 0) goto LAB_06588000;
          auVar38 = FUN_043f4368(lVar27,uVar14,
                                 *(undefined8 *)
                                  System_Collections_Generic_Queue<IEnumerator>_TypeInfo);
          iVar35 = (uint)((char)auStack_108[0] != '\0') << 3;
          if (auVar38._8_4_ != 0) {
            iVar35 = auVar38._8_4_;
          }
          iVar15 = FUN_04668eec(&local_110,1,*(undefined8 *)PTR_DAT_070d6558);
          uVar16 = FUN_0658809c(uVar37,pbVar2,pbVar1);
          if (0 < iVar15) {
            iVar34 = 0;
            do {
              uVar17 = FUN_065882fc(auStack_108 + 1,iVar34);
              uVar18 = FUN_06588270(&local_150,iVar34,auStack_108 + 1);
              puVar6 = PTR_DAT_070d6558;
              iVar19 = FUN_04668eec(&local_118,8,*(undefined8 *)PTR_DAT_070d6558);
              uVar20 = FUN_04668eec(auStack_108,1,*(undefined8 *)puVar6);
              iVar21 = FUN_04668eec((ulong)&local_150 | 8,0,*(undefined8 *)puVar6);
              iVar22 = FUN_04668eec(&local_140,0,*(undefined8 *)puVar6);
              uVar23 = FUN_065885f4(&local_150);
              uVar24 = FUN_065886b8(&local_150);
              uVar25 = FUN_04668eec(&uStack_128,0,*(undefined8 *)puVar6);
              uVar26 = FUN_04668eec(&local_120,0,*(undefined8 *)puVar6);
              if (lVar28 == 0) goto LAB_06588000;
              lVar32 = *(long *)(lVar28 + 0x10);
              lVar33 = *(long *)System_Predicate<string>_TypeInfo;
              *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
              if (lVar32 == 0) goto LAB_06588000;
              uVar5 = *(uint *)(lVar28 + 0x18);
              if (uVar5 < *(uint *)(lVar32 + 0x18)) {
                lVar32 = lVar32 + (long)(int)uVar5 * 0x48;
                *(uint *)(lVar28 + 0x18) = uVar5 + 1;
                *(int *)(lVar32 + 0x30) = iVar21;
                *(int *)(lVar32 + 0x34) = iVar22;
                *(uint *)(lVar32 + 0x20) = uVar17 & 0xffff;
                *(undefined4 *)(lVar32 + 0x24) = uVar18;
                *(undefined4 *)(lVar32 + 0x28) = uVar26;
                *(undefined4 *)(lVar32 + 0x2c) = uVar25;
                *(undefined4 *)(lVar32 + 0x38) = uVar23;
                *(undefined4 *)(lVar32 + 0x3c) = uVar24;
                *(undefined4 *)(lVar32 + 0x40) = uVar13;
                *(undefined4 *)(lVar32 + 0x44) = 0;
                *(undefined4 *)(lVar32 + 0x48) = uVar20;
                *(int *)(lVar32 + 0x4c) = iVar19;
                *(int *)(lVar32 + 0x50) = iVar35;
                *(undefined4 *)(lVar32 + 0x54) = uVar16;
                *(undefined8 *)(lVar32 + 0x58) = 0;
                *(undefined8 *)(lVar32 + 0x60) = 0;
              }
              else {
                local_a8 = CONCAT44(uVar18,uVar17) & 0xffffffff0000ffff;
                local_a0 = (undefined8 *)CONCAT44(uVar25,uVar26);
                local_84 = 0;
                local_70 = 0;
                uStack_68 = 0;
                local_98 = iVar21;
                local_94 = iVar22;
                local_90 = uVar23;
                local_8c = uVar24;
                local_88 = uVar13;
                local_80 = uVar20;
                local_7c = iVar19;
                local_78 = iVar35;
                local_74 = uVar16;
                FUN_043f19dc(lVar28,&local_a8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
              }
              iVar34 = iVar34 + 1;
              iVar35 = iVar19 + iVar35;
            } while (iVar15 != iVar34);
          }
          FUN_043f43c4(lVar27,uVar14,auVar38._0_8_,iVar35,
                       *(undefined8 *)System_Collections_Generic_Queue<JobHandle>_TypeInfo);
          if ((DAT_075574ca & 1) == 0) {
            FUN_03188a78(PTR_DAT_070f4bc0);
            DAT_075574ca = 1;
          }
          uVar12 = auStack_108[10];
          puVar36 = (undefined8 *)PTR_DAT_070c34b0;
          auStack_108[2] = 0;
          auStack_108[1] = 0;
          auStack_108[4] = 0;
          auStack_108[3] = 0;
          auStack_108[6] = 0;
          auStack_108[5] = 0;
          auStack_108[8] = 0;
          auStack_108[7] = 0;
          auStack_108[10] = 0;
          auStack_108[9] = 0;
          if (uVar12 != 0) {
            *(undefined4 *)(uVar12 + 0x18) = 0;
            *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
            auStack_108[10] = uVar12;
          }
        }
        else if (bVar3 == 0x94) {
          uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_04668ea8(&local_a8,uVar13,*puVar36);
          local_110 = local_a8;
        }
      }
      else if (bVar3 == 0xa0) {
        if (lVar29 == 0) goto LAB_06588000;
        iVar35 = *(int *)(lVar29 + 0x18);
        uVar13 = FUN_0658809c(uVar37,pbVar2,pbVar1);
        uVar14 = FUN_06588270(&local_150,0,auStack_108 + 1);
        uVar16 = FUN_065882fc(auStack_108 + 1,0);
        if (lVar28 == 0) goto LAB_06588000;
        lVar32 = *(long *)(lVar29 + 0x10);
        iVar15 = *(int *)(lVar28 + 0x18);
        lVar33 = *(long *)System_Collections_Generic_Queue<HTTP2FrameHeaderAndPayload>_TypeInfo;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar32 == 0) goto LAB_06588000;
        uVar17 = *(uint *)(lVar29 + 0x18);
        if (uVar17 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + (long)(int)uVar17 * 0x18;
          *(uint *)(lVar29 + 0x18) = uVar17 + 1;
          *(undefined4 *)(lVar32 + 0x20) = uVar13;
          *(undefined4 *)(lVar32 + 0x24) = uVar16;
          *(undefined4 *)(lVar32 + 0x28) = uVar14;
          *(int *)(lVar32 + 0x2c) = local_1dc;
          *(undefined4 *)(lVar32 + 0x30) = 0;
          *(int *)(lVar32 + 0x34) = iVar15;
        }
        else {
          local_a8 = CONCAT44(uVar16,uVar13);
          local_a0 = (undefined8 *)CONCAT44(local_1dc,uVar14);
          local_98 = 0;
          local_94 = iVar15;
          FUN_043eed94(lVar29,&local_a8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
        }
        if ((DAT_075574ca & 1) == 0) {
          FUN_03188a78(PTR_DAT_070f4bc0);
          DAT_075574ca = 1;
        }
        uVar12 = auStack_108[10];
        auStack_108[2] = 0;
        auStack_108[1] = 0;
        auStack_108[4] = 0;
        auStack_108[3] = 0;
        auStack_108[6] = 0;
        auStack_108[5] = 0;
        auStack_108[8] = 0;
        auStack_108[7] = 0;
        auStack_108[10] = 0;
        auStack_108[9] = 0;
        local_1dc = iVar35;
        if (uVar12 != 0) {
          *(undefined4 *)(uVar12 + 0x18) = 0;
          *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
          auStack_108[10] = uVar12;
        }
      }
      else {
        if (bVar3 == 0xb0) {
          uVar13 = 3;
          goto LAB_06587ae0;
        }
        if (bVar3 == 0xc0) {
          if (local_1dc == -1) {
            return 0;
          }
          if (lVar29 == 0) goto LAB_06588000;
          FUN_043eea24(&local_a8,lVar29,local_1dc,
                       *(undefined8 *)System_Collections_Generic_Queue<ISpawned>_TypeInfo);
          local_160 = local_a8;
          local_158 = (undefined4)local_a0;
          if (lVar28 == 0) goto LAB_06588000;
          iVar35 = local_a0._4_4_;
          local_98 = *(int *)(lVar28 + 0x18) - local_94;
          FUN_043eea8c(lVar29,local_1dc,&local_a8,
                       *(undefined8 *)System_Collections_Generic_Queue<int>_TypeInfo);
          if ((DAT_075574ca & 1) == 0) {
            FUN_03188a78(PTR_DAT_070f4bc0);
            DAT_075574ca = 1;
          }
          uVar12 = auStack_108[10];
          auStack_108[2] = 0;
          auStack_108[1] = 0;
          auStack_108[4] = 0;
          auStack_108[3] = 0;
          auStack_108[6] = 0;
          auStack_108[5] = 0;
          auStack_108[8] = 0;
          auStack_108[7] = 0;
          auStack_108[10] = 0;
          auStack_108[9] = 0;
          if (uVar12 != 0) {
            *(undefined4 *)(uVar12 + 0x18) = 0;
            *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
            auStack_108[10] = uVar12;
          }
          local_1dc = iVar35;
        }
      }
      param_1 = param_1 + 5;
      if ((int)uVar37 != 3) {
        param_1 = pbVar2 + uVar37;
      }
    } while (param_1 < pbVar1);
  }
  if (lVar28 != 0) {
    uVar30 = FUN_043f380c(lVar28,*(undefined8 *)System_Predicate<StyleSelectorPart>_TypeInfo);
    *(undefined8 *)(param_3 + 0x20) = uVar30;
    puVar8 = System_Collections_Generic_Queue<HTTPRequest>_TypeInfo;
    puVar7 = System_Collections_Generic_Queue<Event>_TypeInfo;
    puVar6 = System_Collections_Generic_Queue<DripPhysics>_TypeInfo;
    if (lVar29 != 0) {
      uVar30 = FUN_043f0b1c(lVar29,*(undefined8 *)
                                    System_Collections_Generic_Queue<ValueTuple<int,_object>>_TypeInfo
                           );
      uVar31 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_3 + 0x28) = uVar30;
      FUN_043efa20(&local_190,lVar29,uVar31);
      local_a8 = 0;
      local_a0 = &local_190;
      do {
        uVar37 = FUN_05487f04(&local_190,*(undefined8 *)puVar7);
        if ((uVar37 & 1) == 0) goto LAB_06587fc8;
      } while ((local_174 != -1) || (local_180 != 1));
      *(ulong *)(param_3 + 8) = CONCAT44(uStack_178,local_17c);
LAB_06587fc8:
      FUN_05487f00(&local_190,*(undefined8 *)puVar6);
      return 1;
    }
  }
LAB_06588000:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


