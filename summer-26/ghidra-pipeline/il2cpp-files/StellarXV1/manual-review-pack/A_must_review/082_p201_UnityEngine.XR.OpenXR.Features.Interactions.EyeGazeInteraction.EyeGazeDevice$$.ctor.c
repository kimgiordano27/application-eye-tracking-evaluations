/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 0881d6d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 143
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
          (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint in_w11;
  int in_w12;
  uint *puVar17;
  long *unaff_x20;
  undefined8 uVar18;
  long unaff_x22;
  uint uVar19;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  uint unaff_w29;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  long in_stack_000002a8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined4 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  
code_r0x0881d6d4:
  iVar7 = 1;
  uVar8 = (uint)unaff_x23;
  if ((bool)in_ZR || in_NG != in_OV) {
    if (in_w12 == 0) {
      iVar9 = (int)unaff_x26;
      if (((uVar8 < 0x2f) && ((1L << (unaff_x23 & 0x3f) & 0x680000000000U) != 0)) ||
         (uVar8 - 0x30 < 10)) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_1 = *(long *)(*unaff_x20 + 0xb8);
        }
        lVar12 = *(long *)(param_1 + 0x90);
        if (lVar12 == 0) goto LAB_08822478;
        if (in_w11 < *(uint *)(lVar12 + 0x18)) {
          in_w12 = 1;
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__get_IsAdditive:
          in_stack_00000038._4_4_ = 0;
          lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
          *(int *)(lVar12 + 0x28) = in_w12;
          *(int *)(lVar12 + 0x2c) = iVar9;
          iVar7 = 1;
          *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
          goto LAB_0881dc54;
        }
      }
      else {
        iVar7 = *(int *)(param_6 + 0xe4);
        if (uVar8 == 0x22) {
          if (iVar7 == 0) {
            thunk_FUN_040d65a8();
            param_1 = *(long *)(*unaff_x20 + 0xb8);
          }
          lVar12 = *(long *)(param_1 + 0x90);
          if (lVar12 == 0) goto LAB_08822478;
          if (in_w11 < *(uint *)(lVar12 + 0x18)) {
            in_w12 = 2;
            in_stack_00000038._4_4_ = 0;
            lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
            iVar7 = 1;
            *(undefined4 *)(lVar12 + 0x28) = 2;
            *(int *)(lVar12 + 0x2c) = iVar9 + 1;
            goto LAB_0881dc54;
          }
        }
        else if (uVar8 == 0x23) {
          if (iVar7 == 0) {
            thunk_FUN_040d65a8();
            param_1 = *(long *)(*unaff_x20 + 0xb8);
          }
          lVar12 = *(long *)(param_1 + 0x90);
          if (lVar12 == 0) goto LAB_08822478;
          if (in_w11 < *(uint *)(lVar12 + 0x18)) {
            in_w12 = 4;
            goto 
            UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__get_IsAdditive;
          }
        }
        else {
          if (iVar7 == 0) {
            thunk_FUN_040d65a8();
            param_1 = *(long *)(*unaff_x20 + 0xb8);
          }
          lVar12 = *(long *)(param_1 + 0x90);
          if (lVar12 == 0) goto LAB_08822478;
          if (in_w11 < *(uint *)(lVar12 + 0x18)) {
            lVar13 = lVar12 + (long)(int)in_w11 * 0x18;
            uVar8 = *(uint *)(lVar13 + 0x24);
            *(undefined4 *)(lVar13 + 0x28) = 2;
            *(int *)(lVar13 + 0x2c) = iVar9;
            if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar19 = FUN_0884b66c(unaff_x23 & 0xffffffff,0);
            if (in_w11 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar13 + 0x24) = uVar8 * 0x21 ^ uVar19 & 0xffff;
              param_6 = *unaff_x20;
              lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
              if (lVar12 == 0) goto LAB_08822478;
              if (in_w11 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
                in_stack_00000038._4_4_ = 0;
                in_w12 = 2;
                goto LAB_0881dae8;
              }
            }
          }
        }
      }
      goto LAB_0882241c;
    }
    if (in_w12 == 1) {
      if ((int)uVar8 < 0x65) {
        if (uVar8 == 0x20) {
UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout:
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            param_1 = *(long *)(param_6 + 0xb8);
          }
          lVar12 = *(long *)(param_1 + 0x90);
          if (lVar12 == 0) goto LAB_08822478;
          if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
          in_stack_00000038._4_4_ = 0;
        }
        else {
          if (uVar8 != 0x25) {
LAB_0881daa8:
            if (*(int *)(param_6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              param_6 = *unaff_x20;
              param_1 = *(long *)(param_6 + 0xb8);
            }
            lVar12 = *(long *)(param_1 + 0x90);
            if (lVar12 == 0) goto LAB_08822478;
            if (in_w11 < *(uint *)(lVar12 + 0x18)) {
              in_w12 = 1;
              goto LAB_0881dae4;
            }
            goto LAB_0882241c;
          }
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            param_1 = *(long *)(param_6 + 0xb8);
          }
          lVar12 = *(long *)(param_1 + 0x90);
          if (lVar12 == 0) goto LAB_08822478;
          if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
          in_stack_00000038._4_4_ = 2;
        }
      }
      else {
        if (uVar8 == 0x70)
        goto 
        UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction__UnregisterDeviceLayout
        ;
        if (uVar8 != 0x65) goto LAB_0881daa8;
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_6 = *unaff_x20;
          param_1 = *(long *)(param_6 + 0xb8);
        }
        lVar12 = *(long *)(param_1 + 0x90);
        if (lVar12 == 0) goto LAB_08822478;
        if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
        in_stack_00000038._4_4_ = 1;
      }
      *(int *)(lVar12 + (long)(int)in_w11 * 0x18 + 0x34) = in_stack_00000038._4_4_;
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
      }
      lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
      if (lVar12 == 0) goto LAB_08822478;
      if (*(uint *)(lVar12 + 0x18) <= in_w11 + 1) goto LAB_0882241c;
LAB_0881da30:
      in_w11 = in_w11 + 1;
      in_w12 = 0;
      iVar7 = 2;
      lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
    }
  }
  else {
    if (in_w12 == 2) {
      if (uVar8 == 0x22) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_1 = *(long *)(*unaff_x20 + 0xb8);
        }
        lVar12 = *(long *)(param_1 + 0x90);
        if (lVar12 == 0) goto LAB_08822478;
        in_w11 = in_w11 + 1;
        if (in_w11 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
          iVar7 = 2;
          goto FUN_0881db60;
        }
        goto LAB_0882241c;
      }
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_1 = *(long *)(*unaff_x20 + 0xb8);
      }
      lVar12 = *(long *)(param_1 + 0x90);
      if (lVar12 == 0) goto LAB_08822478;
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      puVar17 = (uint *)(lVar12 + (long)(int)in_w11 * 0x18 + 0x24);
      uVar8 = *puVar17;
      if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar19 = FUN_0884b66c(unaff_x23 & 0xffffffff,0);
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      *puVar17 = uVar8 * 0x21 ^ uVar19 & 0xffff;
      param_6 = *unaff_x20;
      lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
      if (lVar12 == 0) goto LAB_08822478;
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      in_w12 = 2;
      lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
    }
    else {
      if (in_w12 != 4) goto LAB_0881daf4;
      if (uVar8 == 0x20) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_6 = *unaff_x20;
          param_1 = *(long *)(param_6 + 0xb8);
        }
        lVar12 = *(long *)(param_1 + 0x90);
        if (lVar12 == 0) goto LAB_08822478;
        if (in_w11 + 1 < *(uint *)(lVar12 + 0x18)) {
          in_stack_00000038._4_4_ = 0;
          goto LAB_0881da30;
        }
        goto LAB_0882241c;
      }
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
        param_1 = *(long *)(param_6 + 0xb8);
      }
      lVar12 = *(long *)(param_1 + 0x90);
      if (lVar12 == 0) goto LAB_08822478;
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      in_w12 = 4;
LAB_0881dae4:
      lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
    }
LAB_0881dae8:
    iVar7 = 1;
    *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
  }
LAB_0881daf4:
  while( true ) {
    iVar9 = (int)unaff_x23;
    if (iVar9 == 0x3d) {
      iVar7 = 1;
    }
    if ((iVar9 == 0x20) && (iVar7 == 0)) {
      if ((unaff_w29 & 1) != 0) {
        return 0;
      }
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
      }
      lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
      if (lVar12 == 0) goto LAB_08822478;
      in_w11 = in_w11 + 1;
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      lVar12 = lVar12 + (long)(int)in_w11 * 0x18;
      iVar7 = 0;
      unaff_w29 = 1;
FUN_0881db60:
      in_stack_00000038._4_4_ = 0;
      in_w12 = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
    }
    else if (iVar7 == 2) {
      iVar7 = (uint)(iVar9 != 0x20) << 1;
    }
    else if (iVar7 == 0) {
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
      }
      lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
      if (lVar12 == 0) goto LAB_08822478;
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      puVar17 = (uint *)(lVar12 + (long)(int)in_w11 * 0x18 + 0x20);
      uVar8 = *puVar17;
      if (*(int *)(*(long *)PTR_DAT_09337af0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar19 = FUN_0884b66c(unaff_x23 & 0xffffffff,0);
      if (*(uint *)(lVar12 + 0x18) <= in_w11) goto LAB_0882241c;
      iVar7 = 0;
      *puVar17 = uVar8 * 0x21 ^ uVar19 & 0xffff;
    }
LAB_0881dc54:
    unaff_x26 = unaff_x26 + 1;
    uVar8 = (uint)unaff_x26;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)(unaff_w25 + uVar8)) {
      return 0;
    }
    uVar19 = unaff_w25 + uVar8;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar19) goto LAB_0882241c;
    puVar17 = (uint *)(unaff_x24 + (long)(int)uVar19 * 0x10 + 4);
    if (*puVar17 == 0) {
      return 0;
    }
    param_6 = *unaff_x20;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
    }
    uVar22 = (undefined4)param_5;
    fVar20 = (float)param_4;
    uVar6 = (undefined4)param_3;
    param_1 = *(long *)(param_6 + 0xb8);
    lVar12 = *(long *)(param_1 + 0x88);
    if (lVar12 == 0) goto LAB_08822478;
    if ((long)*(int *)(lVar12 + 0x18) <= (long)unaff_x26) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar19) goto LAB_0882241c;
    uVar19 = *puVar17;
    unaff_x23 = (ulong)uVar19;
    if (uVar19 == 0x3c) {
      return 0;
    }
    if (uVar19 == 0x3e) break;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
      param_1 = *(long *)(param_6 + 0xb8);
      lVar12 = *(long *)(param_1 + 0x88);
      if (lVar12 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar12 + 0x18) <= unaff_x26) goto LAB_0882241c;
    *(short *)(lVar12 + unaff_x26 * 2 + 0x20) = (short)uVar19;
    if (iVar7 == 1) goto code_r0x0881d6d0;
  }
  *in_stack_00000010 = in_stack_00000018._4_4_ + uVar8;
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    param_1 = *(long *)(param_6 + 0xb8);
    lVar12 = *(long *)(param_1 + 0x88);
    if (lVar12 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
  *(undefined2 *)(lVar12 + unaff_x26 * 2 + 0x20) = 0;
  if (*(char *)(in_stack_00000020 + 0x468) != '\0') {
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
      param_1 = *(long *)(param_6 + 0xb8);
    }
    lVar12 = *(long *)(param_1 + 0x90);
    if (lVar12 == 0) goto LAB_08822478;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
    if (*(int *)(lVar12 + 0x20) != -0x11878bc5) {
      return 0;
    }
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
  }
  plVar14 = *(long **)(param_6 + 0xb8);
  lVar12 = plVar14[0x12];
  if (lVar12 == 0) goto LAB_08822478;
  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
  if (*(int *)(lVar12 + 0x20) == -0x11878bc5) {
    *(undefined1 *)(in_stack_00000020 + 0x468) = 0;
    return 1;
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    plVar14 = *(long **)(param_6 + 0xb8);
  }
  lVar12 = plVar14[0x11];
  if (lVar12 == 0) goto LAB_08822478;
  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
  if ((uVar8 == 4) && (*(short *)(lVar12 + 0x20) == 0x23)) {
    if (*(int *)(param_6 + 0xe4) == 0) {
      param_6 = thunk_FUN_040d65a8();
      lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
    }
    uVar11 = 4;
  }
  else {
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
      plVar14 = *(long **)(param_6 + 0xb8);
      lVar12 = plVar14[0x11];
      if (lVar12 == 0) goto LAB_08822478;
    }
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
    if ((uVar8 == 5) && (*(short *)(lVar12 + 0x20) == 0x23)) {
      if (*(int *)(param_6 + 0xe4) == 0) {
        param_6 = thunk_FUN_040d65a8();
        lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
      }
      uVar11 = 5;
    }
    else {
      if (*(int *)(param_6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        param_6 = *unaff_x20;
        plVar14 = *(long **)(param_6 + 0xb8);
        lVar12 = plVar14[0x11];
        if (lVar12 == 0) goto LAB_08822478;
      }
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
      if ((uVar8 == 7) && (*(short *)(lVar12 + 0x20) == 0x23)) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          param_6 = thunk_FUN_040d65a8();
          lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
        }
        uVar11 = 7;
      }
      else {
        if (*(int *)(param_6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          param_6 = *unaff_x20;
          plVar14 = *(long **)(param_6 + 0xb8);
          lVar12 = plVar14[0x11];
          if (lVar12 == 0) goto LAB_08822478;
        }
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
        if ((uVar8 != 9) || (*(short *)(lVar12 + 0x20) != 0x23)) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            param_6 = *unaff_x20;
            plVar14 = *(long **)(param_6 + 0xb8);
          }
          lVar12 = plVar14[0x12];
          if (lVar12 == 0) goto LAB_08822478;
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
          uVar19 = *(uint *)(lVar12 + 0x20);
          if ((int)uVar19 < 0x65d) {
            if ((int)uVar19 < -0x325312e0) {
              if (uVar19 < 0xa6c747d4) {
                if (0x9dac6cf1 < uVar19) {
                  if (uVar19 < 0xa1903fc8) {
                    if (uVar19 == 0x9e50e566) {
                      *(undefined4 *)(in_stack_00000020 + 0x2d8) = 0;
                      *(undefined1 *)(in_stack_00000020 + 0x2dc) = 0;
                      return 1;
                    }
                    if (uVar19 != 0xa1903fc7) {
                      return 0;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar14 = *(long **)(*unaff_x20 + 0xb8);
                      lVar12 = plVar14[0x12];
                      if (lVar12 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                   *(undefined4 *)(lVar12 + 0x2c),
                                                   *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                      if (fVar20 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ != 2) {
                        if (in_stack_00000038._4_4_ == 1) {
                          fVar21 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar21 = 1.0;
                          }
                          fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                        }
                        else {
                          fVar21 = DAT_01aec9c8;
                          if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                            fVar21 = 1.0;
                          }
                          fVar20 = fVar20 * fVar21;
                        }
                        *(float *)(in_stack_00000020 + 0x2d4) = fVar20;
                        return 1;
                      }
                      return 0;
                    }
                  }
                  else {
                    if (uVar19 != 0xa5c050bc) {
                      if (uVar19 != 0xa62e8917) {
                        if (uVar19 != 0xa6c747d3) {
                          return 0;
                        }
                        uVar6 = FUN_065eacdc(in_stack_00000020 + 0x448,
                                             *(undefined8 *)PTR_DAT_09338838);
                        *(undefined4 *)(in_stack_00000020 + 0x444) = uVar6;
                        return 1;
                      }
                      uVar11 = 8;
                      uVar8 = *(uint *)(in_stack_00000020 + 0x284) | 8;
                      goto LAB_0882069c;
                    }
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar14 = *(long **)(*unaff_x20 + 0xb8);
                      lVar12 = plVar14[0x12];
                      if (lVar12 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                   *(undefined4 *)(lVar12 + 0x2c),
                                                   *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                      if (fVar20 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 2) {
                        fVar20 = (fVar20 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                      }
                      else if (in_stack_00000038._4_4_ == 1) {
                        fVar21 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar21 = 1.0;
                        }
                        fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                      }
                      else {
                        fVar21 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar21 = 1.0;
                        }
                        fVar20 = fVar20 * fVar21;
                      }
                      uVar11 = *(undefined8 *)PTR_DAT_093387d0;
                      *(float *)(in_stack_00000020 + 0x444) = fVar20;
                      FUN_065eac98(in_stack_00000020 + 0x448,uVar11);
                      *(undefined4 *)(in_stack_00000020 + 0x658) =
                           *(undefined4 *)(in_stack_00000020 + 0x444);
                      return 1;
                    }
                  }
                  goto LAB_0882241c;
                }
                if (0x8f5a791e < uVar19) {
                  if (uVar19 == 0x9176b2c9) {
                    in_stack_000002a8 =
                         FUN_065ea6fc(in_stack_00000020 + 0x5a0,*(undefined8 *)PTR_DAT_09338818);
                    *(long *)(in_stack_00000020 + 0x598) = in_stack_000002a8;
                    lVar12 = in_stack_00000020 + 0x598;
LAB_08821eec:
                    thunk_FUN_040ec700(lVar12,in_stack_000002a8);
                    return 1;
                  }
                  if (uVar19 != 0x9312449e) {
                    if (uVar19 != 0x9dac6cf1) {
                      return 0;
                    }
                    *(undefined8 *)(in_stack_00000020 + 0x388) = 0;
                    return 1;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                      return 1;
                    }
                    FUN_065e9300(in_stack_00000020 + 0x610,*(undefined4 *)(lVar12 + 0x24),
                                 *(undefined8 *)PTR_DAT_093387c0);
                    uVar11 = FUN_07676bc4(&stack0x0000028c,0);
                    uVar18 = FUN_07676bc4(in_stack_00000020 + 0x4a4,0);
                    uVar11 = FUN_074e70a4(*(undefined8 *)PTR_DAT_09338860,uVar11,
                                          *(undefined8 *)PTR_DAT_09338868,uVar18,0);
                    if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
                    }
                    FUN_0897e2a8(uVar11,0);
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (uVar19 != 0x88ce15e6) {
                  if (uVar19 != 0x8f5a791e) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar14 = *(long **)(*unaff_x20 + 0xb8);
                    lVar12 = plVar14[0x12];
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                 *(undefined4 *)(lVar12 + 0x2c),
                                                 *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                    if (fVar20 == -32768.0) {
                      return 0;
                    }
                    uVar8 = 0x80000000;
                    if (fVar20 != INFINITY) {
                      uVar8 = (int)fVar20;
                    }
                    if ((int)uVar8 < 0x191) {
                      if ((int)uVar8 < 0xc9) {
                        if ((uVar8 == 100) || (uVar8 == 200)) goto LAB_088215c8;
                      }
                      else if ((uVar8 == 300) || (uVar8 == 400)) goto LAB_088215c8;
                    }
                    else if (uVar8 < 0x259) {
                      if ((uVar8 == 500) || (uVar8 == 600)) goto LAB_088215c8;
                    }
                    else if ((uVar8 == 700) || ((uVar8 == 800 || (uVar8 == 900)))) {
LAB_088215c8:
                      *(uint *)(in_stack_00000020 + 0x23c) = uVar8;
                    }
                    uVar6 = *(undefined4 *)(in_stack_00000020 + 0x23c);
                    uVar11 = *(undefined8 *)PTR_DAT_093387e8;
                    in_stack_00000020 = in_stack_00000020 + 0x240;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_graspReady:
                    FUN_065e98bc(in_stack_00000020,uVar6,uVar11);
                    return 1;
                  }
                  goto LAB_0882241c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                uVar6 = *(undefined4 *)(lVar12 + 0x24);
                uVar10 = FUN_087deba8(uVar6,&stack0x00000298,0);
                puVar2 = PTR_DAT_09285bb0;
                if ((uVar10 & 1) == 0) {
                  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_089cc398(in_stack_00000298,0,0);
                  if ((uVar10 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar11 = FUN_0883de60(0);
                    lVar12 = *unaff_x20;
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(lVar12);
                      lVar12 = *unaff_x20;
                    }
                    lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
                    if (lVar13 == 0) goto LAB_08822478;
                    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0882241c;
                    uVar18 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x88),
                                          *(undefined4 *)(lVar13 + 0x2c),
                                          *(undefined4 *)(lVar13 + 0x30),0);
                    uVar11 = FUN_074d875c(uVar11,uVar18,0);
                    in_stack_00000298 = FUN_05191970(uVar11,*(undefined8 *)PTR_DAT_09338798);
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_089cc398(in_stack_00000298,0,0);
                  if ((uVar10 & 1) != 0) {
                    return 0;
                  }
                  FUN_087de8ac(uVar6,in_stack_00000298,0);
                  *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000298;
                }
                else {
                  *(undefined8 *)(in_stack_00000020 + 0x598) = in_stack_00000298;
                }
                thunk_FUN_040ec700(in_stack_00000020 + 0x598,in_stack_00000298);
                lVar12 = *unaff_x20;
                uVar8 = 1;
                *(undefined1 *)(in_stack_00000020 + 0x5c8) = 0;
                goto LAB_08820f18;
              }
              if (uVar19 < 0xb93c7ef2) {
                if (uVar19 < 0xace2bca9) {
                  if (uVar19 == 0xa97f2798) {
                    if ((*(byte *)(in_stack_00000020 + 0x280) >> 3 & 1) != 0) {
                      return 1;
                    }
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,8,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffff7;
                    goto LAB_08820060;
                  }
                  if (uVar19 != 0xace2bca8) {
                    return 0;
                  }
                  if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                    return 1;
                  }
                  uVar8 = *(int *)(in_stack_00000020 + 0x4a4) - 1;
                  if (0 < *(int *)(in_stack_00000020 + 0x4a4)) {
                    fVar20 = *(float *)(in_stack_00000020 + 0x658) -
                             *(float *)(in_stack_00000020 + 0x2d4);
                    *(float *)(in_stack_00000020 + 0x658) = fVar20;
                    if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                       (lVar12 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x38), lVar12 == 0
                       )) goto LAB_08822478;
                    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
                    *(float *)(lVar12 + (ulong)uVar8 * 0x178 + 0x13c) = fVar20;
                  }
                  *(undefined4 *)(in_stack_00000020 + 0x2d4) = 0;
                  return 1;
                }
                if (uVar19 == 0xaf32f89e) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    param_6 = *unaff_x20;
                    plVar14 = *(long **)(param_6 + 0xb8);
                    lVar12 = plVar14[0x12];
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  fVar20 = DAT_01aec9c8;
                  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar12 + 0x28) != 1) {
                    if (*(int *)(lVar12 + 0x28) != 0) {
                      return 0;
                    }
                    uVar8 = 1;
                    goto LAB_088203b4;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar14 = *(long **)(*unaff_x20 + 0xb8);
                    lVar12 = plVar14[0x12];
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                 *(undefined4 *)(lVar12 + 0x2c),
                                                 *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                    if (fVar20 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ == 2) {
                      fVar21 = 0.0;
                      if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                        fVar21 = *(float *)(in_stack_00000020 + 0x398);
                      }
                      fVar20 = (fVar20 * (*(float *)(in_stack_00000020 + 0x390) - fVar21)) / 100.0;
                    }
                    else if (in_stack_00000038._4_4_ == 1) {
                      fVar21 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar21 = 1.0;
                      }
                      fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                    }
                    else {
                      fVar21 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar21 = 1.0;
                      }
                      fVar20 = fVar20 * fVar21;
                    }
                    if (fVar20 < 0.0) {
                      fVar20 = 0.0;
                    }
                    *(float *)(in_stack_00000020 + 0x388) = fVar20;
                    goto LAB_088212dc;
                  }
                  goto LAB_0882241c;
                }
                if (uVar19 != 0xb01dd609) {
                  if (uVar19 == 0xb93c7ef1) {
                    if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
                      FUN_065e9558(in_stack_00000020 + 0x610,*(undefined8 *)PTR_DAT_093387f0);
                      uVar11 = FUN_07676bc4(&stack0x0000021c,0);
                      uVar18 = FUN_07676bc4(&stack0x0000021c,0);
                      uVar11 = FUN_074e70a4(*(undefined8 *)PTR_DAT_09338860,uVar11,
                                            *(undefined8 *)PTR_DAT_09338878,uVar18,0);
                      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
                      }
                      FUN_0897e2a8(uVar11,0);
                    }
                    FUN_065e9348(in_stack_00000020 + 0x610,*(undefined8 *)PTR_DAT_09338820);
                    return 1;
                  }
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                             *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                if (fVar20 == -32768.0) {
                  return 0;
                }
                lVar12 = *unaff_x20;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                }
                lVar13 = *(long *)(lVar12 + 0xb8);
                lVar15 = *(long *)(lVar13 + 0x90);
                if (lVar15 == 0) goto LAB_08822478;
                if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0882241c;
                iVar7 = *(int *)(lVar15 + 0x34);
                if (iVar7 == 2) {
                  return 0;
                }
                if (iVar7 == 1) {
                  fVar21 = DAT_01aec9c8;
                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                    fVar21 = 1.0;
                  }
                  fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pokePosition
                  :
                  *(float *)(in_stack_00000020 + 0x2d8) = fVar20;
                }
                else if (iVar7 == 0) {
                  fVar21 = DAT_01aec9c8;
                  if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                    fVar21 = 1.0;
                  }
                  fVar20 = fVar20 * fVar21;
                  goto 
                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_pokePosition
                  ;
                }
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                  lVar13 = *(long *)(lVar12 + 0xb8);
                  lVar15 = *(long *)(lVar13 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                }
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                if (*(int *)(lVar15 + 0x38) != 0x22bcfb9a) {
                  return 1;
                }
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  lVar12 = thunk_FUN_040d65a8();
                  lVar13 = *(long *)(*unaff_x20 + 0xb8);
                  lVar15 = *(long *)(lVar13 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                }
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
                  fVar20 = (float)FUN_0882905c(lVar12,*(undefined8 *)(lVar13 + 0x88),
                                               *(undefined4 *)(lVar15 + 0x44),
                                               *(undefined4 *)(lVar15 + 0x48),&stack0x000002c0);
                  *(bool *)(in_stack_00000020 + 0x2dc) = fVar20 != 0.0;
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (uVar19 < 0xc465179a) {
                if (uVar19 == 0xbe648664) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  }
                  FUN_065e9fc8(&stack0x000002c0,plVar14 + 2,*(undefined8 *)PTR_DAT_09338848);
                  *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002d8;
                  thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                  *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_000002c0;
                  return 1;
                }
                if (uVar19 != 0xc4651799) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) != 0) {
                  fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                               *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                  if (fVar20 == -32768.0) {
                    return 0;
                  }
                  fVar20 = fVar20 * DAT_01aed080;
                  uVar6 = 0;
                  uVar23 = FUN_089b9180(0,0);
LAB_0881fe38:
                  *(undefined4 *)(in_stack_00000020 + 0x46c) = uVar23;
                  *(undefined4 *)(in_stack_00000020 + 0x470) = uVar6;
                  *(float *)(in_stack_00000020 + 0x474) = fVar20;
                  *(undefined4 *)(in_stack_00000020 + 0x478) = uVar22;
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (uVar19 != 0xc4e67de9) {
                if (uVar19 != 0xcdaced1f) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) != 0) {
                  fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                               *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                  if (fVar20 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ == 2) {
                    fVar20 = (fVar20 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                  }
                  else if (in_stack_00000038._4_4_ == 1) {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                  }
                  else {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = fVar20 * fVar21;
                  }
                  *(float *)(in_stack_00000020 + 0x440) = fVar20;
                  *(float *)(in_stack_00000020 + 0x658) =
                       *(float *)(in_stack_00000020 + 0x658) + fVar20;
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                param_6 = *unaff_x20;
                lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
                if (lVar12 == 0) goto LAB_08822478;
              }
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
              uVar6 = *(undefined4 *)(lVar12 + 0x24);
              *(undefined4 *)(in_stack_00000020 + 0x6bc) = 0xffffffff;
              if (*(int *)(lVar12 + 0x28) == 0) {
LAB_0881f4dc:
                puVar2 = PTR_DAT_09285bb0;
                uVar11 = *(undefined8 *)(in_stack_00000020 + 0x1c8);
                if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar10 = FUN_089ca704(uVar11,0,0);
                if ((uVar10 & 1) == 0) {
                  uVar11 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_089ca704(uVar11,0,0);
                  uVar11 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                  if ((uVar10 & 1) != 0) {
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar11;
                    goto LAB_08821f30;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_089cc398(uVar11,0,0);
                  puVar3 = PTR_DAT_093375c8;
                  if ((uVar10 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar11 = FUN_0883db08(0);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(*(long *)puVar2);
                    }
                    uVar10 = FUN_089ca704(uVar11,0,0);
                    if ((uVar10 & 1) == 0) {
                      uVar11 = FUN_05191970(*(undefined8 *)PTR_DAT_09338870,
                                            *(undefined8 *)PTR_DAT_093387a8);
                    }
                    else {
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      uVar11 = FUN_0883db08(0);
                    }
                    *(undefined8 *)(in_stack_00000020 + 0x6a8) = uVar11;
                    thunk_FUN_040ec700((undefined8 *)(in_stack_00000020 + 0x6a8),uVar11);
                    uVar11 = *(undefined8 *)(in_stack_00000020 + 0x6a8);
                    *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar11;
                    goto LAB_08821f30;
                  }
                }
                else {
                  uVar11 = *(undefined8 *)(in_stack_00000020 + 0x1c8);
                  *(undefined8 *)(in_stack_00000020 + 0x6b0) = uVar11;
LAB_08821f30:
                  thunk_FUN_040ec700(in_stack_00000020 + 0x6b0,uVar11);
                }
                uVar11 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar10 = FUN_089cc398(uVar11,0,0);
                if ((uVar10 & 1) != 0) {
                  return 0;
                }
              }
              else {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                if (*(int *)(lVar12 + 0x28) == 1) goto LAB_0881f4dc;
                uVar10 = FUN_087deb00(uVar6,&stack0x00000290,0);
                puVar2 = PTR_DAT_09285bb0;
                if ((uVar10 & 1) == 0) {
                  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_089cc398(in_stack_00000290,0,0);
                  if ((uVar10 & 1) != 0) {
                    lVar12 = *unaff_x20;
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar12 = *unaff_x20;
                    }
                    lVar13 = *(long *)(lVar12 + 0xb8);
                    lVar15 = *(long *)(lVar13 + 0x78);
                    in_stack_00000290 = 0;
                    if (lVar15 != 0) {
                      if (*(int *)(lVar12 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                        lVar13 = *(long *)(*unaff_x20 + 0xb8);
                      }
                      lVar12 = *(long *)(lVar13 + 0x90);
                      if (lVar12 == 0) goto LAB_08822478;
                      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                      uVar11 = FUN_074ecc38(0,*(undefined8 *)(lVar13 + 0x88),
                                            *(undefined4 *)(lVar12 + 0x2c),
                                            *(undefined4 *)(lVar12 + 0x30),0);
                      in_stack_00000290 =
                           (**(code **)(lVar15 + 0x18))
                                     (*(undefined8 *)(lVar15 + 0x40),uVar6,uVar11,
                                      *(undefined8 *)(lVar15 + 0x28));
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar10 = FUN_089cc398(in_stack_00000290,0,0);
                    if ((uVar10 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      uVar11 = FUN_0883dbc8(0);
                      lVar12 = *unaff_x20;
                      if (*(int *)(lVar12 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(lVar12);
                        lVar12 = *unaff_x20;
                      }
                      lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
                      if (lVar13 == 0) goto LAB_08822478;
                      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0882241c;
                      uVar18 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x88),
                                            *(undefined4 *)(lVar13 + 0x2c),
                                            *(undefined4 *)(lVar13 + 0x30),0);
                      uVar11 = FUN_074d875c(uVar11,uVar18,0);
                      in_stack_00000290 = FUN_05191970(uVar11,*(undefined8 *)PTR_DAT_093387a8);
                    }
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_089cc398(in_stack_00000290,0,0);
                  if ((uVar10 & 1) != 0) {
                    return 0;
                  }
                  FUN_087de708(uVar6,in_stack_00000290,0);
                  *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000290;
                }
                else {
                  *(undefined8 *)(in_stack_00000020 + 0x6b0) = in_stack_00000290;
                }
                thunk_FUN_040ec700(in_stack_00000020 + 0x6b0,in_stack_00000290);
              }
              lVar12 = *unaff_x20;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar12 = *unaff_x20;
              }
              lVar13 = *(long *)(lVar12 + 0xb8);
              lVar15 = *(long *)(lVar13 + 0x90);
              if (lVar15 == 0) goto LAB_08822478;
              if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0882241c;
              if (*(int *)(lVar15 + 0x28) == 1) {
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  lVar12 = thunk_FUN_040d65a8();
                  lVar13 = *(long *)(*unaff_x20 + 0xb8);
                  lVar15 = *(long *)(lVar13 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0882241c;
                fVar20 = (float)FUN_0882905c(lVar12,*(undefined8 *)(lVar13 + 0x88),
                                             *(undefined4 *)(lVar15 + 0x2c),
                                             *(undefined4 *)(lVar15 + 0x30),&stack0x000002c0);
                iVar7 = -0x80000000;
                if (fVar20 != INFINITY) {
                  iVar7 = (int)fVar20;
                }
                if (iVar7 == -0x8000) {
                  return 0;
                }
                if ((*(long *)(in_stack_00000020 + 0x6b0) == 0) ||
                   (lVar12 = FUN_08841500(*(long *)(in_stack_00000020 + 0x6b0),0), lVar12 == 0))
                goto LAB_08822478;
                if (*(int *)(lVar12 + 0x18) + -1 < iVar7) {
                  return 0;
                }
                lVar12 = *unaff_x20;
                *(int *)(in_stack_00000020 + 0x6bc) = iVar7;
              }
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar12 = *unaff_x20;
              }
              uVar8 = 0;
              uVar6 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
              plVar14 = (long *)(in_stack_00000020 + 0x6b0);
              *(undefined1 *)(in_stack_00000020 + 0x1d1) = 0;
              *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar6;
              goto LAB_08822068;
            }
            if (-0x1044a318 < (int)uVar19) {
              if (0x53 < (int)uVar19) {
                if (0x64d < uVar19) {
                  if (uVar19 != 0x64e) {
                    if (uVar19 == 0x65a) {
                      if (((*(byte *)(in_stack_00000020 + 0x280) >> 2 & 1) == 0) &&
                         (cVar4 = FUN_08848558(in_stack_00000020 + 0x288,4,0), cVar4 == '\0')) {
                        *(uint *)(in_stack_00000020 + 0x284) =
                             *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffb;
                      }
                      uVar6 = FUN_065e8668(in_stack_00000020 + 0x528,*(undefined8 *)PTR_DAT_09338828
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x158) = uVar6;
                      return 1;
                    }
                    if (uVar19 != 0x65c) {
                      return 0;
                    }
                    if (((*(byte *)(in_stack_00000020 + 0x280) >> 6 & 1) == 0) &&
                       (cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x40,0), cVar4 == '\0')) {
                      *(uint *)(in_stack_00000020 + 0x284) =
                           *(uint *)(in_stack_00000020 + 0x284) & 0xffffffbf;
                    }
                    uVar6 = FUN_065e8668(in_stack_00000020 + 0x548,*(undefined8 *)PTR_DAT_09338828);
                    *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar6;
                    return 1;
                  }
                  if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                    return 1;
                  }
                  if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                    return 1;
                  }
                  lVar12 = *(long *)(in_stack_00000020 + 0x3a0);
                  if ((lVar12 != 0) && (lVar13 = *(long *)(lVar12 + 0x48), lVar13 != 0)) {
                    uVar19 = *(uint *)(lVar12 + 0x28);
                    uVar8 = *(uint *)(lVar13 + 0x18);
                    goto LAB_088200f0;
                  }
                  goto LAB_08822478;
                }
                if (uVar19 != 0x55) {
                  if (uVar19 == 0x646) {
                    if ((*(byte *)(in_stack_00000020 + 0x280) >> 1 & 1) != 0) {
                      return 1;
                    }
                    uVar6 = FUN_065e9348(in_stack_00000020 + 0x5e8,*(undefined8 *)PTR_DAT_09338820);
                    *(undefined4 *)(in_stack_00000020 + 0x608) = uVar6;
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,2,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffd;
                    goto LAB_08820060;
                  }
                  if (uVar19 != 0x64d) {
                    return 0;
                  }
                  if ((*(byte *)(in_stack_00000020 + 0x280) & 1) != 0) {
                    return 1;
                  }
                  cVar4 = FUN_08848558(in_stack_00000020 + 0x288,1,0);
                  if (cVar4 != '\0') {
                    return 1;
                  }
                  uVar11 = *(undefined8 *)PTR_DAT_093387f8;
                  *(uint *)(in_stack_00000020 + 0x284) =
                       *(uint *)(in_stack_00000020 + 0x284) & 0xfffffffe;
LAB_08820c40:
                  uVar6 = FUN_065e9acc(in_stack_00000020 + 0x240,uVar11);
                  *(undefined4 *)(in_stack_00000020 + 0x23c) = uVar6;
                  return 1;
                }
                *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 4;
                FUN_08848454(in_stack_00000020 + 0x288,4,0);
                lVar12 = *unaff_x20;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                }
                lVar13 = *(long *)(lVar12 + 0xb8);
                lVar15 = *(long *)(lVar13 + 0x90);
                if (lVar15 == 0) goto LAB_08822478;
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                if (*(int *)(lVar15 + 0x38) == 0x4e3381d) {
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    lVar12 = thunk_FUN_040d65a8();
                    lVar13 = *(long *)(*unaff_x20 + 0xb8);
                    lVar15 = *(long *)(lVar13 + 0x90);
                    if (lVar15 == 0) goto LAB_08822478;
                  }
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  uVar8 = FUN_08828d64(lVar12,*(undefined8 *)(lVar13 + 0x88),
                                       *(undefined4 *)(lVar15 + 0x44),*(undefined4 *)(lVar15 + 0x48)
                                      );
                  *(uint *)(in_stack_00000020 + 0x158) = uVar8;
                  bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                  if (uVar8 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                    bVar5 = (byte)(uVar8 >> 0x18);
                  }
                  *(byte *)(in_stack_00000020 + 0x15b) = bVar5;
                  uVar6 = *(undefined4 *)(in_stack_00000020 + 0x158);
                }
                else {
                  uVar6 = *(undefined4 *)(in_stack_00000020 + 0x500);
                  *(undefined4 *)(in_stack_00000020 + 0x158) = uVar6;
                }
                uVar11 = *(undefined8 *)PTR_DAT_093387d8;
                in_stack_00000020 = in_stack_00000020 + 0x528;
                goto LAB_0881dfcc;
              }
              if (0x41 < (int)uVar19) {
                if (uVar19 == 0x42) {
                  *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 1;
                  FUN_08848454(in_stack_00000020 + 0x288,1,0);
                  *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                  return 1;
                }
                if (uVar19 == 0x49) {
                  *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 2;
                  FUN_08848454(in_stack_00000020 + 0x288,2,0);
                  lVar12 = *unaff_x20;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *unaff_x20;
                  }
                  lVar13 = *(long *)(lVar12 + 0xb8);
                  lVar15 = *(long *)(lVar13 + 0x90);
                  if (lVar15 == 0) goto LAB_08822478;
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  if (*(int *)(lVar15 + 0x38) == 0x47db7c1) {
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      lVar12 = thunk_FUN_040d65a8();
                      lVar13 = *(long *)(*unaff_x20 + 0xb8);
                      lVar15 = *(long *)(lVar13 + 0x90);
                      if (lVar15 == 0) goto LAB_08822478;
                    }
                    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                    fVar20 = (float)FUN_0882905c(lVar12,*(undefined8 *)(lVar13 + 0x88),
                                                 *(undefined4 *)(lVar15 + 0x44),
                                                 *(undefined4 *)(lVar15 + 0x48),&stack0x000002c0);
                    uVar8 = (uint)fVar20;
                    uVar19 = 0x80000000;
                    if (fVar20 != INFINITY) {
                      uVar19 = uVar8;
                    }
                    *(uint *)(in_stack_00000020 + 0x608) = uVar19;
                    if (0x168 < uVar19 + 0xb4) {
                      return 0;
                    }
                  }
                  else {
                    if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                    bVar5 = *(byte *)(*(long *)(in_stack_00000020 + 0x100) + 0x1b0);
                    uVar8 = (uint)bVar5;
                    *(uint *)(in_stack_00000020 + 0x608) = (uint)bVar5;
                  }
                  FUN_065e9300(in_stack_00000020 + 0x5e8,uVar8,*(undefined8 *)PTR_DAT_093387c0);
                  return 1;
                }
                if (uVar19 != 0x53) {
                  return 0;
                }
                *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 0x40;
                FUN_08848454(in_stack_00000020 + 0x288,0x40,0);
                lVar12 = *unaff_x20;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                }
                lVar13 = *(long *)(lVar12 + 0xb8);
                lVar15 = *(long *)(lVar13 + 0x90);
                if (lVar15 == 0) goto LAB_08822478;
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                if (*(int *)(lVar15 + 0x38) == 0x4e3381d) {
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    lVar12 = thunk_FUN_040d65a8();
                    lVar13 = *(long *)(*unaff_x20 + 0xb8);
                    lVar15 = *(long *)(lVar13 + 0x90);
                    if (lVar15 == 0) goto LAB_08822478;
                  }
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  uVar8 = FUN_08828d64(lVar12,*(undefined8 *)(lVar13 + 0x88),
                                       *(undefined4 *)(lVar15 + 0x44),*(undefined4 *)(lVar15 + 0x48)
                                      );
                  *(uint *)(in_stack_00000020 + 0x15c) = uVar8;
                  bVar5 = *(byte *)(in_stack_00000020 + 0x503);
                  if (uVar8 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
                    bVar5 = (byte)(uVar8 >> 0x18);
                  }
                  *(byte *)(in_stack_00000020 + 0x15f) = bVar5;
                  uVar6 = *(undefined4 *)(in_stack_00000020 + 0x15c);
                }
                else {
                  uVar6 = *(undefined4 *)(in_stack_00000020 + 0x500);
                  *(undefined4 *)(in_stack_00000020 + 0x15c) = uVar6;
                }
                uVar11 = *(undefined8 *)PTR_DAT_093387d8;
                in_stack_00000020 = in_stack_00000020 + 0x548;
                goto LAB_0881dfcc;
              }
              if (uVar19 == 0xff568194) {
                *(undefined4 *)(in_stack_00000020 + 0x634) = 0;
                return 1;
              }
              if (uVar19 != 0x41) {
                return 0;
              }
              if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                return 1;
              }
              if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                return 1;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                if (lVar12 == 0) goto LAB_08822478;
              }
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
              if (*(int *)(lVar12 + 0x38) != 0x26afb9) {
                return 1;
              }
              lVar12 = *(long *)(in_stack_00000020 + 0x3a0);
              if (lVar12 == 0) goto LAB_08822478;
              lVar13 = *(long *)(lVar12 + 0x48);
              if (lVar13 == 0) goto LAB_08822478;
              uVar8 = *(uint *)(lVar12 + 0x28);
              if (*(int *)(lVar13 + 0x18) < (int)(uVar8 + 1)) {
                if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                FUN_05202238((long *)(lVar12 + 0x48),uVar8 + 1,*(undefined8 *)PTR_DAT_093387b0);
                lVar12 = *(long *)(in_stack_00000020 + 0x3a0);
                if (lVar12 == 0) goto LAB_08822478;
              }
              lVar12 = *(long *)(lVar12 + 0x48);
              if (lVar12 == 0) goto LAB_08822478;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
              plVar14 = (long *)(lVar12 + (long)(int)uVar8 * 0x28 + 0x20);
              *plVar14 = in_stack_00000020;
              thunk_FUN_040ec700(plVar14,in_stack_00000020);
              if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                 (lVar12 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar12 == 0))
              goto LAB_08822478;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
              lVar13 = lVar12 + (long)(int)uVar8 * 0x28;
              *(undefined4 *)(lVar13 + 0x28) = 0x26afb9;
              *(undefined4 *)(lVar13 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
              lVar15 = *unaff_x20;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar15 = *unaff_x20;
              }
              lVar16 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x90);
              if (lVar16 == 0) goto LAB_08822478;
              if (((*(uint *)(lVar16 + 0x18) & 0xfffffffe) != 0) &&
                 (uVar8 < *(uint *)(lVar12 + 0x18))) {
                iVar7 = *(int *)(lVar16 + 0x44);
                uVar6 = *(undefined4 *)(lVar16 + 0x48);
                uVar11 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x88);
LAB_08820290:
                FUN_087f06e0(lVar13 + 0x20,uVar11,iVar7,uVar6,0);
                return 1;
              }
              goto LAB_0882241c;
            }
            if (uVar19 < 0xd2d23292) {
              if (0xd078112f < uVar19) {
                if (uVar19 != 0xd256d1de) {
                  if (uVar19 == 0xd26babf6) {
                    uVar23 = FUN_07ad6874(0);
                    goto LAB_0881fe38;
                  }
                  if (uVar19 != 0xd2d23291) {
                    return 0;
                  }
                  FUN_065e9904(in_stack_00000020 + 0x240,*(undefined8 *)PTR_DAT_09338850);
                  if (*(int *)(in_stack_00000020 + 0x284) == 1) {
                    *(undefined4 *)(in_stack_00000020 + 0x23c) = 700;
                    return 1;
                  }
                  uVar11 = *(undefined8 *)PTR_DAT_093387f8;
                  goto LAB_08820c40;
                }
                uVar11 = 0x20;
                uVar8 = *(uint *)(in_stack_00000020 + 0x284) | 0x20;
                goto LAB_0882069c;
              }
              if (uVar19 == 0xd05efa5c) {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                             *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                if (fVar20 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000038._4_4_ != 2) {
                  if (in_stack_00000038._4_4_ == 1) {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                  }
                  else {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = fVar20 * fVar21;
                  }
                  *(float *)(in_stack_00000020 + 0x2ec) = fVar20;
                  return 1;
                }
                if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                  fVar26 = *(float *)(in_stack_00000020 + 0x210);
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73b44(&stack0x00000220,0);
                  if (*(long *)(in_stack_00000020 + 0x100) != 0) {
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar25 = (float)FUN_08a73b4c(&stack0x00000220,0);
                    if (*(long *)(in_stack_00000020 + 0xf8) != 0) {
                      fVar29 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar29 = 1.0;
                      }
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0xf8) + 0x28),
                              0x60);
                      fVar24 = (float)FUN_08a73b6c(&stack0x00000220,0);
                      *(float *)(in_stack_00000020 + 0x2ec) =
                           (fVar26 / fVar21) * fVar25 * fVar29 * ((fVar20 * fVar24) / 100.0);
                      return 1;
                    }
                  }
                }
                goto LAB_08822478;
              }
              if (uVar19 != 0xd078112f) {
                return 0;
              }
            }
            else {
              if (0xe554f6f3 < uVar19) {
                if (uVar19 == 0xe7ae3cb4) {
                  *(undefined1 *)(in_stack_00000020 + 0x468) = 1;
                  return 1;
                }
                if (uVar19 == 0xedcbd276) goto LAB_0881e5bc;
                if (uVar19 != 0xefbb5ce8) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) != 0) {
                  fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                               *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                  if (fVar20 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ == 2) {
                    fVar21 = 0.0;
                    if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                      fVar21 = *(float *)(in_stack_00000020 + 0x398);
                    }
                    fVar20 = (fVar20 * (*(float *)(in_stack_00000020 + 0x390) - fVar21)) / 100.0;
                  }
                  else if (in_stack_00000038._4_4_ == 1) {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                  }
                  else {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = fVar20 * fVar21;
                  }
                  if (fVar20 < 0.0) {
                    fVar20 = 0.0;
                  }
                  *(float *)(in_stack_00000020 + 0x388) = fVar20;
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (uVar19 != 0xdd49c439) {
                if (uVar19 != 0xe554f6f3) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) != 0) {
                  fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                               *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                  if (fVar20 == -32768.0) {
                    return 0;
                  }
                  if (in_stack_00000038._4_4_ == 2) {
                    fVar21 = 0.0;
                    if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
                      fVar21 = *(float *)(in_stack_00000020 + 0x398);
                    }
                    fVar20 = (fVar20 * (*(float *)(in_stack_00000020 + 0x390) - fVar21)) / 100.0;
                  }
                  else if (in_stack_00000038._4_4_ == 1) {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                  }
                  else {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = fVar20 * fVar21;
                  }
                  if (fVar20 < 0.0) {
                    fVar20 = 0.0;
                  }
LAB_088212dc:
                  *(float *)(in_stack_00000020 + 0x38c) = fVar20;
                  return 1;
                }
                goto LAB_0882241c;
              }
            }
            if ((*(byte *)(in_stack_00000020 + 0x280) >> 4 & 1) != 0) {
              return 1;
            }
            cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x10,0);
            if (cVar4 != '\0') {
              return 1;
            }
            uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffffef;
LAB_08820060:
            *(uint *)(in_stack_00000020 + 0x284) = uVar8;
            return 1;
          }
          if (uVar19 < 0x37b920b) {
            if (0x2adb73 < uVar19) {
              if (0x597459 < uVar19) {
                if (uVar19 < 0x36f95db) {
                  if (uVar19 == 0x36d097e) {
                    *(undefined1 *)(in_stack_00000020 + 0x309) = 0;
                    return 1;
                  }
                  if (uVar19 != 0x36f95da) {
                    return 0;
                  }
                  if ((*(byte *)(in_stack_00000020 + 0x281) >> 1 & 1) != 0) {
                    return 1;
                  }
                  FUN_065e8cb4(&stack0x000002c0,in_stack_00000020 + 0x568,
                               *(undefined8 *)PTR_DAT_09338840);
                  FUN_065e8a50(&stack0x000002c0,in_stack_00000020 + 0x568,
                               *(undefined8 *)PTR_DAT_09338858);
                  *(undefined8 *)(in_stack_00000020 + 0x168) = in_stack_000002c8;
                  *(undefined8 *)(in_stack_00000020 + 0x160) = in_stack_000002c0;
                  *(undefined4 *)(in_stack_00000020 + 0x170) = in_stack_000002d0;
                  cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x200,0);
                  if (cVar4 != '\0') {
                    return 1;
                  }
                  uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffdff;
                  goto LAB_08820060;
                }
                if (uVar19 != 0x37038af) {
                  if (uVar19 == 0x37128fc) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      plVar14 = *(long **)(*unaff_x20 + 0xb8);
                    }
                    FUN_065e9fc8(&stack0x000002c0,plVar14 + 2,*(undefined8 *)PTR_DAT_09338848);
                    *(undefined8 *)(in_stack_00000020 + 0x100) = in_stack_000002c8;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x100);
                    *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002d8;
                    thunk_FUN_040ec700(in_stack_00000020 + 0x118,in_stack_000002d8);
                    *(int *)(in_stack_00000020 + 0x120) = (int)in_stack_000002c0;
                    return 1;
                  }
                  if (uVar19 != 0x37b920a) {
                    return 0;
                  }
                  uVar6 = FUN_065eacdc(in_stack_00000020 + 0x218,*(undefined8 *)PTR_DAT_09338838);
                  *(undefined4 *)(in_stack_00000020 + 0x210) = uVar6;
                  return 1;
                }
                if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                  return 1;
                }
                if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                  return 1;
                }
                lVar12 = *(long *)(in_stack_00000020 + 0x3a0);
                if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x48), lVar13 == 0))
                goto LAB_08822478;
                uVar19 = *(uint *)(lVar12 + 0x28);
                uVar8 = *(uint *)(lVar13 + 0x18);
                if ((int)uVar8 <= (int)uVar19) {
                  return 1;
                }
LAB_088200f0:
                if (uVar19 < uVar8) {
                  lVar13 = lVar13 + (long)(int)uVar19 * 0x28;
                  *(int *)(lVar13 + 0x38) =
                       *(int *)(in_stack_00000020 + 0x4a4) - *(int *)(lVar13 + 0x34);
                  *(uint *)(lVar12 + 0x28) = uVar19 + 1;
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (0x2eb625 < uVar19) {
                return 0;
              }
              if (uVar19 == 0x2b96d1) {
                *(undefined1 *)(in_stack_00000020 + 0x309) = 1;
                return 1;
              }
              if (uVar19 != 0x2eb625) {
                return 0;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                param_6 = thunk_FUN_040d65a8();
                plVar14 = *(long **)(*unaff_x20 + 0xb8);
                lVar12 = plVar14[0x12];
                if (lVar12 == 0) goto LAB_08822478;
              }
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
              fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                           *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
              if (fVar20 == -32768.0) {
                return 0;
              }
              if (in_stack_00000038._4_4_ == 2) {
                fVar20 = (fVar20 * *(float *)(in_stack_00000020 + 0x20c)) / 100.0;
              }
              else if (in_stack_00000038._4_4_ == 1) {
                fVar20 = fVar20 * *(float *)(in_stack_00000020 + 0x20c);
              }
              else {
                lVar12 = *unaff_x20;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                }
                lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x88);
                if (lVar13 == 0) goto LAB_08822478;
                if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_0882241c;
                if (*(short *)(lVar13 + 0x2a) != 0x2b) {
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                    if (lVar13 == 0) goto LAB_08822478;
                  }
                  if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_0882241c;
                  if (*(short *)(lVar13 + 0x2a) != 0x2d) {
                    uVar11 = *(undefined8 *)PTR_DAT_093387d0;
                    *(float *)(in_stack_00000020 + 0x210) = fVar20;
                    goto LAB_088212a4;
                  }
                }
                fVar20 = fVar20 + *(float *)(in_stack_00000020 + 0x20c);
              }
              puVar2 = PTR_DAT_093387d0;
              *(float *)(in_stack_00000020 + 0x210) = fVar20;
              uVar11 = *(undefined8 *)puVar2;
LAB_088212a4:
              FUN_065eac98(fVar20,in_stack_00000020 + 0x218,uVar11);
              return 1;
            }
            if (uVar19 < 0x1b02fa) {
              if (uVar19 < 0x167e5) {
                if (uVar19 == 0x14dac) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar14 = *(long **)(*unaff_x20 + 0xb8);
                    lVar12 = plVar14[0x12];
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                 *(undefined4 *)(lVar12 + 0x2c),
                                                 *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                    if (fVar20 == -32768.0) {
                      return 0;
                    }
                    fVar21 = DAT_01aec9c8;
                    if (in_stack_00000038._4_4_ == 0) {
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar21 = 1.0;
                      }
                    }
                    else {
                      if (in_stack_00000038._4_4_ != 1) {
                        fVar20 = (fVar20 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                        goto LAB_08821380;
                      }
                      fVar20 = fVar20 * *(float *)(in_stack_00000020 + 0x210);
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar21 = 1.0;
                      }
                    }
                    fVar20 = fVar20 * fVar21;
                    goto LAB_08821334;
                  }
                  goto LAB_0882241c;
                }
                if (uVar19 != 0x167e4) {
                  return 0;
                }
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                fVar26 = *(float *)(in_stack_00000020 + 0x43c);
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar20 = (float)FUN_08a73bc4(&stack0x00000220,0);
                fVar21 = 1.0;
                if (0.0 < fVar20) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73bc4(&stack0x00000220,0);
                }
                uVar11 = *(undefined8 *)PTR_DAT_09338810;
                *(float *)(in_stack_00000020 + 0x43c) = fVar26 * fVar21;
                FUN_065ead50(*(undefined4 *)(in_stack_00000020 + 0x634),in_stack_00000020 + 0x638,
                             uVar11);
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                fVar21 = *(float *)(in_stack_00000020 + 0x210);
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar20 = (float)FUN_08a73b44(&stack0x00000220,0);
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar26 = (float)FUN_08a73b4c(&stack0x00000220,0);
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                fVar29 = *(float *)(in_stack_00000020 + 0x634);
                fVar25 = DAT_01aec9c8;
                if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                  fVar25 = 1.0;
                }
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar24 = (float)FUN_08a73bbc(&stack0x00000220,0);
                *(float *)(in_stack_00000020 + 0x634) =
                     fVar29 + (fVar21 / fVar20) * fVar26 * fVar25 * fVar24 *
                              *(float *)(in_stack_00000020 + 0x43c);
                FUN_08848454(in_stack_00000020 + 0x288,0x100,0);
                uVar8 = *(uint *)(in_stack_00000020 + 0x284) | 0x100;
              }
              else {
                if (uVar19 != 0x167f6) {
                  if (uVar19 == 0x1b02eb) {
                    if ((*(byte *)(in_stack_00000020 + 0x285) & 1) == 0) {
                      return 1;
                    }
                    if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                      uVar6 = FUN_065eae24(in_stack_00000020 + 0x638,*(undefined8 *)PTR_DAT_09338800
                                          );
                      *(undefined4 *)(in_stack_00000020 + 0x634) = uVar6;
                      if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                      fVar26 = *(float *)(in_stack_00000020 + 0x43c);
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28)
                              ,0x60);
                      fVar20 = (float)FUN_08a73bc4(&stack0x00000220,0);
                      fVar21 = 1.0;
                      if (0.0 < fVar20) {
                        if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                        memmove(&stack0x00000220,
                                (void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60);
                        fVar21 = (float)FUN_08a73bc4(&stack0x00000220,0);
                      }
                      *(float *)(in_stack_00000020 + 0x43c) = fVar26 / fVar21;
                    }
                    cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x100,0);
                    if (cVar4 != '\0') {
                      return 1;
                    }
                    uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xfffffeff;
                    goto LAB_08820060;
                  }
                  if (uVar19 != 0x1b02f9) {
                    return 0;
                  }
                  if (-1 < *(char *)(in_stack_00000020 + 0x284)) {
                    return 1;
                  }
                  if (*(float *)(in_stack_00000020 + 0x43c) < 1.0) {
                    uVar6 = FUN_065eae24(in_stack_00000020 + 0x638,*(undefined8 *)PTR_DAT_09338800);
                    *(undefined4 *)(in_stack_00000020 + 0x634) = uVar6;
                    if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                    fVar26 = *(float *)(in_stack_00000020 + 0x43c);
                    memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                            0x60);
                    fVar20 = (float)FUN_08a73bb4(&stack0x00000220,0);
                    fVar21 = 1.0;
                    if (0.0 < fVar20) {
                      if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                      memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28)
                              ,0x60);
                      fVar21 = (float)FUN_08a73bb4(&stack0x00000220,0);
                    }
                    *(float *)(in_stack_00000020 + 0x43c) = fVar26 / fVar21;
                  }
                  cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x80,0);
                  if (cVar4 != '\0') {
                    return 1;
                  }
                  uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffff7f;
                  goto LAB_08820060;
                }
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                fVar26 = *(float *)(in_stack_00000020 + 0x43c);
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar20 = (float)FUN_08a73bb4(&stack0x00000220,0);
                fVar21 = 1.0;
                if (0.0 < fVar20) {
                  if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                  memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),
                          0x60);
                  fVar21 = (float)FUN_08a73bb4(&stack0x00000220,0);
                }
                uVar11 = *(undefined8 *)PTR_DAT_09338810;
                *(float *)(in_stack_00000020 + 0x43c) = fVar26 * fVar21;
                FUN_065ead50(*(undefined4 *)(in_stack_00000020 + 0x634),in_stack_00000020 + 0x638,
                             uVar11);
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                fVar21 = *(float *)(in_stack_00000020 + 0x210);
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar20 = (float)FUN_08a73b44(&stack0x00000220,0);
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar26 = (float)FUN_08a73b4c(&stack0x00000220,0);
                if (*(long *)(in_stack_00000020 + 0x100) == 0) goto LAB_08822478;
                fVar29 = *(float *)(in_stack_00000020 + 0x634);
                fVar25 = DAT_01aec9c8;
                if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                  fVar25 = 1.0;
                }
                memmove(&stack0x00000220,(void *)(*(long *)(in_stack_00000020 + 0x100) + 0x28),0x60)
                ;
                fVar24 = (float)FUN_08a73bac(&stack0x00000220,0);
                *(float *)(in_stack_00000020 + 0x634) =
                     fVar29 + (fVar21 / fVar20) * fVar26 * fVar25 * fVar24 *
                              *(float *)(in_stack_00000020 + 0x43c);
                FUN_08848454(in_stack_00000020 + 0x288,0x80,0);
                uVar8 = *(uint *)(in_stack_00000020 + 0x284) | 0x80;
              }
              *(uint *)(in_stack_00000020 + 0x284) = uVar8;
              return 1;
            }
            if (0x277753 < uVar19) {
              if (uVar19 != 0x288780) {
                if (uVar19 != 0x292f75) {
                  if (uVar19 != 0x2adb73) {
                    return 0;
                  }
                  if (*(int *)(in_stack_00000020 + 0x310) != 5) {
                    return 1;
                  }
                  *(undefined4 *)(in_stack_00000020 + 0x4ec) = 0;
                  *(undefined1 *)(in_stack_00000020 + 0x374) = 1;
                  *(int *)(in_stack_00000020 + 0x4c4) = *(int *)(in_stack_00000020 + 0x4c4) + 1;
                  fVar20 = *(float *)(in_stack_00000020 + 0x440) + 0.0 +
                           *(float *)(in_stack_00000020 + 0x444);
LAB_08821380:
                  *(float *)(in_stack_00000020 + 0x658) = fVar20;
                  return 1;
                }
                *(uint *)(in_stack_00000020 + 0x284) = *(uint *)(in_stack_00000020 + 0x284) | 0x200;
                FUN_08848454(in_stack_00000020 + 0x288,0x200,0);
                puVar2 = PTR_DAT_093375c0;
                if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar23 = FUN_087d5b70(0);
                uVar8 = 0;
                uVar10 = 0x4000ffff;
                goto LAB_0881fa24;
              }
              if (*(char *)(in_stack_00000020 + 0x469) == '\0') {
                return 1;
              }
              if (*(char *)(in_stack_00000020 + 0x42d) != '\0') {
                return 1;
              }
              lVar12 = *(long *)(in_stack_00000020 + 0x3a0);
              if (lVar12 == 0) goto LAB_08822478;
              lVar13 = *(long *)(lVar12 + 0x48);
              if (lVar13 == 0) goto LAB_08822478;
              uVar8 = *(uint *)(lVar12 + 0x28);
              if (*(int *)(lVar13 + 0x18) < (int)(uVar8 + 1)) {
                if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                FUN_05202238((long *)(lVar12 + 0x48),uVar8 + 1,*(undefined8 *)PTR_DAT_093387b0);
                lVar12 = *(long *)(in_stack_00000020 + 0x3a0);
                if (lVar12 == 0) goto LAB_08822478;
              }
              lVar12 = *(long *)(lVar12 + 0x48);
              if (lVar12 == 0) goto LAB_08822478;
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
              plVar14 = (long *)(lVar12 + (long)(int)uVar8 * 0x28 + 0x20);
              *plVar14 = in_stack_00000020;
              thunk_FUN_040ec700(plVar14,in_stack_00000020);
              if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                 (lVar12 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar12 == 0))
              goto LAB_08822478;
              lVar13 = *unaff_x20;
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar13 = *unaff_x20;
              }
              lVar15 = *(long *)(lVar13 + 0xb8);
              lVar16 = *(long *)(lVar15 + 0x90);
              if (lVar16 == 0) goto LAB_08822478;
              if ((*(int *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) <= uVar8))
              goto LAB_0882241c;
              *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x28 + 0x28) =
                   *(undefined4 *)(lVar16 + 0x24);
              if ((*(long *)(in_stack_00000020 + 0x3a0) == 0) ||
                 (lVar13 = *(long *)(*(long *)(in_stack_00000020 + 0x3a0) + 0x48), lVar13 == 0))
              goto LAB_08822478;
              if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar8 * 0x28;
                *(undefined4 *)(lVar13 + 0x34) = *(undefined4 *)(in_stack_00000020 + 0x4a4);
                iVar7 = *(int *)(lVar16 + 0x2c);
                *(int *)(lVar13 + 0x2c) = iVar7 + in_stack_00000018._4_4_;
                uVar6 = *(undefined4 *)(lVar16 + 0x30);
                *(undefined4 *)(lVar13 + 0x30) = uVar6;
                uVar11 = *(undefined8 *)(lVar15 + 0x88);
                goto LAB_08820290;
              }
              goto LAB_0882241c;
            }
            if (uVar19 == 0x1b2023) {
              *(undefined1 *)(in_stack_00000020 + 0x30a) = 0;
              return 1;
            }
            if (uVar19 != 0x277753) {
              return 0;
            }
            if (*(int *)(param_6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              param_6 = *unaff_x20;
              plVar14 = *(long **)(param_6 + 0xb8);
              lVar12 = plVar14[0x12];
              if (lVar12 == 0) goto LAB_08822478;
            }
            if ((*(int *)(lVar12 + 0x18) == 0) || (*(int *)(lVar12 + 0x18) == 1)) goto LAB_0882241c;
            iVar7 = *(int *)(lVar12 + 0x24);
            if (iVar7 != -0x25034fb5) {
              iVar9 = *(int *)(lVar12 + 0x38);
              iVar1 = *(int *)(lVar12 + 0x3c);
              FUN_087dea58(iVar7,&stack0x000002a8,0);
              puVar2 = PTR_DAT_09285bb0;
              if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar10 = FUN_089cc398(in_stack_000002a8,0,0);
              if ((uVar10 & 1) != 0) {
                lVar12 = *unaff_x20;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                }
                lVar13 = *(long *)(lVar12 + 0xb8);
                lVar15 = *(long *)(lVar13 + 0x70);
                if (lVar15 == 0) {
                  in_stack_000002a8 = 0;
                }
                else {
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar13 = *(long *)(*unaff_x20 + 0xb8);
                  }
                  lVar12 = *(long *)(lVar13 + 0x90);
                  if (lVar12 == 0) goto LAB_08822478;
                  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                  uVar11 = FUN_074ecc38(0,*(undefined8 *)(lVar13 + 0x88),
                                        *(undefined4 *)(lVar12 + 0x2c),
                                        *(undefined4 *)(lVar12 + 0x30),0);
                  in_stack_000002a8 =
                       (**(code **)(lVar15 + 0x18))
                                 (*(undefined8 *)(lVar15 + 0x40),iVar7,uVar11,
                                  *(undefined8 *)(lVar15 + 0x28));
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar10 = FUN_089cc398(in_stack_000002a8,0,0);
                if ((uVar10 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar11 = FUN_0883d64c(0);
                  lVar12 = *unaff_x20;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(lVar12);
                    lVar12 = *unaff_x20;
                  }
                  lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
                  if (lVar13 == 0) goto LAB_08822478;
                  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0882241c;
                  uVar18 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x88),
                                        *(undefined4 *)(lVar13 + 0x2c),
                                        *(undefined4 *)(lVar13 + 0x30),0);
                  uVar11 = FUN_074d875c(uVar11,uVar18,0);
                  in_stack_000002a8 = FUN_05191970(uVar11,*(undefined8 *)PTR_DAT_093387a0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar10 = FUN_089cc398(in_stack_000002a8,0,0);
                if ((uVar10 & 1) != 0) {
                  return 0;
                }
                FUN_087de4e0(in_stack_000002a8,0);
              }
              if (iVar9 == 0 && iVar1 == 0) {
                if (in_stack_000002a8 == 0) goto LAB_08822478;
                *(undefined8 *)(in_stack_00000020 + 0x118) =
                     *(undefined8 *)(in_stack_000002a8 + 0x88);
                thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                lVar12 = *unaff_x20;
                uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar12 = *unaff_x20;
                }
                uVar8 = FUN_087deebc(uVar11,in_stack_000002a8,*(long *)(lVar12 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
                lVar12 = *unaff_x20;
                *(uint *)(in_stack_00000020 + 0x120) = uVar8;
                plVar14 = *(long **)(lVar12 + 0xb8);
                if (*plVar14 == 0) goto LAB_08822478;
                if (*(uint *)(*plVar14 + 0x18) <= uVar8) goto LAB_0882241c;
              }
              else {
                if (iVar9 != 0x313400cb) {
                  return 0;
                }
                uVar10 = FUN_087dec50(iVar1,&stack0x000002a0,0);
                if ((uVar10 & 1) == 0) {
                  if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar11 = FUN_0883d64c(0);
                  lVar12 = *unaff_x20;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(lVar12);
                    lVar12 = *unaff_x20;
                  }
                  lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
                  if (lVar13 == 0) goto LAB_08822478;
                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
                  uVar18 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x88),
                                        *(undefined4 *)(lVar13 + 0x44),
                                        *(undefined4 *)(lVar13 + 0x48),0);
                  uVar11 = FUN_074d875c(uVar11,uVar18,0);
                  uVar11 = FUN_05191970(uVar11,*(undefined8 *)PTR_DAT_09287b40);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)puVar2);
                  }
                  uVar10 = FUN_089cc398(uVar11,0,0);
                  if ((uVar10 & 1) != 0) {
                    return 0;
                  }
                  FUN_087de814(iVar1,uVar11,0);
                  *(undefined8 *)(in_stack_00000020 + 0x118) = uVar11;
                  thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                  lVar12 = *unaff_x20;
                  uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *unaff_x20;
                  }
                  uVar8 = FUN_087deebc(uVar11,in_stack_000002a8,*(long *)(lVar12 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
                  lVar12 = *unaff_x20;
                  *(uint *)(in_stack_00000020 + 0x120) = uVar8;
                  plVar14 = *(long **)(lVar12 + 0xb8);
                  if (*plVar14 == 0) goto LAB_08822478;
                  if (*(uint *)(*plVar14 + 0x18) <= uVar8) goto LAB_0882241c;
                }
                else {
                  *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002a0;
                  thunk_FUN_040ec700(in_stack_00000020 + 0x118);
                  lVar12 = *unaff_x20;
                  uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *unaff_x20;
                  }
                  uVar8 = FUN_087deebc(uVar11,in_stack_000002a8,*(long *)(lVar12 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
                  lVar12 = *unaff_x20;
                  *(uint *)(in_stack_00000020 + 0x120) = uVar8;
                  plVar14 = *(long **)(lVar12 + 0xb8);
                  if (*plVar14 == 0) goto LAB_08822478;
                  if (*(uint *)(*plVar14 + 0x18) <= uVar8) goto LAB_0882241c;
                }
              }
              FUN_065e9f54(plVar14 + 2,&stack0x000002c0,*(undefined8 *)PTR_DAT_093387e0);
              lVar12 = in_stack_00000020 + 0x100;
              *(long *)(in_stack_00000020 + 0x100) = in_stack_000002a8;
              goto LAB_08821eec;
            }
            if (*(int *)(param_6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              plVar14 = *(long **)(*unaff_x20 + 0xb8);
            }
            lVar12 = *plVar14;
            if (lVar12 == 0) goto LAB_08822478;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
            *(undefined8 *)(in_stack_00000020 + 0x100) = *(undefined8 *)(lVar12 + 0x28);
            thunk_FUN_040ec700(in_stack_00000020 + 0x100);
            lVar12 = **(long **)(*unaff_x20 + 0xb8);
            if (lVar12 == 0) goto LAB_08822478;
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
            *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar12 + 0x38);
            thunk_FUN_040ec700(in_stack_00000020 + 0x118);
            lVar12 = *unaff_x20;
            *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
            plVar14 = *(long **)(lVar12 + 0xb8);
            if (*plVar14 == 0) goto LAB_08822478;
            if (*(int *)(*plVar14 + 0x18) == 0) goto LAB_0882241c;
          }
          else {
            if (uVar19 < 0xb863a17) {
              if (0x5989790 < uVar19) {
                if (uVar19 < 0x5fe5279) {
                  if (uVar19 == 0x5f72764) {
                    if (*(int *)(param_6 + 0xe4) == 0) {
                      param_6 = thunk_FUN_040d65a8();
                      plVar14 = *(long **)(*unaff_x20 + 0xb8);
                      lVar12 = plVar14[0x12];
                      if (lVar12 == 0) goto LAB_08822478;
                    }
                    if (*(int *)(lVar12 + 0x18) != 0) {
                      fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                   *(undefined4 *)(lVar12 + 0x2c),
                                                   *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                      if (fVar20 == -32768.0) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 2) {
                        return 0;
                      }
                      if (in_stack_00000038._4_4_ == 1) {
                        fVar21 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar21 = 1.0;
                        }
                        fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                      }
                      else {
                        fVar21 = DAT_01aec9c8;
                        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                          fVar21 = 1.0;
                        }
                        fVar20 = fVar20 * fVar21;
                      }
                      fVar20 = *(float *)(in_stack_00000020 + 0x658) + fVar20;
LAB_08821334:
                      *(float *)(in_stack_00000020 + 0x658) = fVar20;
                      return 1;
                    }
                    goto LAB_0882241c;
                  }
                  if (uVar19 != 0x5fe5278) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar14 = *(long **)(*unaff_x20 + 0xb8);
                    lVar12 = plVar14[0x12];
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                 *(undefined4 *)(lVar12 + 0x2c),
                                                 *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                    if (fVar20 == -32768.0) {
                      return 0;
                    }
                    uVar11 = NEON_fmov(0x3f800000,4);
                    *(float *)(in_stack_00000020 + 0x47c) = fVar20;
                    *(undefined8 *)(in_stack_00000020 + 0x480) = uVar11;
                    return 1;
                  }
                }
                else {
                  if (uVar19 != 0x64e48e6) {
                    return 0;
                  }
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    plVar14 = *(long **)(*unaff_x20 + 0xb8);
                    lVar12 = plVar14[0x12];
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],
                                                 *(undefined4 *)(lVar12 + 0x2c),
                                                 *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                    if (fVar20 == -32768.0) {
                      return 0;
                    }
                    if (in_stack_00000038._4_4_ != 2) {
                      if (in_stack_00000038._4_4_ == 1) {
                        return 0;
                      }
                      fVar21 = DAT_01aec9c8;
                      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                        fVar21 = 1.0;
                      }
                      *(float *)(in_stack_00000020 + 0x398) = fVar20 * fVar21;
                      return 1;
                    }
                    *(float *)(in_stack_00000020 + 0x398) =
                         (fVar20 * *(float *)(in_stack_00000020 + 0x390)) / 100.0;
                    return 1;
                  }
                }
                goto LAB_0882241c;
              }
              if (uVar19 < 0x47af055) {
                if (uVar19 == 0x47a86ed) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
                    if (lVar12 == 0) goto LAB_08822478;
                  }
                  if (*(int *)(lVar12 + 0x18) != 0) {
                    iVar7 = *(int *)(lVar12 + 0x24);
                    if (iVar7 < 0x28989c) {
                      if (iVar7 != -0x5ed67635) {
                        if (iVar7 != 0x28989b) {
                          return 0;
                        }
                        uVar11 = *(undefined8 *)PTR_DAT_093387b8;
                        *(undefined4 *)(in_stack_00000020 + 0x2a0) = 1;
                        FUN_065e98bc(in_stack_00000020 + 0x2a8,1,uVar11);
                        return 1;
                      }
                      uVar22 = 2;
                      uVar6 = 2;
                    }
                    else if (iVar7 == 0x5196c24) {
                      uVar22 = 0x10;
                      uVar6 = 0x10;
                    }
                    else if (iVar7 == 0x5f4ec60) {
                      uVar22 = 4;
                      uVar6 = 4;
                    }
                    else {
                      if (iVar7 != 0x30b3d31f) {
                        return 0;
                      }
                      uVar22 = 8;
                      uVar6 = 8;
                    }
                    uVar11 = *(undefined8 *)PTR_DAT_093387b8;
                    *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar22;
                    in_stack_00000020 = in_stack_00000020 + 0x2a8;
                    goto 
                    UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_graspReady
                    ;
                  }
                  goto LAB_0882241c;
                }
                if (uVar19 != 0x47af054) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  param_6 = *unaff_x20;
                  plVar14 = *(long **)(param_6 + 0xb8);
                  lVar12 = plVar14[0x12];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                if (*(int *)(lVar12 + 0x30) != 3) {
                  return 0;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                }
                lVar12 = plVar14[0x11];
                if (lVar12 == 0) goto LAB_08822478;
                if ((7 < *(uint *)(lVar12 + 0x18)) && (*(uint *)(lVar12 + 0x18) != 8)) {
                  uVar11 = FUN_088288dc(param_6,*(undefined2 *)(lVar12 + 0x2e));
                  bVar5 = FUN_088288dc(uVar11,*(undefined2 *)(lVar12 + 0x30));
                  *(byte *)(in_stack_00000020 + 0x503) = bVar5 | (byte)((int)uVar11 << 4);
                  return 1;
                }
                goto LAB_0882241c;
              }
              if (uVar19 != 0x4e3381d) {
                if (uVar19 != 0x5989790) {
                  return 0;
                }
                *(undefined4 *)(in_stack_00000020 + 0x440) = 0;
                return 1;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                param_6 = *unaff_x20;
                plVar14 = *(long **)(param_6 + 0xb8);
              }
              lVar12 = plVar14[0x11];
              if (lVar12 == 0) goto LAB_08822478;
              if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_0882241c;
              if ((uVar8 == 10) && (*(short *)(lVar12 + 0x2c) == 0x23)) {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  param_6 = thunk_FUN_040d65a8();
                  lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                }
                uVar11 = 10;
LAB_0882191c:
                uVar6 = FUN_08828908(param_6,lVar12,uVar11);

                UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_deviceRotation
                :
                uVar11 = *(undefined8 *)PTR_DAT_093387d8;
                *(undefined4 *)(in_stack_00000020 + 0x500) = uVar6;
              }
              else {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  param_6 = *unaff_x20;
                  plVar14 = *(long **)(param_6 + 0xb8);
                  lVar12 = plVar14[0x11];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_0882241c;
                if ((uVar8 == 0xb) && (*(short *)(lVar12 + 0x2c) == 0x23)) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                  }
                  uVar11 = 0xb;
                  goto LAB_0882191c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  param_6 = *unaff_x20;
                  plVar14 = *(long **)(param_6 + 0xb8);
                  lVar12 = plVar14[0x11];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_0882241c;
                if ((uVar8 == 0xd) && (*(short *)(lVar12 + 0x2c) == 0x23)) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                  }
                  uVar11 = 0xd;
                  goto LAB_0882191c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  param_6 = *unaff_x20;
                  plVar14 = *(long **)(param_6 + 0xb8);
                  lVar12 = plVar14[0x11];
                  if (lVar12 == 0) goto LAB_08822478;
                }
                if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_0882241c;
                if ((uVar8 == 0xf) && (*(short *)(lVar12 + 0x2c) == 0x23)) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    param_6 = thunk_FUN_040d65a8();
                    lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
                  }
                  uVar11 = 0xf;
                  goto LAB_0882191c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  plVar14 = *(long **)(*unaff_x20 + 0xb8);
                }
                lVar12 = plVar14[0x12];
                if (lVar12 == 0) goto LAB_08822478;
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
                uVar8 = *(uint *)(lVar12 + 0x24);
                if (0x257e7e < (int)uVar8) {
                  if (uVar8 < 0x4d51a28) {
                    if (uVar8 != 0x284209) {
                      if (uVar8 != 0x4d51a27) {
                        return 0;
                      }
                      uVar11 = 0;
                      uVar6 = 0;
                      uVar22 = 0;
                      goto LAB_088225f0;
                    }
                    uVar22 = 0xff808080;
                    uVar6 = 0xff808080;
                    goto LAB_088225a0;
                  }
                  if (uVar8 != 0x53084fb) {
                    if (uVar8 == 0x64c8d87) {
                      uVar11 = 0x3f800000;
                      uVar6 = 0x3f800000;
                      goto LAB_088225b8;
                    }
                    if (uVar8 != 0x145436c0) {
                      return 0;
                    }
                    uVar22 = 0xffe6d8ad;
                    uVar6 = 0xffe6d8ad;
                    goto LAB_088225a0;
                  }
                  uVar11 = 0;
                  uVar22 = 0;
                  uVar6 = 0x3f800000;
LAB_088225f0:
                  uVar6 = FUN_0421d10c(uVar11,uVar6,uVar22,0x3f800000,0);
                  goto 
                  UnityEngine_XR_OpenXR_Features_Interactions_HandInteractionProfile_HandInteraction__get_deviceRotation
                  ;
                }
                if (-0x4213b590 < (int)uVar8) {
                  uVar6 = DAT_01aec1cc;
                  uVar22 = DAT_01aecd14;
                  if (uVar8 != 0xcb66f684) {
                    if (uVar8 != 0x165f3) {
                      if (uVar8 != 0x257e7e) {
                        return 0;
                      }
                      uVar11 = 0;
                      uVar6 = 0;
LAB_088225b8:
                      uVar22 = 0x3f800000;
                      goto LAB_088225f0;
                    }
                    uVar6 = 0;
                    uVar22 = 0;
                  }
                  uVar11 = 0x3f800000;
                  goto LAB_088225f0;
                }
                if (uVar8 == 0xb57b1fce) {
                  uVar22 = 0xfff020a0;
                  uVar6 = 0xfff020a0;
                }
                else {
                  if (uVar8 != 0xbdec4a70) {
                    return 0;
                  }
                  uVar22 = 0xff0080ff;
                  uVar6 = 0xff0080ff;
                }
LAB_088225a0:
                uVar11 = *(undefined8 *)PTR_DAT_093387d8;
                *(undefined4 *)(in_stack_00000020 + 0x500) = uVar22;
              }
              in_stack_00000020 = in_stack_00000020 + 0x508;
              goto LAB_0881dfcc;
            }
            if (uVar19 < 0xd7fc39c) {
              if (uVar19 < 0xbea90d2) {
                if (uVar19 != 0xbea90d1) {
                  return 0;
                }
                if ((*(byte *)(in_stack_00000020 + 0x280) >> 5 & 1) != 0) {
                  return 1;
                }
                cVar4 = FUN_08848558(in_stack_00000020 + 0x288,0x20,0);
                if (cVar4 != '\0') {
                  return 1;
                }
                uVar8 = *(uint *)(in_stack_00000020 + 0x284) & 0xffffffdf;
                goto LAB_08820060;
              }
              if (uVar19 == 0xbf2aad3) {
                *(undefined4 *)(in_stack_00000020 + 0x2ec) = 0xc6fffe00;
                return 1;
              }
              if (uVar19 != 0xd0298a0) {
                return 0;
              }
LAB_0881e5bc:
              uVar11 = 0x10;
              uVar8 = *(uint *)(in_stack_00000020 + 0x284) | 0x10;
LAB_0882069c:
              *(uint *)(in_stack_00000020 + 0x284) = uVar8;
              FUN_08848454(in_stack_00000020 + 0x288,uVar11,0);
              return 1;
            }
            if (0x72343fa2 < uVar19) {
              if (uVar19 == 0x72a5aa29) {
                *(undefined4 *)(in_stack_00000020 + 0x398) = 0xbf800000;
                return 1;
              }
              if (uVar19 == 0x72f142b7) {
                uVar22 = FUN_073cdcc0(0);
                *(undefined4 *)(in_stack_00000020 + 0x47c) = uVar22;
                *(undefined4 *)(in_stack_00000020 + 0x480) = uVar6;
                *(float *)(in_stack_00000020 + 0x484) = fVar20;
                return 1;
              }
              if (uVar19 != 0x745ef45b) {
                return 0;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                param_6 = thunk_FUN_040d65a8();
                plVar14 = *(long **)(*unaff_x20 + 0xb8);
                lVar12 = plVar14[0x12];
                if (lVar12 == 0) goto LAB_08822478;
              }
              if (*(int *)(lVar12 + 0x18) != 0) {
                fVar20 = (float)FUN_0882905c(param_6,plVar14[0x11],*(undefined4 *)(lVar12 + 0x2c),
                                             *(undefined4 *)(lVar12 + 0x30),&stack0x000002c0);
                if (fVar20 == -32768.0) {
                  return 0;
                }
                if (in_stack_00000038._4_4_ != 2) {
                  if (in_stack_00000038._4_4_ == 1) {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = *(float *)(in_stack_00000020 + 0x210) * fVar20 * fVar21;
                  }
                  else {
                    fVar21 = DAT_01aec9c8;
                    if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
                      fVar21 = 1.0;
                    }
                    fVar20 = fVar20 * fVar21;
                  }
                  *(float *)(in_stack_00000020 + 0x634) = fVar20;
                  return 1;
                }
                return 0;
              }
              goto LAB_0882241c;
            }
            if (uVar19 != 0x313400cb) {
              if (uVar19 == 0x71c96d92) {
                uVar6 = FUN_065e8668(in_stack_00000020 + 0x508,*(undefined8 *)PTR_DAT_09338828);
                *(undefined4 *)(in_stack_00000020 + 0x500) = uVar6;
                return 1;
              }
              if (uVar19 != 0x72343fa2) {
                return 0;
              }
              uVar6 = FUN_065e9904(in_stack_00000020 + 0x2a8,*(undefined8 *)PTR_DAT_09338830);
              *(undefined4 *)(in_stack_00000020 + 0x2a0) = uVar6;
              return 1;
            }
            if (*(int *)(param_6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              param_6 = *unaff_x20;
              plVar14 = *(long **)(param_6 + 0xb8);
              lVar12 = plVar14[0x12];
              if (lVar12 == 0) goto LAB_08822478;
            }
            if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
            iVar7 = *(int *)(lVar12 + 0x24);
            if (iVar7 == -0x25034fb5) {
              if (*(int *)(param_6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                plVar14 = *(long **)(*unaff_x20 + 0xb8);
              }
              lVar12 = *plVar14;
              if (lVar12 == 0) goto LAB_08822478;
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
              *(undefined8 *)(in_stack_00000020 + 0x118) = *(undefined8 *)(lVar12 + 0x38);
              thunk_FUN_040ec700(in_stack_00000020 + 0x118);
              lVar12 = *unaff_x20;
              *(undefined4 *)(in_stack_00000020 + 0x120) = 0;
              plVar14 = *(long **)(lVar12 + 0xb8);
              if (*plVar14 == 0) goto LAB_08822478;
              if (*(int *)(*plVar14 + 0x18) != 0) goto LAB_088214e0;
              goto LAB_0882241c;
            }
            uVar10 = FUN_087dec50(iVar7,&stack0x000002a0,0);
            if ((uVar10 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar11 = FUN_0883d64c(0);
              lVar12 = *unaff_x20;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_040d65a8(lVar12);
                lVar12 = *unaff_x20;
              }
              lVar13 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x90);
              if (lVar13 == 0) goto LAB_08822478;
              if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0882241c;
              uVar18 = FUN_074ecc38(0,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x88),
                                    *(undefined4 *)(lVar13 + 0x2c),*(undefined4 *)(lVar13 + 0x30),0)
              ;
              uVar11 = FUN_074d875c(uVar11,uVar18,0);
              uVar11 = FUN_05191970(uVar11,*(undefined8 *)PTR_DAT_09287b40);
              if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
                thunk_FUN_040d65a8(*(long *)PTR_DAT_09285bb0);
              }
              uVar10 = FUN_089cc398(uVar11,0,0);
              if ((uVar10 & 1) != 0) {
                return 0;
              }
              FUN_087de814(iVar7,uVar11,0);
              *(undefined8 *)(in_stack_00000020 + 0x118) = uVar11;
              thunk_FUN_040ec700(in_stack_00000020 + 0x118);
              lVar12 = *unaff_x20;
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
              uVar18 = *(undefined8 *)(in_stack_00000020 + 0x100);
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar12 = *unaff_x20;
              }
              uVar8 = FUN_087deebc(uVar11,uVar18,*(long *)(lVar12 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
              lVar12 = *unaff_x20;
              *(uint *)(in_stack_00000020 + 0x120) = uVar8;
              plVar14 = *(long **)(lVar12 + 0xb8);
              if (*plVar14 == 0) goto LAB_08822478;
              if (*(uint *)(*plVar14 + 0x18) <= uVar8) goto LAB_0882241c;
            }
            else {
              *(undefined8 *)(in_stack_00000020 + 0x118) = in_stack_000002a0;
              thunk_FUN_040ec700(in_stack_00000020 + 0x118);
              lVar12 = *unaff_x20;
              uVar11 = *(undefined8 *)(in_stack_00000020 + 0x118);
              uVar18 = *(undefined8 *)(in_stack_00000020 + 0x100);
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar12 = *unaff_x20;
              }
              uVar8 = FUN_087deebc(uVar11,uVar18,*(long *)(lVar12 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
              lVar12 = *unaff_x20;
              *(uint *)(in_stack_00000020 + 0x120) = uVar8;
              plVar14 = *(long **)(lVar12 + 0xb8);
              if (*plVar14 == 0) goto LAB_08822478;
              if (*(uint *)(*plVar14 + 0x18) <= uVar8) goto LAB_0882241c;
            }
          }
LAB_088214e0:
          FUN_065e9f54(plVar14 + 2,&stack0x000002c0,*(undefined8 *)PTR_DAT_093387e0);
          return 1;
        }
        if (*(int *)(param_6 + 0xe4) == 0) {
          param_6 = thunk_FUN_040d65a8();
          lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
        }
        uVar11 = 9;
      }
    }
  }
  uVar6 = FUN_08828908(param_6,lVar12,uVar11);
  puVar2 = PTR_DAT_093387d8;
  *(undefined4 *)(in_stack_00000020 + 0x500) = uVar6;
  in_stack_00000020 = in_stack_00000020 + 0x508;
  uVar11 = *(undefined8 *)puVar2;
LAB_0881dfcc:
  FUN_065e8620(in_stack_00000020,uVar6,uVar11);
  return 1;
LAB_08820f18:
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
  }
  lVar13 = *(long *)(lVar12 + 0xb8);
  lVar15 = *(long *)(lVar13 + 0x90);
  if (lVar15 == 0) goto LAB_08822478;
  if (*(int *)(lVar15 + 0x18) <= (int)uVar8) {
LAB_0882100c:
    FUN_065ea6ac(in_stack_00000020 + 0x5a0,*(undefined8 *)(in_stack_00000020 + 0x598),
                 *(undefined8 *)PTR_DAT_093387c8);
    return 1;
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
    lVar13 = *(long *)(lVar12 + 0xb8);
    lVar15 = *(long *)(lVar13 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar8 * 0x18 + 0x20) == 0) goto LAB_0882100c;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
    lVar13 = *(long *)(lVar12 + 0xb8);
    lVar15 = *(long *)(lVar13 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar8 * 0x18 + 0x20) == 0x2d2c87) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      lVar12 = thunk_FUN_040d65a8();
      lVar13 = *(long *)(*unaff_x20 + 0xb8);
      lVar15 = *(long *)(lVar13 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
    lVar15 = lVar15 + (long)(int)uVar8 * 0x18;
    fVar20 = (float)FUN_0882905c(lVar12,*(undefined8 *)(lVar13 + 0x88),
                                 *(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x30),
                                 &stack0x000002c0);
    lVar12 = *unaff_x20;
    *(bool *)(in_stack_00000020 + 0x5c8) = fVar20 != 0.0;
  }
  uVar8 = uVar8 + 1;
  goto LAB_08820f18;
LAB_088203b4:
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
  }
  lVar12 = *(long *)(param_6 + 0xb8);
  lVar13 = *(long *)(lVar12 + 0x90);
  if (lVar13 == 0) goto LAB_08822478;
  if (*(int *)(lVar13 + 0x18) <= (int)uVar8) {
    return 1;
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    lVar12 = *(long *)(param_6 + 0xb8);
    lVar13 = *(long *)(lVar12 + 0x90);
    if (lVar13 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
  if (*(int *)(lVar13 + (long)(int)uVar8 * 0x18 + 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_6 = *unaff_x20;
    lVar12 = *(long *)(param_6 + 0xb8);
    lVar13 = *(long *)(lVar12 + 0x90);
    if (lVar13 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
  iVar7 = *(int *)(lVar13 + (long)(int)uVar8 * 0x18 + 0x20);
  if (iVar7 == 0x5f4ec60) {
    if (*(int *)(param_6 + 0xe4) == 0) {
      param_6 = thunk_FUN_040d65a8();
      lVar12 = *(long *)(*unaff_x20 + 0xb8);
      lVar13 = *(long *)(lVar12 + 0x90);
      if (lVar13 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
    lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
    fVar21 = (float)FUN_0882905c(param_6,*(undefined8 *)(lVar12 + 0x88),
                                 *(undefined4 *)(lVar13 + 0x2c),*(undefined4 *)(lVar13 + 0x30),
                                 &stack0x000002c0);
    if (fVar21 == -32768.0) {
      return 0;
    }
    param_6 = *unaff_x20;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
    }
    lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
    if (lVar12 == 0) goto LAB_08822478;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
    iVar7 = *(int *)(lVar12 + (long)(int)uVar8 * 0x18 + 0x34);
    if (iVar7 == 0) {
      fVar26 = fVar20;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar26 = 1.0;
      }
      fVar21 = fVar21 * fVar26;
LAB_08820660:
      *(float *)(in_stack_00000020 + 0x38c) = fVar21;
    }
    else {
      if (iVar7 == 1) {
        fVar26 = fVar20;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar26 = 1.0;
        }
        fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar26;
        goto LAB_08820660;
      }
      if (iVar7 == 2) {
        fVar26 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
          fVar26 = *(float *)(in_stack_00000020 + 0x398);
        }
        fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar26)) / 100.0;
        *(float *)(in_stack_00000020 + 0x38c) = fVar21;
      }
      else {
        fVar21 = *(float *)(in_stack_00000020 + 0x38c);
      }
    }
    if (fVar21 < 0.0) {
      fVar21 = 0.0;
    }
    *(float *)(in_stack_00000020 + 0x38c) = fVar21;
  }
  else if (iVar7 == 0x28989b) {
    if (*(int *)(param_6 + 0xe4) == 0) {
      param_6 = thunk_FUN_040d65a8();
      lVar12 = *(long *)(*unaff_x20 + 0xb8);
      lVar13 = *(long *)(lVar12 + 0x90);
      if (lVar13 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
    lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
    fVar21 = (float)FUN_0882905c(param_6,*(undefined8 *)(lVar12 + 0x88),
                                 *(undefined4 *)(lVar13 + 0x2c),*(undefined4 *)(lVar13 + 0x30),
                                 &stack0x000002c0);
    if (fVar21 == -32768.0) {
      return 0;
    }
    param_6 = *unaff_x20;
    if (*(int *)(param_6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_6 = *unaff_x20;
    }
    lVar12 = *(long *)(*(long *)(param_6 + 0xb8) + 0x90);
    if (lVar12 == 0) goto LAB_08822478;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0882241c;
    iVar7 = *(int *)(lVar12 + (long)(int)uVar8 * 0x18 + 0x34);
    if (iVar7 == 0) {
      fVar26 = fVar20;
      if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
        fVar26 = 1.0;
      }
      fVar21 = fVar21 * fVar26;
LAB_08820628:
      *(float *)(in_stack_00000020 + 0x388) = fVar21;
    }
    else {
      if (iVar7 == 1) {
        fVar26 = fVar20;
        if (*(char *)(in_stack_00000020 + 0x33e) != '\0') {
          fVar26 = 1.0;
        }
        fVar21 = *(float *)(in_stack_00000020 + 0x210) * fVar21 * fVar26;
        goto LAB_08820628;
      }
      if (iVar7 == 2) {
        fVar26 = 0.0;
        if (*(float *)(in_stack_00000020 + 0x398) != -1.0) {
          fVar26 = *(float *)(in_stack_00000020 + 0x398);
        }
        fVar21 = (fVar21 * (*(float *)(in_stack_00000020 + 0x390) - fVar26)) / 100.0;
        *(float *)(in_stack_00000020 + 0x388) = fVar21;
      }
      else {
        fVar21 = *(float *)(in_stack_00000020 + 0x388);
      }
    }
    if (fVar21 < 0.0) {
      fVar21 = 0.0;
    }
    *(float *)(in_stack_00000020 + 0x388) = fVar21;
  }
  uVar8 = uVar8 + 1;
  goto LAB_088203b4;
LAB_08822068:
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
  }
  lVar15 = *(long *)(lVar12 + 0xb8);
  lVar13 = *(long *)(lVar15 + 0x90);
  if (lVar13 == 0) goto LAB_08822478;
  if (*(int *)(lVar13 + 0x18) <= (int)uVar8) {
LAB_08822420:
    if (*(int *)(in_stack_00000020 + 0x6bc) == -1) {
      return 0;
    }
    lVar13 = *plVar14;
    if (lVar13 != 0) {
      uVar11 = *(undefined8 *)(lVar13 + 0x88);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar12 = *unaff_x20;
      }
      uVar6 = FUN_087df0f8(uVar11,lVar13,*(long *)(lVar12 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),0);
      *(undefined4 *)(in_stack_00000020 + 0x120) = uVar6;
      *(undefined4 *)(in_stack_00000020 + 0x65c) = 1;
      return 1;
    }
    goto LAB_08822478;
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
    lVar15 = *(long *)(lVar12 + 0xb8);
    lVar13 = *(long *)(lVar15 + 0x90);
    if (lVar13 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
  if (*(int *)(lVar13 + (long)(int)uVar8 * 0x18 + 0x20) == 0) goto LAB_08822420;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
    lVar15 = *(long *)(lVar12 + 0xb8);
    lVar13 = *(long *)(lVar15 + 0x90);
    if (lVar13 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
  iVar9 = *(int *)(lVar13 + (long)(int)uVar8 * 0x18 + 0x20);
  iVar7 = -0x80000000;
  if (iVar9 < 0x2be0e8) {
    if (iVar9 != -0x3b198217) {
      if (iVar9 != 0x22d74b) {
        if (iVar9 != 0x2be0e7) {
          return 0;
        }
        lVar15 = *plVar14;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar13 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
          if (lVar13 == 0) goto LAB_08822478;
        }
        if (uVar8 < *(uint *)(lVar13 + 0x18)) {
          lVar12 = FUN_088427f0(lVar15,*(undefined4 *)(lVar13 + (long)(int)uVar8 * 0x18 + 0x24),1,
                                &stack0x00000218,0);
          *plVar14 = lVar12;
          thunk_FUN_040ec700(plVar14,lVar12);
          iVar7 = 0;
          goto FUN_08822240;
        }
        goto LAB_0882241c;
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar15 = *(long *)(*unaff_x20 + 0xb8);
        lVar13 = *(long *)(lVar15 + 0x90);
        if (lVar13 == 0) goto LAB_08822478;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
      lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
      iVar9 = FUN_08828fb0(in_stack_00000020,*(undefined8 *)(lVar15 + 0x88),
                           *(undefined4 *)(lVar13 + 0x2c),*(undefined4 *)(lVar13 + 0x30),
                           lVar15 + 0x98);
      if (iVar9 != 3) {
        return 0;
      }
      lVar12 = *unaff_x20;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar12 = *unaff_x20;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
      if (lVar12 == 0) goto LAB_08822478;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0882241c;
      iVar9 = iVar7;
      if (*(float *)(lVar12 + 0x20) != INFINITY) {
        iVar9 = (int)*(float *)(lVar12 + 0x20);
      }
      *(int *)(in_stack_00000020 + 0x6bc) = iVar9;
      if (*(char *)(in_stack_00000020 + 0x469) != '\0') {
        lVar12 = FUN_08816df4(in_stack_00000020);
        lVar13 = *unaff_x20;
        uVar6 = *(undefined4 *)(in_stack_00000020 + 0x4a4);
        uVar11 = *(undefined8 *)(in_stack_00000020 + 0x6b0);
        uVar22 = *(undefined4 *)(in_stack_00000020 + 0x6bc);
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar13);
          lVar13 = *unaff_x20;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x98);
        if (lVar13 == 0) goto LAB_08822478;
        if ((*(uint *)(lVar13 + 0x18) < 2) || (*(uint *)(lVar13 + 0x18) == 2)) goto LAB_0882241c;
        if (lVar12 == 0) goto LAB_08822478;
        iVar9 = iVar7;
        if (*(float *)(lVar13 + 0x24) != INFINITY) {
          iVar9 = (int)*(float *)(lVar13 + 0x24);
        }
        if (*(float *)(lVar13 + 0x28) != INFINITY) {
          iVar7 = (int)*(float *)(lVar13 + 0x28);
        }
        FUN_08840960(lVar12,uVar6,uVar11,uVar22,iVar9,iVar7,0);
      }
    }
  }
  else if (iVar9 == 0x2d2c87) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      lVar12 = thunk_FUN_040d65a8();
      lVar15 = *(long *)(*unaff_x20 + 0xb8);
      lVar13 = *(long *)(lVar15 + 0x90);
      if (lVar13 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
    lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
    fVar20 = (float)FUN_0882905c(lVar12,*(undefined8 *)(lVar15 + 0x88),
                                 *(undefined4 *)(lVar13 + 0x2c),*(undefined4 *)(lVar13 + 0x30),
                                 &stack0x000002c0);
    *(bool *)(in_stack_00000020 + 0x1d1) = fVar20 != 0.0;
  }
  else if (iVar9 == 0x4e3381d) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      lVar12 = thunk_FUN_040d65a8();
      lVar15 = *(long *)(*unaff_x20 + 0xb8);
      lVar13 = *(long *)(lVar15 + 0x90);
      if (lVar13 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_0882241c;
    lVar13 = lVar13 + (long)(int)uVar8 * 0x18;
    uVar6 = FUN_08828d64(lVar12,*(undefined8 *)(lVar15 + 0x88),*(undefined4 *)(lVar13 + 0x2c),
                         *(undefined4 *)(lVar13 + 0x30));
    *(undefined4 *)(in_stack_00000020 + 0x1d4) = uVar6;
  }
  else {
    if (iVar9 != 0x505d3fe) {
      return 0;
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      lVar12 = thunk_FUN_040d65a8();
      lVar15 = *(long *)(*unaff_x20 + 0xb8);
      lVar13 = *(long *)(lVar15 + 0x90);
      if (lVar13 == 0) goto LAB_08822478;
    }
    if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_0882241c;
    fVar20 = (float)FUN_0882905c(lVar12,*(undefined8 *)(lVar15 + 0x88),
                                 *(undefined4 *)(lVar13 + 0x44),*(undefined4 *)(lVar13 + 0x48),
                                 &stack0x000002c0);
    if (fVar20 != INFINITY) {
      iVar7 = (int)fVar20;
    }
    if (iVar7 == -0x8000) {
      return 0;
    }
    if ((*plVar14 == 0) || (lVar12 = FUN_08841500(*plVar14,0), lVar12 == 0)) goto LAB_08822478;
    if (*(int *)(lVar12 + 0x18) + -1 < iVar7) {
      return 0;
    }
FUN_08822240:
    *(int *)(in_stack_00000020 + 0x6bc) = iVar7;
  }
  lVar12 = *unaff_x20;
  uVar8 = uVar8 + 1;
  goto LAB_08822068;
LAB_0881fa24:
  lVar12 = *unaff_x20;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
  }
  lVar13 = *(long *)(lVar12 + 0xb8);
  lVar15 = *(long *)(lVar13 + 0x90);
  if (lVar15 == 0) goto LAB_08822478;
  if (*(int *)(lVar15 + 0x18) <= (int)uVar8) {
LAB_0882099c:
    uVar8 = (uint)*(byte *)(in_stack_00000020 + 0x503);
    if ((uint)uVar10 >> 0x18 <= (uint)*(byte *)(in_stack_00000020 + 0x503)) {
      uVar8 = (uint)(uVar10 >> 0x18);
    }
    FUN_087f1664(uVar23,uVar6,fVar20,uVar22,&stack0x00000200,(uint)uVar10 & 0xffffff | uVar8 << 0x18
                 ,0);
    puVar2 = PTR_DAT_09338808;
    *(undefined8 *)(in_stack_00000020 + 0x168) = 0;
    *(undefined8 *)(in_stack_00000020 + 0x160) = 0;
    uVar11 = *(undefined8 *)puVar2;
    *(undefined4 *)(in_stack_00000020 + 0x170) = 0;
    FUN_065e8d38(in_stack_00000020 + 0x568,&stack0x000002c0,uVar11);
    return 1;
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
    lVar13 = *(long *)(lVar12 + 0xb8);
    lVar15 = *(long *)(lVar13 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
  if (*(int *)(lVar15 + (long)(int)uVar8 * 0x18 + 0x20) == 0) goto LAB_0882099c;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar12 = *unaff_x20;
    lVar13 = *(long *)(lVar12 + 0xb8);
    lVar15 = *(long *)(lVar13 + 0x90);
    if (lVar15 == 0) goto LAB_08822478;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
  iVar7 = *(int *)(lVar15 + (long)(int)uVar8 * 0x18 + 0x20);
  if (iVar7 == -0x7fd3848f) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar13 = *(long *)(*unaff_x20 + 0xb8);
      lVar15 = *(long *)(lVar13 + 0x90);
      if (lVar15 == 0) {
LAB_08822478:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar8) {
LAB_0882241c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar15 = lVar15 + (long)(int)uVar8 * 0x18;
    iVar7 = FUN_08828fb0(in_stack_00000020,*(undefined8 *)(lVar13 + 0x88),
                         *(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x30),lVar13 + 0x98
                        );
    if (iVar7 != 4) {
      return 0;
    }
    lVar12 = *unaff_x20;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar12 = *unaff_x20;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x98);
    if (lVar12 == 0) goto LAB_08822478;
    uVar19 = *(uint *)(lVar12 + 0x18);
    if ((((uVar19 == 0) || (uVar19 == 1)) || (uVar19 < 3)) || (uVar19 == 3)) goto LAB_0882241c;
    uVar27 = *(undefined4 *)(lVar12 + 0x20);
    uVar28 = *(undefined4 *)(lVar12 + 0x24);
    uVar30 = *(undefined4 *)(lVar12 + 0x28);
    uVar31 = *(undefined4 *)(lVar12 + 0x2c);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_087f1394(uVar27,uVar28,uVar30,uVar31,&stack0x000002b0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar23 = FUN_087f1484(uVar23,0);
  }
  else if (iVar7 == 0x4e3381d) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      lVar12 = thunk_FUN_040d65a8();
      lVar13 = *(long *)(*unaff_x20 + 0xb8);
      lVar15 = *(long *)(lVar13 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
    lVar15 = lVar15 + (long)(int)uVar8 * 0x18;
LAB_0881fb5c:
    uVar10 = FUN_08828d64(lVar12,*(undefined8 *)(lVar13 + 0x88),*(undefined4 *)(lVar15 + 0x2c),
                          *(undefined4 *)(lVar15 + 0x30));
    uVar10 = uVar10 & 0xffffffff;
  }
  else if (iVar7 == 0x292f75) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar12 = *unaff_x20;
      lVar13 = *(long *)(lVar12 + 0xb8);
      lVar15 = *(long *)(lVar13 + 0x90);
      if (lVar15 == 0) goto LAB_08822478;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0882241c;
    if (*(int *)(lVar15 + (long)(int)uVar8 * 0x18 + 0x28) == 4) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        lVar12 = thunk_FUN_040d65a8();
        lVar13 = *(long *)(*unaff_x20 + 0xb8);
        lVar15 = *(long *)(lVar13 + 0x90);
        if (lVar15 == 0) goto LAB_08822478;
      }
      if (*(int *)(lVar15 + 0x18) != 0) goto LAB_0881fb5c;
      goto LAB_0882241c;
    }
  }
  uVar8 = uVar8 + 1;
  goto LAB_0881fa24;
code_r0x0881d6d0:
  in_OV = SBORROW4(in_w12,1);
  in_NG = in_w12 + -1 < 0;
  in_ZR = in_w12 == 1;
  goto code_r0x0881d6d4;
}


