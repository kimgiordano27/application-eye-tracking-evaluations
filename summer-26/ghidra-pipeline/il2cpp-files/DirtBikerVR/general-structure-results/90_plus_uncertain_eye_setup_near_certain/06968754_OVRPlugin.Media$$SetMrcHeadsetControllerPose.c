/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 06968754
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  uVar2 = FUN_03a8a804();
  *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
  thunk_FUN_03afed3c(unaff_x19 + 0x140,uVar2);
  puVar1 = PTR_DAT_0848e660;
  if (*(long *)(unaff_x19 + 0x160) != 0) {
    uVar2 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084874c8,
                         *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) * 3);
    *(undefined8 *)(unaff_x19 + 0x130) = uVar2;
    thunk_FUN_03afed3c(unaff_x19 + 0x130,uVar2);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_07c6e968(uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
    thunk_FUN_03afed3c(unaff_x19 + 0x100,uVar2);
    lVar4 = *(long *)(unaff_x19 + 0x160);
    if ((lVar4 != 0) && (*(long *)(unaff_x19 + 0x158) != 0)) {
      fVar7 = *(float *)(lVar4 + 0x3c);
      iVar8 = *(int *)(lVar4 + 0x30);
      lVar4 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0);
      if (lVar4 != 0) {
        uVar6 = FUN_07cac280(lVar4,0);
        if (*(long *)(unaff_x19 + 0x100) != 0) {
          fStack0000000000000014 = fVar7 * (float)iVar8 * DAT_015c57dc * 0.5;
          uStack0000000000000008 = uVar6;
          uStack000000000000000c = param_2;
          uStack0000000000000010 = param_3;
          fStack0000000000000018 = fStack0000000000000014;
          fStack000000000000001c = fStack0000000000000014;
          FUN_07c7142c(*(long *)(unaff_x19 + 0x100),&stack0x00000008,0);
          if (*(long *)(unaff_x19 + 0x100) != 0) {
            FUN_07c74de0(*(long *)(unaff_x19 + 0x100),0);
            if (*(long *)(unaff_x19 + 0x100) != 0) {
              thunk_FUN_07ca23d0(*(long *)(unaff_x19 + 0x100),*(undefined8 *)PTR_DAT_084b6fa8,0);
              if (*unaff_x20 != 0) {
                FUN_07c6df20(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x100),0);
                *(undefined4 *)(unaff_x19 + 0x148) = 0;
                if (*(long *)(unaff_x19 + 0x150) != 0) {
                  FUN_054c57ac(*(long *)(unaff_x19 + 0x150),*(undefined8 *)(unaff_x19 + 0x158),
                               *(undefined8 *)PTR_DAT_084b2ef8);
                  lVar4 = *(long *)(unaff_x19 + 0x150);
                  if (lVar4 != 0) {
                    if (1 < *(int *)(lVar4 + 0x20)) {
                      lVar5 = *(long *)(unaff_x19 + 0x160);
                      if (lVar5 == 0) goto LAB_0696895c;
                      if (*(int *)(lVar5 + 0x34) < *(int *)(lVar5 + 0x30) * *(int *)(lVar4 + 0x20))
                      {
                        lVar4 = FUN_054c593c(lVar4,*(undefined8 *)PTR_DAT_084b2f18);
                        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                          thunk_FUN_03ae8be4(*unaff_x23);
                        }
                        uVar3 = FUN_07c9c218(lVar4,0,0);
                        if ((uVar3 & 1) != 0) {
                          if (lVar4 == 0) goto LAB_0696895c;
                          lVar4 = FUN_04561560(lVar4,*(undefined8 *)PTR_DAT_084b6fa0);
                          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4(*unaff_x23);
                          }
                          uVar3 = FUN_07c9c218(lVar4,0,0);
                          if ((uVar3 & 1) != 0) {
                            if (lVar4 == 0) goto LAB_0696895c;
                            *(undefined1 *)(lVar4 + 0x38) = 1;
                          }
                        }
                      }
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0696895c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


