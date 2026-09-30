/*
FUNCTION_NAME: FUN_015a1800
ENTRY_POINT: 015a1800
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_015a1800(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_03777d73 & 1) == 0) {
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    DAT_03777d73 = 1;
  }
  if (param_2 != (long *)0x0) {
    iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar4 == 2) {
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
      if (lVar5 == 0) goto LAB_015a19b4;
      FUN_01320e50(lVar5,*(undefined8 *)PTR_DAT_033f6e48);
      uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      puVar3 = StringLiteral_10837;
      puVar2 = StringLiteral_4747;
      puVar1 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      while ((uVar6 & 1) != 0) {
        iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar4 == 0xe) {
          FUN_01325140(lVar5,*(undefined8 *)puVar3);
          return;
        }
        plVar7 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar7 == (long *)0x0) goto LAB_015a19b4;
        if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar8 = (undefined4 *)thunk_FUN_00d624a0();
        FUN_00ac20f0(lVar5,*puVar8,*(undefined8 *)puVar2);
        uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      }
    }
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_25__);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(OVR_OpenVR_IVRSettings__SetInt32_TypeInfo);
    thunk_FUN_01802838(uVar9,uVar10,0);
    uVar10 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<MedleyBarCustomer>_get_Item__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,uVar10);
  }
LAB_015a19b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


