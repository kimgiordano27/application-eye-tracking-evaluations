/*
FUNCTION_NAME: FUN_05deaba0
ENTRY_POINT: 05deaba0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_05deaba0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  double dVar24;
  undefined2 local_78 [2];
  int local_74;
  uint local_70;
  int iStack_6c;
  undefined8 local_68;
  
  local_68 = param_1;
  if ((DAT_07a45489 & 1) == 0) {
                    /* try { // try from 05deabec to 05eeabf3 has its CatchHandler @ 05deacb0 */
    FUN_031f20f4(PTR_DAT_075e4a08);
    FUN_031f20f4(PTR_DAT_0759d328);
                    /* try { // try from 05deac00 to 05eeac03 has its CatchHandler @ 05deacac */
    FUN_031f20f4(PTR_DAT_075e8180);
    FUN_031f20f4(PTR_DAT_0759c258);
    FUN_031f20f4(PTR_DAT_075e7d28);
    FUN_031f20f4(PTR_DAT_0759b370);
    FUN_031f20f4(PTR_DAT_075ebfd8);
                    /* try { // try from 05deac40 to 05eeac7b has its CatchHandler @ 05deacb4 */
    FUN_031f20f4(PTR_DAT_075a1480);
    FUN_031f20f4(PTR_DAT_075e4218);
    FUN_031f20f4(PTR_DAT_075e8110);
    FUN_031f20f4(PTR_DAT_075e8118);
    DAT_07a45489 = 1;
  }
  puVar2 = PTR_DAT_075e7d28;
  local_70 = 0;
  iStack_6c = 0;
  local_74 = 0;
  local_78[0] = 0;
                    /* try { // try from 05deac7c to 05eeaccb has its CatchHandler @ 05deaafc */
  if (param_4 == 0) {
LAB_05debc7c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  plVar22 = *(long **)(param_4 + 0x78);
  lVar13 = param_6;
  if (param_6 == 0) {
    lVar13 = FUN_05c97530(0x10,0);
  }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deac00 with catch @ 05deacac
                        */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deabec with catch @ 05deacb0
                        */
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deac40 with catch @ 05deacb4
                        */
  if (DAT_07a44f27 == '\0') {
    FUN_031f20f4(PTR_DAT_075e7d28);
                    /* try { // try from 05deaccc to 05eeaccf has its CatchHandler @ 05deacf8 */
                    /* try { // try from 05deacd0 to 05eead07 has its CatchHandler @ 05deaafc */
    DAT_07a44f27 = '\x01';
  }
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar14 = *(long *)puVar2;
  }
  if (**(char **)(lVar14 + 0xb8) == '\0') {
    if (plVar22 == (long *)0x0) goto LAB_05debc7c;
                    /* try { // try from 05dead08 to 05eead0f has its CatchHandler @ 05dead24 */
    sVar6 = (**(code **)(*plVar22 + 0x1a8))(plVar22,*(undefined8 *)(*plVar22 + 0x1b0));
                    /* try { // try from 05dead10 to 05eead1b has its CatchHandler @ 05deaafc */
    lVar14 = *(long *)puVar2;
                    /* try { // try from 05dead1c to 05eead23 has its CatchHandler @ 05dead24 */
    bVar3 = sVar6 != 8;
  }
  else {
    bVar3 = true;
                    /* catch() { ... } // from try @ 05deaccc with catch @ 05deacf8 */
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05dead08 with catch @ 05dead24
                       catch(type#2 @ 00000000) { ... } // from try @ 05dead1c with catch @ 05dead24
                        */
                    /* try { // try from 05dead28 to 05eeadd7 has its CatchHandler @ 05dead28
                       catch() { ... } // from try @ 05dead28 with catch @ 05dead28
                       catch() { ... } // from try @ 05deae50 with catch @ 05dead28
                       catch() { ... } // from try @ 05deaea0 with catch @ 05dead28
                       catch() { ... } // from try @ 05deaec8 with catch @ 05dead28
                       catch() { ... } // from try @ 05deaf08 with catch @ 05dead28 */
  if (*(int *)(lVar14 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a44f27 == '\0') {
    FUN_031f20f4(PTR_DAT_075e7d28);
    DAT_07a44f27 = '\x01';
  }
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar14 = *(long *)puVar2;
  }
  if (**(char **)(lVar14 + 0xb8) == '\0') {
    if (plVar22 == (long *)0x0) goto LAB_05debc7c;
    sVar6 = (**(code **)(*plVar22 + 0x1a8))(plVar22,*(undefined8 *)(*plVar22 + 0x1b0));
    bVar4 = sVar6 != 3;
  }
  else {
    bVar4 = true;
  }
  uVar21 = (uint)param_3;
  if (0 < (int)uVar21) {
    uVar23 = 0;
    plVar20 = (long *)PTR_DAT_075e8180;
    do {
      if (uVar21 <= uVar23) goto LAB_05debc78;
      uVar1 = *(ushort *)(param_2 + (long)(int)uVar23 * 2);
                    /* try { // try from 05deadd8 to 05eeaddf has its CatchHandler @ 05deaea8 */
      if (uVar1 < 0x4c) {
        if (uVar1 < 0x30) {
          if (uVar1 < 0x26) {
            if (uVar1 == 0x22) {
LAB_05deb11c:
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              iStack_6c = FUN_05dea830(param_2,param_3,uVar23,lVar13);
              goto LAB_05debc1c;
            }
            if (uVar1 == 0x25) {
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
                    /* try { // try from 05deae1c to 05eeae43 has its CatchHandler @ 05deaeac */
              iVar7 = FUN_05dea9d8(param_2,param_3,uVar23);
              if ((iVar7 < 0) || (iVar7 == 0x25)) goto LAB_05debc80;
              local_78[0] = (undefined2)iVar7;
              if (*(long *)(*(long *)PTR_DAT_075ebfd8 + 0x38) == 0) {
                    /* try { // try from 05deae44 to 05eeae4f has its CatchHandler @ 05deaea0 */
                FUN_0322bf50(*(long *)PTR_DAT_075ebfd8);
              }
                    /* try { // try from 05deae50 to 05eeae9b has its CatchHandler @ 05dead28 */
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_05deaba0(param_1,local_78,1,param_4,param_5,lVar13);
LAB_05deaed4:
              iStack_6c = 2;
              goto LAB_05debc1c;
            }
          }
          else {
            if (uVar1 == 0x27) goto LAB_05deb11c;
            if (uVar1 == 0x2f) {
              uVar17 = FUN_05d54f84(param_4,0);
              if (lVar13 != 0) goto LAB_05deb3cc;
              goto LAB_05debc7c;
            }
          }
switchD_05deaff0_caseD_65:
          if (lVar13 == 0) goto LAB_05debc7c;
          FUN_05c95a6c(lVar13,uVar1,0);
        }
        else {
          if (0x46 < uVar1) {
            if (uVar1 == 0x48) {
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x48);
              if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                          (*(long *)PTR_DAT_0759c258);
              }
              uVar11 = FUN_05de2a6c(&local_68);
              goto LAB_05deb7a8;
            }
            if (uVar1 == 0x4b) {
              iStack_6c = 1;
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_05dec078(param_1,param_5,lVar13);
              goto LAB_05debc1c;
            }
            goto switchD_05deaff0_caseD_65;
          }
          if (uVar1 != 0x3a) {
                    /* catch() { ... } // from try @ 05deaec4 with catch @ 05deaef0 */
            if (uVar1 == 0x46) goto switchD_05deaff0_caseD_66;
            goto switchD_05deaff0_caseD_65;
          }
          uVar17 = FUN_05d556ec(param_4,0);
          if (lVar13 == 0) goto LAB_05debc7c;
LAB_05deb3cc:
          FUN_05c94b84(lVar13,uVar17,0);
        }
        iStack_6c = 1;
      }
      else if (uVar1 < 0x6e) {
        if (uVar1 < 0x5d) {
          if (uVar1 != 0x4d) {
            if (uVar1 != 0x5c) goto switchD_05deaff0_caseD_65;
                    /* try { // try from 05deae9c to 05eeae9f has its CatchHandler @ 05deaea4 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deae44 with catch @ 05deaea0
                       try { // try from 05deaea0 to 05eeaec3 has its CatchHandler @ 05dead28 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deae9c with catch @ 05deaea4
                        */
            if (*(int *)(*plVar20 + 0xe4) == 0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deadd8 with catch @ 05deaea8
                        */
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deae1c with catch @ 05deaeac
                        */
            iVar7 = FUN_05dea9d8(param_2,param_3,uVar23);
            if (iVar7 < 0) goto LAB_05debc80;
            if (lVar13 != 0) {
                    /* try { // try from 05deaec4 to 05eeaec7 has its CatchHandler @ 05deaef0 */
                    /* try { // try from 05deaec8 to 05eeaeff has its CatchHandler @ 05dead28 */
              FUN_05c95a6c(lVar13,iVar7,0);
              goto LAB_05deaed4;
            }
            goto LAB_05debc7c;
          }
          if (*(int *)(*plVar20 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x4d);
          if (plVar22 == (long *)0x0) goto LAB_05debc7c;
          uVar9 = (**(code **)(*plVar22 + 0x248))(plVar22,param_1,*(undefined8 *)(*plVar22 + 0x250))
          ;
          if (iStack_6c < 3) {
            if (!bVar3) {
              if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              if (DAT_07a44f27 == '\0') {
                FUN_031f20f4(PTR_DAT_075e7d28);
                DAT_07a44f27 = '\x01';
              }
              puVar2 = PTR_DAT_075e7d28;
              lVar14 = *(long *)PTR_DAT_075e7d28;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar14 = *(long *)puVar2;
              }
              if (**(char **)(lVar14 + 0xb8) == '\0') {
LAB_05debbb0:
                plVar20 = (long *)PTR_DAT_075e8180;
                if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                FUN_05dea604(lVar13,uVar9);
                goto LAB_05debc1c;
              }
            }
            lVar14 = *(long *)PTR_DAT_075e8180;
LAB_05deba24:
            iVar7 = iStack_6c;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            goto LAB_05debaa4;
          }
          if (!bVar3) {
            if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            if (DAT_07a44f27 == '\0') {
              FUN_031f20f4(PTR_DAT_075e7d28);
              DAT_07a44f27 = '\x01';
            }
            puVar2 = PTR_DAT_075e7d28;
            lVar14 = *(long *)PTR_DAT_075e7d28;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar14 = *(long *)puVar2;
            }
            iVar7 = iStack_6c;
            if (**(char **)(lVar14 + 0xb8) == '\0') {
              if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              uVar17 = FUN_05dea770(param_1,uVar9,iVar7,param_4);
              goto joined_r0x05deb068;
            }
          }
          puVar2 = PTR_DAT_075e8180;
          uVar16 = FUN_05d55a58(param_4,0);
          iVar7 = iStack_6c;
          lVar14 = *(long *)puVar2;
          if (((uVar16 & 1) == 0) || (iStack_6c < 4)) {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar14);
            }
            uVar17 = FUN_05dea73c(uVar9,iVar7,param_4);
          }
          else {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar14);
            }
            uVar10 = FUN_05deaa48(param_2,param_3,uVar23,iVar7,100);
            uVar17 = FUN_05d55a98(param_4,uVar9,uVar10 & 1,0,0);
          }
          if (lVar13 == 0) goto LAB_05debc7c;
LAB_05debc00:
          FUN_05c94b84(lVar13,uVar17,0);
          plVar20 = (long *)PTR_DAT_075e8180;
        }
        else {
          switch(uVar1) {
          case 100:
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack_6c = FUN_05dea680(param_2,param_3,uVar23,100);
            if (plVar22 != (long *)0x0) {
              lVar14 = *plVar22;
              if (iStack_6c < 3) {
                uVar9 = (**(code **)(lVar14 + 0x1e8))
                                  (plVar22,param_1,*(undefined8 *)(lVar14 + 0x1f0));
                if (!bVar3) {
                  if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  if (DAT_07a44f27 == '\0') {
                    FUN_031f20f4(PTR_DAT_075e7d28);
                    DAT_07a44f27 = '\x01';
                  }
                  puVar2 = PTR_DAT_075e7d28;
                  lVar14 = *(long *)PTR_DAT_075e7d28;
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    lVar14 = *(long *)puVar2;
                  }
                  plVar20 = (long *)PTR_DAT_075e8180;
                  if (**(char **)(lVar14 + 0xb8) == '\0') goto LAB_05debbb0;
                }
                lVar14 = *plVar20;
                goto LAB_05deba24;
              }
              uVar11 = (**(code **)(lVar14 + 0x1f8))
                                 (plVar22,param_1,*(undefined8 *)(lVar14 + 0x200));
              iVar7 = iStack_6c;
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar20);
              }
              uVar17 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                                 (uVar11,iVar7,param_4);
joined_r0x05deb068:
              if (lVar13 != 0) goto LAB_05debc00;
            }
            goto LAB_05debc7c;
          default:
            goto switchD_05deaff0_caseD_65;
          case 0x66:
switchD_05deaff0_caseD_66:
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack_6c = FUN_05dea680(param_2,param_3,uVar23,uVar1);
            if (7 < iStack_6c) {
LAB_05debc80:
              if (param_6 == 0) {
                FUN_05c97604(lVar13,0);
              }
              thunk_FUN_03257e30(PTR_DAT_0759d4c0);
              uVar17 = thunk_FUN_0322f148();
              uVar18 = thunk_FUN_03257e30(PTR_DAT_075e3588);
              FUN_05dea0e8(uVar17,uVar18);
              uVar18 = thunk_FUN_03257e30(PTR_DAT_075ebfe0);
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar17,uVar18);
            }
                    /* try { // try from 05deb178 to 05eeb17f has its CatchHandler @ 05deb218 */
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            lVar14 = FUN_05ddf7e0(&local_68);
            iVar7 = iStack_6c;
            if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
                    /* try { // try from 05deb1bc to 05eeb1eb has its CatchHandler @ 05deb21c */
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_0759b370);
            }
                    /* try { // try from 05deb1ec to 05eeb20f has its CatchHandler @ 05deb0d4 */
            dVar24 = (double)thunk_FUN_0322bbc4(0x4024000000000000,(double)(7 - iVar7),0);
            puVar2 = PTR_DAT_075e8180;
                    /* try { // try from 05deb210 to 05eeb213 has its CatchHandler @ 05deb214 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deb210 with catch @ 05deb214
                       try { // try from 05deb214 to 05eeb233 has its CatchHandler @ 05deb0d4 */
            lVar15 = -0x8000000000000000;
            if (dVar24 != INFINITY) {
              lVar15 = (long)dVar24;
            }
            lVar19 = 0;
            if (lVar15 != 0) {
              lVar19 = (lVar14 % 10000000) / lVar15;
            }
            iVar7 = (int)lVar19;
            if (uVar1 == 0x66) {
              lVar14 = *(long *)PTR_DAT_075e8180;
              local_74 = iVar7;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar14 = *(long *)puVar2;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
              if (lVar14 == 0) goto LAB_05debc7c;
              if (*(uint *)(lVar14 + 0x18) <= iStack_6c - 1U) {
LAB_05debc78:
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              lVar14 = lVar14 + (long)(int)(iStack_6c - 1U) * 8;
              lVar15 = *(long *)PTR_DAT_0759d328;
            }
            else {
              iVar8 = iStack_6c;
              if ((0 < iStack_6c) && (iVar12 = iStack_6c, iVar7 % 10 == 0)) {
                do {
                  lVar19 = lVar19 / 10;
                  iVar8 = iVar12 + -1;
                  if (iVar12 < 2) break;
                  iVar12 = iVar8;
                } while (lVar19 == (lVar19 / 10) * 10);
              }
              if (iVar8 < 1) {
                if (lVar13 != 0) {
                  iVar7 = FUN_05c93cd4(lVar13,0);
                  plVar20 = (long *)PTR_DAT_075e8180;
                  if (0 < iVar7) {
                    iVar7 = FUN_05c93cd4(lVar13,0);
                    sVar6 = FUN_05c94608(lVar13,iVar7 + -1,0);
                    if (sVar6 == 0x2e) {
                      iVar7 = FUN_05c93cd4(lVar13,0);
                      FUN_05c95754(lVar13,iVar7 + -1,1,0);
                    }
                  }
                  break;
                }
                goto LAB_05debc7c;
              }
              local_74 = (int)lVar19;
              lVar14 = *(long *)PTR_DAT_075e8180;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar14 = *(long *)puVar2;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
              if (lVar14 == 0) goto LAB_05debc7c;
              if (*(uint *)(lVar14 + 0x18) <= iVar8 - 1U) goto LAB_05debc78;
              lVar14 = lVar14 + (ulong)(iVar8 - 1U) * 8;
              lVar15 = *(long *)PTR_DAT_0759d328;
            }
            uVar17 = *(undefined8 *)(lVar14 + 0x20);
            if (*(int *)(lVar15 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar18 = FUN_05d860e8(0);
            uVar17 = FUN_05dff00c(&local_74,uVar17,uVar18,0);
            if (lVar13 == 0) goto LAB_05debc7c;
            FUN_05c94b84(lVar13,uVar17,0);
            plVar20 = (long *)PTR_DAT_075e8180;
            break;
          case 0x67:
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x67);
            if (plVar22 == (long *)0x0) goto LAB_05debc7c;
            uVar11 = (**(code **)(*plVar22 + 0x228))
                               (plVar22,param_1,*(undefined8 *)(*plVar22 + 0x230));
            uVar17 = FUN_05d54cf4(param_4,uVar11,0);
joined_r0x05deb980:
            if (lVar13 == 0) goto LAB_05debc7c;
            FUN_05c94b84(lVar13,uVar17,0);
            break;
          case 0x68:
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x68);
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_0759c258);
            }
            iVar12 = FUN_05de2a6c(&local_68);
            iVar8 = iStack_6c;
            iVar7 = 0xc;
            if (iVar12 % 0xc != 0) {
              iVar7 = iVar12 % 0xc;
            }
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            FUN_05dea49c(lVar13,iVar7,iVar8);
            plVar20 = (long *)PTR_DAT_075e8180;
            break;
          case 0x6d:
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x6d);
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_0759c258);
            }
            uVar11 = FUN_05de2be8(&local_68);
            goto LAB_05deb7a8;
          }
        }
      }
      else {
                    /* try { // try from 05deaf00 to 05eeaf07 has its CatchHandler @ 05deaf1c */
        if (uVar1 < 0x75) {
                    /* try { // try from 05deaf08 to 05eeaf13 has its CatchHandler @ 05dead28 */
          if (uVar1 == 0x73) {
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x73);
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_0759c258);
            }
            uVar11 = FUN_05de2e54(&local_68);
LAB_05deb7a8:
            FUN_05dea49c(lVar13,uVar11,iStack_6c);
          }
          else {
            if (uVar1 != 0x74) goto switchD_05deaff0_caseD_65;
                    /* try { // try from 05deaf14 to 05eeaf1b has its CatchHandler @ 05deaf1c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05deaf00 with catch @ 05deaf1c
                       catch(type#2 @ 00000000) { ... } // from try @ 05deaf14 with catch @ 05deaf1c
                        */
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iVar7 = FUN_05dea680(param_2,param_3,uVar23,0x74);
            iStack_6c = iVar7;
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_0759c258);
            }
            iVar8 = FUN_05de2a6c(&local_68);
            plVar20 = (long *)PTR_DAT_075e8180;
            if (iVar7 != 1) {
              if (iVar8 < 0xc) {
                uVar17 = FUN_05d54b34();
              }
              else {
                uVar17 = FUN_05d5522c(param_4,0);
              }
              goto joined_r0x05deb980;
            }
            if (iVar8 < 0xc) {
              lVar14 = FUN_05d54b34(param_4,0);
              if (lVar14 == 0) goto LAB_05debc7c;
              if (0 < *(int *)(lVar14 + 0x10)) {
                lVar14 = FUN_05d54b34(param_4,0);
                if (lVar14 != 0) goto LAB_05deb954;
                goto LAB_05debc7c;
              }
            }
            else {
              lVar14 = FUN_05d5522c();
              if (lVar14 == 0) goto LAB_05debc7c;
              if (0 < *(int *)(lVar14 + 0x10)) {
                lVar14 = FUN_05d5522c(param_4,0);
                if (lVar14 == 0) goto LAB_05debc7c;
LAB_05deb954:
                uVar11 = FUN_05c829ac(lVar14,0,0);
                if (lVar13 == 0) goto LAB_05debc7c;
                FUN_05c95a6c(lVar13,uVar11,0);
              }
            }
          }
        }
        else {
          if (uVar1 != 0x79) {
            if (uVar1 == 0x7a) {
              if (*(int *)(*plVar20 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
                    /* try { // try from 05deb0d4 to 05eeb177 has its CatchHandler @ 05deb0d4
                       catch() { ... } // from try @ 05deb0d4 with catch @ 05deb0d4
                       catch() { ... } // from try @ 05deb1ec with catch @ 05deb0d4
                       catch() { ... } // from try @ 05deb214 with catch @ 05deb0d4
                       catch() { ... } // from try @ 05deb238 with catch @ 05deb0d4
                       catch() { ... } // from try @ 05deb268 with catch @ 05deb0d4 */
              iStack_6c = FUN_05dea680(param_2,param_3,uVar23,0x7a);
              FUN_05debcd8(param_1,param_5);
              goto LAB_05debc1c;
            }
            goto switchD_05deaff0_caseD_65;
          }
          if (plVar22 == (long *)0x0) goto LAB_05debc7c;
          uVar11 = (**(code **)(*plVar22 + 0x268))
                             (plVar22,param_1,*(undefined8 *)(*plVar22 + 0x270));
          _local_70 = CONCAT44(iStack_6c,uVar11);
          if (*(int *)(*plVar20 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar20);
          }
          iVar7 = FUN_05dea680(param_2,param_3,uVar23,0x79);
          iStack_6c = iVar7;
          if ((((!bVar4) && (*(char *)(*(long *)(*(long *)PTR_DAT_075e4a08 + 0xb8) + 2) == '\0')) &&
              (local_70 == 1)) && (uVar9 = iVar7 + uVar23, (int)uVar9 < (int)(uVar21 - 1))) {
            if (uVar21 <= uVar9) goto LAB_05debc78;
            if (*(short *)(param_2 + (long)(int)uVar9 * 2) == 0x27) {
              if (uVar21 <= uVar9 + 1) goto LAB_05debc78;
              if (*(long *)PTR_DAT_075e8118 == 0) goto LAB_05debc7c;
              sVar6 = *(short *)(param_2 + (long)(int)(uVar9 + 1) * 2);
              sVar5 = FUN_05c829ac(*(long *)PTR_DAT_075e8118,0,0);
              plVar20 = (long *)PTR_DAT_075e8180;
              if (sVar6 == sVar5) {
                if ((*(long *)PTR_DAT_075e8110 != 0) &&
                   (uVar11 = FUN_05c829ac(*(long *)PTR_DAT_075e8110,0,0), lVar13 != 0)) {
                  FUN_05c95a6c(lVar13,uVar11,0);
                  goto LAB_05debc1c;
                }
                goto LAB_05debc7c;
              }
            }
          }
          uVar16 = FUN_05d56f74(param_4,0);
          uVar9 = local_70;
          if ((uVar16 & 1) == 0) {
            if (!bVar3) {
              if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              if (DAT_07a44f27 == '\0') {
                FUN_031f20f4(PTR_DAT_075e7d28);
                DAT_07a44f27 = '\x01';
              }
              puVar2 = PTR_DAT_075e7d28;
              lVar14 = *(long *)PTR_DAT_075e7d28;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar14 = *(long *)puVar2;
              }
              uVar9 = local_70;
              if (**(char **)(lVar14 + 0xb8) == '\0') {
                if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                FUN_05dea604(lVar13,uVar9);
                plVar20 = (long *)PTR_DAT_075e8180;
                goto LAB_05debc1c;
              }
            }
            iVar7 = iStack_6c;
            uVar9 = local_70;
            if (2 < iStack_6c) {
              uVar17 = FUN_05dfee30(&iStack_6c,0);
              uVar17 = FUN_05c7e0d4(*(undefined8 *)PTR_DAT_075e4218,uVar17,0);
              if (*(int *)(*(long *)PTR_DAT_0759d328 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                          (*(long *)PTR_DAT_0759d328);
              }
              uVar18 = FUN_05d860e8(0);
              uVar17 = FUN_05dff00c(&local_70,uVar17,uVar18,0);
              goto joined_r0x05deb068;
            }
            if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar9 = (int)uVar9 % 100;
          }
          else {
            iVar7 = iStack_6c;
            if (1 < iStack_6c) {
              iVar7 = 2;
            }
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
          }
LAB_05debaa4:
          FUN_05dea49c(lVar13,uVar9,iVar7);
          plVar20 = (long *)PTR_DAT_075e8180;
        }
      }
LAB_05debc1c:
      uVar23 = iStack_6c + uVar23;
    } while ((int)uVar23 < (int)uVar21);
  }
  return lVar13;
}


