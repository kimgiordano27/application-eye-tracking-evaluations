/*
FUNCTION_NAME: System.Threading.ThreadPoolWorkQueue$$EnsureThreadRequested
ENTRY_POINT: 016e06b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x016e07e0) */
/* WARNING: Removing unreachable block (ram,0x016e0888) */

void System_Threading_ThreadPoolWorkQueue__EnsureThreadRequested(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  long *plVar8;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  long lVar9;
  long unaff_x22;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x22 + 0x7e0) = in_w8;
  puVar2 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
  cStack000000000000000c = '\0';
  if ((unaff_x21 & 1) == 0) {
    if (unaff_w20 < 1) {
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
    iVar3 = FUN_017724a8(unaff_w20,8,0);
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
        cStack000000000000000c = '\0';
        FUN_017d75a8(lVar9,&stack0x0000000c,0);
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
          *(long *)(unaff_x19 + 0x28) = *plVar8;
          *plVar8 = 0;
        }
        if (cStack000000000000000c != '\0') {
          thunk_FUN_00d56f10(lVar9,0);
        }
      }
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0179519c(*(long *)(unaff_x19 + 0x28),0,iVar3,0);
      goto LAB_016e0810;
    }
    uVar4 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar3);
  }
  else {
    uVar4 = FUN_00da4fb8(*(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                         ,1);
    iVar3 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
LAB_016e0810:
  *(int *)(unaff_x19 + 0x5c) = iVar3;
  return;
}


