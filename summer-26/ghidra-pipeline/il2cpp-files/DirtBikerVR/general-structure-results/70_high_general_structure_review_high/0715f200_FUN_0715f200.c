/*
FUNCTION_NAME: FUN_0715f200
ENTRY_POINT: 0715f200
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


void FUN_0715f200(undefined8 param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
  undefined1 auVar13 [16];
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
  
code_r0x0715f200:
  auVar13 = FUN_0719a7fc(&stack0x00000060,param_2,0);
  do {
    _in_stack_00000060 = auVar13;
    FUN_0719ace4(&stack0x00000060);
LAB_0715f268:
    do {
      puVar3 = PTR_DAT_084e4398;
      unaff_w24 = unaff_w24 + unaff_w26;
      unaff_w25 = unaff_w25 + 1;
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x30), lVar6 == 0)) {
LAB_0715f304:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar6 + 0x18) <= unaff_w25) {
        FUN_0719a488();
        return;
      }
      FUN_04ee134c(&stack0x00000040,lVar6,unaff_w25,*(undefined8 *)PTR_DAT_084e4380);
      uVar5 = in_stack_00000050;
      puVar11 = in_stack_00000048;
      uVar4 = in_stack_00000040;
      if (unaff_x23 == 0) goto LAB_0715f304;
      iVar1 = *(int *)(unaff_x23 + 0x18);
      *(undefined4 *)(unaff_x23 + 0x18) = 0;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
      }
      if (puVar11 != (undefined8 *)0x0) {
        FUN_04ecd464(&stack0x00000040,puVar11,*(undefined8 *)PTR_DAT_084e43a8);
        in_stack_00000080 = in_stack_00000050;
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000070 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x00000070;
        while( true ) {
          uVar7 = FUN_061e56a8(&stack0x00000070,*(undefined8 *)puVar3);
          uVar9 = in_stack_00000080;
          if ((uVar7 & 1) == 0) break;
          uVar7 = FUN_065cd268(in_stack_00000080,0);
          if ((uVar7 & 1) == 0) {
            lVar6 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar2 = *(uint *)(unaff_x23 + 0x18);
            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
              puVar8 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
              *puVar8 = uVar9;
              thunk_FUN_03afed3c(puVar8,uVar9);
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
      lVar6 = FUN_0715df80(uVar4,1);
      if (in_stack_00000008 != 0) {
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar6 = FUN_0715e528(in_stack_00000008,lVar6);
      }
      if (lVar6 == 0) goto LAB_0715f304;
      lVar6 = FUN_065d1f84(lVar6,0);
      if (lVar6 == 0) goto LAB_0715f304;
      uVar7 = FUN_065d2580(lVar6,0x2f,0);
      if ((uVar7 & 1) != 0) {
        uVar9 = FUN_0715e6c0(uVar7,lVar6);
        if (in_stack_00000000 == 0) goto LAB_0715f304;
        uVar7 = FUN_04de894c(in_stack_00000000,uVar9,*(undefined8 *)PTR_DAT_08490f58);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0715f304;
          uVar7 = FUN_0715e6f8(uVar7,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),unaff_w25);
          if ((uVar7 & 1) != 0) {
            auVar13 = FUN_0719a264();
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e43c0,0);
            _in_stack_00000060 = auVar13;
            FUN_0719a878(&stack0x00000060,0,0);
            lVar12 = *unaff_x20;
            lVar10 = *(long *)(in_stack_00000000 + 0x10);
            *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0715f304;
            uVar2 = *(uint *)(in_stack_00000000 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(in_stack_00000000 + 0x18) = uVar2 + 1;
              puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
              *puVar8 = uVar9;
              thunk_FUN_03afed3c(puVar8,uVar9);
            }
            else {
              FUN_04de85b0(in_stack_00000000,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = uVar4;
      in_stack_00000030 = puVar11;
      in_stack_00000038 = uVar5;
      unaff_w26 = FUN_0715decc(&stack0x00000028);
      uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084e4360,0
                                );
      if ((uVar7 & 1) == 0) {
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
            auVar13 = FUN_0719a264();
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e05b8,0);
            _in_stack_00000060 = auVar13;
            auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar6 = *unaff_x27;
            _in_stack_00000060 = auVar13;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar6 = *unaff_x27;
            }
            param_2 = (ulong)*(uint *)(*(long *)(lVar6 + 0xb8) + 4);
            goto code_r0x0715f200;
          }
          if (iVar1 == 2) {
            auVar13 = FUN_0719a264();
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084cdbb8,0);
            _in_stack_00000060 = auVar13;
            auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar6 = *unaff_x27;
            _in_stack_00000060 = auVar13;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar6 = *unaff_x27;
            }
            param_2 = (ulong)*(uint *)(*(long *)(lVar6 + 0xb8) + 0xc);
            goto code_r0x0715f200;
          }
        }
        else {
          if (iVar1 == 3) {
            auVar13 = FUN_0719a264();
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
            _in_stack_00000060 = auVar13;
            auVar13 = FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
            _in_stack_00000060 = auVar13;
            auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar6 = *unaff_x27;
            _in_stack_00000060 = auVar13;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar6 = *unaff_x27;
            }
            param_2 = (ulong)*(uint *)(*(long *)(lVar6 + 0xb8) + 0x2c);
            goto code_r0x0715f200;
          }
          if (iVar1 == 4) {
            auVar13 = FUN_0719a264();
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3ad0,0);
            _in_stack_00000060 = auVar13;
            auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar10 = *unaff_x27;
            _in_stack_00000060 = auVar13;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar10 = *unaff_x27;
            }
            auVar13 = FUN_0719a7fc(&stack0x00000060,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x34)
                                   ,0);
            _in_stack_00000060 = auVar13;
            FUN_0719ace4(&stack0x00000060);
            FUN_065c0764(lVar6,*(undefined8 *)PTR_DAT_084e43d8,0);
            auVar13 = FUN_0719a264();
            puVar3 = PTR_DAT_084e2cd0;
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
            _in_stack_00000060 = auVar13;
            FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
            FUN_065c0764(lVar6,*(undefined8 *)PTR_DAT_084e43b8,0);
            auVar13 = FUN_0719a264();
            _in_stack_00000060 = auVar13;
            auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)puVar3,0);
            _in_stack_00000060 = auVar13;
            FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          }
        }
        goto LAB_0715f268;
      }
      if (iVar1 < 8) {
        if (iVar1 == 5) {
          auVar13 = FUN_0719a264();
          _in_stack_00000060 = auVar13;
          auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3b78,0);
          _in_stack_00000060 = auVar13;
          auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
          lVar6 = *unaff_x27;
          _in_stack_00000060 = auVar13;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar6 = *unaff_x27;
          }
          param_2 = (ulong)*(uint *)(*(long *)(lVar6 + 0xb8) + 0x38);
          goto code_r0x0715f200;
        }
        if (iVar1 == 6) {
          auVar13 = FUN_0719a264();
          _in_stack_00000060 = auVar13;
          auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3a90,0);
          _in_stack_00000060 = auVar13;
          auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
          lVar6 = *unaff_x27;
          _in_stack_00000060 = auVar13;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar6 = *unaff_x27;
          }
          param_2 = (ulong)*(uint *)(*(long *)(lVar6 + 0xb8) + 0x3c);
          goto code_r0x0715f200;
        }
        goto LAB_0715f268;
      }
      if (iVar1 == 8) {
        auVar13 = FUN_0719a264();
        puVar11 = (undefined8 *)PTR_DAT_084e43d0;
        goto LAB_0715f228;
      }
    } while (iVar1 != 9);
    auVar13 = FUN_0719a264();
    puVar11 = (undefined8 *)PTR_DAT_084e43c8;
LAB_0715f228:
    _in_stack_00000060 = auVar13;
    auVar13 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                        (&stack0x00000060,*puVar11,0);
    _in_stack_00000060 = auVar13;
    auVar13 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
  } while( true );
}


