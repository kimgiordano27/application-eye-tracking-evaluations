/*
FUNCTION_NAME: Oculus.Interaction.TransformFeatureStateProviderRef$$IsStateActive
ENTRY_POINT: 03558c58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Oculus_Interaction_TransformFeatureStateProviderRef__IsStateActive(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  int in_stack_00000018;
  
  FUN_03561830();
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  switch(in_stack_00000018) {
  case 1:
  case 2:
    if ((*(int *)(unaff_x23 + 8) == 3) || (iStack000000000000000c == -1)) break;
    if (unaff_w22 == 0x12) {
Oculus_Interaction_TransformFeatureStateProviderRef__GetCurrentState:
      lVar6 = unaff_x21[2];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar4 = FUN_035614b8();
      if ((int)lVar6 < iVar4 + -1) {
        if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_035589e8();
        if ((uVar8 & 1) == 0) {
          return 0;
        }
      }
    }
    else if (unaff_w22 == 0x13) {
      lVar6 = unaff_x21[2];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar4 = FUN_035614b8();
      if ((int)lVar6 < iVar4 + -1) {
        if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) goto LAB_035598ac;
        if (*(short *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2) == 0x2e) {
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_035585e8();
        }
      }
      goto Oculus_Interaction_TransformFeatureStateProviderRef__GetCurrentState;
    }
    *(int *)(unaff_x19 + 1) = iStack000000000000000c;
    if (in_stack_00000018 == 2) {
      if (*(int *)(unaff_x23 + 0x10) != -1) break;
      *(int *)(unaff_x23 + 0x10) = iStack000000000000000c;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03561b64();
      puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if ((int)uVar3 < 0x701) {
        if ((int)uVar3 < 0x401) {
          if (uVar3 == 0x200) goto LAB_03559354;
          if (uVar3 == 0x300) goto LAB_035597ac;
          if (uVar3 != 0x400) break;
        }
        else if (uVar3 != 0x500) {
          if ((uVar3 != 0x600) && ((uVar3 != 0x700 || (*(char *)(unaff_x23 + 0x28) == '\0'))))
          break;
LAB_035595e8:
          uVar5 = 0xd;
          goto LAB_035597b0;
        }
        if (*(int *)(unaff_x23 + 0x1c) == -1) {
          uVar5 = 0xc;
          *(uint *)(unaff_x23 + 0x1c) = (uint)(uVar3 != 0x400);
LAB_035597b0:
          *(undefined4 *)unaff_x19 = uVar5;
          return 1;
        }
        goto LAB_0355979c;
      }
      if ((int)uVar3 < 0xa01) {
        if (((uVar3 != 0x800) && (uVar3 != 0x900)) && (uVar3 != 0xa00)) break;
LAB_0355976c:
        uVar5 = 9;
        goto LAB_03559770;
      }
      if ((int)uVar3 < 0xc01) {
        if ((uVar3 != 0xb00) && (uVar3 != 0xc00)) break;
      }
      else if (uVar3 != 0xd00) {
        if (uVar3 != 0xf00) break;
        lVar6 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_035598b0;
        if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
        lVar12 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_035598b0;
        if (*(uint *)(lVar12 + 0x18) < 0xe) goto LAB_035598ac;
        if (*(int *)(lVar12 + 0x54) == 0x14) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            if (lVar11 == 0) goto LAB_035598b0;
          }
          if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
          lVar6 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar6 + 0x18) < 0xd) goto LAB_035598ac;
          if (0x14 < *(int *)(lVar6 + 0x50)) goto LAB_03559678;
        }
        goto LAB_035595e8;
      }
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03561b64();
      puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if ((int)uVar3 < 0x801) {
        if (0x400 < (int)uVar3) {
          if ((int)uVar3 < 0x601) {
            if (uVar3 == 0x500) goto Oculus_Interaction_ControllerOffset__InjectController;
            if (uVar3 != 0x600) break;
          }
          else {
            if (uVar3 != 0x700) {
              if (uVar3 == 0x800) {
                if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                plVar9 = *(long **)(*unaff_x24 + 0x78);
                if (plVar9 != (long *)0x0) {
                  uVar5 = (**(code **)(*plVar9 + 0x308))
                                    (plVar9,iStack000000000000000c,*(undefined8 *)(*plVar9 + 0x310))
                  ;
                  uVar7 = DAT_00c8ea20;
                  *(undefined4 *)(unaff_x19 + 1) = uVar5;
                  *unaff_x19 = uVar7;
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              break;
            }
            if ((4 < unaff_w22 - 0xb) || (*(char *)(unaff_x23 + 0x28) == '\0')) {
              uVar5 = 5;
              goto LAB_03559848;
            }
          }
          uVar5 = 4;
LAB_03559848:
          *(undefined4 *)unaff_x19 = uVar5;
          FUN_03563254();
          return 1;
        }
        if (uVar3 == 0x200) {
          uVar5 = 1;
          goto LAB_03559848;
        }
        if (uVar3 == 0x300) {
          uVar5 = 3;
          goto LAB_03559848;
        }
        if (uVar3 != 0x400) break;
Oculus_Interaction_ControllerOffset__InjectController:
        if (*(int *)(unaff_x23 + 0x1c) == -1) {
          *(uint *)(unaff_x23 + 0x1c) = (uint)(uVar3 != 0x400);
          *(undefined4 *)unaff_x19 = 2;
          if (unaff_w22 == 4) {
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_03559934(0x15);
            if ((uVar8 & 1) == 0) {
              return 0;
            }
          }
          FUN_03563254();
          if ((unaff_w22 & 0xfffffffe) != 0x12) {
            return 1;
          }
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_035589e8();
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          return 1;
        }
LAB_0355979c:
        FUN_035633a0();
        return 1;
      }
      if ((int)uVar3 < 0xb01) {
        if ((uVar3 == 0x900) || (uVar3 == 0xa00)) goto LAB_0355976c;
        if (uVar3 != 0xb00) break;
      }
      else {
        if (0xd00 < (int)uVar3) {
          if (uVar3 == 0xe00) {
            uVar5 = 0x13;
            goto LAB_03559848;
          }
          if (uVar3 != 0xf00) break;
          lVar6 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar2;
          }
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar11 != 0) {
            if (unaff_w22 < *(uint *)(lVar11 + 0x18)) {
              lVar12 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_035598b0;
              if (4 < *(uint *)(lVar12 + 0x18)) {
                if (*(int *)(lVar12 + 0x30) == 0x14) {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                    if (lVar11 == 0) goto LAB_035598b0;
                  }
                  if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
                  lVar6 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
                  if (lVar6 == 0) goto LAB_035598b0;
                  if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_035598ac;
                  if (0x14 < *(int *)(lVar6 + 0x2c)) {
                    *(undefined4 *)(unaff_x21 + 2) = uStack0000000000000008;
                    *(undefined2 *)((long)unaff_x21 + 0x14) = in_stack_00000000._4_2_;
                    uVar5 = 3;
                    goto LAB_03559848;
                  }
                }
                uVar5 = 4;
                goto LAB_03559848;
              }
            }
LAB_035598ac:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
LAB_035598b0:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((uVar3 | 0x100) != 0xd00) break;
      }
    }
    uVar5 = 10;
LAB_03559770:
    *(undefined4 *)unaff_x19 = uVar5;
    *(uint *)((long)unaff_x19 + 4) = uVar3;
    return 1;
  case 3:
  case 4:
    if (*(int *)(unaff_x23 + 0x1c) == -1) {
      *(int *)(unaff_x23 + 0x1c) = iStack000000000000000c;
      return 1;
    }
    break;
  case 5:
    if (*(int *)(unaff_x23 + 0xc) != -1) break;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar4 = FUN_03561b64();
    puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
    if (iVar4 < 0x301) {
      if (iVar4 == 0x200) {
        uVar5 = 6;
        goto LAB_0355969c;
      }
      if (iVar4 != 0x300) break;
LAB_0355953c:
      uVar5 = 7;
    }
    else {
      if (iVar4 != 0x600) {
        if (iVar4 == 0x700) {
          if (*(char *)(unaff_x23 + 0x28) == '\0') break;
        }
        else {
          if (iVar4 != 0xf00) break;
          lVar6 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)puVar2;
          }
          lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar11 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
          lVar12 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_035598b0;
          if (*(uint *)(lVar12 + 0x18) < 9) goto LAB_035598ac;
          if (*(int *)(lVar12 + 0x40) == 0x14) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_035598b0;
            }
            if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
            lVar6 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_035598b0;
            if (*(uint *)(lVar6 + 0x18) < 8) goto LAB_035598ac;
            if (0x14 < *(int *)(lVar6 + 0x3c)) {
              *(undefined4 *)(unaff_x21 + 2) = uStack0000000000000008;
              *(undefined2 *)((long)unaff_x21 + 0x14) = in_stack_00000000._4_2_;
              goto LAB_0355953c;
            }
          }
        }
      }
      uVar5 = 8;
    }
LAB_0355969c:
    *(undefined4 *)unaff_x19 = uVar5;
    *(int *)(unaff_x23 + 0xc) = iStack000000000000000c;
    return 1;
  case 6:
    *(undefined4 *)unaff_x19 = 0;
    return 1;
  case 7:
    if (*(int *)(unaff_x23 + 0x14) != -1) break;
    uVar5 = 0xb;
    *(int *)(unaff_x23 + 0x14) = iStack000000000000000c;
    goto LAB_0355924c;
  case 8:
    if ((*(byte *)(unaff_x20 + 0x25) & 1) == 0) {
      *(undefined4 *)unaff_x19 = 0xf;
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      uVar3 = *(uint *)(unaff_x20 + 0x24) | 0x300;
LAB_0355928c:
      *(uint *)(unaff_x20 + 0x24) = uVar3;
      return 1;
    }
    break;
  case 9:
    goto switchD_03558c88_caseD_9;
  default:
    return 1;
  case 0xb:
    uVar1 = *(undefined2 *)((long)unaff_x21 + 0x14);
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_034fc34c(uVar1,0);
    if ((uVar8 & 1) != 0) {
      thunk_FUN_01f113fc(*(undefined8 *)
                          Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
      FUN_035633fc();
      return 0;
    }
    if (((*(short *)((long)unaff_x21 + 0x14) == 0x2d) ||
        (*(short *)((long)unaff_x21 + 0x14) == 0x2b)) && ((*(byte *)(unaff_x20 + 0x25) & 1) == 0)) {
      lVar6 = unaff_x21[2];
      if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_035586d4();
      if ((uVar8 & 1) != 0) {
        uVar3 = *(uint *)(unaff_x20 + 0x24) | 0x100;
        goto LAB_0355928c;
      }
      *(int *)(unaff_x21 + 2) = (int)lVar6;
    }
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03559e80();
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    break;
  case 0xc:
    if (iStack000000000000000c < 100) {
      *(int *)(unaff_x19 + 1) = iStack000000000000000c;
      FUN_03563254();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar4 = FUN_03561b64();
      puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (iVar4 < 0x301) {
        if (iVar4 == 0x200) {
          uVar5 = 1;
          goto LAB_035597b0;
        }
        if (iVar4 != 0x300) break;
LAB_035594cc:
        uVar5 = 4;
        goto LAB_035597b0;
      }
      if (iVar4 == 0x600) goto LAB_035594cc;
      if (iVar4 != 0xf00) break;
      lVar6 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
      lVar12 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_035598ac;
      if (*(int *)(lVar12 + 0x30) != 0x14) goto LAB_035594cc;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_035598b0;
      }
      if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_035598ac;
      lVar6 = *(long *)(lVar11 + (long)(int)unaff_w22 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_035598ac;
      if (*(int *)(lVar6 + 0x2c) < 0x15) goto LAB_035594cc;
      uVar5 = 3;
    }
    else {
      if (*(int *)(unaff_x23 + 0x10) != -1) break;
      *(int *)(unaff_x23 + 0x10) = iStack000000000000000c;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar4 = FUN_03561b64();
      puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (iVar4 != 0xf00) {
        if (iVar4 == 0x300) {
LAB_035597ac:
          uVar5 = 0xc;
          goto LAB_035597b0;
        }
        if (iVar4 != 0x200) break;
LAB_03559354:
        uVar5 = 0xe;
        goto LAB_035597b0;
      }
      lVar6 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w22) goto LAB_035598ac;
      lVar6 = *(long *)(lVar6 + (long)(int)unaff_w22 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_035598b0;
      if (*(uint *)(lVar6 + 0x18) < 0xd) goto LAB_035598ac;
      if (*(int *)(lVar6 + 0x50) < 0x15) break;
LAB_03559678:
      uVar5 = 0xc;
    }
    *(undefined4 *)(unaff_x21 + 2) = uStack0000000000000008;
    *(undefined2 *)((long)unaff_x21 + 0x14) = in_stack_00000000._4_2_;
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
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar2;
    }
    if (**(char **)(lVar6 + 0xb8) != '\0') {
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
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0350da04(0);
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
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar2;
    }
    if (**(char **)(lVar6 + 0xb8) != '\0') goto LAB_03559878;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = Oculus_Interaction_ControllerPointerPose__InjectAllHandPointerPose();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = Oculus_Interaction_FirstHoverInteractorGroup__get_HasCandidate(0);
LAB_03559224:
    *unaff_x24 = lVar6;
    thunk_FUN_01f51358();
switchD_03558c88_caseD_9:
    if (*(int *)(unaff_x20 + 0x20) != -1) {
      uVar5 = 0x10;
      *(int *)(unaff_x20 + 0x20) = iStack000000000000000c;
LAB_0355924c:
      *(undefined4 *)unaff_x19 = uVar5;
      return 1;
    }
  }
  FUN_035633a0();
  return 0;
}


