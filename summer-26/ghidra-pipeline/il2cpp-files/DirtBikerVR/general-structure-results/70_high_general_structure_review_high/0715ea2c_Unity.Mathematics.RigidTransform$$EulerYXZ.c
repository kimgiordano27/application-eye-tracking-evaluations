/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$EulerYXZ
ENTRY_POINT: 0715ea2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_10
*/


void Unity_Mathematics_RigidTransform__EulerYXZ(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 in_w8;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 uVar18;
  uint uVar19;
  int iVar20;
  long unaff_x29;
  undefined1 auVar21 [16];
  long lStack0000000000000008;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined2 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  
  puVar4 = PTR_DAT_08488b28;
  puVar2 = PTR_DAT_084870e8;
  *(undefined4 *)(unaff_x29 + 0x28) = in_w8;
  puVar3 = PTR_DAT_084870f0;
  FUN_0719a1b4();
  uStack000000000000005c = 0;
  FUN_05294928(&stack0x0000005c,1,*(undefined8 *)puVar4);
  *(undefined2 *)(unaff_x29 + 0x38) = uStack000000000000005c;
  uVar8 = FUN_065cd268(*(undefined8 *)(unaff_x19 + 0x10),0);
  lStack0000000000000008 = 0;
  if ((uVar8 & 1) == 0) {
    uVar18 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_08492148 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lStack0000000000000008 = Unity_Mathematics_uint3x3__op_Equality(uVar18,0);
  }
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_04de7d48(lVar9,*(undefined8 *)puVar3);
  lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_04de7d48(lVar10,*(undefined8 *)puVar3);
  puVar4 = PTR_DAT_084e4358;
  puVar3 = PTR_DAT_084920f8;
  puVar2 = PTR_DAT_084870f8;
  lVar14 = *(long *)(unaff_x19 + 0x20);
  if (lVar14 != 0) {
    uVar19 = 0;
    iVar20 = 0;
    do {
      puVar5 = PTR_DAT_084e4398;
      lVar14 = *(long *)(lVar14 + 0x30);
      if (lVar14 == 0) break;
      if (*(int *)(lVar14 + 0x18) <= iVar20) {
        FUN_0719a488();
        return;
      }
      FUN_04ee134c(&stack0x00000040,lVar14,iVar20,*(undefined8 *)PTR_DAT_084e4380);
      uVar6 = in_stack_00000050;
      puVar15 = in_stack_00000048;
      uVar18 = in_stack_00000040;
      if (lVar10 == 0) break;
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
      if (puVar15 != (undefined8 *)0x0) {
        FUN_04ecd464(&stack0x00000040,puVar15,*(undefined8 *)PTR_DAT_084e43a8);
        in_stack_00000080 = in_stack_00000050;
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000070 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x00000070;
        while( true ) {
          uVar8 = FUN_061e56a8(&stack0x00000070,*(undefined8 *)puVar5);
          uVar12 = in_stack_00000080;
          if ((uVar8 & 1) == 0) break;
          uVar8 = FUN_065cd268(in_stack_00000080,0);
          if ((uVar8 & 1) == 0) {
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar7 = *(uint *)(lVar10 + 0x18);
            if (uVar7 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar7 + 1;
              puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
              *puVar11 = uVar12;
              thunk_FUN_03afed3c(puVar11,uVar12);
            }
            else {
              FUN_04de85b0(lVar10,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        FUN_061e56a4(&stack0x00000070,*(undefined8 *)PTR_DAT_084e4390);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar14 = FUN_0715df80(uVar18,1);
      if (lStack0000000000000008 != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar14 = FUN_0715e528(lStack0000000000000008,lVar14);
      }
      if (lVar14 == 0) break;
      lVar14 = FUN_065d1f84(lVar14,0);
      if (lVar14 == 0) break;
      uVar8 = FUN_065d2580(lVar14,0x2f,0);
      if ((uVar8 & 1) != 0) {
        uVar12 = FUN_0715e6c0(uVar8,lVar14);
        if (lVar9 == 0) break;
        uVar8 = FUN_04de894c(lVar9,uVar12,*(undefined8 *)PTR_DAT_08490f58);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) break;
          uVar8 = FUN_0715e6f8(uVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),iVar20);
          if ((uVar8 & 1) != 0) {
            auVar21 = FUN_0719a264();
            _in_stack_00000060 = auVar21;
            auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e43c0,0);
            _in_stack_00000060 = auVar21;
            FUN_0719a878(&stack0x00000060,0,0);
            lVar17 = *(long *)puVar2;
            lVar16 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar16 == 0) break;
            uVar7 = *(uint *)(lVar9 + 0x18);
            if (uVar7 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar7 + 1;
              puVar11 = (undefined8 *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
              *puVar11 = uVar12;
              thunk_FUN_03afed3c(puVar11,uVar12);
            }
            else {
              FUN_04de85b0(lVar9,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = uVar18;
      in_stack_00000030 = puVar15;
      in_stack_00000038 = uVar6;
      uVar7 = FUN_0715decc(&stack0x00000028);
      uVar8 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084e4360,0
                                );
      if ((uVar8 & 1) == 0) {
        if ((3 < uVar7) && ((uVar19 & 3) != 0)) {
          uVar19 = (uVar19 & 0xfffffffc) + 4;
        }
      }
      else if (uVar7 < 5) {
        uVar7 = 4;
      }
      iVar1 = (int)uVar6;
      if (iVar1 < 5) {
        if (iVar1 < 3) {
          if (iVar1 == 1) {
            auVar21 = FUN_0719a264();
            _in_stack_00000060 = auVar21;
            auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e05b8,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
            lVar14 = *(long *)puVar3;
            _in_stack_00000060 = auVar21;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar14 = *(long *)puVar3;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
          }
          else {
            if (iVar1 != 2) goto LAB_0715f268;
            auVar21 = FUN_0719a264();
            _in_stack_00000060 = auVar21;
            auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084cdbb8,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
            lVar14 = *(long *)puVar3;
            _in_stack_00000060 = auVar21;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar14 = *(long *)puVar3;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0xc);
          }
FUN_0715f200:
          auVar21 = FUN_0719a7fc(&stack0x00000060,uVar13,0);
          goto LAB_0715f254;
        }
        if (iVar1 == 3) {
          auVar21 = FUN_0719a264();
          _in_stack_00000060 = auVar21;
          auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
          _in_stack_00000060 = auVar21;
          auVar21 = FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          _in_stack_00000060 = auVar21;
          auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
          lVar14 = *(long *)puVar3;
          _in_stack_00000060 = auVar21;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x2c);
          goto FUN_0715f200;
        }
        if (iVar1 == 4) {
          auVar21 = FUN_0719a264();
          _in_stack_00000060 = auVar21;
          auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3ad0,0);
          _in_stack_00000060 = auVar21;
          auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
          lVar16 = *(long *)puVar3;
          _in_stack_00000060 = auVar21;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar16 = *(long *)puVar3;
          }
          auVar21 = FUN_0719a7fc(&stack0x00000060,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x34),0
                                );
          _in_stack_00000060 = auVar21;
          FUN_0719ace4(&stack0x00000060,lVar10,0);
          FUN_065c0764(lVar14,*(undefined8 *)PTR_DAT_084e43d8,0);
          auVar21 = FUN_0719a264();
          puVar5 = PTR_DAT_084e2cd0;
          _in_stack_00000060 = auVar21;
          auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
          _in_stack_00000060 = auVar21;
          FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          FUN_065c0764(lVar14,*(undefined8 *)PTR_DAT_084e43b8,0);
          auVar21 = FUN_0719a264();
          _in_stack_00000060 = auVar21;
          auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)puVar5,0);
          _in_stack_00000060 = auVar21;
          FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
        }
      }
      else {
        if (iVar1 < 8) {
          if (iVar1 == 5) {
            auVar21 = FUN_0719a264();
            _in_stack_00000060 = auVar21;
            auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3b78,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
            lVar14 = *(long *)puVar3;
            _in_stack_00000060 = auVar21;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar14 = *(long *)puVar3;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x38);
          }
          else {
            if (iVar1 != 6) goto LAB_0715f268;
            auVar21 = FUN_0719a264();
            _in_stack_00000060 = auVar21;
            auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3a90,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
            lVar14 = *(long *)puVar3;
            _in_stack_00000060 = auVar21;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar14 = *(long *)puVar3;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x3c);
          }
          goto FUN_0715f200;
        }
        if (iVar1 == 8) {
          auVar21 = FUN_0719a264();
          puVar15 = (undefined8 *)PTR_DAT_084e43d0;
        }
        else {
          if (iVar1 != 9) goto LAB_0715f268;
          auVar21 = FUN_0719a264();
          puVar15 = (undefined8 *)PTR_DAT_084e43c8;
        }
        _in_stack_00000060 = auVar21;
        auVar21 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                            (&stack0x00000060,*puVar15,0);
        _in_stack_00000060 = auVar21;
        auVar21 = FUN_0719a878(&stack0x00000060,uVar19,0);
LAB_0715f254:
        _in_stack_00000060 = auVar21;
        FUN_0719ace4(&stack0x00000060,lVar10,0);
      }
LAB_0715f268:
      uVar19 = uVar19 + uVar7;
      lVar14 = *(long *)(unaff_x19 + 0x20);
      iVar20 = iVar20 + 1;
    } while (lVar14 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


