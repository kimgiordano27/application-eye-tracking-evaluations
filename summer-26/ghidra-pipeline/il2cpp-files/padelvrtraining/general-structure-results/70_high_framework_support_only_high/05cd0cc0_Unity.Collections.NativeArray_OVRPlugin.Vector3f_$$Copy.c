/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 05cd0cc0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar8;
  long unaff_x24;
  undefined4 in_stack_00000068;
  
  if (1 < *(uint *)(unaff_x24 + -8)) {
    *(undefined8 *)(unaff_x23 + 0x28) = param_1;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x23 + 0x28),param_1);
    if (2 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x30) = *(undefined8 *)PTR_DAT_091fcc18;
      thunk_FUN_03d1023c((undefined8 *)(unaff_x23 + 0x30));
      in_stack_00000068 = *(undefined4 *)(unaff_x21 + 4);
      uVar2 = FUN_07175a38(&stack0x00000068,0);
      if (3 < *(uint *)(unaff_x23 + 0x18)) {
        *(undefined8 *)(unaff_x23 + 0x38) = uVar2;
        thunk_FUN_03d1023c((undefined8 *)(unaff_x23 + 0x38),uVar2);
        if (4 < *(uint *)(unaff_x23 + 0x18)) {
          *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)PTR_DAT_091fcbf8;
          thunk_FUN_03d1023c();
          FUN_06fd2590();
          lVar8 = *(long *)PTR_DAT_091a0c08;
          lVar5 = *(long *)(lVar8 + 0x38);
          if (lVar5 == 0) {
            FUN_03d8f2c8(lVar8);
            lVar5 = *(long *)(lVar8 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03d8f26c();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          if (unaff_x22 != (long *)0x0) {
            lVar5 = *unaff_x22;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091faf08) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_05cd0e24;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd0e24:
            (*(code *)*puVar3)();
            if (unaff_x20 != 0) {
              uVar2 = *(undefined8 *)(unaff_x20 + 200);
              uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) + 0x135
                            ) & 1) == 0) {
                FUN_03d8f26c();
              }
              uVar4 = thunk_FUN_03d2ef40();
              FUN_06dd8080(uVar4,0x32,uVar2,uVar1,5,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
              *(undefined8 *)(unaff_x20 + 0x138) = uVar4;
              thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar4);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


