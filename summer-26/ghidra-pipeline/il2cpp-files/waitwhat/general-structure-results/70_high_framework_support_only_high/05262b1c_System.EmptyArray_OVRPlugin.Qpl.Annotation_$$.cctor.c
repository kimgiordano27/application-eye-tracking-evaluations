/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 05262b1c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Qpl_Annotation>___cctor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x25;
  long lStack0000000000000008;
  
  lStack0000000000000008 = 0;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar4 = FUN_058cf9c8(0);
  if (lVar4 != 0) {
    FUN_05042bb0();
    if (lStack0000000000000008 == 0) {
      return;
    }
    uVar2 = FUN_0583e9d4(lStack0000000000000008,*(undefined8 *)PTR_DAT_070f3598,0);
    if (lStack0000000000000008 == 0) goto LAB_05262df8;
    iVar3 = FUN_0583e9d4(lStack0000000000000008,*(undefined8 *)PTR_DAT_070f6020,0);
    lVar4 = lStack0000000000000008;
    puVar1 = PTR_DAT_070c1958;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
    }
    uVar8 = FUN_0593e698(uVar8,0);
    if (lVar4 == 0) goto LAB_05262df8;
    lVar4 = FUN_0583ce0c(lVar4,*(undefined8 *)PTR_DAT_070f3590,uVar8,0);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
    }
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_031c3cac(lVar4,lVar9);
      if (lVar5 == 0) goto LAB_05262dfc;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    *(long *)(unaff_x19 + 0x30) = lVar5;
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
    }
    if ((lVar4 != 0) && (lVar5 = thunk_FUN_031c3cac(lVar4,lVar9), lVar5 == 0)) {
LAB_05262dfc:
                    /* WARNING: Subroutine does not return */
      FUN_03189058(lVar4,lVar9);
    }
    if (iVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    else {
      FUN_0526255c();
      lVar4 = lStack0000000000000008;
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar8 = FUN_0593e698(uVar8,0);
      if (lVar4 == 0) goto LAB_05262df8;
      lVar4 = FUN_0583ce0c(lVar4,*(undefined8 *)PTR_DAT_070f6028,uVar8,0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_031c09d4(lVar9);
      }
      if (lVar4 == 0) {
        FUN_059509a4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = thunk_FUN_031c3cac(lVar4,lVar9);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(lVar4,lVar9);
      }
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar7 = 0;
        plVar10 = (long *)(lVar5 + 0x20);
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar7) {
LAB_05262df4:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          if (*plVar10 == 0) {
            FUN_059509a4(0x11,0);
            uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          }
          if (uVar6 <= uVar7) goto LAB_05262df4;
          FUN_05262628();
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
          plVar10 = plVar10 + 2;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
    lVar4 = *unaff_x25;
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = FUN_058cf9c8(0);
    if (lVar4 != 0) {
      FUN_0504295c();
      return;
    }
  }
LAB_05262df8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


