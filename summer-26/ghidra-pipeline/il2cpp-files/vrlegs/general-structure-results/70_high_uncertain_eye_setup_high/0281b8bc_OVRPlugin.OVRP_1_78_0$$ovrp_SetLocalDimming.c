/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 0281b8bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar12;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x23 + 0x3a0) = 1;
  puVar3 = PTR_DAT_03cd7fe8;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar6 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfe698);
    FUN_026a44fc(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfe688);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_03cd7fe8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cbe5e8;
  uVar5 = FUN_0281a7fc();
  if ((uVar5 & 1) != 0) {
    unaff_x20 = FUN_0276eb10();
  }
  uVar6 = thunk_FUN_01a5dd74();
                    /* try { // try from 0281b91c to 0291ba0b has its CatchHandler @ 0281b91c
                       catch() { ... } // from try @ 0281b91c with catch @ 0281b91c
                       catch() { ... } // from try @ 0281baa0 with catch @ 0281b91c
                       catch() { ... } // from try @ 0281bb30 with catch @ 0281b91c
                       catch() { ... } // from try @ 0281bb88 with catch @ 0281b91c */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  uVar5 = FUN_02786d28(unaff_x20,uVar6,0);
  if ((uVar5 & 1) != 0) {
    *unaff_x19 = unaff_x21;
    goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
  }
  uVar7 = thunk_FUN_01a5dd74();
  puVar4 = PTR_DAT_03cfdb48;
  if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfdb48);
  }
  uVar5 = FUN_0281a8e4(uVar7);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0281a8e4(unaff_x20);
    if ((uVar5 & 1) == 0) goto LAB_0281ba1c;
    uVar5 = FUN_02830868(unaff_x20,0);
    if ((uVar5 & 1) == 0) {
LAB_0281bba8:
      if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_0273a978();
    }
    else if (*unaff_x21 == *(long *)PTR_DAT_03cbebc0) {
      uVar6 = (**(code **)(*(long *)PTR_DAT_03cbebc0 + 0x168))();
      if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc0cb8);
      }
      uVar6 = FUN_027a37e8(unaff_x20,uVar6,1,0);
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_0281c2b8();
      if ((uVar5 & 1) == 0) goto LAB_0281bba8;
      if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_027a42a4(unaff_x20);
    }
    goto LAB_0281bc58;
  }
LAB_0281ba1c:
  if (*unaff_x21 == *(long *)PTR_DAT_03cbeeb0) {
    puVar8 = (undefined8 *)thunk_FUN_01a89fbc();
    uVar7 = *puVar8;
    uVar12 = *(undefined8 *)PTR_DAT_03cc5220;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_0277b678(uVar12,0);
    uVar5 = FUN_02786d28(unaff_x20,uVar12,0);
    if ((uVar5 & 1) == 0) goto LAB_0281baa4;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_02749e20(&stack0x00000018,uVar7,0);
    puVar8 = (undefined8 *)PTR_DAT_03cbf088;
LAB_0281bb1c:
    uVar6 = *puVar8;
LAB_0281bc54:
    uVar6 = thunk_FUN_01a89a98(uVar6);
  }
  else {
LAB_0281baa4:
    lVar9 = thunk_FUN_01a89d6c();
    if (lVar9 != 0) {
      uVar7 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_02760dc0(&stack0x00000018,lVar9,0);
        puVar8 = (undefined8 *)PTR_DAT_03cbed58;
        goto LAB_0281bb1c;
      }
    }
    puVar2 = PTR_DAT_03cbed58;
    lVar9 = *unaff_x21;
    if (lVar9 == *(long *)PTR_DAT_03cbed58) {
      puVar8 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_00000038 = puVar8[1];
      in_stack_00000030 = *puVar8;
      uVar7 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_02763970(&stack0x00000030,0);
        goto LAB_0281bc58;
      }
      lVar9 = *unaff_x21;
    }
    plVar11 = unaff_x21;
    if (lVar9 != *(long *)PTR_DAT_03cbebc0) {
      plVar11 = (long *)0x0;
    }
    if (plVar11 == (long *)0x0) {
LAB_0281bef0:
      uVar7 = *(undefined8 *)PTR_DAT_03cfe680;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      puVar1 = PTR_DAT_03cfe690;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        _in_stack_00000018 = FUN_0281ac68();
        puVar8 = (undefined8 *)PTR_DAT_03cc4168;
LAB_0281bf50:
        uVar6 = *puVar8;
        goto LAB_0281bc54;
      }
      if (*unaff_x21 == *(long *)PTR_DAT_03cc4168) {
        puVar8 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar6 = *puVar8;
        uVar7 = puVar8[1];
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_0281afdc(uVar6,uVar7,unaff_x20);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar11 = (long *)FUN_02f4e744(uVar6,0);
        if ((plVar11 == (long *)0x0) ||
           (uVar5 = FUN_02f47704(plVar11,unaff_x20,0), (uVar5 & 1) == 0)) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar11 = (long *)FUN_02f4e744(unaff_x20,0);
          if ((plVar11 == (long *)0x0) || (uVar5 = FUN_02f47668(plVar11,uVar6,0), (uVar5 & 1) == 0))
          {
            puVar1 = PTR_DAT_03cf4978;
            lVar9 = *(long *)PTR_DAT_03cf4978;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar9 = *(long *)puVar1;
            }
            if ((long *)**(undefined8 **)(lVar9 + 0xb8) != unaff_x21) {
              uVar5 = FUN_028307d4(unaff_x20,0);
              if ((((uVar5 & 1) != 0) || (uVar5 = FUN_02830808(unaff_x20,0), (uVar5 & 1) != 0)) ||
                 (uVar5 = FUN_028308b0(unaff_x20,0), (uVar5 & 1) != 0)) {
                *unaff_x19 = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                return 2;
              }
LAB_0281c114:
              *unaff_x19 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              return 3;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar5 = FUN_0281c350(unaff_x20);
            if ((uVar5 & 1) == 0) {
              *unaff_x19 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              return 1;
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar6 = FUN_0281c3e8(0,uVar6,unaff_x20);
          }
          else {
            uVar6 = (**(code **)(*plVar11 + 0x198))(plVar11,0);
          }
        }
        else {
          uVar6 = (**(code **)(*plVar11 + 0x1a8))(plVar11,0);
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_02761154(&stack0x00000018,plVar11,0);
        uVar6 = *(undefined8 *)puVar2;
        goto LAB_0281bc54;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5298;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbede8);
        FUN_02e9f258(uVar6,plVar11,0,0);
        *unaff_x19 = uVar6;
        goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5278;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_0281a978(plVar11);
        in_stack_00000018 = uVar6;
        puVar8 = (undefined8 *)PTR_DAT_03cc4b20;
        goto LAB_0281bf50;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_03cf4738;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_0277b678(uVar7,0);
        uVar5 = FUN_02786d28(unaff_x20,uVar7,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar5 = FUN_02790e8c(plVar11,&stack0x00000028,0);
          if ((uVar5 & 1) != 0) {
            *unaff_x19 = in_stack_00000028;
            goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
          }
          goto LAB_0281c114;
        }
        uVar7 = *(undefined8 *)PTR_DAT_03ce4638;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar10 = (long *)FUN_0277b678(uVar7,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar5 = (**(code **)(*plVar10 + 0x388))(plVar10,unaff_x20,*(undefined8 *)(*plVar10 + 0x390))
        ;
        if ((uVar5 & 1) == 0) goto LAB_0281bef0;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_01ab6dbc(plVar11,1,*(undefined8 *)PTR_DAT_03cca940,
                             *(undefined8 *)PTR_DAT_03cfe688);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_02740e38(plVar11,0);
      }
    }
  }
LAB_0281bc58:
  *unaff_x19 = uVar6;
OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces:
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return 0;
}


