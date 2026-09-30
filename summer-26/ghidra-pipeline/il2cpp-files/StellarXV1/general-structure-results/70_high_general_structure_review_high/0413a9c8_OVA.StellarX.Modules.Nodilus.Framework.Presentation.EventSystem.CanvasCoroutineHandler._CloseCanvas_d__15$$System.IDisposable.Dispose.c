/*
FUNCTION_NAME: OVA.StellarX.Modules.Nodilus.Framework.Presentation.EventSystem.CanvasCoroutineHandler.<CloseCanvas>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 0413a9c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined1
OVA_StellarX_Modules_Nodilus_Framework_Presentation_EventSystem_CanvasCoroutineHandler_<CloseCanvas>d__15__System_IDisposable_Dispose
          (long param_1,mbstate_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t **param_5,
          char *param_6,char *param_7,long *param_8)

{
  wchar_t __wc;
  undefined1 uVar1;
  __locale_t p_Var2;
  size_t sVar3;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  long lStack0000000000000008;
  wchar_t **ppwStack0000000000000010;
  mbstate_t mStack0000000000000020;
  __locale_t in_stack_00000028;
  
  pwVar7 = param_3;
  for (pwVar5 = param_3; (pwVar5 != param_4 && (pwVar7 = pwVar5, *pwVar5 != L'\0'));
      pwVar5 = pwVar5 + 1) {
    pwVar7 = param_4;
  }
  *param_8 = (long)param_6;
  *param_5 = param_3;
  lStack0000000000000008 = param_1;
  ppwStack0000000000000010 = param_5;
  while( true ) {
    if ((param_3 == param_4) || (param_6 == param_7)) goto LAB_0413ac24;
    mStack0000000000000020 = *param_2;
    p_Var2 = uselocale(*(__locale_t *)(lStack0000000000000008 + 0x10));
    in_stack_00000028 = p_Var2;
    sVar3 = wcsnrtombs(param_6,ppwStack0000000000000010,(long)pwVar7 - (long)param_3 >> 2,
                       (long)param_7 - (long)param_6,param_2);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 == 0) {
      return true;
    }
    if (sVar3 == 0xffffffffffffffff) {
      *param_8 = (long)param_6;
      if (param_3 == *ppwStack0000000000000010) goto LAB_0413ac0c;
      goto LAB_0413abac;
    }
    param_6 = (char *)(*param_8 + sVar3);
    *param_8 = (long)param_6;
    if (param_6 == param_7) break;
    if (pwVar7 == param_4) {
      param_3 = *ppwStack0000000000000010;
      pwVar7 = param_4;
    }
    else {
      p_Var2 = uselocale(*(__locale_t *)(lStack0000000000000008 + 0x10));
      in_stack_00000028 = p_Var2;
      sVar3 = wcrtomb(&stack0x0000001c,L'\0',param_2);
      if (p_Var2 != (__locale_t)0x0) {
        uselocale(p_Var2);
      }
      if (sVar3 == 0xffffffffffffffff) {
        return 2;
      }
      if ((ulong)((long)param_7 - *param_8) < sVar3) {
        return true;
      }
      if (sVar3 != 0) {
        puVar4 = &stack0x0000001c;
        do {
          puVar6 = (undefined1 *)*param_8;
          uVar1 = *puVar4;
          sVar3 = sVar3 - 1;
          *param_8 = (long)(puVar6 + 1);
          *puVar6 = uVar1;
          puVar4 = puVar4 + 1;
        } while (sVar3 != 0);
      }
      param_3 = *ppwStack0000000000000010 + 1;
      *ppwStack0000000000000010 = param_3;
      pwVar5 = param_3;
      pwVar7 = param_4;
      if (param_3 == param_4) {
LAB_0413aa34:
        param_6 = (char *)*param_8;
      }
      else {
        do {
          pwVar7 = pwVar5;
          if (*pwVar5 == L'\0') goto LAB_0413aa34;
          pwVar5 = pwVar5 + 1;
        } while (pwVar5 != param_4);
        param_6 = (char *)*param_8;
        pwVar7 = param_4;
      }
    }
  }
  param_3 = *ppwStack0000000000000010;
LAB_0413ac24:
  return param_3 != param_4;
  while( true ) {
    param_3 = param_3 + 1;
    param_6 = (char *)(*param_8 + sVar3);
    *param_8 = (long)param_6;
    if (param_3 == *ppwStack0000000000000010) break;
LAB_0413abac:
    __wc = *param_3;
    p_Var2 = uselocale(*(__locale_t *)(lStack0000000000000008 + 0x10));
    in_stack_00000028 = p_Var2;
    sVar3 = wcrtomb(param_6,__wc,&stack0x00000020);
    if (p_Var2 != (__locale_t)0x0) {
      uselocale(p_Var2);
    }
    if (sVar3 == 0xffffffffffffffff) break;
  }
LAB_0413ac0c:
  *ppwStack0000000000000010 = param_3;
  return 2;
}


