/*
FUNCTION_NAME: FUN_01b368cc
ENTRY_POINT: 01b368cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_01b368cc(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined *puVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  float fVar22;
  float fVar23;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  int local_d4;
  
  if ((DAT_0377d3cf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    DAT_0377d3cf = 1;
  }
  puVar5 = StringLiteral_4747;
  puVar8 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  FUN_02698858(in_d3,in_d4,in_d5,in_d6,0);
  fVar19 = (float)in_d5;
  fVar16 = (float)in_d4;
  fVar12 = (float)FUN_02699088(0);
  fVar4 = DAT_028aa038;
  iVar1 = param_5 + 1;
  fVar13 = 0.5 - 0.5 / in_stack_00000018;
  uVar7 = 0;
  local_d4 = 1;
  do {
    if (0 < iVar1) {
      iVar9 = 0;
      do {
        fVar14 = (float)iVar9 / (float)param_5;
        fVar20 = 0.5 - fVar14;
        fVar17 = fVar13 + (1.0 / in_stack_00000018) * fVar14;
        iVar11 = 0;
        do {
          fVar23 = 0.5;
          fVar22 = (float)iVar11 / (float)param_5;
          fVar21 = 0.5;
          if (uVar7 < 6) {
            fVar18 = fVar13 + (1.0 / in_stack_00000018) * fVar22;
            fVar15 = fVar18 + 1.0;
            fVar18 = fVar18 * 0.5;
            switch(uVar7) {
            case 3:
              fVar18 = fVar15 * 0.5;
            case 0:
              fVar15 = fVar17 / 3.0;
              break;
            case 4:
              fVar18 = fVar15 * 0.5;
            case 1:
              fVar15 = (fVar17 + 1.0) / 3.0;
              break;
            case 5:
              fVar18 = fVar15 * 0.5;
            case 2:
              fVar15 = (fVar17 + 2.0) / 3.0;
            }
          }
          else {
            if (DAT_03774d77 == '\0') {
              thunk_FUN_00d48444(
                                Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                );
              DAT_03774d77 = '\x01';
            }
            fVar18 = (*(float **)
                       (*(long *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                       0xb8))[1];
            fVar15 = **(float **)
                       (*(long *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                       0xb8);
          }
          if (param_2 == 0) goto LAB_01b36e50;
          FUN_00bbed00(fVar15,fVar18,param_2,*puVar8);
          fVar15 = fVar20;
          switch(uVar7) {
          case 0:
            fVar21 = 0.5 - fVar22;
            fVar23 = -0.5;
            goto joined_r0x01b36bbc;
          case 1:
            fVar21 = -0.5;
            fVar23 = fVar22 + -0.5;
            break;
          case 2:
            fVar15 = fVar14 + -0.5;
            goto joined_r0x01b36bbc;
          case 3:
            fVar21 = fVar14 + -0.5;
            fVar15 = -0.5;
joined_r0x01b36bbc:
            fVar23 = fVar22 + -0.5;
joined_r0x01b36bbc:
            if (param_1 != 0) goto LAB_01b36c1c;
            goto LAB_01b36e50;
          case 4:
            fVar23 = fVar22 + -0.5;
            fVar15 = fVar21;
            fVar21 = fVar20;
            break;
          case 5:
            fVar21 = fVar22 + -0.5;
            break;
          default:
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar6 = *(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
            fVar23 = pfVar6[1];
            fVar15 = *pfVar6;
            fVar21 = pfVar6[2];
          }
          if (param_1 == 0) goto LAB_01b36e50;
LAB_01b36c1c:
          FUN_00ac4f98((fVar15 * in_stack_00000010 - fVar12) / fStack0000000000000000,
                       (fVar23 * in_stack_00000010 - fVar16) / fStack0000000000000004,
                       (fVar21 * in_stack_00000010 - fVar19) / in_stack_00000008,param_1,
                       *(undefined8 *)StringLiteral_1006);
          if (DAT_0377518c == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_0377518c = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar22 = SQRT(fVar21 * fVar21 + fVar15 * fVar15 + fVar23 * fVar23);
          if (fVar22 <= fVar4) {
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar6 = *(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
            fVar15 = *pfVar6;
            fVar23 = pfVar6[1];
            fVar21 = pfVar6[2];
          }
          else {
            fVar15 = fVar15 / fVar22;
            fVar23 = fVar23 / fVar22;
            fVar21 = fVar21 / fVar22;
          }
          if (param_3 == 0) goto LAB_01b36e50;
          FUN_00bcd1a4(fVar15,fVar23,fVar21,0,param_3,
                       *(undefined8 *)
                        Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
          iVar11 = iVar11 + 1;
        } while (iVar1 != iVar11);
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar1);
    }
    if (0 < param_5) {
      iVar9 = 0;
      iVar11 = local_d4;
      do {
        iVar9 = iVar9 + 1;
        iVar10 = iVar11;
        iVar3 = param_5;
        if (param_4 == 0) {
LAB_01b36e50:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          FUN_00ac20f0(param_4,param_5 + iVar10,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_4,iVar10 + -1,*(undefined8 *)puVar5);
          iVar2 = param_5 + iVar10 + 1;
          FUN_00ac20f0(param_4,iVar2,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_4,iVar2,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_4,iVar10 + -1,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_4,iVar10,*(undefined8 *)puVar5);
          iVar3 = iVar3 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar3 != 0);
        iVar11 = iVar11 + iVar1;
      } while (iVar9 != param_5);
    }
    uVar7 = uVar7 + 1;
    local_d4 = local_d4 + iVar1 * iVar1;
    puVar8 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if (uVar7 == 6) {
      return;
    }
  } while( true );
}


