/*
FUNCTION_NAME: FUN_068b7f50
ENTRY_POINT: 068b7f50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_068b7f50(undefined1 param_1 [16],float param_2,float param_3,long param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  float local_78;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  puVar2 = PTR_DAT_070c1b68;
  if ((DAT_07559181 & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo);
    DAT_07559181 = 1;
  }
  uVar10 = *(undefined8 *)(param_4 + 0x4c8);
  local_78 = 0.0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_24 = 0;
  local_28[0] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_069d8404(uVar10,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (DAT_075457d6 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457d6 = '\x01';
  }
  uVar13 = 0;
  fVar14 = *(float *)(param_4 + 0x4c4);
  pfVar7 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar15 = *pfVar7;
  fVar16 = pfVar7[1];
  fVar17 = pfVar7[2];
  if (param_5 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_5 + 0x130)) &&
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo)) {
      fVar11 = param_3;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        fVar11 = param_3;
      }
      uVar3 = FUN_069d69b8(param_5,0,0);
      param_3 = fVar11;
      if (((uVar3 & 1) != 0) && ((char)param_5[0xf] != '\0')) {
        lVar8 = *param_5;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
               ) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              fVar16 = param_2;
              goto LAB_068b82e8;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_031c0d08(param_5,*(long *)
                                       Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                              ,6);
        fVar16 = param_2;
LAB_068b82e8:
        lVar8 = (*(code *)*puVar4)(param_5,puVar4[1]);
        if (lVar8 == 0) goto LAB_068b8384;
        fVar15 = (float)FUN_069e6fbc(lVar8,0);
        param_3 = fVar11;
        param_2 = fVar16;
        uVar3 = FUN_068b8388(param_4,&local_80,&local_a8,&local_24,local_28);
        fVar17 = fVar11;
        if ((uVar3 & 1) == 0) {
          lVar8 = 0;
        }
        else {
          param_2 = (float)((ulong)local_80 >> 0x20);
          param_3 = local_78;
          uVar3 = FUN_0687613c((undefined4)local_80,param_5,&local_98,0);
          lVar5 = local_88;
          lVar8 = 0;
          if ((uVar3 & 1) != 0) {
            if (local_88 == 0) goto LAB_068b8384;
            FUN_06a58f24(&local_c0,local_88,0);
            lVar8 = lVar5;
            fVar15 = local_c0;
            fVar16 = fStack_bc;
            fVar17 = local_b8;
          }
        }
        uVar13 = FUN_068b874c(param_4,lVar8);
        goto LAB_068b8110;
      }
    }
    lVar8 = 0;
    param_5 = (long *)0x0;
  }
LAB_068b8110:
  if (*(char *)(param_4 + 0x4d0) != '\0') {
    lVar5 = FUN_069d3a80(param_4,0);
    if (lVar5 == 0) goto LAB_068b8384;
    fVar11 = (float)FUN_069e6fbc(lVar5,0);
    if (DAT_075457b7 == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_075457b7 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar11 = fVar14 * SQRT((param_3 - fVar17) * (param_3 - fVar17) +
                           (fVar11 - fVar15) * (fVar11 - fVar15) +
                           (param_2 - fVar16) * (param_2 - fVar16));
    fVar14 = fVar11;
    if (*(char *)(param_4 + 0x4d1) != '\0') {
      fVar12 = *(float *)(param_4 + 0x4d4);
      if (fVar11 <= *(float *)(param_4 + 0x4d4)) {
        fVar12 = fVar11;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar11) {
        fVar14 = fVar12;
      }
    }
  }
  if ((*(long *)(param_4 + 0x4c8) != 0) &&
     (lVar5 = FUN_069d3a80(*(long *)(param_4 + 0x4c8),0), lVar5 != 0)) {
    FUN_069e7098(fVar15,fVar16,fVar17,lVar5,0);
    FUN_069e77e4(fVar14,fVar14,fVar14,lVar5,0);
    if (*(long *)(param_4 + 0x4c8) != 0) {
      plVar6 = *(long **)(*(long *)(param_4 + 0x4c8) + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        bVar1 = *(byte *)(*(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Internal_Cryptography_OidLookup_<>c_TypeInfo)) {
          bVar1 = *(byte *)(*(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo
                           + 0x130);
          if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo)) {
            FUN_06a573b4(uVar13,uVar13,uVar13,plVar6,0);
          }
        }
        else {
          FUN_06a64eb4(uVar13,plVar6,0);
        }
      }
      if (*(long *)(param_4 + 0x4c8) != 0) {
        FUN_068e4fc4(*(long *)(param_4 + 0x4c8),param_5,0);
        if (*(long *)(param_4 + 0x4c8) != 0) {
          *(long *)(*(long *)(param_4 + 0x4c8) + 0x40) = lVar8;
          return;
        }
      }
    }
  }
LAB_068b8384:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


