/*
FUNCTION_NAME: FUN_023408ac
ENTRY_POINT: 023408ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023408ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,long param_10)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  if ((DAT_03781cf9 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_59__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_03781cf9 = 1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_59__;
  if (param_10 != 0) {
    FUN_02310d18(param_10,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 != 0) {
      lVar3 = FUN_00da4fb8(*(undefined8 *)
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                           ,*(undefined4 *)(lVar3 + 0x18));
      uVar7 = 0;
      while( true ) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar2;
        }
        plVar6 = *(long **)(lVar4 + 0xb8);
        lVar5 = plVar6[1];
        if (lVar5 == 0) goto LAB_02340ab0;
        if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
          FUN_02312f64(param_10,lVar3,0);
          lVar3 = FUN_0230c908(param_10,0);
          if (lVar3 != 0) {
            FUN_0266af34(&local_98,lVar3,0);
            param_1[2] = local_88;
            param_1[1] = uStack_90;
            *param_1 = local_98;
            return;
          }
          goto LAB_02340ab0;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar6 = *(long **)(*(long *)puVar2 + 0xb8);
          lVar5 = plVar6[1];
          if (lVar5 == 0) goto LAB_02340ab0;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar7) break;
        lVar4 = *plVar6;
        if (lVar4 == 0) goto LAB_02340ab0;
        uVar1 = *(uint *)(lVar5 + (long)(int)uVar7 * 4 + 0x20);
        if (*(uint *)(lVar4 + 0x18) <= uVar1) break;
        lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
        fVar16 = *(float *)(lVar4 + 0x20);
        fVar14 = *(float *)(lVar4 + 0x24);
        fVar15 = *(float *)(lVar4 + 0x28);
        uVar10 = param_3;
        uVar13 = param_4;
        fVar8 = (float)FUN_0230480c(param_2,param_3,param_4,0);
        uVar11 = param_6;
        uVar12 = param_7;
        uVar9 = FUN_02699088(param_5,param_6,param_7,param_8,fVar16 * fVar8,fVar14 * (float)uVar10,
                             fVar15 * (float)uVar13,0);
        if (lVar3 == 0) goto LAB_02340ab0;
        if (*(uint *)(lVar3 + 0x18) <= uVar7) break;
        lVar4 = lVar3 + (long)(int)uVar7 * 0xc;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar9;
        *(int *)(lVar4 + 0x24) = (int)uVar11;
        *(undefined4 *)(lVar4 + 0x28) = uVar12;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_02340ab0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


