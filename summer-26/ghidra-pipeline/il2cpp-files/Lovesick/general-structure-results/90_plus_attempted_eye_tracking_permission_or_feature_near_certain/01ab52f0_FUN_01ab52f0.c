/*
FUNCTION_NAME: FUN_01ab52f0
ENTRY_POINT: 01ab52f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01ab52f0(float param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  
  if ((DAT_0377ce9b & 1) == 0) {
    thunk_FUN_00d48444(Method_Mono_Math_BigInteger_ToString__);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377ce9b = 1;
  }
  if ((param_3 & 1) != 0) {
    fVar15 = *(float *)(param_2 + 0x2c);
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (ABS(fVar15 - param_1) < DAT_028aa298) {
      return;
    }
  }
  *(float *)(param_2 + 0x2c) = param_1;
  puVar2 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
  if (*(long *)(param_2 + 0x40) == 0) goto LAB_01ab56cc;
  if (1 < *(int *)(*(long *)(param_2 + 0x40) + 0x18)) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_01ab56cc;
    lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_2 + 0x20),0);
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(param_2 + 0x40),0,&local_80,*(undefined8 *)puVar2);
    fVar13 = local_78;
    fVar12 = fStack_7c;
    fVar15 = local_80;
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(param_2 + 0x40),1,&local_80,*(undefined8 *)puVar2);
    fVar14 = param_1;
    if (1.0 < param_1) {
      fVar14 = 1.0;
    }
    if (param_1 < 0.0) {
      fVar14 = 0.0;
    }
    if (lVar5 == 0) goto LAB_01ab56cc;
    fVar12 = fVar12 + (fStack_7c - fVar12) * fVar14;
    FUN_0269f750(CONCAT44(fVar12,fVar15 + (local_80 - fVar15) * fVar14),fVar12,
                 fVar13 + fVar14 * (local_78 - fVar13),lVar5,0);
  }
  if (*(long *)(param_2 + 0x48) == 0) goto LAB_01ab56cc;
  if (1 < *(int *)(*(long *)(param_2 + 0x48) + 0x18)) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_01ab56cc;
    lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_2 + 0x20),0);
    puVar3 = 
    Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
    ;
    if (*(long *)(param_2 + 0x48) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(param_2 + 0x48),0,&local_80,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                );
    uVar4 = uStack_74;
    fVar13 = local_78;
    fVar12 = fStack_7c;
    fVar15 = local_80;
    if (*(long *)(param_2 + 0x48) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(param_2 + 0x48),1,&local_80,*(undefined8 *)puVar3);
    FUN_02698a98(fVar15,fVar12,fVar13,uVar4,local_80,fStack_7c,local_78,uStack_74,0);
    if (lVar5 == 0) goto LAB_01ab56cc;
    FUN_0269f994(lVar5,0);
  }
  lVar5 = *(long *)(param_2 + 0x50);
  if (lVar5 != 0) {
    if (1 < *(int *)(lVar5 + 0x18)) {
      FUN_0132138c(lVar5,0,&local_80,*(undefined8 *)puVar2);
      fVar13 = local_78;
      fVar12 = fStack_7c;
      fVar15 = local_80;
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_01ab56cc;
      FUN_0132138c(*(long *)(param_2 + 0x50),1,&local_80,*(undefined8 *)puVar2);
      fVar14 = param_1;
      if (1.0 < param_1) {
        fVar14 = 1.0;
      }
      if (param_1 < 0.0) {
        fVar14 = 0.0;
      }
      fVar12 = fVar12 + (fStack_7c - fVar12) * fVar14;
      FUN_01ab51f4(CONCAT44(fVar12,fVar15 + (local_80 - fVar15) * fVar14),fVar12,
                   fVar13 + fVar14 * (local_78 - fVar13),param_2);
    }
    puVar2 = OVREyeGaze_TypeInfo;
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 == 0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0x58);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) < 1) {
        return;
      }
      lVar7 = *(long *)(lVar5 + 0x58);
      if (lVar7 != 0) {
        uVar1 = *(uint *)(param_2 + 0x60);
        uVar11 = *(ulong *)(lVar7 + 0x18);
        uVar10 = (uint)uVar11;
        if (uVar1 == 0xffffffff) {
          if (0 < (int)uVar10) {
            fVar15 = param_1;
            if (1.0 < param_1) {
              fVar15 = 1.0;
            }
            uVar9 = 0;
            if (param_1 < 0.0) {
              fVar15 = 0.0;
            }
            while (*(long *)(param_2 + 0x58) != 0) {
              lVar5 = *(long *)(lVar5 + 0x58);
              FUN_0132138c(*(long *)(param_2 + 0x58),uVar9 & 0xffffffff,&local_80,
                           *(undefined8 *)puVar2);
              fVar12 = local_80;
              if ((*(long *)(param_2 + 0x58) == 0) ||
                 (FUN_0132138c(*(long *)(param_2 + 0x58),uVar10 + (int)uVar9,&local_80,
                               *(undefined8 *)puVar2), lVar5 == 0)) break;
              if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_01ab5704;
              *(float *)(lVar5 + uVar9 * 4 + 0x20) = fVar12 + fVar15 * (local_80 - fVar12);
              if ((uVar11 & 0xffffffff) - 1 == uVar9) goto LAB_01ab56d0;
              lVar5 = *(long *)(param_2 + 0x38);
              uVar9 = uVar9 + 1;
              if (lVar5 == 0) break;
            }
            goto LAB_01ab56cc;
          }
        }
        else {
          if (uVar10 <= uVar1) {
LAB_01ab5704:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          pfVar8 = (float *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
          fVar12 = *pfVar8;
          FUN_0132138c(lVar6,(long)(int)uVar1,&local_80,*(undefined8 *)OVREyeGaze_TypeInfo);
          fVar15 = local_80;
          if (*(long *)(param_2 + 0x58) == 0) goto LAB_01ab56cc;
          FUN_0132138c(*(long *)(param_2 + 0x58),*(int *)(param_2 + 0x60) + uVar10,&local_80,
                       *(undefined8 *)puVar2);
          fVar13 = param_1;
          if (1.0 < param_1) {
            fVar13 = 1.0;
          }
          if (param_1 < 0.0) {
            fVar13 = 0.0;
          }
          *pfVar8 = fVar12 + fVar15 + fVar13 * (local_80 - fVar15);
        }
LAB_01ab56d0:
        if (*(long *)(param_2 + 0x38) != 0) {
          FUN_01aebcb0(*(long *)(param_2 + 0x38),0);
          return;
        }
      }
    }
  }
LAB_01ab56cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


