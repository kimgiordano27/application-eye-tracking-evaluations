/*
FUNCTION_NAME: FUN_01945674
ENTRY_POINT: 01945674
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01945674(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_98;
  
  if ((DAT_0377a166 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<TransformFeatureStateThreshold>__ctor__
                      );
    thunk_FUN_00d48444(OVRPlugin_Vector4s_TypeInfo);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Powers_Tune_TuneSenseObject_TuneDown__);
    thunk_FUN_00d48444(StringLiteral_8674);
    thunk_FUN_00d48444(PTR_DAT_033f3e18);
    thunk_FUN_00d48444(PTR_DAT_033f3ca0);
    DAT_0377a166 = 1;
  }
  puVar6 = StringLiteral_8674;
  puVar7 = Method_RCG_Lovesick_Powers_Tune_TuneSenseObject_TuneDown__;
  puVar5 = OVRPlugin_Vector4s_TypeInfo;
  lVar14 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar12 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_019459ac;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  if ((lVar8 != 0) && (FUN_01902214(lVar8,0), lVar14 != 0)) {
    *(long *)(lVar14 + 0xb8) = lVar8;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar9 != 0) {
      FUN_018fbc40(lVar9,0,0);
      FUN_01355fbc(lVar8,lVar9,*(undefined8 *)puVar5);
      lVar9 = *(long *)(lVar14 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
      if ((lVar8 != 0) && (FUN_018fbc40(lVar8,0,0), lVar9 != 0)) {
        FUN_01355fbc(lVar9,lVar8,*(undefined8 *)puVar5);
        iVar12 = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        if (lVar14 != 0) {
LAB_019459b8:
          puVar6 = System_Threading_Timer_TimerComparer_TypeInfo;
          if (*(int *)(lVar14 + 0x124) + -1 <= iVar12) {
            if (*(long *)(lVar14 + 0x110) == 0) goto LAB_01945b80;
            if (*(char *)(*(long *)(lVar14 + 0x110) + 0x50) == '\0') {
              return 0;
            }
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
            if (lVar8 == 0) goto LAB_01945b80;
            FUN_018fbc40(lVar8,0,0);
            if (*(long *)(lVar14 + 0xb8) == 0) goto LAB_01945b80;
            FUN_01355fbc(*(long *)(lVar14 + 0xb8),lVar8,*(undefined8 *)puVar5);
            lVar9 = *(long *)(lVar14 + 0x48);
            if (lVar9 == 0) goto LAB_01945b80;
            iVar12 = *(int *)(lVar14 + 0x24);
            uVar3 = iVar12 - 1;
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              lVar13 = *(long *)(lVar14 + 0x130);
              fVar16 = *(float *)(lVar9 + 0x20);
              pfVar11 = (float *)(lVar9 + 0x20) + (long)(int)uVar3 * 3;
              fVar19 = *pfVar11;
              fVar18 = pfVar11[1];
              fVar17 = pfVar11[2];
              fVar21 = *(float *)(lVar9 + 0x24);
              fVar20 = *(float *)(lVar9 + 0x28);
              if (DAT_03774e1a == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_03774e1a = '\x01';
              }
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (lVar13 == 0) goto LAB_01945b80;
              uVar4 = iVar12 - 2;
              if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_01945b84;
              fVar19 = fVar19 - fVar16;
              fVar18 = fVar18 - fVar21;
              fVar17 = fVar17 - fVar20;
              *(float *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) =
                   SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18);
              lVar9 = *(long *)(lVar14 + 0x130);
              if (lVar9 == 0) goto LAB_01945b80;
              uVar4 = *(int *)(lVar14 + 0x24) - 2;
              if (uVar4 < *(uint *)(lVar9 + 0x18)) {
                FUN_018fbcd4(*(undefined4 *)(lVar9 + (long)(int)uVar4 * 4 + 0x20),lVar8,uVar3,0);
                *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
                return 0;
              }
            }
LAB_01945b84:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if ((*(long *)(lVar14 + 0xb8) == 0) ||
             (lVar8 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18), lVar8 == 0)) goto LAB_01945b80;
          FUN_0132138c(lVar8,iVar12 % 2,&local_98,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<TransformFeatureStateThreshold>__ctor__
                      );
          lVar8 = local_98;
          uVar3 = *(uint *)(param_1 + 0x28);
          lVar9 = (long)(int)uVar3;
          if ((int)uVar3 < *(int *)(lVar14 + 0x24) + -1) {
            lVar13 = *(long *)(lVar14 + 0x48);
            if (lVar13 == 0) goto LAB_01945b80;
            if ((*(uint *)(lVar13 + 0x18) <= uVar3) ||
               (lVar1 = lVar9 + 1, *(uint *)(lVar13 + 0x18) <= (uint)lVar1)) goto LAB_01945b84;
            lVar10 = lVar13 + lVar9 * 0xc;
            lVar13 = lVar13 + lVar1 * 0xc;
            lVar15 = *(long *)(lVar14 + 0x130);
            fVar19 = *(float *)(lVar10 + 0x20);
            fVar18 = *(float *)(lVar10 + 0x24);
            fVar17 = *(float *)(lVar10 + 0x28);
            fVar21 = *(float *)(lVar13 + 0x20);
            fVar20 = *(float *)(lVar13 + 0x24);
            fVar16 = *(float *)(lVar13 + 0x28);
            if (DAT_03774e1a == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774e1a = '\x01';
            }
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar15 == 0) goto LAB_01945b80;
            if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_01945b84;
            fVar19 = fVar19 - fVar21;
            fVar18 = fVar18 - fVar20;
            fVar17 = fVar17 - fVar16;
            *(float *)(lVar15 + lVar9 * 4 + 0x20) =
                 SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18);
            lVar9 = *(long *)(lVar14 + 0x130);
            if (lVar9 == 0) goto LAB_01945b80;
            if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x28)) goto LAB_01945b84;
            if (lVar8 == 0) goto LAB_01945b80;
            FUN_018fbcd4(*(undefined4 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x28) * 4 + 0x20),
                         lVar8,(ulong)uVar3 | lVar1 << 0x20,0);
            *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
          }
          else {
            lVar9 = *(long *)(lVar14 + 0x130);
            if (lVar9 == 0) goto LAB_01945b80;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_01945b84;
            *(undefined4 *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = *(undefined4 *)(lVar14 + 0x120);
            if (DAT_0377a1c1 == '\0') {
              thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_s32__);
              DAT_0377a1c1 = '\x01';
            }
            if (lVar8 == 0) goto LAB_01945b80;
            FUN_018fbcd4(0,lVar8,**(undefined8 **)
                                   (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_s32__ +
                                   0xb8),0);
          }
          iVar12 = *(int *)(param_1 + 0x28);
          if (iVar12 % 500 == 0) {
            iVar2 = *(int *)(lVar14 + 0x124);
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
            if (lVar14 != 0) {
              FUN_01919300((float)iVar12 / (float)(iVar2 + -1),lVar14,
                           *(undefined8 *)PTR_DAT_033f3ca0,0);
              *(long *)(param_1 + 0x18) = lVar14;
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
            goto LAB_01945b80;
          }
LAB_019459ac:
          iVar12 = iVar12 + 1;
          *(int *)(param_1 + 0x28) = iVar12;
          if (lVar14 == 0) goto LAB_01945b80;
          goto LAB_019459b8;
        }
      }
    }
  }
LAB_01945b80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


