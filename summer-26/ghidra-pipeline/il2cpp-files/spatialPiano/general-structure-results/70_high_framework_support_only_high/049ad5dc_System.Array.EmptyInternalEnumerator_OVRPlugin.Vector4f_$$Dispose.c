/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 049ad5dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  uint uVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  int unaff_w28;
  
  do {
    uVar1 = *(uint *)(in_x9 + 4);
    if (in_NG == in_OV) {
      FUN_050f65d8(0);
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    unaff_w25 = unaff_w25 + 1;
    if (uVar2 <= uVar1) {
      return uVar1;
    }
    if (*(int *)(unaff_x26 + (long)(int)uVar1 * (long)unaff_w28) == unaff_w24) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c(lVar4);
      }
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_049ad5b0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0();
LAB_049ad5b0:
      uVar6 = (*(code *)*puVar3)();
      if ((uVar6 & 1) != 0) {
        return uVar1;
      }
      uVar2 = *(uint *)(unaff_x23 + 0x18);
    }
    if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    in_x9 = unaff_x26 + (long)(int)uVar1 * (long)unaff_w28;
    in_OV = SBORROW4(unaff_w25,uVar2);
    in_NG = (int)(unaff_w25 - uVar2) < 0;
  } while( true );
}


