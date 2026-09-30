/*
FUNCTION_NAME: FUN_0281b75c
ENTRY_POINT: 0281b75c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_0281b75c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [16];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar11 = &local_a0;
  if ((DAT_041253a0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfe680);
    FUN_01ab69ac(PTR_DAT_03cc4168);
    FUN_01ab69ac(PTR_DAT_03cc5210);
    FUN_01ab69ac(PTR_DAT_03cbfb98);
    FUN_01ab69ac(PTR_DAT_03cfe688);
    FUN_01ab69ac(PTR_DAT_03cfdb48);
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    FUN_01ab69ac(PTR_DAT_03cf4978);
    FUN_01ab69ac(PTR_DAT_03cc5220);
    FUN_01ab69ac(PTR_DAT_03cbf088);
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03cc0cb8);
    FUN_01ab69ac(PTR_DAT_03cc50c8);
    FUN_01ab69ac(PTR_DAT_03cbed58);
    FUN_01ab69ac(PTR_DAT_03cd7fe8);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03cc5278);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    FUN_01ab69ac(PTR_DAT_03cca940);
    FUN_01ab69ac(PTR_DAT_03ce4638);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cc5298);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    FUN_01ab69ac(PTR_DAT_03cf4738);
    DAT_041253a0 = 1;
  }
  puVar3 = PTR_DAT_03cd7fe8;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  if (param_1 == (long *)0x0) {
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
  uVar5 = FUN_0281a7fc(param_3);
  if ((uVar5 & 1) != 0) {
    param_3 = FUN_0276eb10(param_3,0);
  }
  uVar6 = thunk_FUN_01a5dd74(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  uVar5 = FUN_02786d28(param_3,uVar6,0);
  if ((uVar5 & 1) != 0) {
    *param_4 = (long)param_1;
    goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
  }
  uVar7 = thunk_FUN_01a5dd74(param_1,0);
  puVar4 = PTR_DAT_03cfdb48;
  if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfdb48);
  }
  uVar5 = FUN_0281a8e4(uVar7);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_0281a8e4(param_3);
    if ((uVar5 & 1) == 0) goto LAB_0281ba1c;
    uVar5 = FUN_02830868(param_3,0);
    if ((uVar5 & 1) == 0) {
LAB_0281bba8:
      if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      param_1 = (long *)FUN_0273a978(param_1,param_3,param_2,0);
    }
    else {
      lVar12 = *(long *)PTR_DAT_03cbebc0;
      if (*param_1 == lVar12) {
        uVar6 = (**(code **)(lVar12 + 0x168))(param_1,*(undefined8 *)(lVar12 + 0x170));
        if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc0cb8);
        }
        param_1 = (long *)FUN_027a37e8(param_3,uVar6,1,0);
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_0281c2b8(param_1);
        if ((uVar5 & 1) == 0) goto LAB_0281bba8;
        if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        param_1 = (long *)FUN_027a42a4(param_3,param_1,0);
      }
    }
    goto LAB_0281bc58;
  }
LAB_0281ba1c:
  if (*param_1 == *(long *)PTR_DAT_03cbeeb0) {
    puVar8 = (undefined8 *)thunk_FUN_01a89fbc(param_1);
    uVar7 = *puVar8;
    uVar13 = *(undefined8 *)PTR_DAT_03cc5220;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_0277b678(uVar13,0);
    uVar5 = FUN_02786d28(param_3,uVar13,0);
    if ((uVar5 & 1) == 0) goto LAB_0281baa4;
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    FUN_02749e20(local_88,uVar7,0);
    puVar11 = (undefined8 *)PTR_DAT_03cbf088;
LAB_0281bb1c:
    uVar6 = *puVar11;
    puVar11 = &local_a0;
    local_a0 = local_88._0_8_;
    uStack_98 = local_88._8_8_;
LAB_0281bc54:
    param_1 = (long *)thunk_FUN_01a89a98(uVar6,puVar11);
  }
  else {
LAB_0281baa4:
    lVar12 = thunk_FUN_01a89d6c(param_1,*(undefined8 *)PTR_DAT_03cbfb98);
    if (lVar12 != 0) {
      uVar7 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      if ((uVar5 & 1) != 0) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        FUN_02760dc0(local_88,lVar12,0);
        puVar11 = (undefined8 *)PTR_DAT_03cbed58;
        goto LAB_0281bb1c;
      }
    }
    puVar2 = PTR_DAT_03cbed58;
    lVar12 = *param_1;
    if (lVar12 == *(long *)PTR_DAT_03cbed58) {
      puVar8 = (undefined8 *)thunk_FUN_01a89fbc(param_1);
      uStack_68 = puVar8[1];
      local_70 = *puVar8;
      uVar7 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        param_1 = (long *)FUN_02763970(&local_70,0);
        goto LAB_0281bc58;
      }
      lVar12 = *param_1;
    }
    plVar10 = param_1;
    if (lVar12 != *(long *)PTR_DAT_03cbebc0) {
      plVar10 = (long *)0x0;
    }
    if (plVar10 == (long *)0x0) {
LAB_0281bef0:
      uVar7 = *(undefined8 *)PTR_DAT_03cfe680;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      puVar1 = PTR_DAT_03cfe690;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        local_88 = FUN_0281ac68(param_1);
        puVar11 = (undefined8 *)PTR_DAT_03cc4168;
LAB_0281bf50:
        uVar6 = *puVar11;
        puVar11 = (undefined8 *)local_88;
        goto LAB_0281bc54;
      }
      if (*param_1 == *(long *)PTR_DAT_03cc4168) {
        puVar11 = (undefined8 *)thunk_FUN_01a89fbc(param_1);
        uVar6 = *puVar11;
        uVar7 = puVar11[1];
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        param_1 = (long *)FUN_0281afdc(uVar6,uVar7,param_3);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar10 = (long *)FUN_02f4e744(uVar6,0);
        if ((plVar10 == (long *)0x0) || (uVar5 = FUN_02f47704(plVar10,param_3,0), (uVar5 & 1) == 0))
        {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar10 = (long *)FUN_02f4e744(param_3,0);
          if ((plVar10 == (long *)0x0) || (uVar5 = FUN_02f47668(plVar10,uVar6,0), (uVar5 & 1) == 0))
          {
            puVar1 = PTR_DAT_03cf4978;
            lVar12 = *(long *)PTR_DAT_03cf4978;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar12 = *(long *)puVar1;
            }
            if ((long *)**(undefined8 **)(lVar12 + 0xb8) != param_1) {
              uVar5 = FUN_028307d4(param_3,0);
              if ((((uVar5 & 1) != 0) || (uVar5 = FUN_02830808(param_3,0), (uVar5 & 1) != 0)) ||
                 (uVar5 = FUN_028308b0(param_3,0), (uVar5 & 1) != 0)) {
                *param_4 = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,0);
                return 2;
              }
LAB_0281c114:
              *param_4 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,0);
              return 3;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar5 = FUN_0281c350(param_3);
            if ((uVar5 & 1) == 0) {
              *param_4 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,0);
              return 1;
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            param_1 = (long *)FUN_0281c3e8(0,uVar6,param_3);
          }
          else {
            param_1 = (long *)(**(code **)(*plVar10 + 0x198))
                                        (plVar10,0,param_2,param_1,*(undefined8 *)(*plVar10 + 0x1a0)
                                        );
          }
        }
        else {
          param_1 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                      (plVar10,0,param_2,param_1,param_3,
                                       *(undefined8 *)(*plVar10 + 0x1b0));
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      if ((uVar5 & 1) != 0) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        FUN_02761154(local_88,plVar10,0);
        uVar6 = *(undefined8 *)puVar2;
        local_a0 = local_88._0_8_;
        uStack_98 = local_88._8_8_;
        goto LAB_0281bc54;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5298;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      if ((uVar5 & 1) != 0) {
        param_1 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbede8);
        FUN_02e9f258(param_1,plVar10,0,0);
        *param_4 = (long)param_1;
        goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5278;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_0281a978(plVar10);
        local_88._0_8_ = uVar6;
        puVar11 = (undefined8 *)PTR_DAT_03cc4b20;
        goto LAB_0281bf50;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0277b678(uVar7,0);
      uVar5 = FUN_02786d28(param_3,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_03cf4738;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_0277b678(uVar7,0);
        uVar5 = FUN_02786d28(param_3,uVar7,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar5 = FUN_02790e8c(plVar10,&local_78,0);
          if ((uVar5 & 1) != 0) {
            *param_4 = (long)local_78;
            param_1 = local_78;
            goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
          }
          goto LAB_0281c114;
        }
        uVar7 = *(undefined8 *)PTR_DAT_03ce4638;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar9 = (long *)FUN_0277b678(uVar7,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar5 = (**(code **)(*plVar9 + 0x388))(plVar9,param_3,*(undefined8 *)(*plVar9 + 0x390));
        if ((uVar5 & 1) == 0) goto LAB_0281bef0;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        param_1 = (long *)FUN_01ab6dbc(plVar10,1,*(undefined8 *)PTR_DAT_03cca940,
                                       *(undefined8 *)PTR_DAT_03cfe688);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        param_1 = (long *)FUN_02740e38(plVar10,0);
      }
    }
  }
LAB_0281bc58:
  *param_4 = (long)param_1;
OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces:
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,param_1);
  return 0;
}


