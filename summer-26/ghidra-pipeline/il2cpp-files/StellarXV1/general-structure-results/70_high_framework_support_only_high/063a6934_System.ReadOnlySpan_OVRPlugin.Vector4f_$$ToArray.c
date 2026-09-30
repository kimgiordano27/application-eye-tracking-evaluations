/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 063a6934
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Vector4f>__ToArray(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *plVar7;
  long unaff_x25;
  long unaff_x26;
  
  do {
    lVar2 = thunk_FUN_040b4e00(unaff_x25,*(undefined8 *)(*unaff_x22 + 0x40));
    if (lVar2 == 0) {
      uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,0);
    }
    do {
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = unaff_x25;
      thunk_FUN_040ec700(unaff_x26 + (long)(int)unaff_w19 * 8,unaff_x25);
      unaff_w24 = unaff_w24 + 1;
      unaff_w19 = unaff_w19 + 1;
      if (unaff_w24 == unaff_w23) {
        return;
      }
      plVar7 = *(long **)(unaff_x21 + 0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc(lVar2);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_063a68f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar7,lVar2,0);
LAB_063a68f0:
      (*(code *)*puVar1)(&stack0x00000074,plVar7,unaff_w24,puVar1[1]);
      memcpy(&stack0x00000008,&stack0x00000074,0x6c);
      unaff_x25 = thunk_FUN_040b4b34(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                                     &stack0x00000008);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    } while (unaff_x25 == 0);
  } while( true );
}


