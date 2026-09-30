/*
FUNCTION_NAME: Sirenix.Serialization.ProperBitConverter$$GetBytes
ENTRY_POINT: 01b368ec
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


void Sirenix_Serialization_ProperBitConverter__GetBytes
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
               long param_8,long param_9,long param_10,long param_11,int param_12)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  float *pfVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack000000000000000c;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  int iStack000000000000003c;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float in_stack_000000e8;
  float in_stack_000000f0;
  float in_stack_000000f8;
  
  iStack000000000000003c = param_1;
  if ((DAT_0377d3cf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    DAT_0377d3cf = 1;
  }
  puVar4 = StringLiteral_4747;
  puVar7 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  fStack0000000000000034 = fStack00000000000000e4;
  FUN_02698858(param_4,param_5,param_6,param_7,0);
  fVar15 = (float)param_6;
  fVar12 = (float)param_5;
  fStack000000000000002c = (float)FUN_02699088(0);
  fVar3 = DAT_028aa038;
  iStack000000000000003c = param_12 + 1;
  iVar2 = iStack000000000000003c * iStack000000000000003c;
  fStack0000000000000024 = 0.5 - 0.5 / in_stack_000000f8;
  uVar6 = 0;
  fStack000000000000000c = 1.4013e-45;
  do {
    if (0 < iStack000000000000003c) {
      iVar8 = 0;
      do {
        fVar10 = (float)iVar8 / (float)param_12;
        fVar16 = 0.5 - fVar10;
        fVar13 = fStack0000000000000024 + (1.0 / in_stack_000000f8) * fVar10;
        fStack000000000000001c = fVar13 / 3.0;
        iVar9 = 0;
        do {
          fVar19 = 0.5;
          fVar18 = (float)iVar9 / (float)param_12;
          fVar17 = 0.5;
          if (uVar6 < 6) {
            fVar14 = fStack0000000000000024 + (1.0 / in_stack_000000f8) * fVar18;
            fVar11 = fVar14 + 1.0;
            fVar14 = fVar14 * 0.5;
            switch(uVar6) {
            case 3:
              fVar14 = fVar11 * 0.5;
            case 0:
              fVar11 = fStack000000000000001c;
              break;
            case 4:
              fVar14 = fVar11 * 0.5;
            case 1:
              fVar11 = (fVar13 + 1.0) / 3.0;
              break;
            case 5:
              fVar14 = fVar11 * 0.5;
            case 2:
              fVar11 = (fVar13 + 2.0) / 3.0;
            }
          }
          else {
            if (DAT_03774d77 == '\0') {
              thunk_FUN_00d48444(
                                Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                );
              DAT_03774d77 = '\x01';
            }
            fVar14 = (*(float **)
                       (*(long *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                       0xb8))[1];
            fVar11 = **(float **)
                       (*(long *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                       0xb8);
          }
          if (param_9 == 0) goto LAB_01b36e50;
          FUN_00bbed00(fVar11,fVar14,param_9,*puVar7);
          fVar11 = fVar16;
          switch(uVar6) {
          case 0:
            fVar17 = 0.5 - fVar18;
            fVar19 = -0.5;
            goto joined_r0x01b36bbc;
          case 1:
            fVar17 = -0.5;
            fVar19 = fVar18 + -0.5;
            break;
          case 2:
            fVar11 = fVar10 + -0.5;
            goto joined_r0x01b36bbc;
          case 3:
            fVar17 = fVar10 + -0.5;
            fVar11 = -0.5;
joined_r0x01b36bbc:
            fVar19 = fVar18 + -0.5;
joined_r0x01b36bbc:
            if (param_8 != 0) goto LAB_01b36c1c;
            goto LAB_01b36e50;
          case 4:
            fVar19 = fVar18 + -0.5;
            fVar11 = fVar17;
            fVar17 = fVar16;
            break;
          case 5:
            fVar17 = fVar18 + -0.5;
            break;
          default:
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar5 = *(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
            fVar19 = pfVar5[1];
            fVar11 = *pfVar5;
            fVar17 = pfVar5[2];
          }
          if (param_8 == 0) goto LAB_01b36e50;
LAB_01b36c1c:
          FUN_00ac4f98((fVar11 * in_stack_000000f0 - fStack000000000000002c) /
                       fStack00000000000000e0,
                       (fVar19 * in_stack_000000f0 - fVar12) / fStack0000000000000034,
                       (fVar17 * in_stack_000000f0 - fVar15) / in_stack_000000e8,param_8,
                       *(undefined8 *)StringLiteral_1006);
          if (DAT_0377518c == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_0377518c = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar18 = SQRT(fVar17 * fVar17 + fVar11 * fVar11 + fVar19 * fVar19);
          if (fVar18 <= fVar3) {
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar5 = *(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
            fVar11 = *pfVar5;
            fVar19 = pfVar5[1];
            fVar17 = pfVar5[2];
          }
          else {
            fVar11 = fVar11 / fVar18;
            fVar19 = fVar19 / fVar18;
            fVar17 = fVar17 / fVar18;
          }
          if (param_10 == 0) goto LAB_01b36e50;
          FUN_00bcd1a4(fVar11,fVar19,fVar17,0,param_10,
                       *(undefined8 *)
                        Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
          iVar9 = iVar9 + 1;
        } while (iStack000000000000003c != iVar9);
        iVar8 = iVar8 + 1;
      } while (iVar8 != iStack000000000000003c);
    }
    if (0 < param_12) {
      iVar8 = 0;
      fVar10 = fStack000000000000000c;
      do {
        iVar8 = iVar8 + 1;
        iVar9 = param_12;
        fStack000000000000001c = fVar10;
        if (param_11 == 0) {
LAB_01b36e50:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          FUN_00ac20f0(param_11,param_12 + (int)fVar10,*(undefined8 *)puVar4);
          FUN_00ac20f0(param_11,(int)fVar10 + -1,*(undefined8 *)puVar4);
          iVar1 = param_12 + (int)fVar10 + 1;
          FUN_00ac20f0(param_11,iVar1,*(undefined8 *)puVar4);
          FUN_00ac20f0(param_11,iVar1,*(undefined8 *)puVar4);
          FUN_00ac20f0(param_11,(int)fVar10 + -1,*(undefined8 *)puVar4);
          FUN_00ac20f0(param_11,fVar10,*(undefined8 *)puVar4);
          iVar9 = iVar9 + -1;
          fVar10 = (float)((int)fVar10 + 1);
        } while (iVar9 != 0);
        fVar10 = (float)((int)fStack000000000000001c + iStack000000000000003c);
      } while (iVar8 != param_12);
    }
    uVar6 = uVar6 + 1;
    fStack000000000000000c = (float)((int)fStack000000000000000c + iVar2);
    puVar7 = (undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
    if (uVar6 == 6) {
      return;
    }
  } while( true );
}


