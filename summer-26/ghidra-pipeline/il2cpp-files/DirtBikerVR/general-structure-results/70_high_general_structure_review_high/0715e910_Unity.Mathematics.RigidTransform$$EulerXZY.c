/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$EulerXZY
ENTRY_POINT: 0715e910
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_10
*/


void Unity_Mathematics_RigidTransform__EulerXZY(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  undefined1 auVar22 [16];
  long lStack0000000000000008;
  ulong in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_03a8a718(PTR_DAT_084e43b0);
  FUN_03a8a718(PTR_DAT_084e4380);
  FUN_03a8a718(PTR_DAT_084870e8);
  FUN_03a8a718(PTR_DAT_08488b28);
  FUN_03a8a718(PTR_DAT_084e4358);
  FUN_03a8a718(PTR_DAT_084e43b8);
  FUN_03a8a718(PTR_DAT_084e2cd0);
  FUN_03a8a718(PTR_DAT_084e43c0);
  FUN_03a8a718(PTR_DAT_084e3a90);
  FUN_03a8a718(PTR_DAT_084e43c8);
  FUN_03a8a718(PTR_DAT_084e43d0);
  FUN_03a8a718(PTR_DAT_084e43d8);
  FUN_03a8a718(PTR_DAT_084e4360);
  FUN_03a8a718(PTR_DAT_084e3ad0);
  FUN_03a8a718(PTR_DAT_084e05b8);
  FUN_03a8a718(PTR_DAT_084e3b78);
  FUN_03a8a718(PTR_DAT_084cdbb8);
  *(undefined1 *)(unaff_x21 + 0x240) = 1;
  in_stack_00000070 = 0;
  in_stack_00000078 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  lVar7 = thunk_FUN_03ac74bc(*unaff_x20);
  FUN_0719a6b8(lVar7,0);
  _uStack0000000000000040 = _uStack0000000000000040 & 0xffffffff00000000;
  FUN_070cd290(&stack0x00000040,0x58,0x52,0x53,0x30,0);
  puVar4 = PTR_DAT_08488b28;
  puVar2 = PTR_DAT_084870e8;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x28) = uStack0000000000000040;
    puVar3 = PTR_DAT_084870f0;
    FUN_0719a1b4(lVar7,*(undefined8 *)(unaff_x19 + 0x10),0);
    in_stack_00000058._4_2_ = 0;
    FUN_05294928((long)&stack0x00000058 + 4,1,*(undefined8 *)puVar4);
    *(undefined2 *)(lVar7 + 0x38) = in_stack_00000058._4_2_;
    uVar8 = FUN_065cd268(*(undefined8 *)(unaff_x19 + 0x10),0);
    lStack0000000000000008 = 0;
    if ((uVar8 & 1) == 0) {
      uVar19 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_08492148 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lStack0000000000000008 = Unity_Mathematics_uint3x3__op_Equality(uVar19,0);
    }
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_04de7d48(lVar9,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_04de7d48(lVar10,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_084e4358;
    puVar4 = PTR_DAT_084920f8;
    puVar2 = PTR_DAT_084870f8;
    lVar15 = *(long *)(unaff_x19 + 0x20);
    if (lVar15 != 0) {
      uVar20 = 0;
      iVar21 = 0;
      do {
        puVar5 = PTR_DAT_084e4398;
        lVar15 = *(long *)(lVar15 + 0x30);
        if (lVar15 == 0) break;
        if (*(int *)(lVar15 + 0x18) <= iVar21) {
          FUN_0719a488(lVar7,0);
          return;
        }
        FUN_04ee134c(&stack0x00000040,lVar15,iVar21,*(undefined8 *)PTR_DAT_084e4380);
        uVar19 = in_stack_00000050;
        puVar16 = in_stack_00000048;
        uVar8 = _uStack0000000000000040;
        if (lVar10 == 0) break;
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                    (*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        if (puVar16 != (undefined8 *)0x0) {
          FUN_04ecd464(&stack0x00000040,puVar16,*(undefined8 *)PTR_DAT_084e43a8);
          in_stack_00000080 = in_stack_00000050;
          in_stack_00000078 = in_stack_00000048;
          in_stack_00000070 = _uStack0000000000000040;
          _uStack0000000000000040 = 0;
          in_stack_00000048 = &stack0x00000070;
          while( true ) {
            uVar11 = FUN_061e56a8(&stack0x00000070,*(undefined8 *)puVar5);
            uVar13 = in_stack_00000080;
            if ((uVar11 & 1) == 0) break;
            uVar11 = FUN_065cd268(in_stack_00000080,0);
            if ((uVar11 & 1) == 0) {
              lVar15 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar6 = *(uint *)(lVar10 + 0x18);
              if (uVar6 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar6 + 1;
                puVar12 = (undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
                *puVar12 = uVar13;
                thunk_FUN_03afed3c(puVar12,uVar13);
              }
              else {
                FUN_04de85b0(lVar10,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_061e56a4(&stack0x00000070,*(undefined8 *)PTR_DAT_084e4390);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar15 = FUN_0715df80(uVar8,1);
        if (lStack0000000000000008 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar15 = FUN_0715e528(lStack0000000000000008,lVar15);
        }
        if (lVar15 == 0) break;
        lVar15 = FUN_065d1f84(lVar15,0);
        if (lVar15 == 0) break;
        uVar11 = FUN_065d2580(lVar15,0x2f,0);
        if ((uVar11 & 1) != 0) {
          uVar13 = FUN_0715e6c0(uVar11,lVar15);
          if (lVar9 == 0) break;
          uVar11 = FUN_04de894c(lVar9,uVar13,*(undefined8 *)PTR_DAT_08490f58);
          if ((uVar11 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x20) == 0) break;
            uVar11 = FUN_0715e6f8(uVar11,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),iVar21)
            ;
            if ((uVar11 & 1) != 0) {
              auVar22 = FUN_0719a264(lVar7,uVar13,0);
              _in_stack_00000060 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000060,*(undefined8 *)PTR_DAT_084e43c0,0);
              _in_stack_00000060 = auVar22;
              FUN_0719a878(&stack0x00000060,0,0);
              lVar18 = *(long *)puVar2;
              lVar17 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar17 == 0) break;
              uVar6 = *(uint *)(lVar9 + 0x18);
              if (uVar6 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar6 + 1;
                puVar12 = (undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20);
                *puVar12 = uVar13;
                thunk_FUN_03afed3c(puVar12,uVar13);
              }
              else {
                FUN_04de85b0(lVar9,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        in_stack_00000028 = uVar8;
        in_stack_00000030 = puVar16;
        in_stack_00000038 = uVar19;
        uVar6 = FUN_0715decc(&stack0x00000028);
        uVar8 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084e4360
                                   ,0);
        if ((uVar8 & 1) == 0) {
          if ((3 < uVar6) && ((uVar20 & 3) != 0)) {
            uVar20 = (uVar20 & 0xfffffffc) + 4;
          }
        }
        else if (uVar6 < 5) {
          uVar6 = 4;
        }
        iVar1 = (int)uVar19;
        if (iVar1 < 5) {
          if (iVar1 < 3) {
            if (iVar1 == 1) {
              auVar22 = FUN_0719a264(lVar7,lVar15,0);
              _in_stack_00000060 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000060,*(undefined8 *)PTR_DAT_084e05b8,0);
              _in_stack_00000060 = auVar22;
              auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
              lVar15 = *(long *)puVar4;
              _in_stack_00000060 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 4);
            }
            else {
              if (iVar1 != 2) goto LAB_0715f268;
              auVar22 = FUN_0719a264(lVar7,lVar15,0);
              _in_stack_00000060 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000060,*(undefined8 *)PTR_DAT_084cdbb8,0);
              _in_stack_00000060 = auVar22;
              auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
              lVar15 = *(long *)puVar4;
              _in_stack_00000060 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xc);
            }
FUN_0715f200:
            auVar22 = FUN_0719a7fc(&stack0x00000060,uVar14,0);
            goto LAB_0715f254;
          }
          if (iVar1 == 3) {
            auVar22 = FUN_0719a264(lVar7,lVar15,0);
            _in_stack_00000060 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
            _in_stack_00000060 = auVar22;
            auVar22 = FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
            _in_stack_00000060 = auVar22;
            auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
            lVar15 = *(long *)puVar4;
            _in_stack_00000060 = auVar22;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar15 = *(long *)puVar4;
            }
            uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x2c);
            goto FUN_0715f200;
          }
          if (iVar1 == 4) {
            auVar22 = FUN_0719a264(lVar7,lVar15,0);
            _in_stack_00000060 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3ad0,0);
            _in_stack_00000060 = auVar22;
            auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
            lVar17 = *(long *)puVar4;
            _in_stack_00000060 = auVar22;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar17 = *(long *)puVar4;
            }
            auVar22 = FUN_0719a7fc(&stack0x00000060,*(undefined4 *)(*(long *)(lVar17 + 0xb8) + 0x34)
                                   ,0);
            _in_stack_00000060 = auVar22;
            FUN_0719ace4(&stack0x00000060,lVar10,0);
            uVar19 = FUN_065c0764(lVar15,*(undefined8 *)PTR_DAT_084e43d8,0);
            auVar22 = FUN_0719a264(lVar7,uVar19,0);
            puVar5 = PTR_DAT_084e2cd0;
            _in_stack_00000060 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
            _in_stack_00000060 = auVar22;
            FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
            uVar19 = FUN_065c0764(lVar15,*(undefined8 *)PTR_DAT_084e43b8,0);
            auVar22 = FUN_0719a264(lVar7,uVar19,0);
            _in_stack_00000060 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)puVar5,0);
            _in_stack_00000060 = auVar22;
            FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          }
        }
        else {
          if (iVar1 < 8) {
            if (iVar1 == 5) {
              auVar22 = FUN_0719a264(lVar7,lVar15,0);
              _in_stack_00000060 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3b78,0);
              _in_stack_00000060 = auVar22;
              auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
              lVar15 = *(long *)puVar4;
              _in_stack_00000060 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x38);
            }
            else {
              if (iVar1 != 6) goto LAB_0715f268;
              auVar22 = FUN_0719a264(lVar7,lVar15,0);
              _in_stack_00000060 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3a90,0);
              _in_stack_00000060 = auVar22;
              auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
              lVar15 = *(long *)puVar4;
              _in_stack_00000060 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x3c);
            }
            goto FUN_0715f200;
          }
          if (iVar1 == 8) {
            auVar22 = FUN_0719a264(lVar7,lVar15,0);
            puVar16 = (undefined8 *)PTR_DAT_084e43d0;
          }
          else {
            if (iVar1 != 9) goto LAB_0715f268;
            auVar22 = FUN_0719a264(lVar7,lVar15,0);
            puVar16 = (undefined8 *)PTR_DAT_084e43c8;
          }
          _in_stack_00000060 = auVar22;
          auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*puVar16,0);
          _in_stack_00000060 = auVar22;
          auVar22 = FUN_0719a878(&stack0x00000060,uVar20,0);
LAB_0715f254:
          _in_stack_00000060 = auVar22;
          FUN_0719ace4(&stack0x00000060,lVar10,0);
        }
LAB_0715f268:
        uVar20 = uVar20 + uVar6;
        lVar15 = *(long *)(unaff_x19 + 0x20);
        iVar21 = iVar21 + 1;
      } while (lVar15 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


