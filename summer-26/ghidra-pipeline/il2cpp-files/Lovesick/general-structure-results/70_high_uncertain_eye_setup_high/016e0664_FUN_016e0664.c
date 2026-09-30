/*
FUNCTION_NAME: FUN_016e0664
ENTRY_POINT: 016e0664
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x016e07e0) */
/* WARNING: Removing unreachable block (ram,0x016e0888) */

void FUN_016e0664(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  char local_34 [4];
  
  if ((DAT_037787e0 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(PTR_DAT_033f4038);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037787e0 = 1;
  }
  puVar2 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
  local_34[0] = '\0';
  if ((param_3 & 1) == 0) {
    if (param_2 < 1) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar4 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar6 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
      uVar7 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
      FUN_016efd4c(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_00d48444(StringLiteral_5434);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,uVar6);
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar3 = FUN_017724a8(param_2,8,0);
    puVar1 = PTR_DAT_033f4038;
    if (iVar3 < 0x1001) {
      lVar5 = *(long *)PTR_DAT_033f4038;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar1;
      }
      plVar8 = *(long **)(lVar5 + 0xb8);
      if (*plVar8 != 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar8 = *(long **)(*(long *)puVar1 + 0xb8);
        }
        lVar9 = plVar8[1];
        local_34[0] = '\0';
        FUN_017d75a8(lVar9,local_34,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar1;
        }
        plVar8 = *(long **)(lVar5 + 0xb8);
        if (*plVar8 != 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar8 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          *(long *)(param_1 + 0x28) = *plVar8;
          *plVar8 = 0;
        }
        if (local_34[0] != '\0') {
          thunk_FUN_00d56f10(lVar9,0);
        }
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0179519c(*(long *)(param_1 + 0x28),0,iVar3,0);
      goto LAB_016e0810;
    }
    uVar4 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar3);
  }
  else {
    uVar4 = FUN_00da4fb8(*(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                         ,1);
    iVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
LAB_016e0810:
  *(int *)(param_1 + 0x5c) = iVar3;
  return;
}


