/*
FUNCTION_NAME: FUN_0217ac24
ENTRY_POINT: 0217ac24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0217ac24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = StringLiteral_12065;
                    /* try { // try from 0217ac4c to 0227ac4f has its CatchHandler @ 0217ac6c */
                    /* try { // try from 0217ac54 to 0227ac57 has its CatchHandler @ 0217ac68 */
  if ((DAT_037813cd & 1) == 0) {
                    /* try { // try from 0217ac5c to 0227ac5f has its CatchHandler @ 0217ac64 */
                    /* try { // try from 0217ac60 to 0227aca3 has its CatchHandler @ 02179e60 */
                    /* catch() { ... } // from try @ 0217ac5c with catch @ 0217ac64 */
    thunk_FUN_00d48444(StringLiteral_12065);
                    /* catch() { ... } // from try @ 0217ac54 with catch @ 0217ac68 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_94__);
    DAT_037813cd = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_021f6eec(lVar3,0);
    lVar4 = FUN_02147788(lVar3,0);
    if ((param_1 != 0) && (plVar7 = *(long **)(param_1 + 0x150), plVar7 != (long *)0x0)) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      if (*(uint *)(plVar7 + 3) < 0xbf) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar7[0xc2] = lVar4;
      puVar1 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x78) = param_1;
        *(undefined8 *)(lVar4 + 0x80) = param_4;
        puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_94__;
        local_50 = 0;
        uStack_48 = 0;
        FUN_021f605c(&local_50,*(undefined8 *)puVar1,0);
        *(undefined8 *)(lVar4 + 0x28) = uStack_48;
        *(undefined8 *)(lVar4 + 0x20) = local_50;
        local_50 = 0;
        uStack_48 = 0;
        FUN_021f605c(&local_50,*(undefined8 *)puVar2,0);
        uVar6 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_50,uStack_48,0);
        *(undefined8 *)(lVar4 + 0x40) = uVar6;
        local_50 = 0;
        uStack_48 = 0;
        FUN_021f605c(&local_50,*(undefined8 *)puVar2,0);
        uVar6 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(local_50,uStack_48,0);
        *(undefined8 *)(lVar4 + 0x50) = uVar6;
        *(undefined8 *)(lVar4 + 0x58) = param_2;
        *(undefined8 *)(lVar4 + 0x60) = param_3;
        FUN_02145478(lVar4,1,0);
        puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
        if (*(long *)(lVar4 + 0x78) != 0) {
          FUN_021485a4(*(long *)(lVar4 + 0x78),1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = _DAT_02955070;
          *(undefined8 *)(lVar4 + 0x18) = _UNK_02955078;
          *(undefined8 *)(lVar4 + 0x10) = uVar6;
          FUN_02145428(lVar4,1,0);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


