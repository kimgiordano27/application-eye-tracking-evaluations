/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 05346544
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame
               (ulong param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x23;
  undefined8 *puVar4;
  long unaff_x24;
  undefined8 *puVar5;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 uStack000000000000000c;
  
  puVar5 = *(undefined8 **)(unaff_x24 + 0x928);
  puVar4 = *(undefined8 **)(unaff_x23 + 0xe40);
  if ((param_1 & 1) == 0) {
    FUN_02f08768(int___TypeInfo);
    FUN_02f08768(PTR_DAT_067c9e40);
    FUN_02f08768(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    FUN_02f08768(UnityEngine_ExpressionEvaluator_TypeInfo);
    *(undefined1 *)(unaff_x26 + 0x4f0) = 1;
  }
  uStack000000000000000c = param_3;
  uVar1 = thunk_FUN_02f44ec4(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_04f65e2c(*puVar5,uVar1,0);
  lVar2 = thunk_FUN_02f45270(*puVar4);
  FUN_060f1570(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_033d910c(lVar2,*(undefined8 *)int___TypeInfo), lVar2 != 0)) {
    FUN_06171004(0x3f800000,lVar2,0);
    FUN_06171304(lVar2,1,0);
    FUN_0617118c(lVar2,0,0);
    FUN_061713c8(lVar2,3,0);
    lVar3 = FUN_060ed7ac(lVar2,0);
    if (lVar3 != 0) {
      FUN_061006f4(lVar3,param_4,0,0);
      uVar1 = FUN_060ed7ac(lVar2,0);
      FUN_052c22b0(uVar1,param_5,0,0);
      FUN_06171d4c(lVar2,0);
      lVar3 = FUN_060ed87c(lVar2,0);
      if (lVar3 != 0) {
        FUN_060f0c58(lVar3,0,0);
        lVar3 = FUN_060ed87c(lVar2,0);
        if (lVar3 != 0) {
          FUN_060f0b94(lVar3,*(undefined4 *)(param_2 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


