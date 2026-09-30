/*
FUNCTION_NAME: FUN_0216826c
ENTRY_POINT: 0216826c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0216826c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Start<JsonTextReader_<DoReadAsDateTimeOffsetAsync>d__47>__
  ;
  if ((DAT_03781326 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_Start<JsonTextReader_<DoReadAsDateTimeOffsetAsync>d__47>__
                      );
    thunk_FUN_00d48444(StringLiteral_1801);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_26__);
    DAT_03781326 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    thunk_FUN_021f6d1c(lVar4,0);
    lVar5 = FUN_02147788(lVar4,0);
    if ((param_1 != 0) && (plVar8 = *(long **)(param_1 + 0x150), plVar8 != (long *)0x0)) {
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,0);
      }
      if (*(uint *)(plVar8 + 3) < 0x18) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8[0x1b] = lVar5;
      puVar3 = StringLiteral_1801;
      puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_26__;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x78) = param_1;
        *(undefined8 *)(lVar5 + 0x80) = param_4;
        puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        local_50 = 0;
        uStack_48 = 0;
        FUN_021f605c(&local_50,*(undefined8 *)puVar3,0);
        *(undefined8 *)(lVar5 + 0x28) = uStack_48;
        *(undefined8 *)(lVar5 + 0x20) = local_50;
        local_50 = 0;
        uStack_48 = 0;
        FUN_021f605c(&local_50,*(undefined8 *)puVar1,0);
        uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_50,uStack_48,0);
        *(undefined8 *)(lVar5 + 0x40) = uVar7;
        local_50 = 0;
        uStack_48 = 0;
        FUN_021f605c(&local_50,*(undefined8 *)puVar1,0);
        uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_50,uStack_48,0);
        *(undefined8 *)(lVar5 + 0x50) = uVar7;
        *(undefined8 *)(lVar5 + 0x58) = param_2;
        *(undefined8 *)(lVar5 + 0x60) = param_3;
        FUN_02145450(lVar5,1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = _s_ETYB_029547c0;
        *(undefined8 *)(lVar5 + 0x18) = _UNK_029547c8;
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        auVar9 = FUN_02204a80(0,0);
        auVar10 = FUN_02204a80(1,0);
        *(undefined1 (*) [16])(lVar5 + 200) = auVar10;
        *(undefined1 (*) [16])(lVar5 + 0xb8) = auVar9;
        FUN_02145428(lVar5,1,0);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


