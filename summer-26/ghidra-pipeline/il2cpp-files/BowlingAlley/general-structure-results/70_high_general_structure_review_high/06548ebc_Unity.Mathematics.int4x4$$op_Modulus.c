/*
FUNCTION_NAME: Unity.Mathematics.int4x4$$op_Modulus
ENTRY_POINT: 06548ebc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


long Unity_Mathematics_int4x4__op_Modulus(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  int *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    uVar1 = FUN_0659f790(param_1,param_2);
    if (((((uVar1 & 1) != 0) &&
         (uVar1 = FUN_0659f790(*(undefined8 *)PTR_DAT_07283548,unaff_x28), (uVar1 & 1) != 0)) &&
        (uVar1 = FUN_0659f790(*(undefined8 *)
                               UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionsResultCallbackDelegate_TypeInfo
                              ,unaff_x27), (uVar1 & 1) != 0)) &&
       (((uVar1 = FUN_0659f790(*(undefined8 *)PTR_DAT_07281148,unaff_x26), (uVar1 & 1) != 0 &&
         (uVar1 = FUN_0659f790(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseSlider<float>_get_lowValue__,
                               unaff_x25), (uVar1 & 1) != 0)) &&
        (uVar1 = FUN_0659f790(*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseSlider<float>_get_highValue__,
                              unaff_x24), (uVar1 & 1) != 0)))) {
      FUN_038ef680(*(undefined8 *)(unaff_x20 + 0xa0));
      return unaff_x23;
    }
    unaff_w22 = unaff_w22 + 1;
    if (*unaff_x21 <= (int)unaff_w22) {
      return 0;
    }
    lVar2 = *(long *)(unaff_x20 + 0xa0);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    unaff_x23 = *(long *)(lVar2 + (long)(int)unaff_w22 * 8 + 0x20);
    if (unaff_x23 == 0) break;
    param_2 = *(undefined8 *)(unaff_x23 + 0xf0);
    unaff_x26 = *(undefined8 *)(unaff_x23 + 0xf8);
    param_1 = *unaff_x29;
    unaff_x27 = *(undefined8 *)(unaff_x23 + 0x100);
    unaff_x28 = *(undefined8 *)(unaff_x23 + 0x108);
    unaff_x24 = *(undefined8 *)(unaff_x23 + 0x110);
    unaff_x25 = *(undefined8 *)(unaff_x23 + 0x120);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


