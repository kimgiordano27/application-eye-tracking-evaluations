/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$EulerYXZ
ENTRY_POINT: 0715f0cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_10
*/


void Unity_Mathematics_RigidTransform__EulerYXZ
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
  undefined1 auVar14 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  
  auVar14._8_8_ = in_stack_00000068;
  auVar14._0_8_ = in_stack_00000060;
code_r0x0715f0cc:
  _in_stack_00000060 = auVar14;
  auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                      (param_2,*param_1,param_4);
  _in_stack_00000060 = auVar14;
  auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
  lVar9 = *unaff_x27;
  _in_stack_00000060 = auVar14;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar9 = *unaff_x27;
  }
  uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 4);
FUN_0715f200:
  auVar14 = FUN_0719a7fc(&stack0x00000060,uVar10,0);
  do {
    _in_stack_00000060 = auVar14;
    FUN_0719ace4(&stack0x00000060);
LAB_0715f268:
    do {
      puVar3 = PTR_DAT_084e4398;
      unaff_w24 = unaff_w24 + unaff_w26;
      unaff_w25 = unaff_w25 + 1;
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x30), lVar9 == 0)) {
LAB_0715f304:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar9 + 0x18) <= unaff_w25) {
        FUN_0719a488();
        return;
      }
      FUN_04ee134c(&stack0x00000040,lVar9,unaff_w25,*(undefined8 *)PTR_DAT_084e4380);
      uVar5 = in_stack_00000050;
      puVar12 = in_stack_00000048;
      uVar4 = in_stack_00000040;
      if (unaff_x23 == 0) goto LAB_0715f304;
      iVar1 = *(int *)(unaff_x23 + 0x18);
      *(undefined4 *)(unaff_x23 + 0x18) = 0;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
      }
      if (puVar12 != (undefined8 *)0x0) {
        FUN_04ecd464(&stack0x00000040,puVar12,*(undefined8 *)PTR_DAT_084e43a8);
        in_stack_00000080 = in_stack_00000050;
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000070 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x00000070;
        while( true ) {
          uVar6 = FUN_061e56a8(&stack0x00000070,*(undefined8 *)puVar3);
          uVar8 = in_stack_00000080;
          if ((uVar6 & 1) == 0) break;
          uVar6 = FUN_065cd268(in_stack_00000080,0);
          if ((uVar6 & 1) == 0) {
            lVar9 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar2 = *(uint *)(unaff_x23 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
              puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar7 = uVar8;
              thunk_FUN_03afed3c(puVar7,uVar8);
            }
            else {
              FUN_04de85b0();
            }
          }
        }
        FUN_061e56a4(&stack0x00000070,*(undefined8 *)PTR_DAT_084e4390);
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar9 = FUN_0715df80(uVar4,1);
      if (in_stack_00000008 != 0) {
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar9 = FUN_0715e528(in_stack_00000008,lVar9);
      }
      if (lVar9 == 0) goto LAB_0715f304;
      lVar9 = FUN_065d1f84(lVar9,0);
      if (lVar9 == 0) goto LAB_0715f304;
      uVar6 = FUN_065d2580(lVar9,0x2f,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = FUN_0715e6c0(uVar6,lVar9);
        if (in_stack_00000000 == 0) goto LAB_0715f304;
        uVar6 = FUN_04de894c(in_stack_00000000,uVar8,*(undefined8 *)PTR_DAT_08490f58);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0715f304;
          uVar6 = FUN_0715e6f8(uVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),unaff_w25);
          if ((uVar6 & 1) != 0) {
            auVar14 = FUN_0719a264();
            _in_stack_00000060 = auVar14;
            auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e43c0,0);
            _in_stack_00000060 = auVar14;
            FUN_0719a878(&stack0x00000060,0,0);
            lVar13 = *unaff_x20;
            lVar11 = *(long *)(in_stack_00000000 + 0x10);
            *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0715f304;
            uVar2 = *(uint *)(in_stack_00000000 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(in_stack_00000000 + 0x18) = uVar2 + 1;
              puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *puVar7 = uVar8;
              thunk_FUN_03afed3c(puVar7,uVar8);
            }
            else {
              FUN_04de85b0(in_stack_00000000,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = uVar4;
      in_stack_00000030 = puVar12;
      in_stack_00000038 = uVar5;
      unaff_w26 = FUN_0715decc(&stack0x00000028);
      uVar6 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084e4360,0
                                );
      if ((uVar6 & 1) == 0) {
        if ((3 < unaff_w26) && ((unaff_w24 & 3) != 0)) {
          unaff_w24 = (unaff_w24 & 0xfffffffc) + 4;
        }
      }
      else if (unaff_w26 < 5) {
        unaff_w26 = 4;
      }
      iVar1 = (int)uVar5;
      if (iVar1 < 5) {
        if (iVar1 < 3) {
          if (iVar1 == 1) {
            auVar14 = FUN_0719a264();
            param_4 = 0;
            param_2 = &stack0x00000060;
            param_1 = (undefined8 *)PTR_DAT_084e05b8;
            goto code_r0x0715f0cc;
          }
          if (iVar1 == 2) {
            auVar14 = FUN_0719a264();
            _in_stack_00000060 = auVar14;
            auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084cdbb8,0);
            _in_stack_00000060 = auVar14;
            auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar9 = *unaff_x27;
            _in_stack_00000060 = auVar14;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar9 = *unaff_x27;
            }
            uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0xc);
            goto FUN_0715f200;
          }
        }
        else {
          if (iVar1 == 3) {
            auVar14 = FUN_0719a264();
            _in_stack_00000060 = auVar14;
            auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
            _in_stack_00000060 = auVar14;
            auVar14 = FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
            _in_stack_00000060 = auVar14;
            auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar9 = *unaff_x27;
            _in_stack_00000060 = auVar14;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar9 = *unaff_x27;
            }
            uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x2c);
            goto FUN_0715f200;
          }
          if (iVar1 == 4) {
            auVar14 = FUN_0719a264();
            _in_stack_00000060 = auVar14;
            auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3ad0,0);
            _in_stack_00000060 = auVar14;
            auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar11 = *unaff_x27;
            _in_stack_00000060 = auVar14;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar11 = *unaff_x27;
            }
            auVar14 = FUN_0719a7fc(&stack0x00000060,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x34)
                                   ,0);
            _in_stack_00000060 = auVar14;
            FUN_0719ace4(&stack0x00000060);
            FUN_065c0764(lVar9,*(undefined8 *)PTR_DAT_084e43d8,0);
            auVar14 = FUN_0719a264();
            puVar3 = PTR_DAT_084e2cd0;
            _in_stack_00000060 = auVar14;
            auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
            _in_stack_00000060 = auVar14;
            FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
            FUN_065c0764(lVar9,*(undefined8 *)PTR_DAT_084e43b8,0);
            auVar14 = FUN_0719a264();
            _in_stack_00000060 = auVar14;
            auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)puVar3,0);
            _in_stack_00000060 = auVar14;
            FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          }
        }
        goto LAB_0715f268;
      }
      if (iVar1 < 8) {
        if (iVar1 == 5) {
          auVar14 = FUN_0719a264();
          _in_stack_00000060 = auVar14;
          auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3b78,0);
          _in_stack_00000060 = auVar14;
          auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
          lVar9 = *unaff_x27;
          _in_stack_00000060 = auVar14;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar9 = *unaff_x27;
          }
          uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x38);
          goto FUN_0715f200;
        }
        if (iVar1 == 6) {
          auVar14 = FUN_0719a264();
          _in_stack_00000060 = auVar14;
          auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3a90,0);
          _in_stack_00000060 = auVar14;
          auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
          lVar9 = *unaff_x27;
          _in_stack_00000060 = auVar14;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar9 = *unaff_x27;
          }
          uVar10 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x3c);
          goto FUN_0715f200;
        }
        goto LAB_0715f268;
      }
      if (iVar1 == 8) {
        auVar14 = FUN_0719a264();
        puVar12 = (undefined8 *)PTR_DAT_084e43d0;
        goto LAB_0715f228;
      }
    } while (iVar1 != 9);
    auVar14 = FUN_0719a264();
    puVar12 = (undefined8 *)PTR_DAT_084e43c8;
LAB_0715f228:
    _in_stack_00000060 = auVar14;
    auVar14 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                        (&stack0x00000060,*puVar12,0);
    _in_stack_00000060 = auVar14;
    auVar14 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
  } while( true );
}


