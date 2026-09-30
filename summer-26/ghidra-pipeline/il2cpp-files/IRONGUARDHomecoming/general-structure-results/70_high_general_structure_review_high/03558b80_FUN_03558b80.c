/*
FUNCTION_NAME: FUN_03558b80
ENTRY_POINT: 03558b80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_03558b80(uint param_1,long *param_2,undefined8 *param_3,long param_4,long param_5,long *param_6,
            undefined4 param_7)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 local_60;
  undefined2 local_5c [2];
  undefined8 local_58;
  int local_48;
  undefined4 local_44;
  
  puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__;
  local_44 = param_7;
  if ((DAT_048331ff & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_ftLightmaps_OnSceneChangedPlay__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_s16__);
    DAT_048331ff = 1;
  }
  local_48 = 0;
  local_58 = 0;
  local_5c[0] = 0;
  *(undefined4 *)param_3 = 0x12;
  lVar14 = *param_6;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03561830(param_2,&local_48,(long)&local_58 + 4,lVar14,0);
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  switch(local_48) {
  case 1:
  case 2:
    if ((*(int *)(param_4 + 8) == 3) || (local_58._4_4_ == -1)) break;
    if (param_1 == 0x12) {
Oculus_Interaction_TransformFeatureStateProviderRef__GetCurrentState:
      lVar14 = param_2[2];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar5 = FUN_035614b8(param_2,0);
      if ((int)lVar14 < iVar5 + -1) {
        if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_035589e8(param_2,param_5);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
      }
    }
    else if (param_1 == 0x13) {
      lVar14 = param_2[2];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar5 = FUN_035614b8(param_2,0);
      if ((int)lVar14 < iVar5 + -1) {
        if (*(uint *)(param_2 + 1) <= *(uint *)(param_2 + 2)) goto LAB_035598ac;
        if (*(short *)(*param_2 + (long)(int)*(uint *)(param_2 + 2) * 2) == 0x2e) {
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_035585e8(param_2,param_4 + 0x20);
        }
      }
      goto Oculus_Interaction_TransformFeatureStateProviderRef__GetCurrentState;
    }
    *(int *)(param_3 + 1) = local_58._4_4_;
    if (local_48 == 2) {
      if (*(int *)(param_4 + 0x10) != -1) break;
      *(int *)(param_4 + 0x10) = local_58._4_4_;
      lVar14 = *param_6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03561b64(param_2,lVar14,&local_58,local_5c,0);
      puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if ((int)uVar4 < 0x701) {
        if ((int)uVar4 < 0x401) {
          if (uVar4 == 0x200) goto LAB_03559354;
          if (uVar4 == 0x300) goto LAB_035597ac;
          if (uVar4 != 0x400) break;
        }
        else if (uVar4 != 0x500) {
          if ((uVar4 != 0x600) && ((uVar4 != 0x700 || (*(char *)(param_4 + 0x28) == '\0')))) break;
LAB_035595e8:
          uVar6 = 0xd;
          goto LAB_035597b0;
        }
        if (*(int *)(param_4 + 0x1c) == -1) {
          uVar6 = 0xc;
          *(uint *)(param_4 + 0x1c) = (uint)(uVar4 != 0x400);
LAB_035597b0:
          *(undefined4 *)param_3 = uVar6;
          return 1;
        }
        goto LAB_0355979c;
      }
      if ((int)uVar4 < 0xa01) {
        if (((uVar4 != 0x800) && (uVar4 != 0x900)) && (uVar4 != 0xa00)) break;
LAB_0355976c:
        uVar6 = 9;
        goto LAB_03559770;
      }
      if ((int)uVar4 < 0xc01) {
        if ((uVar4 != 0xb00) && (uVar4 != 0xc00)) break;
      }
      else if (uVar4 != 0xd00) {
        if (uVar4 != 0xf00) break;
        lVar14 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar14 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_035598b0;
        if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
        lVar13 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_035598b0;
        if (*(uint *)(lVar13 + 0x18) < 0xe) goto LAB_035598ac;
        if (*(int *)(lVar13 + 0x54) == 0x14) {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_035598b0;
          }
          if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
          lVar14 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar14 + 0x18) < 0xd) goto LAB_035598ac;
          if (0x14 < *(int *)(lVar14 + 0x50)) goto LAB_03559678;
        }
        goto LAB_035595e8;
      }
    }
    else {
      lVar14 = *param_6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03561b64(param_2,lVar14,&local_58,local_5c,0);
      puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if ((int)uVar4 < 0x801) {
        if (0x400 < (int)uVar4) {
          if ((int)uVar4 < 0x601) {
            if (uVar4 == 0x500) goto Oculus_Interaction_ControllerOffset__InjectController;
            if (uVar4 != 0x600) break;
          }
          else {
            if (uVar4 != 0x700) {
              if (uVar4 == 0x800) {
                if (*param_6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                plVar9 = *(long **)(*param_6 + 0x78);
                if (plVar9 != (long *)0x0) {
                  uVar6 = (**(code **)(*plVar9 + 0x308))
                                    (plVar9,local_58._4_4_,*(undefined8 *)(*plVar9 + 0x310));
                  uVar7 = DAT_00c8ea20;
                  *(undefined4 *)(param_3 + 1) = uVar6;
                  *param_3 = uVar7;
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              break;
            }
            if ((4 < param_1 - 0xb) || (*(char *)(param_4 + 0x28) == '\0')) {
              uVar6 = *(undefined4 *)(param_3 + 1);
              uVar11 = 5;
              goto LAB_03559848;
            }
          }
          uVar6 = *(undefined4 *)(param_3 + 1);
          uVar11 = 4;
LAB_03559848:
          *(undefined4 *)param_3 = uVar11;
          FUN_03563254(param_4,uVar6,0);
          return 1;
        }
        if (uVar4 == 0x200) {
          uVar6 = *(undefined4 *)(param_3 + 1);
          uVar11 = 1;
          goto LAB_03559848;
        }
        if (uVar4 == 0x300) {
          uVar6 = *(undefined4 *)(param_3 + 1);
          uVar11 = 3;
          goto LAB_03559848;
        }
        if (uVar4 != 0x400) break;
Oculus_Interaction_ControllerOffset__InjectController:
        if (*(int *)(param_4 + 0x1c) == -1) {
          *(uint *)(param_4 + 0x1c) = (uint)(uVar4 != 0x400);
          *(undefined4 *)param_3 = 2;
          if (param_1 == 4) {
            lVar14 = *param_6;
            uVar7 = extraout_x1;
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              uVar7 = extraout_x1_00;
            }
            uVar8 = FUN_03559934(0x15,uVar7,param_5,&local_44,param_4,lVar14);
            if ((uVar8 & 1) == 0) {
              return 0;
            }
          }
          FUN_03563254(param_4,*(undefined4 *)(param_3 + 1),0);
          if ((param_1 & 0xfffffffe) != 0x12) {
            return 1;
          }
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_035589e8(param_2,param_5);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          return 1;
        }
LAB_0355979c:
        FUN_035633a0(param_5,0);
        return 1;
      }
      if ((int)uVar4 < 0xb01) {
        if ((uVar4 == 0x900) || (uVar4 == 0xa00)) goto LAB_0355976c;
        if (uVar4 != 0xb00) break;
      }
      else {
        if (0xd00 < (int)uVar4) {
          if (uVar4 == 0xe00) {
            uVar6 = *(undefined4 *)(param_3 + 1);
            uVar11 = 0x13;
            goto LAB_03559848;
          }
          if (uVar4 != 0xf00) break;
          lVar14 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar14 = *(long *)puVar3;
          }
          lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar12 == 0) {
LAB_035598b0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar12 + 0x18) <= param_1) {
LAB_035598ac:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar13 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_035598ac;
          if (*(int *)(lVar13 + 0x30) == 0x14) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_035598b0;
            }
            if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
            lVar14 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_035598b0;
            if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_035598ac;
            if (*(int *)(lVar14 + 0x2c) < 0x15) goto LAB_035594b4;
            *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
            *(undefined2 *)((long)param_2 + 0x14) = local_5c[0];
            uVar11 = 3;
          }
          else {
LAB_035594b4:
            uVar11 = 4;
          }
          uVar6 = *(undefined4 *)(param_3 + 1);
          goto LAB_03559848;
        }
        if ((uVar4 | 0x100) != 0xd00) break;
      }
    }
    uVar6 = 10;
LAB_03559770:
    *(undefined4 *)param_3 = uVar6;
    *(uint *)((long)param_3 + 4) = uVar4;
    return 1;
  case 3:
  case 4:
    if (*(int *)(param_4 + 0x1c) == -1) {
      *(int *)(param_4 + 0x1c) = local_58._4_4_;
      return 1;
    }
    break;
  case 5:
    if (*(int *)(param_4 + 0xc) != -1) break;
    lVar14 = *param_6;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar5 = FUN_03561b64(param_2,lVar14,&local_58,local_5c,0);
    puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
    if (iVar5 < 0x301) {
      if (iVar5 == 0x200) {
        uVar6 = 6;
        goto LAB_0355969c;
      }
      if (iVar5 != 0x300) break;
LAB_0355953c:
      uVar6 = 7;
    }
    else {
      if (iVar5 != 0x600) {
        if (iVar5 == 0x700) {
          if (*(char *)(param_4 + 0x28) == '\0') break;
        }
        else {
          if (iVar5 != 0xf00) break;
          lVar14 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar14 = *(long *)puVar3;
          }
          lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
          lVar13 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar13 + 0x18) < 9) goto LAB_035598ac;
          if (*(int *)(lVar13 + 0x40) == 0x14) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_035598b0;
            }
            if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
            lVar14 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_035598b0;
            if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_035598ac;
            if (0x14 < *(int *)(lVar14 + 0x3c)) {
              *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
              *(undefined2 *)((long)param_2 + 0x14) = local_5c[0];
              goto LAB_0355953c;
            }
          }
        }
      }
      uVar6 = 8;
    }
LAB_0355969c:
    *(undefined4 *)param_3 = uVar6;
    *(int *)(param_4 + 0xc) = local_58._4_4_;
    return 1;
  case 6:
    *(undefined4 *)param_3 = 0;
    return 1;
  case 7:
    if (*(int *)(param_4 + 0x14) != -1) break;
    uVar6 = 0xb;
    *(int *)(param_4 + 0x14) = local_58._4_4_;
    goto LAB_0355924c;
  case 8:
    if ((*(byte *)(param_5 + 0x25) & 1) == 0) {
      *(undefined4 *)param_3 = 0xf;
      *(undefined8 *)(param_5 + 0x28) = 0;
      uVar4 = *(uint *)(param_5 + 0x24) | 0x300;
LAB_0355928c:
      *(uint *)(param_5 + 0x24) = uVar4;
      return 1;
    }
    break;
  case 9:
    goto switchD_03558c88_caseD_9;
  default:
    return 1;
  case 0xb:
    uVar1 = *(undefined2 *)((long)param_2 + 0x14);
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_034fc34c(uVar1,0);
    if ((uVar8 & 1) != 0) {
      local_60 = (undefined4)param_2[2];
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_60);
      FUN_035633fc(param_5,6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_s16__,uVar7
                   ,0);
      return 0;
    }
    if (((*(short *)((long)param_2 + 0x14) == 0x2d) || (*(short *)((long)param_2 + 0x14) == 0x2b))
       && ((*(byte *)(param_5 + 0x25) & 1) == 0)) {
      lVar14 = param_2[2];
      if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_035586d4(param_2,param_5 + 0x28);
      if ((uVar8 & 1) != 0) {
        uVar4 = *(uint *)(param_5 + 0x24) | 0x100;
        goto LAB_0355928c;
      }
      *(int *)(param_2 + 2) = (int)lVar14;
    }
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03559e80(param_2);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    break;
  case 0xc:
    if (local_58._4_4_ < 100) {
      *(int *)(param_3 + 1) = local_58._4_4_;
      FUN_03563254(param_4,local_58._4_4_,0);
      lVar14 = *param_6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar5 = FUN_03561b64(param_2,lVar14,&local_58,local_5c,0);
      puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (iVar5 < 0x301) {
        if (iVar5 == 0x200) {
          uVar6 = 1;
          goto LAB_035597b0;
        }
        if (iVar5 != 0x300) break;
LAB_035594cc:
        uVar6 = 4;
        goto LAB_035597b0;
      }
      if (iVar5 == 0x600) goto LAB_035594cc;
      if (iVar5 != 0xf00) break;
      lVar14 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar14 = *(long *)puVar3;
      }
      lVar12 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
      lVar13 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_035598ac;
      if (*(int *)(lVar13 + 0x30) != 0x14) goto LAB_035594cc;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        if (lVar12 == 0) goto LAB_035598b0;
      }
      if (*(uint *)(lVar12 + 0x18) <= param_1) goto LAB_035598ac;
      lVar14 = *(long *)(lVar12 + (long)(int)param_1 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_035598ac;
      if (*(int *)(lVar14 + 0x2c) < 0x15) goto LAB_035594cc;
      uVar6 = 3;
    }
    else {
      if (*(int *)(param_4 + 0x10) != -1) break;
      *(int *)(param_4 + 0x10) = local_58._4_4_;
      lVar14 = *param_6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar5 = FUN_03561b64(param_2,lVar14,&local_58,local_5c,0);
      puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (iVar5 != 0xf00) {
        if (iVar5 == 0x300) {
LAB_035597ac:
          uVar6 = 0xc;
          goto LAB_035597b0;
        }
        if (iVar5 != 0x200) break;
LAB_03559354:
        uVar6 = 0xe;
        goto LAB_035597b0;
      }
      lVar14 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar14 = *(long *)puVar3;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar14 + 0x18) <= param_1) goto LAB_035598ac;
      lVar14 = *(long *)(lVar14 + (long)(int)param_1 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar14 + 0x18) < 0xd) goto LAB_035598ac;
      if (*(int *)(lVar14 + 0x50) < 0x15) break;
LAB_03559678:
      uVar6 = 0xc;
    }
    *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
    *(undefined2 *)((long)param_2 + 0x14) = local_5c[0];
    goto LAB_0355924c;
  case 0xd:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04833019 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
      DAT_04833019 = '\x01';
    }
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar2;
    }
    if (**(char **)(lVar14 + 0xb8) != '\0') {
LAB_03559878:
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider>__);
      uVar7 = thunk_FUN_01f117cc();
      FUN_0357b574(uVar7,0);
      uVar10 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_s32__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,uVar10);
    }
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03559cb0();
    *(undefined8 *)(param_5 + 0x30) = uVar7;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar14 = FUN_0350da04(0);
    goto LAB_03559224;
  case 0xe:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04833019 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
      DAT_04833019 = '\x01';
    }
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar2;
    }
    if (**(char **)(lVar14 + 0xb8) != '\0') goto LAB_03559878;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = Oculus_Interaction_ControllerPointerPose__InjectAllHandPointerPose();
    *(undefined8 *)(param_5 + 0x30) = uVar7;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar14 = Oculus_Interaction_FirstHoverInteractorGroup__get_HasCandidate(0);
LAB_03559224:
    *param_6 = lVar14;
    thunk_FUN_01f51358(param_6,lVar14);
switchD_03558c88_caseD_9:
    if (*(int *)(param_5 + 0x20) != -1) {
      uVar6 = 0x10;
      *(int *)(param_5 + 0x20) = local_58._4_4_;
LAB_0355924c:
      *(undefined4 *)param_3 = uVar6;
      return 1;
    }
  }
  FUN_035633a0(param_5,0);
  return 0;
}


