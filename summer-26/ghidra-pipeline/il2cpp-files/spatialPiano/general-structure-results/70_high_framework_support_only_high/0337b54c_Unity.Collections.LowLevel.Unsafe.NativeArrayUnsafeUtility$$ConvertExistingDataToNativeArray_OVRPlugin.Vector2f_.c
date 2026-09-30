/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector2f>
ENTRY_POINT: 0337b54c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector2f>
               (undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  int unaff_w23;
  int iVar8;
  long unaff_x24;
  long *plVar9;
  long *unaff_x27;
  int unaff_w28;
  long in_stack_00000010;
  
  do {
    plVar9 = (long *)*param_1;
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0337b5a8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067c91b0,0);
LAB_0337b5a8:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
    }
    if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(unaff_x24);
    }
    iVar8 = unaff_w23;
    if ((unaff_w28 != 0xc) && (unaff_w28 != 0)) {
      return;
    }
    do {
      do {
        unaff_w23 = iVar8 + -1;
        if (iVar8 < 1) {
          return;
        }
        plVar9 = (long *)FUN_03abf644();
        iVar8 = unaff_w23;
      } while (plVar9 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
    } while (((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) ||
            (uVar6 = FUN_06384aa8(plVar9,0), (uVar6 & 1) != 0));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    in_stack_00000010 = lVar5;
    uVar2 = (**(code **)(*plVar9 + 0x3f8))(plVar9,*(undefined8 *)(*plVar9 + 0x400));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(lVar5 + 0x38) = uVar2;
    plVar3 = (long *)(**(code **)(*plVar9 + 0x3f8))(plVar9,*(undefined8 *)(*plVar9 + 0x400));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar3 + 0x188))(plVar3,in_stack_00000010,*(undefined8 *)(*plVar3 + 400));
    lVar5 = (**(code **)(*plVar9 + 0x278))(plVar9,*(undefined8 *)(*plVar9 + 0x280));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = FUN_0637014c(lVar5,0);
    if (lVar5 == 0) {
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar6 = FUN_0635bbbc(in_stack_00000010,0);
      unaff_w28 = 4;
      if ((uVar6 & 1) == 0) {
        unaff_w28 = 0xc;
      }
    }
    else {
      FUN_06371d58();
      unaff_w28 = 4;
    }
    unaff_x24 = 0;
    param_1 = &stack0x00000010;
  } while( true );
}


