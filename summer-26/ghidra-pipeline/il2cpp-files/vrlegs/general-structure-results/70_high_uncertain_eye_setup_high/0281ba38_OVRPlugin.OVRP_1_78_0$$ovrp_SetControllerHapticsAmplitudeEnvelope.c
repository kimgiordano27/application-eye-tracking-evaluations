/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 0281ba38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar2 = (undefined8 *)thunk_FUN_01a89fbc();
  uVar7 = *puVar2;
                    /* try { // try from 0281ba44 to 0291ba4f has its CatchHandler @ 0281bb3c */
  uVar8 = *(undefined8 *)PTR_DAT_03cc5220;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
                    /* try { // try from 0281ba60 to 0291ba63 has its CatchHandler @ 0281bb30 */
                    /* try { // try from 0281ba64 to 0291ba6b has its CatchHandler @ 0281bb34 */
  FUN_0277b678(uVar8,0);
  uVar3 = FUN_02786d28();
  if ((uVar3 & 1) != 0) {
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
                    /* try { // try from 0281ba90 to 0291ba9f has its CatchHandler @ 0281bb38 */
    FUN_02749e20(&stack0x00000018,uVar7,0);
    puVar2 = (undefined8 *)PTR_DAT_03cbf088;
                    /* try { // try from 0281baa0 to 0291bb27 has its CatchHandler @ 0281b91c */
LAB_0281bb1c:
    uVar7 = *puVar2;
    goto LAB_0281bc54;
  }
  lVar4 = thunk_FUN_01a89d6c();
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_03cc50c8;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0277b678(uVar7,0);
    uVar3 = FUN_02786d28();
    if ((uVar3 & 1) != 0) {
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_02760dc0(&stack0x00000018,lVar4,0);
      puVar2 = (undefined8 *)PTR_DAT_03cbed58;
      goto LAB_0281bb1c;
    }
  }
  puVar1 = PTR_DAT_03cbed58;
  lVar4 = *unaff_x21;
  if (lVar4 == *(long *)PTR_DAT_03cbed58) {
    puVar2 = (undefined8 *)thunk_FUN_01a89fbc();
    in_stack_00000038 = puVar2[1];
    in_stack_00000030 = *puVar2;
    uVar7 = *(undefined8 *)PTR_DAT_03cc5210;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0277b678(uVar7,0);
    uVar3 = FUN_02786d28();
    if ((uVar3 & 1) == 0) {
      lVar4 = *unaff_x21;
      goto OVRPlugin_OVRP_1_78_0___cctor;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_02763970(&stack0x00000030,0);
  }
  else {
OVRPlugin_OVRP_1_78_0___cctor:
    plVar6 = unaff_x21;
    if (lVar4 != *(long *)PTR_DAT_03cbebc0) {
      plVar6 = (long *)0x0;
    }
    if (plVar6 == (long *)0x0) {
LAB_0281bef0:
      uVar7 = *(undefined8 *)PTR_DAT_03cfe680;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar7,0);
      uVar3 = FUN_02786d28();
      puVar1 = PTR_DAT_03cfe690;
      if ((uVar3 & 1) == 0) {
        if (*unaff_x21 == *(long *)PTR_DAT_03cc4168) {
          puVar2 = (undefined8 *)thunk_FUN_01a89fbc();
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_0281afdc(uVar7,uVar8);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar6 = (long *)FUN_02f4e744();
          if ((plVar6 == (long *)0x0) || (uVar3 = FUN_02f47704(), (uVar3 & 1) == 0)) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            plVar6 = (long *)FUN_02f4e744();
            if ((plVar6 == (long *)0x0) || (uVar3 = FUN_02f47668(), (uVar3 & 1) == 0)) {
              puVar1 = PTR_DAT_03cf4978;
              lVar4 = *(long *)PTR_DAT_03cf4978;
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar4 = *(long *)puVar1;
              }
              if ((long *)**(undefined8 **)(lVar4 + 0xb8) != unaff_x21) {
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
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_0281c3e8(0);
            }
            else {
              uVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,0);
            }
          }
          else {
            uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,0);
          }
        }
      }
      else {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        _in_stack_00000018 = FUN_0281ac68();
        puVar2 = (undefined8 *)PTR_DAT_03cc4168;
LAB_0281bf50:
        uVar7 = *puVar2;
LAB_0281bc54:
        uVar7 = thunk_FUN_01a89a98(uVar7);
      }
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_03cc50c8;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar7,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_02761154(&stack0x00000018,plVar6,0);
        uVar7 = *(undefined8 *)puVar1;
        goto LAB_0281bc54;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5298;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar7,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbede8);
        FUN_02e9f258(uVar7,plVar6,0,0);
        *unaff_x19 = uVar7;
        goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5278;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar7,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_0281a978(plVar6);
        in_stack_00000018 = uVar7;
        puVar2 = (undefined8 *)PTR_DAT_03cc4b20;
        goto LAB_0281bf50;
      }
      uVar7 = *(undefined8 *)PTR_DAT_03cc5210;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0277b678(uVar7,0);
      uVar3 = FUN_02786d28();
      if ((uVar3 & 1) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_03cf4738;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0277b678(uVar7,0);
        uVar3 = FUN_02786d28();
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar3 = FUN_02790e8c(plVar6,&stack0x00000028,0);
          if ((uVar3 & 1) != 0) {
            *unaff_x19 = in_stack_00000028;
            goto OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces;
          }
          goto LAB_0281c114;
        }
        uVar7 = *(undefined8 *)PTR_DAT_03ce4638;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar5 = (long *)FUN_0277b678(uVar7,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar3 = (**(code **)(*plVar5 + 0x388))();
        if ((uVar3 & 1) == 0) goto LAB_0281bef0;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_01ab6dbc(plVar6,1,*(undefined8 *)PTR_DAT_03cca940,
                             *(undefined8 *)PTR_DAT_03cfe688);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_02740e38(plVar6,0);
      }
    }
  }
  *unaff_x19 = uVar7;
OVRPlugin_OVRP_1_79_0__ovrp_ShareSpaces:
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return 0;
}


