/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$EulerZXY
ENTRY_POINT: 0715ec68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_10
*/


void Unity_Mathematics_RigidTransform__EulerZXY(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
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
  
  do {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    unaff_x28 = FUN_0715e528(in_stack_00000008,unaff_x28);
    do {
      if (unaff_x28 == 0) goto LAB_0715f304;
      lVar5 = FUN_065d1f84(unaff_x28,0);
      if (lVar5 == 0) goto LAB_0715f304;
      uVar6 = FUN_065d2580(lVar5,0x2f,0);
      if ((uVar6 & 1) != 0) {
        uVar7 = FUN_0715e6c0(uVar6,lVar5);
        if (in_stack_00000000 == 0) goto LAB_0715f304;
        uVar6 = FUN_04de894c(in_stack_00000000,uVar7,*(undefined8 *)PTR_DAT_08490f58);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0715f304;
          uVar6 = FUN_0715e6f8(uVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),unaff_w25);
          if ((uVar6 & 1) != 0) {
            auVar12 = FUN_0719a264();
            _in_stack_00000060 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e43c0,0);
            _in_stack_00000060 = auVar12;
            FUN_0719a878(&stack0x00000060,0,0);
            lVar11 = *unaff_x20;
            lVar10 = *(long *)(in_stack_00000000 + 0x10);
            *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0715f304;
            uVar4 = *(uint *)(in_stack_00000000 + 0x18);
            if (uVar4 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(in_stack_00000000 + 0x18) = uVar4 + 1;
              puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
              *puVar8 = uVar7;
              thunk_FUN_03afed3c(puVar8,uVar7);
            }
            else {
              FUN_04de85b0(in_stack_00000000,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      in_stack_00000028 = in_stack_00000020;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = unaff_x27;
      uVar4 = FUN_0715decc(&stack0x00000028);
      uVar6 = thunk_FUN_065cbffc(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_084e4360,0
                                );
      if ((uVar6 & 1) == 0) {
        if ((3 < uVar4) && ((unaff_w24 & 3) != 0)) {
          unaff_w24 = (unaff_w24 & 0xfffffffc) + 4;
        }
      }
      else if (uVar4 < 5) {
        uVar4 = 4;
      }
      iVar1 = (int)in_stack_00000010;
      if (iVar1 < 5) {
        if (iVar1 < 3) {
          if (iVar1 == 1) {
            auVar12 = FUN_0719a264();
            _in_stack_00000060 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e05b8,0);
            _in_stack_00000060 = auVar12;
            auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar5 = *unaff_x21;
            _in_stack_00000060 = auVar12;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *unaff_x21;
            }
            uVar9 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 4);
          }
          else {
            if (iVar1 != 2) goto LAB_0715f268;
            auVar12 = FUN_0719a264();
            _in_stack_00000060 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084cdbb8,0);
            _in_stack_00000060 = auVar12;
            auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar5 = *unaff_x21;
            _in_stack_00000060 = auVar12;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *unaff_x21;
            }
            uVar9 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0xc);
          }
FUN_0715f200:
          auVar12 = FUN_0719a7fc(&stack0x00000060,uVar9,0);
          goto LAB_0715f254;
        }
        if (iVar1 == 3) {
          auVar12 = FUN_0719a264();
          _in_stack_00000060 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
          _in_stack_00000060 = auVar12;
          auVar12 = FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          _in_stack_00000060 = auVar12;
          auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
          lVar5 = *unaff_x21;
          _in_stack_00000060 = auVar12;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar5 = *unaff_x21;
          }
          uVar9 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x2c);
          goto FUN_0715f200;
        }
        if (iVar1 == 4) {
          auVar12 = FUN_0719a264();
          _in_stack_00000060 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3ad0,0);
          _in_stack_00000060 = auVar12;
          auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
          lVar10 = *unaff_x21;
          _in_stack_00000060 = auVar12;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar10 = *unaff_x21;
          }
          auVar12 = FUN_0719a7fc(&stack0x00000060,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x34),0
                                );
          _in_stack_00000060 = auVar12;
          FUN_0719ace4(&stack0x00000060);
          FUN_065c0764(lVar5,*(undefined8 *)PTR_DAT_084e43d8,0);
          auVar12 = FUN_0719a264();
          puVar2 = PTR_DAT_084e2cd0;
          _in_stack_00000060 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)PTR_DAT_084e2cd0,0);
          _in_stack_00000060 = auVar12;
          FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
          FUN_065c0764(lVar5,*(undefined8 *)PTR_DAT_084e43b8,0);
          auVar12 = FUN_0719a264();
          _in_stack_00000060 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000060,*(undefined8 *)puVar2,0);
          _in_stack_00000060 = auVar12;
          FUN_0719aa70(0xbf800000,0x3f800000,&stack0x00000060,0);
        }
      }
      else {
        if (iVar1 < 8) {
          if (iVar1 == 5) {
            auVar12 = FUN_0719a264();
            _in_stack_00000060 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3b78,0);
            _in_stack_00000060 = auVar12;
            auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar5 = *unaff_x21;
            _in_stack_00000060 = auVar12;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *unaff_x21;
            }
            uVar9 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x38);
          }
          else {
            if (iVar1 != 6) goto LAB_0715f268;
            auVar12 = FUN_0719a264();
            _in_stack_00000060 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000060,*(undefined8 *)PTR_DAT_084e3a90,0);
            _in_stack_00000060 = auVar12;
            auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
            lVar5 = *unaff_x21;
            _in_stack_00000060 = auVar12;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar5 = *unaff_x21;
            }
            uVar9 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x3c);
          }
          goto FUN_0715f200;
        }
        if (iVar1 == 8) {
          auVar12 = FUN_0719a264();
          puVar8 = (undefined8 *)PTR_DAT_084e43d0;
        }
        else {
          if (iVar1 != 9) goto LAB_0715f268;
          auVar12 = FUN_0719a264();
          puVar8 = (undefined8 *)PTR_DAT_084e43c8;
        }
        _in_stack_00000060 = auVar12;
        auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                            (&stack0x00000060,*puVar8,0);
        _in_stack_00000060 = auVar12;
        auVar12 = FUN_0719a878(&stack0x00000060,unaff_w24,0);
LAB_0715f254:
        _in_stack_00000060 = auVar12;
        FUN_0719ace4(&stack0x00000060);
      }
LAB_0715f268:
      puVar2 = PTR_DAT_084e4398;
      unaff_w24 = unaff_w24 + uVar4;
      unaff_w25 = unaff_w25 + 1;
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x30), lVar5 == 0)) {
LAB_0715f304:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar5 + 0x18) <= unaff_w25) {
        FUN_0719a488();
        return;
      }
      FUN_04ee134c(&stack0x00000040,lVar5,unaff_w25,*(undefined8 *)PTR_DAT_084e4380);
      unaff_x27 = in_stack_00000048;
      uVar7 = in_stack_00000040;
      if (unaff_x23 == 0) goto LAB_0715f304;
      iVar1 = *(int *)(unaff_x23 + 0x18);
      in_stack_00000010 = in_stack_00000050;
      in_stack_00000020 = in_stack_00000040;
      *(undefined4 *)(unaff_x23 + 0x18) = 0;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                  (*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
      }
      if (unaff_x27 != (undefined8 *)0x0) {
        FUN_04ecd464(&stack0x00000040,unaff_x27,*(undefined8 *)PTR_DAT_084e43a8);
        in_stack_00000080 = in_stack_00000050;
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000070 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x00000070;
        while( true ) {
          uVar6 = FUN_061e56a8(&stack0x00000070,*(undefined8 *)puVar2);
          uVar3 = in_stack_00000080;
          if ((uVar6 & 1) == 0) break;
          uVar6 = FUN_065cd268(in_stack_00000080,0);
          if ((uVar6 & 1) == 0) {
            lVar5 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            uVar4 = *(uint *)(unaff_x23 + 0x18);
            if (uVar4 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar4 + 1;
              puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
              *puVar8 = uVar3;
              thunk_FUN_03afed3c(puVar8,uVar3);
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
      unaff_x28 = FUN_0715df80(uVar7,1);
    } while (in_stack_00000008 == 0);
  } while( true );
}


