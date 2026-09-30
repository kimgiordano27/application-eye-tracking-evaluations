/*
FUNCTION_NAME: UnityEngine.VFX.VFXRuntimeResources$$get_runtimeResources
ENTRY_POINT: 070e988c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x070e98d0) */

void UnityEngine_VFX_VFXRuntimeResources__get_runtimeResources(ulong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar10;
  long lVar11;
  long unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong uStack0000000000000040;
  long in_stack_00000068;
  
  uStack0000000000000040 = param_1;
  do {
    while (uVar6 = FUN_05d50890(&stack0x00000030,*unaff_x29), (uVar6 & 1) != 0) {
      FUN_052c3440(unaff_x21,uStack0000000000000040 & 0xffffffff,*unaff_x20);
    }
    FUN_05d5088c(&stack0x00000030,*(undefined8 *)PTR_DAT_07d974b0);
    uVar6 = FUN_05e1f4a8(&stack0x00000050,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80_var
                        );
    unaff_x21 = in_stack_00000068;
    if ((uVar6 & 1) == 0) {
      FUN_05e1f5cc(&stack0x00000050,
                   *(undefined8 *)
                    DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
                  );
      return;
    }
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar3 = (long *)FUN_052c1e24(in_stack_00000068,
                                  *(undefined8 *)
                                   UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARHumanBodyManager,_ARHumanBody>_TypeInfo
                                 );
    plVar4 = (long *)FUN_052c1e64(unaff_x21,
                                  *(undefined8 *)
                                   UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                                 );
    if (0 < *(int *)(unaff_x21 + 0x20)) {
      iVar10 = 0;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_Qpl_Annotation_Builder_var) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_070e971c;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)OVRPlugin_Qpl_Annotation_Builder_var,0);
LAB_070e971c:
        auVar12 = (*(code *)*puVar5)(plVar4,iVar10,puVar5[1]);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar6 = FUN_070e9470(auVar12._8_8_ & 0xffffffff,unaff_w19);
        if ((uVar6 & 1) != 0) {
          if (auVar12._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_06f91fa0(auVar12._0_8_,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar7 = *plVar3;
          lVar11 = *(long *)(unaff_x27 + 0x18);
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d95dc8) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_070e97c0;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07d95dc8,0);
LAB_070e97c0:
          uVar2 = (*(code *)*puVar5)(plVar3,iVar10,puVar5[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar7 = *(long *)(lVar11 + 0x10);
          lVar8 = *(long *)PTR_DAT_07d86c78;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
          }
          else {
            FUN_04976584(lVar11,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar7 = *unaff_x28;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar7 = *unaff_x28;
          }
          **(int **)(lVar7 + 0xb8) = **(int **)(lVar7 + 0xb8) + -1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(unaff_x21 + 0x20));
    }
    if (*(long *)(unaff_x27 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_04976f7c(&stack0x00000008,*(long *)(unaff_x27 + 0x18),*(undefined8 *)PTR_DAT_07d974c8);
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    uStack0000000000000040 = in_stack_00000018;
  } while( true );
}


