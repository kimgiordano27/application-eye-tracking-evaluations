/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 04b18ef8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>___ctor
               (long param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  void *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x28)) {
    unaff_x19 = unaff_x26;
  }
  pvVar1 = memcpy(param_2,unaff_x19,param_4);
  if (unaff_x24 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(unaff_x27 + 0xc0) + 0x40);
    uVar2 = *puVar3;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x27 + 0xc0) + 0x20) + 0x28)) {
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    pcVar4 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
    (*pcVar4)(uVar2);
    if (*(char *)(unaff_x29 + -0x18) == '\0') {
      pvVar1 = (void *)**(undefined8 **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
    }
    else {
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
        lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      FUN_036436fc(lVar5,*(undefined8 *)(lVar6 + 0x30));
      pvVar1 = *(void **)(unaff_x29 + -0x10);
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar1);
}


