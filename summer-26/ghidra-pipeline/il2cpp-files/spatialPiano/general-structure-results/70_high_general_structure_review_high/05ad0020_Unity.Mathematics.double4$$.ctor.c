/*
FUNCTION_NAME: Unity.Mathematics.double4$$.ctor
ENTRY_POINT: 05ad0020
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Mathematics_double4___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
  ;
  if ((*(byte *)(unaff_x19 + 0x634) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034F_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000350_PostfixBurstDelegate_TypeInfo
                );
    *(undefined1 *)(unaff_x19 + 0x634) = 1;
  }
  lVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  thunk_FUN_05a9ef74(lVar2,0);
  lVar3 = FUN_05abef1c(lVar2,0);
  if ((param_1 == 0) || (plVar6 = *(long **)(param_1 + 0x150), plVar6 == (long *)0x0)) {
LAB_05ad01c0:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar3 == 0) {
    if ((*(uint *)(plVar6 + 3) & 0xffffffe0) != 0) {
      plVar6[0x23] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar4 == 0) {
      uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,0);
    }
    if ((*(uint *)(plVar6 + 3) & 0xffffffe0) != 0) {
      plVar6[0x23] = lVar3;
      *(long *)(lVar3 + 0x78) = param_1;
      puVar1 = PTR_DAT_067ca498;
      *(undefined8 *)(lVar3 + 0x80) = param_4;
      FUN_05a9e398();
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      FUN_05a9e398();
      uVar5 = FUN_05a9e714(0,0,0);
      *(undefined8 *)(lVar3 + 0x40) = uVar5;
      *(undefined8 *)(lVar3 + 0x58) = param_2;
      *(undefined8 *)(lVar3 + 0x60) = param_3;
      FUN_05abcc5c(lVar3,1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = _DAT_011b2840;
      *(undefined8 *)(lVar3 + 0x18) = _UNK_011b2848;
      *(undefined8 *)(lVar3 + 0x10) = uVar5;
      auVar7 = FUN_05aac730(0,0);
      auVar8 = FUN_05aac730(1,0);
      *(undefined1 (*) [16])(lVar3 + 200) = auVar8;
      *(undefined1 (*) [16])(lVar3 + 0xb8) = auVar7;
      FUN_05abcc30(lVar3,1,0);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x140) = 0x1a;
        return lVar2;
      }
      goto LAB_05ad01c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


