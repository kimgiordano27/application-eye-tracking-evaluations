/*
FUNCTION_NAME: FUN_0557b654
ENTRY_POINT: 0557b654
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0557b654(long param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
                    /* try { // try from 0557b674 to 0567b67f has its CatchHandler @ 0557b9a8 */
  if ((DAT_06bbf989 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
                    /* try { // try from 0557b69c to 0567b6a7 has its CatchHandler @ 0557b9a4 */
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf989 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar6 = thunk_FUN_02f6ef30(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                              );
    uVar6 = System_Xml_XmlCanonicalWriter__ResolvePrefix(uVar6,0);
LAB_0557b9d8:
    uVar8 = thunk_FUN_02f6ef30(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetStateMachine__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6,uVar8);
  }
  lVar4 = FUN_0557ba08(param_1,param_2);
  if (lVar4 != 0) {
    plVar9 = (long *)FUN_0557ba08(param_1,param_2);
    FUN_02a7da48();
    uVar6 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    uVar6 = FUN_05564ffc(uVar6,0);
    goto LAB_0557b9d8;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x188), lVar4 == 0)) goto LAB_0557b974;
  if ((1 < *(int *)(lVar4 + 0x18)) && (uVar5 = FUN_0557bb64(0,param_2), (uVar5 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x10);
    FUN_02a7da48(lVar4);
    uVar6 = FUN_0556543c(*(undefined8 *)(lVar4 + 0x90),0);
    goto LAB_0557b9d8;
  }
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
  ;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
  ;
  lVar4 = *param_2;
  bVar1 = *(byte *)(*(long *)
                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                   + 0x130);
                    /* try { // try from 0557b710 to 0567b713 has its CatchHandler @ 0557b9c8 */
  if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
     )) {
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                     + 0x130);
                    /* try { // try from 0557b738 to 0567b753 has its CatchHandler @ 0557b9d4 */
    if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
       )) {
      if ((param_3 & 1) != 0) {
        lVar4 = (**(code **)(lVar4 + 0x2c8))(param_2,*(undefined8 *)(lVar4 + 0x2d0));
        if (lVar4 == 0) goto LAB_0557b974;
        lVar4 = *(long *)(lVar4 + 0x48);
                    /* try { // try from 0557b764 to 0567b76f has its CatchHandler @ 0557b9d0 */
        uVar6 = FUN_055a4c24(param_2,0);
        if (lVar4 == 0) goto LAB_0557b974;
        lVar7 = FUN_0557bd14(lVar4,uVar6);
        lVar4 = *param_2;
        if (lVar7 == 0) {
          lVar4 = (**(code **)(lVar4 + 0x178))(param_2,*(undefined8 *)(lVar4 + 0x180));
          if (lVar4 == 0) goto LAB_0557b974;
          if (*(int *)(lVar4 + 0x10) == 0) {
            uVar6 = FUN_0557c0bc(lVar4,*(undefined4 *)(param_1 + 0x20));
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            (**(code **)(*param_2 + 0x188))(param_2,uVar6,*(undefined8 *)(*param_2 + 400));
          }
          else {
            uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
            FUN_0557ad10(param_1,uVar6);
          }
          uVar6 = FUN_055a4c24(param_2,0);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_055aee78(uVar8,uVar6,0);
          lVar4 = (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0));
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x48) == 0)) goto LAB_0557b974;
          FUN_0557b654(*(long *)(lVar4 + 0x48),uVar8,1);
          lVar4 = *param_2;
        }
      }
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(param_2);
      }
      FUN_0557be44(param_1,param_2);
    }
  }
  else {
    if ((char)param_2[9] != '\0') {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0557b974;
      if (*(long *)(*(long *)(param_1 + 0x10) + 0x138) != 0) {
        uVar6 = FUN_05564c08(0);
                    /* catch() { ... } // from try @ 0557b9f4 with catch @ 0557ba04 */
        goto LAB_0557b9d8;
      }
    }
    FUN_0557bc34(param_1,param_2);
                    /* try { // try from 0557b7e0 to 0567b7e7 has its CatchHandler @ 0557b9c4 */
  }
  puVar2 = 
  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass19_0_TypeInfo
  ;
  FUN_0557beb4(param_1,param_2);
  FUN_0557bf7c(param_1,param_2);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_058d1014(uVar6,1,param_2,0);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),param_1,uVar6,*(undefined8 *)(lVar4 + 0x28));
  }
  lVar4 = *(long *)puVar3;
  bVar1 = *(byte *)(lVar4 + 0x130);
  if (((*(byte *)(*param_2 + 0x130) < bVar1) ||
      (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar4)) ||
     ((char)param_2[9] == '\0')) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar6 = FUN_055af4b8(param_2,0);
  if (lVar4 != 0) {
    FUN_0554d53c(lVar4,uVar6,0);
    return;
  }
LAB_0557b974:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


