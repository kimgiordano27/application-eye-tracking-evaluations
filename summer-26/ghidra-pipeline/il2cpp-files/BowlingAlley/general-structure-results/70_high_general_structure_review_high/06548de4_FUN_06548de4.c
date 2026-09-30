/*
FUNCTION_NAME: FUN_06548de4
ENTRY_POINT: 06548de4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long FUN_06548de4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_076dfaf6 & 1) == 0) {
    thunk_FUN_032e1da0(UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07283548);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_BaseSlider<float>_get_lowValue__);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionsResultCallbackDelegate_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07281148);
    thunk_FUN_032e1da0(Oculus_Avatar2_CAPI_ovrAvatar2LODCamera___TypeInfo);
    DAT_076dfaf6 = 1;
  }
  puVar4 = Oculus_Avatar2_CAPI_ovrAvatar2LODCamera___TypeInfo;
  piVar7 = (int *)(param_1 + 0x98);
  if (0 < *piVar7) {
    uVar8 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xa0);
      if (lVar6 == 0) {
Unity_Mathematics_int4x4__op_Modulus:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar6 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
      if (lVar6 == 0) goto Unity_Mathematics_int4x4__op_Modulus;
      uVar2 = *(undefined8 *)(lVar6 + 0xf8);
      uVar1 = *(undefined8 *)(lVar6 + 0x100);
      uVar3 = *(undefined8 *)(lVar6 + 0x108);
      uVar9 = *(undefined8 *)(lVar6 + 0x110);
      uVar10 = *(undefined8 *)(lVar6 + 0x120);
      uVar5 = FUN_0659f790(*(undefined8 *)puVar4,*(undefined8 *)(lVar6 + 0xf0),param_2,0);
      if (((((uVar5 & 1) != 0) &&
           (uVar5 = FUN_0659f790(*(undefined8 *)PTR_DAT_07283548,uVar3,param_2,0), (uVar5 & 1) != 0)
           ) && (uVar5 = FUN_0659f790(*(undefined8 *)
                                       UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionsResultCallbackDelegate_TypeInfo
                                      ,uVar1,param_2,0), (uVar5 & 1) != 0)) &&
         (((uVar5 = FUN_0659f790(*(undefined8 *)PTR_DAT_07281148,uVar2,param_2,0), (uVar5 & 1) != 0
           && (uVar5 = FUN_0659f790(*(undefined8 *)
                                     Method_UnityEngine_UIElements_BaseSlider<float>_get_lowValue__,
                                    uVar10,param_2,0), (uVar5 & 1) != 0)) &&
          (uVar5 = FUN_0659f790(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__,
                                uVar9,param_2,0), (uVar5 & 1) != 0)))) {
        FUN_038ef680(*(undefined8 *)(param_1 + 0xa0),piVar7,uVar8,
                     *(undefined8 *)UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_TypeInfo);
        return lVar6;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *piVar7);
  }
  return 0;
}


