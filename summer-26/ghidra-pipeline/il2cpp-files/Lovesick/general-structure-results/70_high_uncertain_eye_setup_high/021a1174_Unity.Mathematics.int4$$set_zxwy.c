/*
FUNCTION_NAME: Unity.Mathematics.int4$$set_zxwy
ENTRY_POINT: 021a1174
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_int4__set_zxwy
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  int extraout_var;
  int extraout_var_00;
  long extraout_x1;
  long lVar3;
  ulong uVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = param_3;
  uStack0000000000000010 = param_4;
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARSubsystems_XRCameraConfiguration__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_10__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<MeshCollider>__);
    *(undefined1 *)(unaff_x21 + 0x534) = 1;
  }
  FUN_021a10fc(param_2);
  if ((int)((ulong)param_4 >> 0x20) == extraout_var) {
    FUN_021a10fc(param_2);
    puVar1 = Method_UnityEngine_GameObject_GetComponentInChildren<MeshCollider>__;
    if (0 < extraout_var_00) {
      uVar4 = 0;
      do {
        lVar3 = *(long *)(param_2 + 0x18);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar5 = *(undefined8 *)(lVar3 + uVar4 * 8 + 0x20);
        FUN_0138116c(&stack0x00000008,uVar4 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar1);
        uVar2 = FUN_015fe7e8(uVar5,in_stack_00000018,0);
        if ((uVar2 & 1) != 0) goto LAB_021a1248;
        uVar4 = uVar4 + 1;
        FUN_021a10fc(param_2);
      } while ((long)uVar4 < extraout_x1 >> 0x20);
    }
  }
  else {
LAB_021a1248:
    uVar5 = FUN_01380ca8(&stack0x00000008,
                         *(undefined8 *)
                          Method_UnityEngine_XR_ARSubsystems_XRCameraConfiguration__ctor__);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    Unity_Mathematics_int4__get_yzwz(param_2);
  }
  return;
}


