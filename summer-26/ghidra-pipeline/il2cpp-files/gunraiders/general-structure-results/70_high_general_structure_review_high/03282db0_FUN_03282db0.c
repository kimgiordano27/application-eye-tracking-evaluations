/*
FUNCTION_NAME: FUN_03282db0
ENTRY_POINT: 03282db0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_03282db0(long param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((DAT_04532c15 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                );
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Enum>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Enum>_SetValueWithoutNotify__);
    FUN_01c5d288(Method_Photon_Voice_AudioOutDelayControl<float>_Stop__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Enum>_get_rawValue__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Enum>_get_showMixedValue__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Hash128>_SetValueWithoutNotify__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Hash128>_get_rawValue__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__);
    DAT_04532c15 = 1;
  }
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
  ;
  puVar4 = PTR_DAT_042305b0;
  switch(param_3) {
  case 1:
    lVar7 = *(long *)(param_1 + 0x38);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
      if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_03283178;
      uVar6 = FUN_031532a8(*(undefined8 *)(lVar7 + 0x20),0);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
  case 2:
  case 0xd:
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) {
LAB_03283174:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar8 = (undefined8 *)Method_Photon_Voice_AudioOutDelayControl<float>_Stop__;
    break;
  case 3:
  case 0xe:
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar7 = FUN_03283520();
    goto LAB_03283160;
  case 4:
    lVar7 = *(long *)PTR_DAT_042305b0;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar4;
    }
    cVar2 = *(char *)(*(long *)(lVar7 + 0xb8) + 0x40);
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (cVar2 != '\0') {
      if (lVar7 == 0) goto LAB_03283174;
      iVar1 = *(int *)(lVar7 + 0x18);
      puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Enum>_SetValueWithoutNotify__;
      break;
    }
    if (lVar7 == 0) goto LAB_03283174;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_03283178;
    puVar8 = *(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
    goto LAB_03283158;
  case 5:
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar3 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Enum>_get_rawValue__;
joined_r0x03282f44:
    puVar8 = puVar3;
    break;
  case 6:
  case 0x17:
    uVar6 = thunk_FUN_03152714(param_2,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__
                               ,0);
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar3 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Hash128>_SetValueWithoutNotify__;
    puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Hash128>_get_rawValue__;
    if ((uVar6 & 1) != 0) goto joined_r0x03282f44;
    break;
  case 7:
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__;
    break;
  case 8:
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    break;
  case 9:
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__;
    break;
  case 10:
  case 0xb:
  case 0xc:
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__;
    break;
  default:
    lVar7 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
    ;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar5;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(**(long **)(lVar7 + 0xb8) + 0x38);
      return;
    }
    goto LAB_03283174;
  case 0x16:
    lVar7 = *(long *)(param_1 + 0x38);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
      if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_03283178;
      uVar6 = FUN_031532a8(*(undefined8 *)(lVar7 + 0x20),0);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
    lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,1);
    if (lVar7 == 0) goto LAB_03283174;
    iVar1 = *(int *)(lVar7 + 0x18);
    puVar8 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Enum>_get_showMixedValue__;
  }
  if (iVar1 == 0) {
LAB_03283178:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_03283158:
  *(undefined8 *)(lVar7 + 0x20) = *puVar8;
LAB_03283160:
  *(long *)(param_1 + 0x38) = lVar7;
  return;
}


