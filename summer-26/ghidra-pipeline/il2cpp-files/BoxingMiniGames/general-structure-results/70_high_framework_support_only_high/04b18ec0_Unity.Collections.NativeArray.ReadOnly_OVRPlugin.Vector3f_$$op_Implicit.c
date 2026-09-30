/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 04b18ec0
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__op_Implicit(void)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  void *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  long lVar7;
  long unaff_x25;
  void *unaff_x26;
  long lVar8;
  long unaff_x29;
  
  uVar1 = FUN_03642bb8();
  if ((uVar1 & 1) == 0) {
LAB_04b18f7c:
    pvVar3 = (void *)**(undefined8 **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
  }
  else {
    plVar2 = (long *)thunk_FUN_036a1ed0();
    lVar8 = *(long *)(unaff_x20 + 0x20);
    lVar7 = *plVar2;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x20) + 0x28)) {
      unaff_x19 = unaff_x26;
    }
    pvVar3 = memcpy(unaff_x22,unaff_x19,unaff_x23);
    if (lVar7 == 0) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04b19000;
    }
    lVar8 = *(long *)(lVar8 + 0xc0);
    puVar5 = *(undefined8 **)(lVar8 + 0x40);
    uVar4 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x20) + 0x28)) {
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    pcVar6 = (code *)puVar5[2];
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
    (*pcVar6)(uVar4,puVar5,lVar7,unaff_x29 + -0x10,unaff_x29 + -0x18);
    if (*(char *)(unaff_x29 + -0x18) == '\0') goto LAB_04b18f7c;
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    FUN_036436fc(lVar7,*(undefined8 *)(lVar8 + 0x30));
    pvVar3 = *(void **)(unaff_x29 + -0x10);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04b19000:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar3);
}


