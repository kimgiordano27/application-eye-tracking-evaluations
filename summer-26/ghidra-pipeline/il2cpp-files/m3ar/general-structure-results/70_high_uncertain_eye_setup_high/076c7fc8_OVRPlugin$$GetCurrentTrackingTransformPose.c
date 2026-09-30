/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 076c7fc8
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetCurrentTrackingTransformPose(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 9) * 0x10 + 0x138);
      goto LAB_076c7ff0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076c7ff0:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x40);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar6;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x48);
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_076c8064;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x22,9);
LAB_076c8064:
    uVar3 = (*(code *)*puVar2)(plVar6,uVar1);
    if ((uVar3 & 1) != 0) {
      fVar10 = *(float *)(unaff_x19 + 0x4c);
      fVar9 = -(*(float *)(unaff_x19 + 0x50) * 0.5);
      if (*(char *)(unaff_x19 + 0x59) != '\0') {
        fVar9 = *(float *)(unaff_x19 + 0x50) * 0.5;
      }
      if (DAT_09539e19 == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        DAT_09539e19 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar7 = (float)in_stack_00000020 - (float)in_stack_00000000;
      fVar8 = (float)((ulong)in_stack_00000020 >> 0x20) - (float)((ulong)in_stack_00000000 >> 0x20);
      return SQRT((in_stack_00000028 - in_stack_00000008) * (in_stack_00000028 - in_stack_00000008)
                  + fVar7 * fVar7 + fVar8 * fVar8) <= fVar10 + fVar9;
    }
  }
  return false;
}


