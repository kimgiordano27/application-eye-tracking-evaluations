/*
FUNCTION_NAME: _Common.Gameplay.Scripts.GameFlow.GetUserSessionTaskPostData$$get_IsRelease
ENTRY_POINT: 01d423d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_10
*/


void _Common_Gameplay_Scripts_GameFlow_GetUserSessionTaskPostData__get_IsRelease(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x20;
  long *plVar10;
  long *unaff_x21;
  undefined8 uVar11;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  long in_stack_000002a8;
  
code_r0x01d423d0:
  thunk_FUN_01a58e78();
  lVar4 = *unaff_x25;
_Common_Gameplay_Scripts_GameFlow_GetUserSessionTaskPostData__set_IsRelease:
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  in_stack_00000140 = puVar7[2];
  in_stack_00000138 = puVar7[1];
  in_stack_00000130 = *puVar7;
  uVar5 = FUN_01dd3414(unaff_x19 + 0x50,&stack0x00000130,0);
  if ((uVar5 & 1) == 0) goto LAB_01d42424;
LAB_01d42400:
  *unaff_x21 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21,0);
LAB_01d42410:
  *unaff_x20 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20,0);
  do {
    if (*(char *)(unaff_x19 + 0xe0) != '\0') {
      if (*(long *)(unaff_x19 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = FUN_02f0ce18(*(long *)(unaff_x19 + 0xd8),0);
      iVar3 = *(int *)(unaff_x19 + 0xb4);
      if (lVar4 < iVar3) break;
    }
LAB_01d42424:
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_01d8b508(lVar4,0);
    if ((uVar5 & 1) != 0) {
LAB_01d424d4:
      lVar4 = *unaff_x27;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x27;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0xc4);
      in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0xbc);
      FUN_021801d4(**(long **)(lVar4 + 0xb8),&stack0x000001d0);
      *(undefined8 *)(unaff_x19 + 0xbc) = 0;
      *(undefined8 *)(unaff_x19 + 0xc4) = 0;
      *(undefined8 *)(unaff_x19 + 0xd0) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0xd0),0);
      *(undefined8 *)(unaff_x19 + 0xd8) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0xd8),0);
      in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x48);
      in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0x40);
      in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0x38);
      in_stack_000001c0 = *(undefined8 *)(unaff_x19 + 0x78);
      in_stack_000001b8 = *(undefined8 *)(unaff_x19 + 0x70);
      in_stack_000001b0 = *(undefined8 *)(unaff_x19 + 0x68);
      lVar4 = thunk_FUN_01a89e68(*unaff_x26);
      in_stack_000000d8 = in_stack_000001d8;
      in_stack_000000d0 = in_stack_000001d0;
      in_stack_000000e0 = in_stack_000001e0;
      in_stack_000000b8 = in_stack_000001b8;
      in_stack_000000b0 = in_stack_000001b0;
      in_stack_000000c0 = in_stack_000001c0;
      FUN_01de2be4(lVar4,&stack0x000000d0,&stack0x000000b0,0);
      plVar10 = (long *)(unaff_x19 + 0x88);
      *plVar10 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar4);
      lVar4 = *unaff_x25;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x25;
      }
      puVar7 = *(undefined8 **)(lVar4 + 0xb8);
      lVar4 = unaff_x19 + 0x38;
      in_stack_000000a0 = puVar7[2];
      in_stack_00000098 = puVar7[1];
      in_stack_00000090 = *puVar7;
      uVar5 = FUN_01dd3414(lVar4,&stack0x00000090,0);
      if ((uVar5 & 1) == 0) {
LAB_01d4263c:
        in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x78);
        in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0x70);
        in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000058 = in_stack_000001d8;
        in_stack_00000050 = in_stack_000001d0;
        in_stack_00000060 = in_stack_000001e0;
        uVar5 = FUN_01dd3414(lVar4,&stack0x00000050,0);
        if ((uVar5 & 1) == 0) {
          in_stack_000001e0 = *(undefined8 *)(unaff_x19 + 0x60);
          in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0x58);
          in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0x50);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          in_stack_00000038 = in_stack_000001d8;
          in_stack_00000030 = in_stack_000001d0;
          in_stack_00000040 = in_stack_000001e0;
          uVar5 = FUN_01dd3414(lVar4,&stack0x00000030,0);
          lVar4 = *plVar10;
          if ((uVar5 & 1) == 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar8 = 8;
          }
          else {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar8 = 4;
          }
        }
        else {
          lVar4 = *plVar10;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar8 = 2;
        }
      }
      else {
        lVar6 = *unaff_x25;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar6 = *unaff_x25;
        }
        puVar7 = *(undefined8 **)(lVar6 + 0xb8);
        in_stack_00000080 = puVar7[2];
        in_stack_00000078 = puVar7[1];
        in_stack_00000070 = *puVar7;
        uVar5 = FUN_01dd3414(unaff_x19 + 0x50,&stack0x00000070,0);
        if ((uVar5 & 1) == 0) goto LAB_01d4263c;
        lVar4 = *plVar10;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar8 = 1;
      }
      *(undefined1 *)(lVar4 + 0x10) = uVar8;
      puVar2 = PTR_DAT_03ccb668;
      lVar4 = *plVar10;
      *(undefined8 *)(unaff_x19 + 0x88) = 0;
      *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffe;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x88),0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02145584(unaff_x19 + 0x18,lVar4,*(undefined8 *)puVar2);
      goto LAB_01d4273c;
    }
    if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = FUN_02f0ce18(*(long *)(unaff_x19 + 0xd0),0);
    if (*(int *)(unaff_x19 + 0xb8) <= lVar4) goto LAB_01d424d4;
    lVar4 = *unaff_x25;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x25;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    in_stack_00000120 = puVar7[2];
    in_stack_00000118 = puVar7[1];
    in_stack_00000110 = *puVar7;
    uVar5 = FUN_01dd3414(unaff_x19 + 0x38,&stack0x00000110,0);
    if ((uVar5 & 1) == 0) {
      lVar4 = *unaff_x25;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x25;
      }
      puVar7 = *(undefined8 **)(lVar4 + 0xb8);
      in_stack_00000100 = puVar7[2];
      in_stack_000000f8 = puVar7[1];
      in_stack_000000f0 = *puVar7;
      uVar5 = FUN_01dd3414(unaff_x19 + 0x50,&stack0x000000f0,0);
      if ((uVar5 & 1) == 0) goto LAB_01d424d4;
    }
    *(undefined1 *)(unaff_x19 + 0xe0) = 0;
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(lVar4 + 0x30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = *(undefined8 *)(lVar4 + 0x348);
    uVar9 = *(undefined8 *)(lVar4 + 0x340);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x80);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_01de0b80(uVar11,uVar9,uVar1,unaff_x19 + 0xbc,unaff_x19 + 0xe1,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x27;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x27;
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0xbc);
      uVar12 = *(undefined8 *)(unaff_x19 + 0xc4);
      lVar4 = **(long **)(lVar4 + 0xb8);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb6a0);
      FUN_0217f2d0(uVar9,*(undefined8 *)PTR_DAT_03ccb690);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_000001d0 = uVar11;
      in_stack_000001d8 = uVar12;
      FUN_0217fd4c(lVar4,&stack0x000001d0,uVar9,*(undefined8 *)PTR_DAT_03ccb678);
      *(undefined1 *)(unaff_x19 + 0xe0) = 1;
    }
    if (*(long *)(unaff_x19 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02f0cfe8(*(long *)(unaff_x19 + 0xd8),0);
  } while( true );
  if (*(int *)(*(long *)PTR_DAT_03cc9e08 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_01d16b64(iVar3 / 10,0,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000008 = FUN_027e99e8(lVar4,0);
  uVar5 = FUN_02678c30(&stack0x00000008,0);
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x100,0);
    in_stack_00000018 = unaff_x19;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01f07574(unaff_x19 + 0x18,&stack0x00000008,&stack0x00000018,*(undefined8 *)PTR_DAT_03ccb658)
    ;
LAB_01d4273c:
    if (*(long *)(unaff_x23 + 0x28) == in_stack_000002a8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_02678cfc(&stack0x00000008,0);
  lVar4 = *unaff_x27;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *unaff_x27;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_000001d0 = *(undefined8 *)(unaff_x19 + 0xbc);
  in_stack_000001d8 = *(undefined8 *)(unaff_x19 + 0xc4);
  unaff_x20 = (long *)(unaff_x19 + 0xe8);
  uVar5 = FUN_02180b80(**(long **)(lVar4 + 0xb8),&stack0x000001d0,unaff_x20,
                       *(undefined8 *)PTR_DAT_03ccb680);
  if ((uVar5 & 1) == 0) goto LAB_01d42410;
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = FUN_02182fb4(*unaff_x20,*(undefined8 *)PTR_DAT_03ccb698);
  if (0 < iVar3) goto _Common_Gameplay_Scripts_GameFlow_UserRoomTaskPostData__set_OculusId;
  goto LAB_01d42410;
_Common_Gameplay_Scripts_GameFlow_UserRoomTaskPostData__set_OculusId:
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = FUN_02181584(*unaff_x20,*(undefined8 *)PTR_DAT_03ccb670);
  unaff_x21 = (long *)(unaff_x19 + 0xf0);
  *unaff_x21 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
  puVar2 = PTR_DAT_03ccb6a8;
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(*unaff_x21 + 0x18)) {
    lVar4 = *unaff_x25;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x25;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    in_stack_000001a0 = puVar7[2];
    in_stack_00000198 = puVar7[1];
    in_stack_00000190 = *puVar7;
    uVar5 = FUN_01dd3414(unaff_x19 + 0x38,&stack0x00000190,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x21;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01b5f3b4(lVar4 + 0x20,&stack0x000001b0,*(undefined8 *)puVar2);
      in_stack_000001d8 = in_stack_000001b8;
      in_stack_000001d0 = in_stack_000001b0;
      in_stack_000001e0 = in_stack_000001c0;
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_000001c0;
      *(undefined8 *)(unaff_x19 + 0x40) = in_stack_000001b8;
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_000001b0;
      if (*(char *)(unaff_x19 + 0xe1) != '\0') {
        *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x19 + 0x48);
        *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 0x40);
        *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x38);
      }
    }
  }
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (1 < *(int *)(*unaff_x21 + 0x18)) {
    lVar4 = *unaff_x25;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x25;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    in_stack_00000180 = puVar7[2];
    in_stack_00000178 = puVar7[1];
    in_stack_00000170 = *puVar7;
    uVar5 = FUN_01dd3414(unaff_x19 + 0x50,&stack0x00000170,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x21;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01b5f3b4(lVar4 + 0x40,&stack0x000001b0,*(undefined8 *)puVar2);
      in_stack_000001d8 = in_stack_000001b8;
      in_stack_000001d0 = in_stack_000001b0;
      in_stack_000001e0 = in_stack_000001c0;
      *(undefined8 *)(unaff_x19 + 0x60) = in_stack_000001c0;
      *(undefined8 *)(unaff_x19 + 0x58) = in_stack_000001b8;
      *(undefined8 *)(unaff_x19 + 0x50) = in_stack_000001b0;
    }
  }
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *unaff_x25;
  }
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  in_stack_00000160 = puVar7[2];
  in_stack_00000158 = puVar7[1];
  in_stack_00000150 = *puVar7;
  uVar5 = FUN_01dd3414(unaff_x19 + 0x38,&stack0x00000150,0);
  if ((uVar5 & 1) == 0) goto code_r0x01d423c4;
  goto LAB_01d42400;
code_r0x01d423c4:
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe0) == 0) goto code_r0x01d423d0;
  goto _Common_Gameplay_Scripts_GameFlow_GetUserSessionTaskPostData__set_IsRelease;
}


