/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 06081d88
PROGRAM: beastcraft-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x06081ffc) */
/* WARNING: Removing unreachable block (ram,0x06082004) */
/* WARNING: Removing unreachable block (ram,0x06082020) */
/* WARNING: Removing unreachable block (ram,0x06082028) */
/* WARNING: Removing unreachable block (ram,0x0608203c) */
/* WARNING: Removing unreachable block (ram,0x06081bc4) */
/* WARNING: Removing unreachable block (ram,0x06081bcc) */
/* WARNING: Removing unreachable block (ram,0x06081be0) */
/* WARNING: Removing unreachable block (ram,0x06081be8) */

void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  uint unaff_w23;
  uint uVar10;
  int unaff_w25;
  int unaff_w27;
  int unaff_w28;
  ulong unaff_x29;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x06081d88:
  lVar7 = *unaff_x20;
  if (lVar7 == 0) {
LAB_060822ac:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar6 = (long)(int)uStack000000000000000c;
  if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) {
LAB_060822b0:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
  lVar7 = lVar7 + lVar6 * 0x10;
  uVar8 = unaff_x21 & 0xffffffff | 0x100000000;
  uVar9 = 0xd00000001;
LAB_06081db4:
  uStack000000000000000c = (uint)lVar6;
  *(undefined8 *)(lVar7 + 0x20) = uVar9;
LAB_06081dbc:
  uStack000000000000000c = uStack000000000000000c + 1;
  *(ulong *)(lVar7 + 0x28) = uVar8;
  uVar10 = unaff_w23;
LAB_06081e98:
  uVar1 = uVar10 + 1;
  unaff_x21 = (ulong)uVar1;
  if (unaff_w25 <= (int)uVar1) {
LAB_06082214:
    *(undefined4 *)(unaff_x19 + 0x5e8) = 0;
    lVar7 = FUN_0607e7f4();
    if (lVar7 == 0) goto LAB_060822ac;
    if (*(int *)(lVar7 + 0x18) != unaff_w27) {
      FUN_06082dc4();
    }
    lVar7 = *unaff_x20;
    if (lVar7 == 0) goto LAB_060822ac;
    if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
      FUN_03ab36f0();
      lVar7 = *(long *)(unaff_x19 + 0x490);
      if (lVar7 == 0) goto LAB_060822ac;
    }
    if (uStack000000000000000c < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x19 + 0x498) = uStack000000000000000c;
      *(undefined4 *)(lVar7 + (long)(int)uStack000000000000000c * 0x10 + 0x24) = 0;
      return;
    }
    goto LAB_060822b0;
  }
  uVar8 = FUN_060b069c(unaff_x19 + 0x6d0,unaff_x21,0);
  uVar3 = (uint)uVar8;
  if (uVar3 == 0x5c) {
    if ((int)uVar1 < unaff_w28) {
      unaff_w23 = uVar10 + 2;
      uVar9 = FUN_060b069c(unaff_x19 + 0x6d0,unaff_w23,0);
      iVar4 = (int)uVar9;
      if (iVar4 < 0x72) {
        if (iVar4 == 0x55) {
          unaff_w23 = uVar10 + 10;
          if (((int)unaff_w23 < unaff_w25) &&
             (uVar5 = FUN_060827c4(uVar9,*(undefined8 *)(unaff_x19 + 0x6d0),
                                   *(undefined8 *)(unaff_x19 + 0x6d8),uVar10 + 3), (uVar5 & 1) != 0)
             ) {
            lVar7 = *(long *)(unaff_x19 + 0x490);
            lVar6 = FUN_06082868();
            if (lVar7 == 0) goto LAB_060822ac;
            if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
            lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
            uVar8 = unaff_x21 | 0xa00000000;
            goto LAB_06081e24;
          }
        }
        else if (iVar4 == 0x5c) {
          if (*(char *)(unaff_x19 + 0x344) != '\0') {
            uVar1 = unaff_w23;
          }
          unaff_x21 = (ulong)uVar1;
        }
        else if ((iVar4 == 0x6e) && (*(char *)(unaff_x19 + 0x344) != '\0')) {
          lVar7 = *unaff_x20;
          if (lVar7 == 0) goto LAB_060822ac;
          lVar6 = (long)(int)uStack000000000000000c;
          if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
          lVar7 = lVar7 + lVar6 * 0x10;
          uVar8 = unaff_x21 | 0x100000000;
          uVar9 = 0xa00000001;
          goto LAB_06081db4;
        }
      }
      else if (iVar4 < 0x75) {
        if (iVar4 == 0x72) {
          if (*(char *)(unaff_x19 + 0x344) == '\0') goto LAB_06081e3c;
          goto code_r0x06081d88;
        }
        if ((iVar4 == 0x74) && (*(char *)(unaff_x19 + 0x344) != '\0')) {
          lVar7 = *unaff_x20;
          if (lVar7 == 0) goto LAB_060822ac;
          lVar6 = (long)(int)uStack000000000000000c;
          if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
          lVar7 = lVar7 + lVar6 * 0x10;
          uVar8 = unaff_x21 | 0x100000000;
          uVar9 = 0x900000001;
          goto LAB_06081db4;
        }
      }
      else if (iVar4 == 0x75) {
        unaff_w23 = uVar10 + 6;
        if (((int)unaff_w23 < unaff_w25) &&
           (uVar5 = FUN_06082678(uVar9,*(undefined8 *)(unaff_x19 + 0x6d0),
                                 *(undefined8 *)(unaff_x19 + 0x6d8),uVar10 + 3), (uVar5 & 1) != 0))
        goto code_r0x06081de8;
      }
      else if ((iVar4 == 0x76) && (*(char *)(unaff_x19 + 0x344) != '\0')) {
        lVar7 = *unaff_x20;
        if (lVar7 == 0) goto LAB_060822ac;
        lVar6 = (long)(int)uStack000000000000000c;
        if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
        lVar7 = lVar7 + lVar6 * 0x10;
        uVar8 = unaff_x21 | 0x100000000;
        uVar9 = 0xb00000001;
        goto LAB_06081db4;
      }
    }
  }
  else {
    if (uVar3 == 0) goto LAB_06082214;
    if (uVar3 >> 10 == 0x36) {
      uVar10 = uVar10 + 2;
      if ((((int)uVar10 < unaff_w25) &&
          (uVar5 = FUN_060b069c(unaff_x19 + 0x6d0,uVar10,0), 0x36 < ((uint)(uVar5 >> 10) & 0x3fffff)
          )) && (uVar5 = FUN_060b069c(unaff_x19 + 0x6d0,uVar10,0),
                ((uint)(uVar5 >> 0xd) & 0x7ffff) < 7)) {
        lVar7 = *unaff_x20;
        uVar2 = FUN_060b069c(unaff_x19 + 0x6d0,uVar10,0);
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo)
          ;
        }
        lVar6 = FUN_060b1bac(uVar8 & 0xffffffff,uVar2,0);
        if (lVar7 == 0) goto LAB_060822ac;
        if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
        lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
        unaff_x29 = 1;
        *(ulong *)(lVar7 + 0x20) = lVar6 << 0x20 | 1;
        *(ulong *)(lVar7 + 0x28) = (ulong)uVar1 | 0x200000000;
        uStack000000000000000c = uStack000000000000000c + 1;
        unaff_w27 = -0x468aaf0d;
        goto LAB_06081e98;
      }
    }
    else {
      if ((uVar3 != 0x3c) || (*(char *)(unaff_x19 + 0x342) == '\0')) goto LAB_06081e3c;
      uVar3 = FUN_060829a0(uVar8,*(undefined8 *)(unaff_x19 + 0x6d0),
                           *(undefined8 *)(unaff_x19 + 0x6d8),uVar10 + 2);
      if ((int)uVar3 < 0x8f2) {
        if ((int)uVar3 < 0x42) {
          if (uVar3 == 0xe7ae3cb4) {
            *(char *)(unaff_x19 + 0x470) = (char)unaff_x29;
          }
          else if (uVar3 == 0xee78743b) {
            *(undefined1 *)(unaff_x19 + 0x470) = 0;
          }
          else if ((((uVar3 == 0x41) && ((int)(uVar10 + 5) < *(int *)(unaff_x19 + 0x6d8))) &&
                   (iVar4 = FUN_060b069c(unaff_x19 + 0x6d0,uVar10 + 4,0), iVar4 == 0x68)) &&
                  (iVar4 = FUN_060b069c(unaff_x19 + 0x6d0,uVar10 + 5,0), iVar4 == 0x72)) {
            FUN_0607e84c();
            FUN_06082a94();
          }
        }
        else if (uVar3 == 0x64e) {
          FUN_0607e84c();
          FUN_06082c48();
        }
        else {
          if (uVar3 != 0x8d0) {
            if ((uVar3 != 0x8f1) || (*(char *)(unaff_x19 + 0x470) != '\0')) goto LAB_06081e3c;
            lVar7 = *unaff_x20;
            if (lVar7 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
                FUN_03ab36f0();
                lVar7 = *(long *)(unaff_x19 + 0x490);
                if (lVar7 == 0) goto LAB_060822ac;
              }
              if (uStack000000000000000c < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
                uVar9 = 0xd00000001;
LAB_06082098:
                *(undefined8 *)(lVar7 + 0x20) = uVar9;
                *(ulong *)(lVar7 + 0x28) = (ulong)uVar1 | 0x400000000;
                uVar10 = uVar10 + 4;
                goto LAB_06082204;
              }
              goto LAB_060822b0;
            }
            goto LAB_060822ac;
          }
          if (*(char *)(unaff_x19 + 0x470) == '\0') {
            lVar7 = *unaff_x20;
            if (lVar7 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
                FUN_03ab36f0();
                lVar7 = *(long *)(unaff_x19 + 0x490);
                if (lVar7 == 0) goto LAB_060822ac;
              }
              if (uStack000000000000000c < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
                uVar9 = 0xa00000001;
                goto LAB_06082098;
              }
              goto LAB_060822b0;
            }
            goto LAB_060822ac;
          }
        }
      }
      else if (uVar3 < 0x2bc730) {
        if (uVar3 == 0x16a02) {
          if (*(char *)(unaff_x19 + 0x470) == '\0') {
            lVar7 = *unaff_x20;
            if (lVar7 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
                FUN_03ab36f0();
                lVar7 = *(long *)(unaff_x19 + 0x490);
                if (lVar7 == 0) goto LAB_060822ac;
              }
              if (uStack000000000000000c < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
                uVar9 = 0xad00000001;
LAB_060821f8:
                *(undefined8 *)(lVar7 + 0x20) = uVar9;
                *(ulong *)(lVar7 + 0x28) = (ulong)uVar1 | 0x500000000;
                uVar10 = uVar10 + 5;
                goto LAB_06082204;
              }
              goto LAB_060822b0;
            }
            goto LAB_060822ac;
          }
        }
        else {
          if (uVar3 != 0x18527) {
            if ((uVar3 != 0x2bc72f) || (*(char *)(unaff_x19 + 0x470) != '\0')) goto LAB_06081e3c;
            lVar7 = *unaff_x20;
            if (lVar7 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
                FUN_03ab36f0();
                lVar7 = *(long *)(unaff_x19 + 0x490);
                if (lVar7 == 0) goto LAB_060822ac;
              }
              if (uStack000000000000000c < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
                uVar9 = 0xa000000001;
                goto LAB_06082168;
              }
              goto LAB_060822b0;
            }
            goto LAB_060822ac;
          }
          if (*(char *)(unaff_x19 + 0x470) == '\0') {
            lVar7 = *unaff_x20;
            if (lVar7 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
                FUN_03ab36f0();
                lVar7 = *(long *)(unaff_x19 + 0x490);
                if (lVar7 == 0) goto LAB_060822ac;
              }
              if (uStack000000000000000c < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
                uVar9 = 0x200d00000001;
                goto LAB_060821f8;
              }
              goto LAB_060822b0;
            }
            goto LAB_060822ac;
          }
        }
      }
      else {
        if (uVar3 == 0x322cae) {
          if (*(char *)(unaff_x19 + 0x470) != '\0') goto LAB_06081e3c;
          lVar7 = *unaff_x20;
          if (lVar7 == 0) goto LAB_060822ac;
          if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
            FUN_03ab36f0();
            lVar7 = *(long *)(unaff_x19 + 0x490);
            if (lVar7 == 0) goto LAB_060822ac;
          }
          if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
          lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
          uVar9 = 0x200b00000001;
LAB_06082168:
          *(undefined8 *)(lVar7 + 0x20) = uVar9;
          *(ulong *)(lVar7 + 0x28) = (ulong)uVar1 | 0x600000000;
          uVar10 = uVar10 + 6;
LAB_06082204:
          uStack000000000000000c = uStack000000000000000c + 1;
          goto LAB_06081e98;
        }
        if (uVar3 != 0x5f9bd17) {
          if ((uVar3 != 0x72e6f418) || (*(char *)(unaff_x19 + 0x470) != '\0')) goto LAB_06081e3c;
          FUN_06082d00();
          uVar10 = uVar10 + 8;
          goto LAB_06081e98;
        }
        if ((*(char *)(unaff_x19 + 0x470) == '\0') &&
           (uVar5 = FUN_06082b4c(), uVar10 = uStack0000000000000008, (uVar5 & 1) != 0))
        goto LAB_06081e98;
      }
    }
  }
LAB_06081e3c:
  lVar7 = *unaff_x20;
  if (lVar7 == 0) goto LAB_060822ac;
  if (uStack000000000000000c == *(uint *)(lVar7 + 0x18)) {
    FUN_03ab36f0();
    lVar7 = *(long *)(unaff_x19 + 0x490);
    if (lVar7 == 0) goto LAB_060822ac;
  }
  if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
  lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
  *(ulong *)(lVar7 + 0x20) = unaff_x29 | uVar8 << 0x20;
  *(ulong *)(lVar7 + 0x28) = unaff_x21 | 0x100000000;
  uStack000000000000000c = uStack000000000000000c + 1;
  uVar10 = (uint)unaff_x21;
  goto LAB_06081e98;
code_r0x06081de8:
  lVar7 = *(long *)(unaff_x19 + 0x490);
  lVar6 = FUN_0608271c();
  if (lVar7 == 0) goto LAB_060822ac;
  if (*(uint *)(lVar7 + 0x18) <= uStack000000000000000c) goto LAB_060822b0;
  lVar7 = lVar7 + (long)(int)uStack000000000000000c * 0x10;
  uVar8 = unaff_x21 | 0x600000000;
LAB_06081e24:
  *(ulong *)(lVar7 + 0x20) = unaff_x29 | lVar6 << 0x20;
  goto LAB_06081dbc;
}


