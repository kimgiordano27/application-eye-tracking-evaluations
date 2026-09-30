/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 0776ac08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (long param_1,undefined1 param_2 [16],double param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  long lVar19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int unaff_w25;
  long unaff_x27;
  long unaff_x28;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000070;
  double in_stack_00000078;
  double in_stack_00000080;
  double in_stack_00000088;
  double in_stack_00000090;
  double in_stack_00000098;
  long in_stack_000000a8;
  
  do {
    lVar7 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_078c4d74();
    do {
      lVar7 = FUN_0775abb4(unaff_x27);
      if ((lVar7 == 0) || (uVar5 = FUN_0952fcb8(lVar7,0), unaff_x21 == 0)) goto LAB_0776be8c;
      uVar8 = FUN_0731ca6c(unaff_x21,uVar5,&stack0x000000a8,*(undefined8 *)PTR_DAT_09f31390);
      if ((uVar8 & 1) == 0) {
        uVar5 = FUN_094d3ba4(lVar7,0);
        in_stack_000000a8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31398,uVar5);
        if (in_stack_000000a8 == 0) goto LAB_0776be8c;
        if (*(int *)(in_stack_000000a8 + 0x18) == 0) goto LAB_0776be88;
        FUN_0775fa84(lVar7,in_stack_000000a8 + 0x20);
        iVar6 = FUN_094d3ba4(lVar7,0);
        if (0 < iVar6) {
          uVar8 = 0;
          lVar19 = 0x31;
          do {
            if (in_stack_000000a8 == 0) goto LAB_0776be8c;
            if (*(uint *)(in_stack_000000a8 + 0x18) <= uVar8) goto LAB_0776be88;
            FUN_0775f248(lVar7,in_stack_000000a8 + lVar19 + -0x11,uVar8 & 0xffffffff,0);
            if (in_stack_000000a8 == 0) goto LAB_0776be8c;
            if (((int)*(ulong *)(in_stack_000000a8 + 0x18) == 0) ||
               ((*(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff) <= uVar8)) goto LAB_0776be88;
            uVar8 = uVar8 + 1;
            *(undefined1 *)(in_stack_000000a8 + lVar19) = *(undefined1 *)(in_stack_000000a8 + 0x31);
            iVar6 = FUN_094d3ba4(lVar7,0);
            lVar19 = lVar19 + 0x18;
          } while ((long)uVar8 < (long)iVar6);
        }
        uVar5 = FUN_0952fcb8(lVar7,0);
        FUN_0731afd4(unaff_x21,uVar5,in_stack_000000a8,*(undefined8 *)PTR_DAT_09f31388);
      }
      if (in_stack_000000a8 == 0) goto LAB_0776be8c;
      lVar7 = 0;
      uVar8 = 0;
      lVar19 = in_stack_000000a8;
      while( true ) {
        if ((long)*(int *)(unaff_x28 + 0x18) <= (long)uVar8) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_0776be88;
        lVar10 = lVar19 + lVar7;
        if (*(char *)(lVar10 + 0x30) != '\0') {
          in_stack_00000080 = (double)(float)*(undefined8 *)(lVar10 + 0x20);
          in_stack_00000088 = (double)(float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
          in_stack_00000090 = (double)(float)*(undefined8 *)(lVar10 + 0x28);
          in_stack_00000098 = (double)(float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
          plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,7);
          if (plVar9 == (long *)0x0) goto LAB_0776be8c;
          if ((unaff_x27 != 0) &&
             (lVar19 = thunk_FUN_04485110(unaff_x27,*(undefined8 *)(*plVar9 + 0x40)), lVar19 == 0))
          {
LAB_0776be90:
            uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar15,0);
          }
          if ((int)plVar9[3] == 0) goto LAB_0776be88;
          plVar9[4] = unaff_x27;
          thunk_FUN_044bb4b4(plVar9 + 4,unaff_x27);
          fStack0000000000000038 = (float)uVar8;
          lVar19 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000038);
          if ((lVar19 != 0) &&
             (lVar10 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar9 + 3) < 2) goto LAB_0776be88;
          plVar9[5] = lVar19;
          thunk_FUN_044bb4b4(plVar9 + 5,lVar19);
          if (*(uint *)(unaff_x28 + 0x18) <= uVar8) goto LAB_0776be88;
          lVar19 = *(long *)(unaff_x28 + 0x20 + uVar8 * 8);
          if ((lVar19 != 0) &&
             (lVar10 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar9 + 3) < 3) goto LAB_0776be88;
          plVar9[6] = lVar19;
          thunk_FUN_044bb4b4(plVar9 + 6,lVar19);
          lVar19 = FUN_07a256d8(&stack0x00000080,*unaff_x22,0);
          if ((lVar19 != 0) &&
             (lVar10 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar9 + 3) < 4) goto LAB_0776be88;
          plVar9[7] = lVar19;
          thunk_FUN_044bb4b4(plVar9 + 7,lVar19);
          lVar19 = FUN_07a256d8();
          if ((lVar19 != 0) &&
             (lVar10 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar9 + 3) < 5) goto LAB_0776be88;
          plVar9[8] = lVar19;
          thunk_FUN_044bb4b4(plVar9 + 8,lVar19);
          in_stack_00000078 = in_stack_00000080 + in_stack_00000090;
          lVar19 = FUN_07a256d8(&stack0x00000078,*unaff_x22,0);
          if ((lVar19 != 0) &&
             (lVar10 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar9 + 3) < 6) goto LAB_0776be88;
          plVar9[9] = lVar19;
          thunk_FUN_044bb4b4(plVar9 + 9,lVar19);
          in_stack_00000078 = in_stack_00000088 + in_stack_00000098;
          param_3 = in_stack_00000098;
          lVar19 = FUN_07a256d8(&stack0x00000078,*unaff_x22,0);
          if ((lVar19 != 0) &&
             (lVar10 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar9 + 3) < 7) goto LAB_0776be88;
          plVar9[10] = lVar19;
          thunk_FUN_044bb4b4(plVar9 + 10,lVar19);
          if (unaff_x23 == (long *)0x0) goto LAB_0776be8c;
          FUN_078c4d74();
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar19 = *(long *)(lVar10 + 0x38);
          if (lVar19 == 0) {
            FUN_04482014(lVar10);
            lVar19 = *(long *)(lVar10 + 0x38);
          }
          lVar19 = *(long *)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = FUN_04481fb8();
          }
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar19 = *(long *)(lVar10 + 0x38);
          if (lVar19 == 0) {
            FUN_04482014(lVar10);
            lVar19 = *(long *)(lVar10 + 0x38);
          }
          lVar19 = *(long *)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = FUN_04481fb8();
          }
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar19 = *(long *)(lVar10 + 0x38);
          if (lVar19 == 0) {
            FUN_04482014(lVar10);
            lVar19 = *(long *)(lVar10 + 0x38);
          }
          lVar19 = *(long *)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = FUN_04481fb8();
          }
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar10 = *(long *)PTR_DAT_09f22e40;
          lVar19 = *(long *)(lVar10 + 0x38);
          if (lVar19 == 0) {
            FUN_04482014(lVar10);
            lVar19 = *(long *)(lVar10 + 0x38);
          }
          lVar19 = *(long *)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
            lVar19 = FUN_04481fb8();
          }
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar19 = in_stack_000000a8;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x18;
        if (lVar19 == 0) goto LAB_0776be8c;
      }
      if (*(uint *)(lVar19 + 0x18) == 0) goto LAB_0776be88;
      if (*(char *)(lVar19 + 0x31) != '\0') {
        FUN_05badb74(in_stack_00000028,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
        if (unaff_x23 == (long *)0x0) goto LAB_0776be8c;
        FUN_078c415c();
        lVar19 = *(long *)PTR_DAT_09f22e40;
        lVar7 = *(long *)(lVar19 + 0x38);
        if (lVar7 == 0) {
          FUN_04482014(lVar19);
          lVar7 = *(long *)(lVar19 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_078c4d74();
        lVar19 = *(long *)PTR_DAT_09f22e40;
        lVar7 = *(long *)(lVar19 + 0x38);
        if (lVar7 == 0) {
          FUN_04482014(lVar19);
          lVar7 = *(long *)(lVar19 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_078c4d74();
        lVar19 = *(long *)PTR_DAT_09f22e40;
        lVar7 = *(long *)(lVar19 + 0x38);
        if (lVar7 == 0) {
          FUN_04482014(lVar19);
          lVar7 = *(long *)(lVar19 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_078c4d74();
      }
      do {
        puVar2 = PTR_DAT_09f32f78;
        unaff_w25 = unaff_w25 + 1;
        if (*(int *)(in_stack_00000028 + 0x18) <= unaff_w25) {
          lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32f90);
          FUN_07441bc0(lVar7,*(undefined8 *)puVar2);
          puVar4 = PTR_DAT_09f32f70;
          puVar3 = PTR_DAT_09f32f68;
          puVar2 = PTR_DAT_09f30c10;
          if (*(int *)(in_stack_00000028 + 0x18) < 1) goto LAB_0776b5dc;
          iVar6 = 0;
          goto 
          Meta_XR_MultiplayerBlocks_Colocation_NetworkDataUtils__GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
          ;
        }
        unaff_x27 = FUN_05badb74(in_stack_00000028,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar8 = FUN_0952c404(unaff_x27,0,0);
      } while ((uVar8 & 1) != 0);
      FUN_05badb74(in_stack_00000028,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
      unaff_x28 = FUN_0775e914();
      if (unaff_x28 == 0) goto LAB_0776be8c;
      unaff_x21 = in_stack_00000020;
    } while (*(int *)(unaff_x28 + 0x18) < 2);
    lVar7 = FUN_05badb74(in_stack_00000028,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
    if (lVar7 == 0) goto LAB_0776be8c;
    thunk_FUN_0952ff6c(lVar7,0);
    fStack0000000000000038 = (float)*(undefined8 *)(unaff_x28 + 0x18);
    thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000038);
    if (unaff_x23 == (long *)0x0) goto LAB_0776be8c;
    FUN_078c4cb8();
    lVar19 = *(long *)PTR_DAT_09f22e40;
    lVar7 = *(long *)(lVar19 + 0x38);
    if (lVar7 == 0) {
      FUN_04482014(lVar19);
      lVar7 = *(long *)(lVar19 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_078c4d74();
    unaff_x19 = *(long *)PTR_DAT_09f22e40;
    param_1 = *(long *)(unaff_x19 + 0x38);
    if (param_1 == 0) {
      FUN_04482014(unaff_x19);
      param_1 = *(long *)(unaff_x19 + 0x38);
    }
  } while( true );

  Meta_XR_MultiplayerBlocks_Colocation_NetworkDataUtils__GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
  :
  do {
    uVar15 = FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar8 = FUN_09531730(uVar15,0,0);
    if ((uVar8 & 1) != 0) {
      FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
      lVar19 = FUN_0775e914();
      if (lVar19 == 0) goto LAB_0776be8c;
      if (0 < (int)*(ulong *)(lVar19 + 0x18)) {
        uVar8 = 0;
        uVar16 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
        lVar10 = lVar19 + 0x20;
        do {
          if (uVar16 <= uVar8) goto LAB_0776be88;
          uVar15 = *(undefined8 *)(lVar10 + uVar8 * 8);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar16 = FUN_09531730(uVar15,0,0);
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_0776be88;
            if (lVar7 == 0) goto LAB_0776be8c;
            uVar16 = FUN_074444a8(lVar7,*(undefined8 *)(lVar10 + uVar8 * 8),&stack0x00000070,
                                  *(undefined8 *)puVar4);
            if ((uVar16 & 1) == 0) {
              lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
              FUN_05bad610(lVar11,*(undefined8 *)PTR_DAT_09f1e860);
              in_stack_00000070 = lVar11;
              if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_0776be88;
              FUN_0744298c(lVar7,*(undefined8 *)(lVar10 + uVar8 * 8),lVar11,*(undefined8 *)puVar3);
            }
            lVar11 = in_stack_00000070;
            uVar15 = FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
            if (lVar11 == 0) goto LAB_0776be8c;
            uVar16 = FUN_05bae1d4(lVar11,uVar15,*(undefined8 *)puVar2);
            lVar11 = in_stack_00000070;
            if ((uVar16 & 1) == 0) {
              uVar15 = FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
              if (lVar11 == 0) goto LAB_0776be8c;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar18 = *(long *)PTR_DAT_09f1e870;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0776be8c;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
                thunk_FUN_044bb4b4();
              }
              else {
                FUN_05bade44(lVar11,uVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar16 = (ulong)*(uint *)(lVar19 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar19 + 0x18));
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < *(int *)(in_stack_00000028 + 0x18));
LAB_0776b5dc:
  puVar3 = PTR_DAT_09f32e80;
  puVar2 = PTR_DAT_09f30dd0;
  if (in_stack_00000018 != 0) {
    if (0 < (int)*(ulong *)(in_stack_00000018 + 0x18)) {
      uVar8 = 0;
      uVar16 = *(ulong *)(in_stack_00000018 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar8) {
LAB_0776be88:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar9 = (long *)(in_stack_00000018 + uVar8 * 8 + 0x20);
        lVar19 = *plVar9;
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar16 = FUN_09531730(lVar19,0,0);
        if ((uVar16 & 1) == 0) {
          if (*(uint *)(in_stack_00000018 + 0x18) <= uVar8) goto LAB_0776be88;
          if ((*plVar9 == 0) || (lVar19 = FUN_094e2354(*plVar9,0), lVar19 == 0)) goto LAB_0776be8c;
          uVar15 = thunk_FUN_0952ff6c(lVar19,0);
        }
        else {
          uVar15 = *(undefined8 *)PTR_DAT_09f33010;
        }
        if (*(uint *)(in_stack_00000018 + 0x18) <= uVar8) goto LAB_0776be88;
        lVar19 = *plVar9;
        uVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30e70);
        FUN_05bad610(uVar12,*(undefined8 *)PTR_DAT_09f30e78);
        uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1f070);
        FUN_05bad610(uVar13,*(undefined8 *)PTR_DAT_09f1f078);
        uVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32fc0);
        FUN_05bad610(uVar14,*(undefined8 *)PTR_DAT_09f32fb8);
        lVar19 = FUN_07769854(in_stack_00000010,lVar19,uVar12,in_stack_00000028,uVar13,
                              in_stack_00000008,uVar14);
        lVar10 = *(long *)puVar2;
        uVar5 = *(undefined4 *)(in_stack_00000010 + 0x10);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar10);
        }
        FUN_0777ff38(lVar19,uVar5,0);
        if ((lVar7 == 0) ||
           (lVar10 = FUN_0744266c(lVar7,*(undefined8 *)PTR_DAT_09f32f88), lVar10 == 0))
        goto LAB_0776be8c;
        FUN_058cf098(&stack0x00000038,lVar10,*(undefined8 *)PTR_DAT_09f32fb0);
        in_stack_00000058 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000050 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
        in_stack_00000060 = in_stack_00000048;
        while (uVar16 = FUN_05260c20(&stack0x00000050,*(undefined8 *)PTR_DAT_09f32fa0),
              lVar10 = in_stack_00000060, (uVar16 & 1) != 0) {
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar11 = *(long *)(lVar19 + 0x70);
          if (lVar11 == 0) {
LAB_0776bbf4:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          iVar6 = 0;
          while (iVar6 < *(int *)(lVar11 + 0x18)) {
            lVar11 = FUN_05badb74(lVar11,iVar6,*(undefined8 *)puVar3);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar16 = FUN_094e2b8c(lVar10,*(undefined8 *)(lVar11 + 0x10),0);
            dVar22 = param_3;
            if ((uVar16 & 1) != 0) {
              if (*(long *)(lVar19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar11 = FUN_05badb74(*(long *)(lVar19 + 0x70),iVar6,*(undefined8 *)puVar3);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar17 = *(long *)puVar2;
              uVar12 = *(undefined8 *)(lVar11 + 0x10);
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_044a54b4(lVar17);
              }
              lVar11 = FUN_07780320(uVar15,lVar10,uVar12,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar16 = FUN_09531730(lVar11,0,0);
              dVar22 = param_3;
              if ((uVar16 & 1) != 0) {
                if (*(long *)(lVar19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar17 = FUN_05badb74(*(long *)(lVar19 + 0x70),iVar6,*(undefined8 *)puVar3);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                fVar20 = (float)FUN_094ea7b0(lVar10,*(undefined8 *)(lVar17 + 0x10),0);
                if (*(long *)(lVar19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                dVar22 = param_3;
                lVar17 = FUN_05badb74(*(long *)(lVar19 + 0x70),iVar6,*(undefined8 *)puVar3);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                fVar21 = (float)FUN_094ea7dc(lVar10,*(undefined8 *)(lVar17 + 0x10),0);
                fVar24 = SUB84(dVar22,0);
                fVar23 = SUB84(param_3,0);
                if ((((fVar20 < 0.0) || (1.0 < fVar23 + fVar24)) || (fVar23 < 0.0)) ||
                   (1.0 < fVar20 + fVar21)) {
                  plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,5);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar17 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar9 + 0x40));
                  if (lVar17 == 0) {
                    uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar15,0);
                  }
                  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar9[4] = lVar10;
                  thunk_FUN_044bb4b4(plVar9 + 4,lVar10);
                  uVar12 = FUN_0744290c(lVar7,lVar10,*(undefined8 *)PTR_DAT_09f32f80);
                  lVar17 = FUN_0776bed4(uVar12,uVar12);
                  if ((lVar17 != 0) &&
                     (lVar18 = thunk_FUN_04485110(lVar17,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar18 == 0)) {
                    uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar15,0);
                  }
                  if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar9[5] = lVar17;
                  thunk_FUN_044bb4b4(plVar9 + 5,lVar17);
                  if ((lVar11 != 0) &&
                     (lVar17 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar17 == 0)) {
                    uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar15,0);
                  }
                  if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar9[6] = lVar11;
                  thunk_FUN_044bb4b4(plVar9 + 6,lVar11);
                  uStack0000000000000040 = 0;
                  fStack0000000000000038 = fVar21;
                  fStack000000000000003c = fVar24;
                  lVar11 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1e740,&stack0x00000038);
                  if ((lVar11 != 0) &&
                     (lVar17 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar17 == 0)) {
                    uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar15,0);
                  }
                  if (*(uint *)(plVar9 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar9[7] = lVar11;
                  thunk_FUN_044bb4b4(plVar9 + 7,lVar11);
                  fStack0000000000000030 = fVar20;
                  fStack0000000000000034 = fVar23;
                  lVar11 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1fb40,&stack0x00000030);
                  if ((lVar11 != 0) &&
                     (lVar17 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar17 == 0)) {
                    uVar15 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar15,0);
                  }
                  if (*(uint *)(plVar9 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar9[8] = lVar11;
                  thunk_FUN_044bb4b4(plVar9 + 8,lVar11);
                  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  FUN_078c4d74();
                  lVar17 = *(long *)PTR_DAT_09f22e40;
                  lVar11 = *(long *)(lVar17 + 0x38);
                  if (lVar11 == 0) {
                    FUN_04482014(lVar17);
                    lVar11 = *(long *)(lVar17 + 0x38);
                  }
                  lVar11 = *(long *)(lVar11 + 0x10);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_04481fb8();
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_04481fb8();
                  }
                  FUN_078c4d74();
                  lVar17 = *(long *)PTR_DAT_09f22e40;
                  lVar11 = *(long *)(lVar17 + 0x38);
                  if (lVar11 == 0) {
                    FUN_04482014(lVar17);
                    lVar11 = *(long *)(lVar17 + 0x38);
                  }
                  lVar11 = *(long *)(lVar11 + 0x10);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_04481fb8();
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_04481fb8();
                  }
                  FUN_078c4d74();
                  lVar17 = *(long *)PTR_DAT_09f22e40;
                  lVar11 = *(long *)(lVar17 + 0x38);
                  if (lVar11 == 0) {
                    FUN_04482014(lVar17);
                    lVar11 = *(long *)(lVar17 + 0x38);
                  }
                  lVar11 = *(long *)(lVar11 + 0x10);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_04481fb8();
                  }
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar17 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_04481fb8();
                  }
                  FUN_078c4d74();
                }
              }
            }
            lVar11 = *(long *)(lVar19 + 0x70);
            iVar6 = iVar6 + 1;
            param_3 = dVar22;
            if (lVar11 == 0) goto LAB_0776bbf4;
          }
        }
        FUN_05260c1c(&stack0x00000050,*(undefined8 *)PTR_DAT_09f32f98);
        uVar16 = (ulong)*(uint *)(in_stack_00000018 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000018 + 0x18));
    }
    puVar2 = PTR_DAT_09f1e540;
    if (unaff_x23 != (long *)0x0) {
      iVar6 = FUN_078bb6fc();
      puVar3 = PTR_DAT_09f32fe0;
      if (iVar6 == 0) {
        uVar15 = *(undefined8 *)PTR_DAT_09f33030;
      }
      else {
        uVar15 = (**(code **)(*unaff_x23 + 0x168))();
        uVar15 = FUN_078a7764(*(undefined8 *)puVar3,uVar15,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(uVar15,0);
      return;
    }
  }
LAB_0776be8c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


