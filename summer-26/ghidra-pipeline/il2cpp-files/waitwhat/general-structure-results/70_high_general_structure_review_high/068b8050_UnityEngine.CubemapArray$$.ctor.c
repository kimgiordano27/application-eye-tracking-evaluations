/*
FUNCTION_NAME: UnityEngine.CubemapArray$$.ctor
ENTRY_POINT: 068b8050
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_CubemapArray___ctor
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  float fVar10;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  long in_stack_00000038;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  
  fVar10 = *(float *)(param_1 + 8);
  if (unaff_x20 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo)) {
      fVar8 = param_4;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        fVar8 = param_4;
      }
      uVar2 = FUN_069d69b8();
      param_4 = fVar8;
      if (((uVar2 & 1) != 0) && ((char)unaff_x20[0xf] != '\0')) {
        lVar6 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)
                 Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
               ) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 6) * 0x10 + 0x138);
              unaff_s10 = param_3;
              goto LAB_068b82e8;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08();
        unaff_s10 = param_3;
LAB_068b82e8:
        lVar6 = (*(code *)*puVar3)();
        if (lVar6 == 0) goto LAB_068b8384;
        unaff_s9 = (float)FUN_069e6fbc(lVar6,0);
        param_4 = fVar8;
        param_3 = unaff_s10;
        uVar2 = FUN_068b8388();
        fVar10 = fVar8;
        if ((uVar2 & 1) == 0) {
          lVar6 = 0;
        }
        else {
          param_3 = fStack0000000000000044;
          uVar2 = FUN_0687613c(uStack0000000000000040);
          lVar6 = 0;
          param_4 = in_stack_00000048;
          if ((uVar2 & 1) != 0) {
            if (in_stack_00000038 == 0) goto LAB_068b8384;
            FUN_06a58f24(in_stack_00000038,0);
            lVar6 = in_stack_00000038;
            param_4 = in_stack_00000048;
            fVar10 = in_stack_00000008;
            unaff_s10 = fStack0000000000000004;
            unaff_s9 = fStack0000000000000000;
          }
        }
        unaff_s11 = FUN_068b874c();
        goto LAB_068b8110;
      }
    }
    lVar6 = 0;
    unaff_x20 = (long *)0x0;
  }
LAB_068b8110:
  if (*(char *)(unaff_x19 + 0x4d0) != '\0') {
    lVar4 = FUN_069d3a80();
    if (lVar4 == 0) goto LAB_068b8384;
    fVar8 = (float)FUN_069e6fbc(lVar4,0);
    if (DAT_075457b7 == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_075457b7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar8 = unaff_s8 *
            SQRT((param_4 - fVar10) * (param_4 - fVar10) +
                 (fVar8 - unaff_s9) * (fVar8 - unaff_s9) +
                 (param_3 - unaff_s10) * (param_3 - unaff_s10));
    unaff_s8 = fVar8;
    if (*(char *)(unaff_x19 + 0x4d1) != '\0') {
      fVar9 = *(float *)(unaff_x19 + 0x4d4);
      if (fVar8 <= *(float *)(unaff_x19 + 0x4d4)) {
        fVar9 = fVar8;
      }
      unaff_s8 = 0.0;
      if (0.0 <= fVar8) {
        unaff_s8 = fVar9;
      }
    }
  }
  if ((*(long *)(unaff_x19 + 0x4c8) != 0) &&
     (lVar4 = FUN_069d3a80(*(long *)(unaff_x19 + 0x4c8),0), lVar4 != 0)) {
    FUN_069e7098(unaff_s9,unaff_s10,fVar10,lVar4,0);
    FUN_069e77e4(unaff_s8,unaff_s8,unaff_s8,lVar4,0);
    if (*(long *)(unaff_x19 + 0x4c8) != 0) {
      plVar5 = *(long **)(*(long *)(unaff_x19 + 0x4c8) + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        bVar1 = *(byte *)(*(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo)) {
          bVar1 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo
                           + 0x130);
          if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo)) {
            FUN_06a573b4(unaff_s11,unaff_s11,unaff_s11,plVar5,0);
          }
        }
        else {
          FUN_06a64eb4(unaff_s11,plVar5,0);
        }
      }
      if (*(long *)(unaff_x19 + 0x4c8) != 0) {
        FUN_068e4fc4(*(long *)(unaff_x19 + 0x4c8),unaff_x20,0);
        if (*(long *)(unaff_x19 + 0x4c8) != 0) {
          *(long *)(*(long *)(unaff_x19 + 0x4c8) + 0x40) = lVar6;
          return;
        }
      }
    }
  }
LAB_068b8384:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


