/*
FUNCTION_NAME: Unity.Mathematics.float2x2$$op_Modulus
ENTRY_POINT: 0216fa34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Mathematics_float2x2__op_Modulus(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long *plVar6;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12065);
                    /* try { // try from 0216fa50 to 0226facf has its CatchHandler @ 0216fa50
                       catch() { ... } // from try @ 0216fa50 with catch @ 0216fa50
                       catch() { ... } // from try @ 0216fbe8 with catch @ 0216fa50
                       catch() { ... } // from try @ 0216fc6c with catch @ 0216fa50
                       catch() { ... } // from try @ 0216fc90 with catch @ 0216fa50
                       catch() { ... } // from try @ 0216fd44 with catch @ 0216fa50
                       catch() { ... } // from try @ 0216fdc8 with catch @ 0216fa50 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_94__);
    *(undefined1 *)(unaff_x19 + 0x369) = 1;
  }
  lVar2 = thunk_FUN_00d62348(*unaff_x22);
  if (lVar2 != 0) {
    FUN_021f6eec(lVar2,0);
    lVar3 = FUN_02147788(lVar2,0);
    if ((param_2 != 0) && (plVar6 = *(long **)(param_2 + 0x150), plVar6 != (long *)0x0)) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,0);
      }
      if (*(uint *)(plVar6 + 3) < 0x5b) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar6[0x5e] = lVar3;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x78) = param_2;
        *(undefined8 *)(lVar3 + 0x80) = unaff_x23;
        FUN_021f605c();
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        FUN_021f605c();
        uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(0,0,0);
        *(undefined8 *)(lVar3 + 0x40) = uVar5;
        FUN_021f605c();
        uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(0,0,0);
        *(undefined8 *)(lVar3 + 0x50) = uVar5;
        *(undefined8 *)(lVar3 + 0x58) = unaff_x21;
        *(undefined8 *)(lVar3 + 0x60) = unaff_x20;
        FUN_02145478(lVar3,1,0);
        puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        if (*(long *)(lVar3 + 0x78) != 0) {
          FUN_021485a4(*(long *)(lVar3 + 0x78),1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = _s_TLFt_02954b70;
          *(undefined8 *)(lVar3 + 0x18) = _UNK_02954b78;
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          FUN_02145428(lVar3,1,0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


