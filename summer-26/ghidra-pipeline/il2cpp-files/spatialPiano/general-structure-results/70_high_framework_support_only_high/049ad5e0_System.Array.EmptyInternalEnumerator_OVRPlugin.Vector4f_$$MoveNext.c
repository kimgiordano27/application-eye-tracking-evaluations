/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 049ad5e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__MoveNext(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  uint unaff_w27;
  int unaff_w28;
  
  do {
    if (in_NG == in_OV) {
      FUN_050f65d8(0);
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    unaff_w25 = unaff_w25 + 1;
    if (uVar1 <= unaff_w27) {
      return unaff_w27;
    }
    if (*(int *)(unaff_x26 + (long)(int)unaff_w27 * (long)unaff_w28) == unaff_w24) {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_049ad5b0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0();
LAB_049ad5b0:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) != 0) {
        return unaff_w27;
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
    }
    if (uVar1 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    in_OV = SBORROW4(unaff_w25,uVar1);
    in_NG = (int)(unaff_w25 - uVar1) < 0;
    unaff_w27 = *(uint *)(unaff_x26 + (long)(int)unaff_w27 * (long)unaff_w28 + 4);
  } while( true );
}


