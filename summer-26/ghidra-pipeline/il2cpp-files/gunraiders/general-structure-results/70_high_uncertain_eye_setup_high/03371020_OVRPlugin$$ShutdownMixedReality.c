/*
FUNCTION_NAME: OVRPlugin$$ShutdownMixedReality
ENTRY_POINT: 03371020
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShutdownMixedReality(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long in_x6;
  undefined8 *puVar9;
  uint in_w8;
  uint uVar10;
  long in_x12;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  undefined8 uVar14;
  long unaff_x22;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint unaff_w26;
  int iVar18;
  int iVar19;
  uint unaff_w29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iStack0000000000000038;
  int iStack000000000000003c;
  ushort uStack0000000000000048;
  char cStack000000000000004c;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  int iStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  
  puVar7 = *(undefined8 **)(param_2 + 0xcf8);
  puVar9 = *(undefined8 **)(in_x6 + 0x370);
  uVar1 = unaff_w26 + 1;
  iVar13 = 0;
  uVar11 = 0;
  uVar12 = 0;
  iVar18 = 0;
  uVar16 = unaff_w29;
  uVar10 = unaff_w26;
  uVar15 = unaff_w29;
  do {
    uVar3 = *(ushort *)(unaff_x22 + (long)(int)uVar10 * 2 + 0x20);
    if ((uVar3 == 0x65) || (uVar3 == 0x45)) {
LAB_0337111c:
      param_1 = 3;
      if ((uVar10 == unaff_w26) || (uVar10 == uVar15)) goto LAB_03370fc0;
      uVar17 = uVar10 + 1;
      if (uVar17 == unaff_w29) goto LAB_03370fbc;
      uVar2 = uVar10;
      if ((int)unaff_w29 <= (int)uVar15) {
        uVar2 = uVar16;
      }
      if (in_w8 <= uVar17) break;
      sVar4 = *(short *)(unaff_x22 + (long)(int)uVar17 * 2 + 0x20);
      if (sVar4 == 0x2b) {
        bVar6 = false;
        uVar17 = uVar10 + 2;
      }
      else if (sVar4 == 0x2d) {
        uVar17 = uVar10 + 2;
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      uVar10 = uVar17;
      if ((int)uVar17 < (int)unaff_w29) {
        iVar19 = iVar18;
        uVar16 = uVar17;
        if (uVar17 <= in_w8) {
          uVar16 = in_w8;
        }
        do {
          if (uVar16 == uVar17) goto LAB_03371884;
          uVar10 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar17 * 2 + 0x20);
          if (9 < uVar10 - 0x30) goto LAB_03370fbc;
          iVar18 = uVar10 + iVar19 * 10 + -0x30;
          uVar17 = uVar17 + 1;
          if (iVar18 <= iVar19) {
            iVar18 = iVar19;
          }
          iVar19 = iVar18;
          uVar10 = unaff_w29;
        } while (unaff_w29 != uVar17);
      }
      iVar19 = -iVar18;
      uVar16 = uVar2;
      if (!bVar6) {
        iVar19 = iVar18;
      }
    }
    else {
      uVar17 = (uint)uVar3;
      iVar19 = iVar18;
      if (uVar17 != 0x2e) {
        if (uVar17 - 0x30 < 10) {
          if ((uVar10 != unaff_w26 || uVar17 != 0x30) || (uVar10 = unaff_w29, unaff_w20 == 1)) {
            if (0x1c < iStack000000000000003c) {
LAB_03371200:
              if (cStack000000000000004c == '\0') {
                param_1 = FUN_02f1dd74((long)&stack0x00000048 + 4,uVar3,*puVar7);
                puVar7 = (undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<RoomStatsManager_PhotonRoomInfo>_Dispose__
                ;
                puVar9 = (undefined8 *)PTR_DAT_04231370;
              }
              iVar13 = iVar13 + 1;
              goto LAB_033711d8;
            }
            if (iStack000000000000003c == 0x1c) {
              if ((uStack0000000000000048 & 0xff) == 0) {
                if (uVar12 < 0x6df37f675ef6eae0) {
                  if (uVar12 == 0x6df37f675ef6eadf) {
                    if (uVar11 < 0x151fa39a) {
                      bVar6 = uVar11 == 0x151fa399 && 0x35 < uVar17;
                    }
                    else {
                      bVar6 = true;
                    }
                  }
                  else {
                    bVar6 = false;
                  }
                }
                else {
                  bVar6 = true;
                }
                param_1 = System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
                                    (&stack0x00000048,bVar6,*puVar9);
                puVar9 = (undefined8 *)PTR_DAT_04231370;
                puVar7 = (undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<RoomStatsManager_PhotonRoomInfo>_Dispose__
                ;
              }
              if (0xff < uStack0000000000000048) goto LAB_03371200;
LAB_033713a4:
              uVar11 = ((ulong)uVar3 + uVar11 * 10) - 0x30;
            }
            else {
              if (0x12 < iStack000000000000003c) goto LAB_033713a4;
              uVar12 = ((ulong)uVar3 + uVar12 * 10) - 0x30;
            }
            iStack000000000000003c = iStack000000000000003c + 1;
            goto LAB_033711d8;
          }
          if (in_w8 <= uVar1) break;
          sVar4 = *(short *)(unaff_x22 + (long)(int)uVar1 * 2 + 0x20);
          uVar10 = uVar1;
          if (sVar4 == 0x2e) goto LAB_0337109c;
          if ((sVar4 == 0x45) || (sVar4 == 0x65)) goto LAB_0337111c;
        }
LAB_03370fbc:
        param_1 = 3;
        goto LAB_03370fc0;
      }
      if (uVar10 == unaff_w26) goto LAB_03370fbc;
LAB_0337109c:
      param_1 = 3;
      if ((uVar15 != unaff_w29) || (uVar15 = uVar10 + 1, uVar15 == unaff_w29)) goto LAB_03370fc0;
    }
LAB_033711d8:
    iVar18 = iVar19;
    puVar5 = PTR_DAT_04230108;
    uVar10 = uVar10 + 1;
    if ((int)unaff_w29 <= (int)uVar10) {
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar13 = iVar18 + iVar13 + (uVar15 - uVar16);
      auVar20 = FUN_03330158(uVar12,0);
      if (iStack000000000000003c + -0x13 == 0 || iStack000000000000003c < 0x13) {
        *(long *)*unaff_x19 = auVar20._0_8_;
      }
      else {
        _cStack0000000000000060 = 0;
        in_stack_00000068 = 0;
        FUN_0332c71c(&stack0x00000060,1,0,0,0,iStack000000000000003c + -0x13,0);
        auVar20 = FUN_03330670(auVar20._0_8_,auVar20._8_8_,_cStack0000000000000060,in_stack_00000068
                               ,0);
        auVar21 = FUN_03330158(uVar11,0);
        auVar20 = FUN_03330458(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
        *(long *)*unaff_x19 = auVar20._0_8_;
      }
      uVar8 = auVar20._8_8_;
      uVar14 = auVar20._0_8_;
      *(undefined8 *)(*unaff_x19 + 8) = uVar8;
      if (iVar13 < 1) {
        if ((_cStack000000000000004c & 0xff) == 0) {
          uVar11 = 0;
        }
        else {
          _cStack0000000000000060 = 0;
          FUN_02f20da0(&stack0x00000060,_cStack000000000000004c >> 0x10,
                       *(undefined8 *)PTR_DAT_04230980);
          uVar11 = _cStack0000000000000060;
        }
        if (((-0x1d < iVar13) && ((uVar11 & 0xff) != 0)) && (0x34 < (int)(uVar11 >> 0x20))) {
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar14 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          auVar20 = FUN_033303e8(uVar8,uVar14,0);
          *unaff_x19 = auVar20;
        }
        if (-1 < iVar13) goto LAB_0337183c;
        if (0 < iVar13 + iStack000000000000003c + 0x1c) {
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar14 = *(undefined8 *)(*unaff_x19 + 8);
          auVar21 = *unaff_x19;
          auVar20 = *unaff_x19;
          if (iVar13 < -0x1c) {
            _cStack0000000000000060 = 0;
            in_stack_00000068 = 0;
            FUN_0332c71c(&stack0x00000060,0x10000000,0x3e250261,0x204fce5e,0,0,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            auVar20 = FUN_03330670(uVar8,uVar14,_cStack0000000000000060,in_stack_00000068,0);
            *unaff_x19 = auVar20;
            in_stack_00000050 = 0;
            in_stack_00000058 = 0;
            FUN_0332c71c(&stack0x00000050,1,0,0,0,-0x1c - iVar13,0);
            uVar11 = in_stack_00000050;
            uVar8 = in_stack_00000058;
          }
          else {
            _cStack0000000000000060 = 0;
            in_stack_00000068 = 0;
            FUN_0332c71c(&stack0x00000060,1,0,0,0,-iVar13,0);
            uVar11 = _cStack0000000000000060;
            uVar8 = in_stack_00000068;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              uVar11 = _cStack0000000000000060;
              uVar8 = in_stack_00000068;
              auVar20 = auVar21;
            }
          }
          auVar20 = FUN_033305c0(auVar20._0_8_,auVar20._8_8_,uVar11,uVar8,0);
          goto LAB_03371838;
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        in_stack_00000078 = (*(undefined8 **)(*(long *)puVar5 + 0xb8))[1];
        in_stack_00000070 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000078;
        *(undefined8 *)*unaff_x19 = in_stack_00000070;
      }
      else {
        if (0x1d < iVar13 + iStack000000000000003c) {
LAB_03371548:
          param_1 = 2;
          goto LAB_03370fc0;
        }
        if (iVar13 + iStack000000000000003c == 0x1d) {
          if (iVar13 < 2) {
            _cStack0000000000000060 = 0;
            in_stack_00000068 = 0;
            FUN_0332c71c(&stack0x00000060,0x99999999,0x99999999,0x19999999,0,0,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_03330720(uVar14,uVar8,_cStack0000000000000060,in_stack_00000068,0);
            if (((uVar11 & 1) != 0) && ((_cStack000000000000004c & 0xff) != 0)) {
              _cStack0000000000000060 = 0;
              FUN_02f20da0(&stack0x00000060,_cStack000000000000004c >> 0x10,
                           *(undefined8 *)PTR_DAT_04230980);
              if ((cStack0000000000000060 != '\0') && (0x35 < iStack0000000000000064))
              goto LAB_03371548;
            }
          }
          else {
            _cStack0000000000000060 = 0;
            in_stack_00000068 = 0;
            FUN_0332c71c(&stack0x00000060,1,0,0,0,iVar13 + -1,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            auVar20 = FUN_03330670(uVar14,uVar8,_cStack0000000000000060,in_stack_00000068,0);
            *unaff_x19 = auVar20;
            in_stack_00000050 = 0;
            in_stack_00000058 = 0;
            FUN_0332c71c(&stack0x00000050,0x99999999,0x99999999,0x19999999,0,0,0);
            uVar11 = FUN_0333095c(auVar20._0_8_,auVar20._8_8_,in_stack_00000050,in_stack_00000058,0)
            ;
            if ((uVar11 & 1) != 0) goto LAB_03371548;
          }
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar14 = *(undefined8 *)(*unaff_x19 + 8);
          _cStack0000000000000060 = 0;
          in_stack_00000068 = 0;
          FUN_0332bc20(&stack0x00000060,10,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          auVar20 = FUN_033305c0(uVar8,uVar14,_cStack0000000000000060,in_stack_00000068,0);
        }
        else {
          _cStack0000000000000060 = 0;
          in_stack_00000068 = 0;
          FUN_0332c71c(&stack0x00000060,1,0,0,0,iVar13,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          auVar20 = FUN_03330670(uVar14,uVar8,_cStack0000000000000060,in_stack_00000068,0);
        }
LAB_03371838:
        *unaff_x19 = auVar20;
LAB_0337183c:
        if (iStack0000000000000038 == 0x2d) {
          uVar8 = *(undefined8 *)*unaff_x19;
          uVar14 = *(undefined8 *)(*unaff_x19 + 8);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          auVar20 = FUN_033303e0(uVar8,uVar14,0);
          *unaff_x19 = auVar20;
          param_1 = 1;
          goto LAB_03370fc0;
        }
      }
      param_1 = 1;
LAB_03370fc0:
      if (*(long *)(in_x12 + 0x28) != in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
      }
      return;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  } while (uVar10 < in_w8);
LAB_03371884:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac(param_1);
}


