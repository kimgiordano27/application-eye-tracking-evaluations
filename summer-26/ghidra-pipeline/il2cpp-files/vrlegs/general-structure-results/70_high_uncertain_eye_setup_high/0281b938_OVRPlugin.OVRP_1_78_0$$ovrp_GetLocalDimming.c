/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimming
ENTRY_POINT: 0281b938
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


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimming(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 uVar9;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar3 = FUN_02786d28();
  if ((uVar3 & 1) != 0) {
    *unaff_x19 = unaff_x21;
    goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
  }
  uVar4 = thunk_FUN_01a5dd74();
  puVar2 = PTR_DAT_03cfdb48;
  if (*(int *)(*(long *)PTR_DAT_03cfdb48 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cfdb48);
  }
  uVar3 = FUN_0281a8e4(uVar4);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_0281a8e4();
    if ((uVar3 & 1) == 0) goto LAB_0281ba1c;
    uVar3 = FUN_02830868();
    if ((uVar3 & 1) == 0) {
LAB_0281bba8:
      if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_0273a978();
    }
    else if (*unaff_x21 == *(long *)PTR_DAT_03cbebc0) {
      (**(code **)(*(long *)PTR_DAT_03cbebc0 + 0x168))();
      if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc0cb8);
      }
      uVar4 = FUN_027a37e8();
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_0281c2b8();
      if ((uVar3 & 1) == 0) goto LAB_0281bba8;
      if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_027a42a4();
    }
    goto LAB_0281bc58;
  }
LAB_0281ba1c:
  if (*unaff_x21 == *(long *)PTR_DAT_03cbeeb0) {
    puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
    uVar4 = *puVar5;
    uVar9 = *(undefined8 *)PTR_DAT_03cc5220;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0277b678(uVar9,0);
    uVar3 = FUN_02786d28();
    if ((uVar3 & 1) == 0) goto LAB_0281baa4;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_02749e20(&stack0x00000018,uVar4,0);
    puVar5 = (undefined8 *)PTR_DAT_03cbf088;
LAB_0281bb1c:
    uVar4 = *puVar5;
LAB_0281bc54:
    uVar4 = thunk_FUN_01a89a98(uVar4);
  }
  else {
LAB_0281baa4:
    lVar6 = thunk_FUN_01a89d6c();
    if (lVar6 != 0) {
      uVar4 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_02760dc0(&stack0x00000018,lVar6,0);
        puVar5 = (undefined8 *)PTR_DAT_03cbed58;
        goto LAB_0281bb1c;
      }
    }
    puVar1 = PTR_DAT_03cbed58;
    lVar6 = *unaff_x21;
    if (lVar6 == *(long *)PTR_DAT_03cbed58) {
      puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
      in_stack_00000038 = puVar5[1];
      in_stack_00000030 = *puVar5;
      uVar4 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_02763970(&stack0x00000030,0);
        goto LAB_0281bc58;
      }
      lVar6 = *unaff_x21;
    }
    plVar8 = unaff_x21;
    if (lVar6 != *(long *)PTR_DAT_03cbebc0) {
      plVar8 = (long *)0x0;
    }
    if (plVar8 == (long *)0x0) {
LAB_0281bef0:
      uVar4 = *(undefined8 *)PTR_DAT_03cfe680;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      puVar1 = PTR_DAT_03cfe690;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        _in_stack_00000018 = FUN_0281ac68();
        puVar5 = (undefined8 *)PTR_DAT_03cc4168;
LAB_0281bf50:
        uVar4 = *puVar5;
        goto LAB_0281bc54;
      }
      if (*unaff_x21 == *(long *)PTR_DAT_03cc4168) {
        puVar5 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = *puVar5;
        uVar9 = puVar5[1];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_0281afdc(uVar4,uVar9);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar8 = (long *)FUN_02f4e744();
        if ((plVar8 == (long *)0x0) || (uVar3 = FUN_02f47704(), (uVar3 & 1) == 0)) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar8 = (long *)FUN_02f4e744();
          if ((plVar8 == (long *)0x0) || (uVar3 = FUN_02f47668(), (uVar3 & 1) == 0)) {
            puVar1 = PTR_DAT_03cf4978;
            lVar6 = *(long *)PTR_DAT_03cf4978;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar6 = *(long *)puVar1;
            }
            if ((long *)**(undefined8 **)(lVar6 + 0xb8) != unaff_x21) {
              uVar3 = FUN_028307d4();
              if ((((uVar3 & 1) != 0) || (uVar3 = FUN_02830808(), (uVar3 & 1) != 0)) ||
                 (uVar3 = FUN_028308b0(), (uVar3 & 1) != 0)) {
                *unaff_x19 = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                return 2;
              }
LAB_0281c114:
              *unaff_x19 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              return 3;
            }
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar3 = FUN_0281c350();
            if ((uVar3 & 1) == 0) {
              *unaff_x19 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              return 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar4 = FUN_0281c3e8(0);
          }
          else {
            uVar4 = (**(code **)(*plVar8 + 0x198))(plVar8,0);
          }
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x1a8))(plVar8,0);
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_02761154(&stack0x00000018,plVar8,0);
        uVar4 = *(undefined8 *)puVar1;
        goto LAB_0281bc54;
      }
      uVar4 = *(undefined8 *)PTR_DAT_03cc5298;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbede8);
        FUN_02e9f258(uVar4,plVar8,0,0);
        *unaff_x19 = uVar4;
        goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
      }
      uVar4 = *(undefined8 *)PTR_DAT_03cc5278;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_0281a978(plVar8);
        in_stack_00000018 = uVar4;
        puVar5 = (undefined8 *)PTR_DAT_03cc4b20;
        goto LAB_0281bf50;
      }
      uVar4 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar4,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined8 *)PTR_DAT_03cf4738;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0277b678(uVar4,0);
        uVar3 = FUN_02786d28();
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar3 = FUN_02790e8c(plVar8,&stack0x00000028,0);
          if ((uVar3 & 1) != 0) {
            *unaff_x19 = in_stack_00000028;
            goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
          }
          goto LAB_0281c114;
        }
        uVar4 = *(undefined8 *)PTR_DAT_03ce4638;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar7 = (long *)FUN_0277b678(uVar4,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = (**(code **)(*plVar7 + 0x388))();
        if ((uVar3 & 1) == 0) goto LAB_0281bef0;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_01ab6dbc(plVar8,1,*(undefined8 *)PTR_DAT_03cca940,
                             *(undefined8 *)PTR_DAT_03cfe688);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_02740e38(plVar8,0);
      }
    }
  }
LAB_0281bc58:
  *unaff_x19 = uVar4;
OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces:
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return 0;
}


