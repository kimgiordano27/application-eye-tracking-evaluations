/*
FUNCTION_NAME: FUN_0569b7dc
ENTRY_POINT: 0569b7dc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0569b7dc(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  
  puVar2 = System_Resources_ResourceSet_TypeInfo;
                    /* try { // try from 0569b7f4 to 0579b81f has its CatchHandler @ 0569c748 */
  if ((DAT_06a54926 & 1) == 0) {
    FUN_02d4dc40(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__
                );
    FUN_02d4dc40(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                );
    FUN_02d4dc40(System_Resources_ResourceSet_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_XRPassUniversal_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo
                );
                    /* try { // try from 0569b858 to 0579b863 has its CatchHandler @ 0569c648 */
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_TypeInfo);
                    /* try { // try from 0569b870 to 0579b87f has its CatchHandler @ 0569c6ec */
    DAT_06a54926 = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 0569b880 to 0579b9d7 has its CatchHandler @ 0569b328 */
    thunk_FUN_02dabd98();
    lVar6 = *(long *)puVar2;
  }
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  thunk_FUN_02dc1ef0(plVar12);
  plVar10 = (long *)(param_1 + 0x30);
  *plVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  thunk_FUN_02dc1ef0(plVar10);
  FUN_05044d4c(param_1,0);
  if (param_2 != (long *)0x0) {
    *plVar12 = param_2[0xd];
    thunk_FUN_02dc1ef0(plVar12);
    puVar2 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
    ;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar14 = *(undefined8 *)(param_2[0xb] + 0x50);
    uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_SubscribeAndUpdate__
                              );
    FUN_05697c0c(uVar7,uVar14,0,param_3);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x20),uVar7);
    puVar3 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<Quaternion>_Subscribe__;
    plVar12 = (long *)param_2[0xc];
    if (plVar12 != (long *)0x0) {
      uVar4 = FUN_04fa9478(plVar12,0);
      uVar7 = FUN_02d4dd2c(*(undefined8 *)puVar3,uVar4);
      puVar15 = (undefined8 *)(param_1 + 0x28);
      *puVar15 = uVar7;
      thunk_FUN_02dc1ef0(puVar15,uVar7);
      iVar5 = FUN_04fa9478(plVar12,0);
      puVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_TypeInfo;
      if (0 < iVar5) {
        uVar13 = 0;
        lVar6 = 0x20;
        do {
          plVar11 = (long *)*puVar15;
          plVar8 = (long *)(**(code **)(*plVar12 + 0x308))
                                     (plVar12,uVar13 & 0xffffffff,*(undefined8 *)(*plVar12 + 0x310))
          ;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4e268();
          }
          lVar16 = plVar8[10];
          lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
          FUN_05697c0c(lVar9,lVar16,1,param_3);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if ((lVar9 != 0) &&
             (lVar16 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar16 == 0)) {
            uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar7,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          *(long *)((long)plVar11 + lVar6) = lVar9;
          thunk_FUN_02dc1ef0((long)plVar11 + lVar6,lVar9);
          uVar13 = uVar13 + 1;
          iVar5 = FUN_04fa9478(plVar12,0);
          lVar6 = lVar6 + 8;
        } while ((long)uVar13 < (long)iVar5);
      }
      puVar2 = 
      UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo;
      lVar6 = *param_2;
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C_PostfixBurstDelegate_TypeInfo
                       + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C_PostfixBurstDelegate_TypeInfo
         )) {
        bVar1 = *(byte *)(*(long *)UnityEngine_Rendering_Universal_XRPassUniversal_TypeInfo + 0x130)
        ;
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_Rendering_Universal_XRPassUniversal_TypeInfo)) {
          *(undefined4 *)(param_1 + 0x18) = 2;
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
            *plVar10 = param_2[0xf];
            thunk_FUN_02dc1ef0();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268();
        }
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


