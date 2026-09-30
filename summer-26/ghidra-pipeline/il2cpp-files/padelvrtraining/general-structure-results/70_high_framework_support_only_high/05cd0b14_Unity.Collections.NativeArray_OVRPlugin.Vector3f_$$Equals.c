/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 05cd0b14
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x22;
  long unaff_x23;
  long lVar8;
  
  if (5 < in_w8) {
    *(undefined8 *)(unaff_x23 + 0x48) = param_1;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x23 + 0x48),param_1);
    if (6 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x50) = *(undefined8 *)PTR_DAT_091fcc08;
      thunk_FUN_03d1023c();
      FUN_06fd2590();
      lVar8 = *(long *)PTR_DAT_091a0c08;
      lVar4 = *(long *)(lVar8 + 0x38);
      if (lVar4 == 0) {
        FUN_03d8f2c8(lVar8);
        lVar4 = *(long *)(lVar8 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03d8f26c();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      if (unaff_x22 != (long *)0x0) {
        lVar4 = *unaff_x22;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091faf08) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto FUN_05cd0e40;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03d8f370();
FUN_05cd0e40:
        (*(code *)*puVar2)();
        if (unaff_x20 != 0) {
          uVar7 = *(undefined8 *)(unaff_x20 + 200);
          uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135) &
              1) == 0) {
            FUN_03d8f26c();
          }
          uVar3 = thunk_FUN_03d2ef40();
          FUN_06dd8080(uVar3,0x32,uVar7,uVar1,5,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
          *(undefined8 *)(unaff_x20 + 0x138) = uVar3;
          thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar3);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


