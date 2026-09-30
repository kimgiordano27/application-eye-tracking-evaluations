/*
FUNCTION_NAME: FUN_0368aa34
ENTRY_POINT: 0368aa34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0368aa34(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  puVar2 = Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_5__;
  puVar4 = (undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  if ((DAT_04833ea1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_12__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_7__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_8__);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_5__);
    DAT_04833ea1 = 1;
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_12__;
  if (*(char *)(param_1 + 0x89) != '\0') {
    puVar4 = (undefined8 *)puVar2;
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar10 = *puVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_12__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0368ab1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,*(long *)Method_OVRPlugin_<>c_<_cctor>b__653_12__,0)
    ;
LAB_0368ab1c:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                       0x130);
      if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__)) {
        uVar6 = FUN_040766fc(plVar5,0);
        uVar10 = FUN_0340ebc0(uVar10,uVar6,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_8__
                              ,0);
      }
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0368abd4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,0);
LAB_0368abd4:
    lVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if ((lVar7 != 0) &&
       (plVar5 = (long *)thunk_FUN_01ecaf38(lVar7,0),
       puVar2 = Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_7__,
       plVar5 != (long *)0x0)) {
      uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      uVar6 = FUN_03406290(*(undefined8 *)puVar2,uVar6,0);
      FUN_03405678(uVar10,uVar6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


