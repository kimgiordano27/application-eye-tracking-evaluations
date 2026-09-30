/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 01f5ec64
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_headPoseRelativeOffsetTranslation
               (undefined8 *param_1,long *param_2,undefined4 param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 in_stack_00000020;
  double in_stack_00000028;
  undefined4 uStack0000000000000034;
  ulong in_stack_00000038;
  double in_stack_00000048;
  
  puVar4 = PTR_DAT_027be7f0;
  if ((DAT_0293dcad & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba9b8);
    thunk_FUN_01279b34(PTR_DAT_027b4b30);
    thunk_FUN_01279b34(PTR_DAT_027be618);
    thunk_FUN_01279b34(PTR_DAT_027b1af0);
    thunk_FUN_01279b34(PTR_DAT_027b1b40);
    thunk_FUN_01279b34(PTR_DAT_027be7f0);
    thunk_FUN_01279b34(PTR_DAT_027c0aa8);
    DAT_0293dcad = 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0.0;
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  puVar3 = PTR_DAT_027ba9b8;
  uStack0000000000000034 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f5fd94(param_2);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar6 = FUN_01f5fe8c(param_2,2,(long)&stack0x00000038 + 4);
  puVar2 = PTR_DAT_027c0a78;
  if ((uVar6 & 1) == 0) {
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    *(undefined4 *)(param_4 + 0x40) = 4;
    uVar9 = *(undefined8 *)puVar2;
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f5fd94(param_2);
    uVar6 = FUN_01f5ff14(param_2,0x3a);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f5fd94(param_2);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01f5fe8c(param_2,2,&stack0x00000038);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f5fd94(param_2);
        uVar6 = FUN_01f5ff14(param_2,0x3a);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f5fd94(param_2);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f5fe8c(param_2,2,&stack0x00000034);
          if ((uVar6 & 1) == 0) goto LAB_01f5f054;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f5ff14(param_2,0x2e);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar6 = FUN_01f59248(param_2,&stack0x00000028);
            if ((uVar6 & 1) == 0) goto LAB_01f5f054;
            *(int *)(param_2 + 2) = (int)param_2[2] + -1;
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f5fd94(param_2);
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar6 = FUN_01f59330(param_2);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar5 = *(uint *)(param_2 + 2);
          if (*(uint *)(param_2 + 1) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          uVar1 = *(ushort *)(*param_2 + (long)(int)uVar5 * 2);
          if (uVar1 < 0x5a) {
            if ((uVar1 == 0x2b) || (uVar1 == 0x2d)) {
              *(uint *)(param_4 + 0x24) = *(uint *)(param_4 + 0x24) | 0x100;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar6 = FUN_01f593dc(param_2,param_4 + 0x28);
              if ((uVar6 & 1) == 0) goto LAB_01f5f054;
            }
            else {
LAB_01f5ef98:
              *(uint *)(param_2 + 2) = uVar5 - 1;
            }
          }
          else {
            if ((uVar1 != 0x5a) && (uVar1 != 0x7a)) goto LAB_01f5ef98;
            uVar5 = *(uint *)(param_4 + 0x24) | 0x100;
            *(uint *)(param_4 + 0x24) = uVar5;
            puVar2 = PTR_DAT_027b1b40;
            lVar7 = *(long *)PTR_DAT_027b1b40;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01220628();
              lVar7 = *(long *)puVar2;
              uVar5 = *(uint *)(param_4 + 0x24);
            }
            uVar9 = **(undefined8 **)(lVar7 + 0xb8);
            *(uint *)(param_4 + 0x24) = uVar5 | 0x200;
            *(undefined8 *)(param_4 + 0x28) = uVar9;
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_01f5fd94(param_2);
          uVar6 = FUN_01f5ff14(param_2,0x23);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar6 = FUN_01f5b434(param_2);
            if ((uVar6 & 1) == 0) goto LAB_01f5f054;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            FUN_01f5fd94(param_2);
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f5ff14(param_2,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar6 = FUN_01f5b434(param_2);
            if ((uVar6 & 1) == 0) goto LAB_01f5f054;
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f59330(param_2);
          if ((uVar6 & 1) != 0) goto LAB_01f5f054;
        }
        if (*(int *)(*(long *)PTR_DAT_027be618 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar8 = (long *)FUN_01f2b618(0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar6 = (**(code **)(*plVar8 + 0x2a8))
                          (plVar8,*(undefined4 *)(param_1 + 2),*(undefined4 *)*param_1,
                           ((undefined4 *)*param_1)[1],in_stack_00000038._4_4_,
                           in_stack_00000038 & 0xffffffff,uStack0000000000000034,0);
        dVar11 = in_stack_00000028;
        if ((uVar6 & 1) == 0) {
          uVar9 = *(undefined8 *)PTR_DAT_027c0aa8;
          *(undefined4 *)(param_4 + 0x40) = 7;
          goto FUN_01f5f08c;
        }
        if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        dVar11 = dVar11 * DAT_00745958;
        dVar10 = modf(dVar11,&stack0x00000048);
        if (0.0 <= dVar11) {
          if (dVar10 == 0.5) {
            dVar11 = 1.0;
            goto LAB_01f5f194;
          }
          dVar10 = (double)(long)(dVar11 + 0.5);
        }
        else if (dVar10 == -0.5) {
          dVar11 = -1.0;
LAB_01f5f194:
          dVar10 = in_stack_00000048;
          if (((long)in_stack_00000048 & 1U) != 0) {
            dVar10 = in_stack_00000048 + dVar11;
          }
        }
        else {
          dVar10 = (double)(long)(dVar11 + -0.5);
        }
        if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar7 = -0x8000000000000000;
        if (dVar10 != INFINITY) {
          lVar7 = (long)dVar10;
        }
        in_stack_00000020 = FUN_01e727dc(&stack0x00000020,lVar7,0);
        *(undefined8 *)(param_4 + 0x38) = in_stack_00000020;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar5 = FUN_01f5f534(param_2,param_4,param_3,0);
        goto LAB_01f5f090;
      }
    }
LAB_01f5f054:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar4 = PTR_DAT_027c0a78;
    *(undefined4 *)(param_4 + 0x40) = 4;
    uVar9 = *(undefined8 *)puVar4;
  }
FUN_01f5f08c:
  uVar5 = 0;
  *(undefined8 *)(param_4 + 0x48) = uVar9;
  *(undefined8 *)(param_4 + 0x50) = 0;
LAB_01f5f090:
  return uVar5 & 1;
}


