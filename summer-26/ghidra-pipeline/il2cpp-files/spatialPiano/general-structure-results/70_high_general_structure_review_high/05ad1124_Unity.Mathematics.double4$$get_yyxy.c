/*
FUNCTION_NAME: Unity.Mathematics.double4$$get_yyxy
ENTRY_POINT: 05ad1124
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Mathematics_double4__get_yyxy(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x498));
  FUN_02f08768(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x63d) = 1;
  lVar2 = thunk_FUN_02f45270(*unaff_x21);
  thunk_FUN_05a9ef74(lVar2,0);
  lVar3 = FUN_05abef1c(lVar2,0);
  if ((unaff_x24 == 0) || (plVar6 = *(long **)(unaff_x24 + 0x150), plVar6 == (long *)0x0)) {
LAB_05ad12a0:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar3 == 0) {
    if (0x28 < *(uint *)(plVar6 + 3)) {
      plVar6[0x2c] = 0;
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
    if (0x28 < *(uint *)(plVar6 + 3)) {
      plVar6[0x2c] = lVar3;
      *(long *)(lVar3 + 0x78) = unaff_x24;
      puVar1 = PTR_DAT_067ca498;
      *(undefined8 *)(lVar3 + 0x80) = unaff_x23;
      FUN_05a9e398();
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      FUN_05a9e398();
      uVar5 = FUN_05a9e714(0,0,0);
      *(undefined8 *)(lVar3 + 0x40) = uVar5;
      *(undefined8 *)(lVar3 + 0x58) = unaff_x22;
      *(undefined8 *)(lVar3 + 0x60) = unaff_x20;
      FUN_05abcc5c(lVar3,1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = _DAT_011b2850;
      *(undefined8 *)(lVar3 + 0x18) = _UNK_011b2858;
      *(undefined8 *)(lVar3 + 0x10) = uVar5;
      auVar7 = FUN_05aac730(0,0);
      auVar8 = FUN_05aac730(1,0);
      *(undefined1 (*) [16])(lVar3 + 200) = auVar8;
      *(undefined1 (*) [16])(lVar3 + 0xb8) = auVar7;
      FUN_05abcc30(lVar3,1,0);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x140) = 0x23;
        return lVar2;
      }
      goto LAB_05ad12a0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


