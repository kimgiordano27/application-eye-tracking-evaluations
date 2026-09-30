/*
FUNCTION_NAME: FUN_06b5b5d4
ENTRY_POINT: 06b5b5d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_7
*/


void FUN_06b5b5d4(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_68;
  
  puVar4 = UnityEngine_XR_ARFoundation_ARHumanBodiesChangedEventArgs_var;
  if ((DAT_07a4fa91 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_07635e20);
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARHumanBodiesChangedEventArgs_var);
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARLightEstimationData_var);
    FUN_031f20f4(UnityEngine_XR_ARFoundation_ARParticipantsChangedEventArgs_var);
    DAT_07a4fa91 = 1;
  }
  local_68 = 0;
  FUN_050acab8(*(undefined8 *)(param_1 + 0x5d8),0,*(undefined8 *)puVar4);
  iVar2 = *(int *)(param_1 + 0x6d0);
  lVar8 = FUN_06b5852c(param_1);
  if (lVar8 == 0) {
LAB_06b5c088:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar7 = 0;
  if (*(long *)(lVar8 + 0x20) != 0) {
    iVar7 = *(int *)(*(long *)(lVar8 + 0x20) + 0x10);
  }
  if (*(long *)(param_1 + 0x488) == 0) goto LAB_06b5c088;
  plVar1 = (long *)(param_1 + 0x488);
  if (*(int *)(*(long *)(param_1 + 0x488) + 0x18) < iVar7 + iVar2) {
    FUN_03f70480(param_1,plVar1,iVar7 + iVar2,
                 *(undefined8 *)UnityEngine_XR_ARFoundation_ARLightEstimationData_var);
  }
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  local_68 = local_68 & 0xffffffff;
  lVar8 = FUN_06b5852c(param_1);
  if (lVar8 == 0) goto LAB_06b5c088;
  if (*(int *)(lVar8 + 0x18) != -0x468aaf0d) {
    FUN_06b5c3c4(param_1,*(undefined8 *)(param_1 + 0x1e0),plVar1,(long)&local_68 + 4);
  }
  puVar4 = UnityEngine_XR_ARFoundation_ARParticipantsChangedEventArgs_var;
  *(undefined1 *)(param_1 + 0x468) = 0;
  if (iVar2 < 1) {
LAB_06b5bfec:
    *(undefined4 *)(param_1 + 0x5e0) = 0;
    lVar8 = FUN_06b5852c(param_1);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != -0x468aaf0d) {
        FUN_06b5cb70(param_1,plVar1,(long)&local_68 + 4);
      }
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        if (local_68._4_4_ == *(uint *)(lVar8 + 0x18)) {
          FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
          lVar8 = *(long *)(param_1 + 0x488);
          if (lVar8 == 0) goto LAB_06b5c088;
        }
        if (local_68._4_4_ < *(uint *)(lVar8 + 0x18)) {
          *(undefined4 *)(lVar8 + (long)(int)local_68._4_4_ * 0x10 + 0x24) = 0;
          *(uint *)(param_1 + 0x490) = local_68._4_4_;
          return;
        }
LAB_06b5c08c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
    }
    goto LAB_06b5c088;
  }
  uVar15 = 0;
  lVar8 = param_1 + 0x6c8;
LAB_06b5b704:
  uVar9 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                    (lVar8,uVar15,0);
  uVar5 = (uint)uVar9;
  if (uVar5 == 0x5c) {
    if (iVar2 + -1 <= (int)uVar15) goto switchD_06b5b848_caseD_6f;
    uVar5 = uVar15 + 1;
    uVar14 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                       (lVar8,uVar5,0);
    iVar7 = (int)uVar14;
    switch(iVar7) {
    case 0x6e:
      if (*(char *)(param_1 + 0x33c) == '\0') break;
      lVar17 = *plVar1;
      if (lVar17 != 0) {
        if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
          iVar7 = local_68._4_4_ + 1;
          uVar10 = (ulong)uVar15 | 0x100000000;
          uVar9 = 0xa00000001;
          goto LAB_06b5bfc4;
        }
        goto LAB_06b5c08c;
      }
      goto LAB_06b5c088;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      break;
    case 0x72:
      if (*(char *)(param_1 + 0x33c) != '\0') {
        lVar17 = *plVar1;
        if (lVar17 != 0) {
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            iVar7 = local_68._4_4_ + 1;
            uVar10 = (ulong)uVar15 | 0x100000000;
            uVar9 = 0xd00000001;
            goto LAB_06b5bfc4;
          }
          goto LAB_06b5c08c;
        }
        goto LAB_06b5c088;
      }
      break;
    case 0x74:
      if (*(char *)(param_1 + 0x33c) != '\0') {
        lVar17 = *plVar1;
        if (lVar17 != 0) {
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            iVar7 = local_68._4_4_ + 1;
            uVar10 = (ulong)uVar15 | 0x100000000;
            uVar9 = 0x900000001;
            goto LAB_06b5bfc4;
          }
          goto LAB_06b5c08c;
        }
        goto LAB_06b5c088;
      }
      break;
    case 0x75:
      uVar5 = uVar15 + 5;
      if ((int)uVar5 < iVar2) {
        uVar10 = FUN_06b5c45c(uVar14,*(undefined8 *)(param_1 + 0x6c8),
                              *(undefined8 *)(param_1 + 0x6d0),uVar15 + 2);
        if ((uVar10 & 1) != 0) {
          lVar17 = *(long *)(param_1 + 0x488);
          uVar3 = local_68._4_4_;
          lVar11 = (long)(int)local_68._4_4_;
          lVar16 = FUN_06b5c4d8(param_1,*(undefined8 *)(param_1 + 0x6c8),
                                *(undefined8 *)(param_1 + 0x6d0),uVar15 + 2);
          if (lVar17 != 0) {
            if (uVar3 < *(uint *)(lVar17 + 0x18)) {
              lVar17 = lVar17 + lVar11 * 0x10;
              uVar9 = (ulong)uVar15 | 0x600000000;
LAB_06b5bb94:
              *(ulong *)(lVar17 + 0x20) = lVar16 << 0x20 | 1;
              *(ulong *)(lVar17 + 0x28) = uVar9;
              local_68 = CONCAT44(local_68._4_4_ + 1,(uint)local_68);
              goto LAB_06b5bfcc;
            }
            goto LAB_06b5c08c;
          }
          goto LAB_06b5c088;
        }
      }
      break;
    case 0x76:
      if (*(char *)(param_1 + 0x33c) != '\0') {
        lVar17 = *plVar1;
        if (lVar17 != 0) {
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            iVar7 = local_68._4_4_ + 1;
            uVar10 = (ulong)uVar15 | 0x100000000;
            uVar9 = 0xb00000001;
            goto LAB_06b5bfc4;
          }
          goto LAB_06b5c08c;
        }
        goto LAB_06b5c088;
      }
      break;
    default:
      if (iVar7 == 0x55) {
        uVar5 = uVar15 + 9;
        if ((int)uVar5 < iVar2) {
          uVar10 = FUN_06b5c580(uVar14,*(undefined8 *)(param_1 + 0x6c8),
                                *(undefined8 *)(param_1 + 0x6d0),uVar15 + 2);
          if ((uVar10 & 1) != 0) {
            lVar17 = *(long *)(param_1 + 0x488);
            uVar3 = local_68._4_4_;
            lVar11 = (long)(int)local_68._4_4_;
            lVar16 = FUN_06b5c5fc(param_1,*(undefined8 *)(param_1 + 0x6c8),
                                  *(undefined8 *)(param_1 + 0x6d0),uVar15 + 2);
            if (lVar17 != 0) {
              if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + lVar11 * 0x10;
                uVar9 = (ulong)uVar15 | 0xa00000000;
                goto LAB_06b5bb94;
              }
              goto LAB_06b5c08c;
            }
            goto LAB_06b5c088;
          }
        }
      }
      else if ((iVar7 == 0x5c) && (*(char *)(param_1 + 0x33c) != '\0')) {
        uVar15 = uVar5;
      }
    }
  }
  else {
    if (uVar5 == 0) goto LAB_06b5bfec;
    if (uVar5 >> 10 == 0x36) {
      uVar5 = uVar15 + 1;
      if (((iVar2 <= (int)uVar5) ||
          (uVar10 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                              (lVar8,uVar5,0), ((uint)(uVar10 >> 10) & 0x3fffff) < 0x37)) ||
         (uVar10 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                             (lVar8,uVar5,0), 6 < ((uint)(uVar10 >> 0xd) & 0x7ffff)))
      goto switchD_06b5b848_caseD_6f;
      lVar17 = *plVar1;
      uVar3 = local_68._4_4_;
      lVar16 = (long)(int)local_68._4_4_;
      uVar6 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                        (lVar8,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_07635e20 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_07635e20);
      }
      lVar11 = FUN_06b8bdf8(uVar9 & 0xffffffff,uVar6,0);
      if (lVar17 != 0) {
        if (uVar3 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + lVar16 * 0x10;
          *(ulong *)(lVar17 + 0x20) = lVar11 << 0x20 | 1;
          *(ulong *)(lVar17 + 0x28) = (ulong)uVar15 | 0x200000000;
          local_68 = CONCAT44(local_68._4_4_ + 1,(uint)local_68);
          goto LAB_06b5bfcc;
        }
        goto LAB_06b5c08c;
      }
      goto LAB_06b5c088;
    }
    if ((uVar5 != 0x3c) || (*(char *)(param_1 + 0x33a) == '\0')) goto switchD_06b5b848_caseD_6f;
    iVar7 = FUN_06b5c734(uVar9,*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(param_1 + 0x6d0),
                         uVar15 + 1);
    uVar3 = local_68._4_4_;
    if (iVar7 < 0x8f2) {
      if (iVar7 < 0x42) {
        if (iVar7 == -0x1851c34c) {
          *(undefined1 *)(param_1 + 0x468) = 1;
        }
        else if (iVar7 == -0x11878bc5) {
          *(undefined1 *)(param_1 + 0x468) = 0;
        }
        else if ((((iVar7 == 0x41) && ((int)(uVar15 + 4) < *(int *)(param_1 + 0x6d0))) &&
                 (iVar7 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                                    (lVar8,uVar15 + 3,0), iVar7 == 0x68)) &&
                (iVar7 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                                   (lVar8,uVar15 + 4,0), iVar7 == 0x72)) {
          uVar14 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility__TryGetHeadTransform
                             (param_1,0x41);
          FUN_06b5c840(param_1,uVar14,plVar1,(long)&local_68 + 4);
        }
      }
      else if (iVar7 == 0x64e) {
        uVar14 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility__TryGetHeadTransform
                           (param_1,0x41);
        FUN_06b5c9f4(param_1,uVar14,plVar1,(long)&local_68 + 4);
      }
      else {
        if (iVar7 == 0x8d0) {
          if (*(char *)(param_1 + 0x468) != '\0') goto switchD_06b5b848_caseD_6f;
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_06b5c088;
          if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
            FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
            lVar17 = *(long *)(param_1 + 0x488);
            if (lVar17 == 0) goto LAB_06b5c088;
          }
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            uVar14 = 0xa00000001;
            uVar5 = local_68._4_4_;
LAB_06b5be60:
            *(undefined8 *)(lVar17 + 0x20) = uVar14;
            *(ulong *)(lVar17 + 0x28) = (ulong)uVar15 | 0x400000000;
            local_68 = CONCAT44(uVar5 + 1,(uint)local_68);
            uVar5 = uVar15 + 3;
            goto LAB_06b5bfcc;
          }
          goto LAB_06b5c08c;
        }
        if ((iVar7 == 0x8f1) && (*(char *)(param_1 + 0x468) == '\0')) {
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_06b5c088;
          if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
            FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
            lVar17 = *(long *)(param_1 + 0x488);
            if (lVar17 == 0) goto LAB_06b5c088;
          }
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            uVar14 = 0xd00000001;
            uVar5 = local_68._4_4_;
            goto LAB_06b5be60;
          }
          goto LAB_06b5c08c;
        }
      }
    }
    else if (iVar7 < 0x2bc730) {
      if (iVar7 == 0x16a02) {
        if (*(char *)(param_1 + 0x468) == '\0') {
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_06b5c088;
          if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
            FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
            lVar17 = *(long *)(param_1 + 0x488);
            if (lVar17 == 0) goto LAB_06b5c088;
          }
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            uVar14 = 0xad00000001;
            uVar5 = local_68._4_4_;
LAB_06b5bf44:
            *(undefined8 *)(lVar17 + 0x20) = uVar14;
            *(ulong *)(lVar17 + 0x28) = (ulong)uVar15 | 0x500000000;
            local_68 = CONCAT44(uVar5 + 1,(uint)local_68);
            uVar5 = uVar15 + 4;
            goto LAB_06b5bfcc;
          }
          goto LAB_06b5c08c;
        }
      }
      else {
        if (iVar7 == 0x18527) {
          if (*(char *)(param_1 + 0x468) != '\0') goto switchD_06b5b848_caseD_6f;
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_06b5c088;
          if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
            FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
            lVar17 = *(long *)(param_1 + 0x488);
            if (lVar17 == 0) goto LAB_06b5c088;
          }
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            uVar14 = 0x200d00000001;
            uVar5 = local_68._4_4_;
            goto LAB_06b5bf44;
          }
          goto LAB_06b5c08c;
        }
        if ((iVar7 == 0x2bc72f) && (*(char *)(param_1 + 0x468) == '\0')) {
          lVar17 = *plVar1;
          if (lVar17 == 0) goto LAB_06b5c088;
          if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
            FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
            lVar17 = *(long *)(param_1 + 0x488);
            if (lVar17 == 0) goto LAB_06b5c088;
          }
          if (local_68._4_4_ < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
            uVar14 = 0xa000000001;
            uVar5 = local_68._4_4_;
            goto LAB_06b5bd40;
          }
          goto LAB_06b5c08c;
        }
      }
    }
    else {
      if (iVar7 == 0x322cae) {
        if (*(char *)(param_1 + 0x468) != '\0') goto switchD_06b5b848_caseD_6f;
        lVar17 = *plVar1;
        if (lVar17 == 0) goto LAB_06b5c088;
        if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
          FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
          lVar17 = *(long *)(param_1 + 0x488);
          if (lVar17 == 0) goto LAB_06b5c088;
        }
        if (*(uint *)(lVar17 + 0x18) <= local_68._4_4_) goto LAB_06b5c08c;
        lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
        uVar14 = 0x200b00000001;
        uVar5 = local_68._4_4_;
LAB_06b5bd40:
        *(undefined8 *)(lVar17 + 0x20) = uVar14;
        *(ulong *)(lVar17 + 0x28) = (ulong)uVar15 | 0x600000000;
        local_68 = CONCAT44(uVar5 + 1,(uint)local_68);
        uVar5 = uVar15 + 5;
        goto LAB_06b5bfcc;
      }
      if (iVar7 != 0x5f9bd17) {
        if ((iVar7 != 0x72e6f418) || (*(char *)(param_1 + 0x468) != '\0'))
        goto switchD_06b5b848_caseD_6f;
        lVar17 = (long)(int)local_68._4_4_;
        FUN_06b5caac(param_1,plVar1,(long)&local_68 + 4);
        if ((int)uVar3 < (int)local_68._4_4_) {
          lVar16 = *plVar1;
          if (lVar16 == 0) goto LAB_06b5c088;
          uVar5 = *(uint *)(lVar16 + 0x18);
          puVar12 = (undefined4 *)(lVar16 + lVar17 * 0x10 + 0x2c);
          do {
            if (uVar5 <= (uint)lVar17) goto LAB_06b5c08c;
            puVar12[-1] = uVar15;
            *puVar12 = 8;
            lVar17 = lVar17 + 1;
            puVar12 = puVar12 + 4;
          } while (lVar17 < (int)local_68._4_4_);
        }
        uVar5 = uVar15 + 7;
        goto LAB_06b5bfcc;
      }
      if (*(char *)(param_1 + 0x468) == '\0') {
        lVar17 = (long)(int)local_68._4_4_;
        uVar10 = FUN_06b5c8f8(param_1,lVar8,uVar15,&local_68,plVar1,(long)&local_68 + 4);
        if ((uVar10 & 1) != 0) {
          uVar5 = (uint)local_68;
          if ((int)uVar3 < (int)local_68._4_4_) {
            lVar16 = *plVar1;
            if (lVar16 != 0) {
              uVar3 = *(uint *)(lVar16 + 0x18);
              piVar13 = (int *)(lVar16 + lVar17 * 0x10 + 0x2c);
              do {
                if (uVar3 <= (uint)lVar17) goto LAB_06b5c08c;
                piVar13[-1] = uVar15;
                *piVar13 = ((uint)local_68 - uVar15) + 1;
                lVar17 = lVar17 + 1;
                piVar13 = piVar13 + 4;
              } while (lVar17 < (int)local_68._4_4_);
              goto LAB_06b5bfcc;
            }
            goto LAB_06b5c088;
          }
          goto LAB_06b5bfcc;
        }
      }
    }
  }
switchD_06b5b848_caseD_6f:
  lVar17 = *plVar1;
  if (lVar17 == 0) goto LAB_06b5c088;
  if (local_68._4_4_ == *(uint *)(lVar17 + 0x18)) {
    FUN_03f703c8(param_1,plVar1,*(undefined8 *)puVar4);
    lVar17 = *(long *)(param_1 + 0x488);
    if (lVar17 == 0) goto LAB_06b5c088;
  }
  if (*(uint *)(lVar17 + 0x18) <= local_68._4_4_) goto LAB_06b5c08c;
  uVar10 = (ulong)uVar15 | 0x100000000;
  uVar9 = uVar9 << 0x20 | 1;
  lVar17 = lVar17 + (long)(int)local_68._4_4_ * 0x10;
  iVar7 = local_68._4_4_ + 1;
  uVar5 = uVar15;
LAB_06b5bfc4:
  *(ulong *)(lVar17 + 0x20) = uVar9;
  *(ulong *)(lVar17 + 0x28) = uVar10;
  local_68 = CONCAT44(iVar7,(uint)local_68);
LAB_06b5bfcc:
  uVar15 = uVar5 + 1;
  if (iVar2 <= (int)uVar15) goto LAB_06b5bfec;
  goto LAB_06b5b704;
}


