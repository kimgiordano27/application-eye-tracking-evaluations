/*
FUNCTION_NAME: FUN_0283a8f8
ENTRY_POINT: 0283a8f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0283a8f8(long param_1,uint *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  float fVar4;
  double __x;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_c0;
  int iStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double local_98;
  
  if ((DAT_03788cbc & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    DAT_03788cbc = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    plVar14 = (long *)(param_1 + 0x28);
    if (*plVar14 == 0) {
      lVar11 = FUN_00da4fb8(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo,
                            *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14));
      *(long *)(param_1 + 0x28) = lVar11;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x10);
      __x = DAT_028aa048;
      uVar2 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
      if (0 < (int)uVar2) {
        uVar12 = 0;
        while( true ) {
          dVar16 = modf(0.0,&local_98);
          fVar19 = 0.0;
          if (dVar16 == 0.5) {
            fVar19 = (float)local_98;
            if (((long)local_98 & 1U) != 0) {
              fVar19 = (float)local_98 + 1.0;
            }
          }
          dVar16 = modf(0.0,&local_98);
          fVar20 = 0.0;
          if (dVar16 == 0.5) {
            fVar20 = (float)local_98;
            if (((long)local_98 & 1U) != 0) {
              fVar20 = (float)local_98 + 1.0;
            }
          }
          dVar16 = modf(0.0,&local_98);
          if (dVar16 == 0.5) {
            fVar21 = (float)local_98;
            if (((long)local_98 & 1U) != 0) {
              fVar21 = (float)local_98 + 1.0;
            }
          }
          else {
            fVar21 = 0.0;
          }
          dVar16 = modf(__x,&local_98);
          if (dVar16 == 0.5) {
            fVar4 = (float)local_98;
            if (((long)local_98 & 1U) != 0) {
              fVar4 = (float)local_98 + 1.0;
            }
          }
          else {
            fVar4 = 255.0;
          }
          if (lVar11 == 0) goto LAB_0283ad94;
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0283ad58;
          *(uint *)(lVar11 + uVar12 * 4 + 0x20) =
               (int)fVar19 & 0xffU | ((int)fVar20 & 0xffU) << 8 | ((int)fVar21 & 0xffU) << 0x10 |
               (int)fVar4 << 0x18;
          if ((ulong)uVar2 - 1 == uVar12) break;
          lVar11 = *plVar14;
          uVar12 = uVar12 + 1;
        }
      }
    }
    uVar5 = DAT_029848d8;
    if (param_3 == (undefined8 *)0x0) {
LAB_0283ad94:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)param_3[3]) {
      uVar12 = param_3[3] & 0xffffffff;
      if (uVar12 != 0) {
        uVar2 = *param_2;
        uVar13 = 0;
        puVar3 = param_3;
        do {
          uVar18 = puVar3[5];
          uVar17 = puVar3[4];
          uStack_a8 = puVar3[7];
          uStack_b0 = puVar3[6];
          uVar1 = uVar2 + uVar13;
          if (param_4 == 0) {
            bVar6 = true;
          }
          else {
            bVar6 = (int)uVar1 == *(int *)(param_4 + 0x1c);
          }
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02661ba8(bVar6,0);
          local_c0 = (int)uVar17;
          iStack_bc = (int)((ulong)uVar17 >> 0x20);
          if (local_c0 == 0) {
            fVar19 = 0.0;
            uVar7 = 0;
            fVar20 = 0.0;
LAB_0283ac50:
            FUN_0283ad98(uVar7,(float)iStack_bc / 255.0,fVar19,fVar20,plVar14,0,uVar1 & 0xffffffff);
            iVar15 = 1;
          }
          else {
            if (local_c0 == 1) {
              fStack_b8 = (float)uVar18;
              fStack_b4 = (float)((ulong)uVar18 >> 0x20);
              if (DAT_03774e1e == '\0') {
                thunk_FUN_00d48444(
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  );
                DAT_03774e1e = '\x01';
              }
              fVar19 = (fStack_b8 +
                       *(float *)(*(long *)(*(long *)
                                             Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                           + 0xb8) + 8)) * 0.5;
              fVar20 = 1.0 - (fStack_b4 +
                             *(float *)(*(long *)(*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                 + 0xb8) + 0xc)) * 0.5;
              uVar7 = uVar5;
              goto LAB_0283ac50;
            }
            iVar15 = 0;
          }
          uVar7 = FUN_02686cf0(&uStack_b0,0);
          uVar8 = FUN_02686d00(&uStack_b0,0);
          iVar9 = FUN_02686d10(&uStack_b0,0);
          iVar10 = FUN_02686d20(&uStack_b0,0);
          if (param_4 != 0) {
            lVar11 = param_4 + 0x20;
            uVar7 = FUN_02686cf0(lVar11,0);
            uVar8 = FUN_02686d00(lVar11,0);
            iVar9 = FUN_02686d10(lVar11,0);
            iVar10 = FUN_02686d20(lVar11,0);
          }
          FUN_0283ae40(plVar14,uVar7,uVar8,iVar15,uVar1 & 0xffffffff);
          FUN_0283ae40(plVar14,(int)(float)(iVar9 + -1),(int)(float)(iVar10 + -1),iVar15 + 1,
                       uVar1 & 0xffffffff);
          if (param_4 != 0) {
            param_4 = *(long *)(param_4 + 0x30);
          }
          if (uVar12 - 1 == uVar13) goto LAB_0283ad5c;
          uVar13 = uVar13 + 1;
          puVar3 = puVar3 + 4;
        } while (uVar13 < *(uint *)(param_3 + 3));
      }
LAB_0283ad58:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
LAB_0283ad5c:
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  else {
    FUN_027a2b60(param_1,0);
  }
  return;
}


