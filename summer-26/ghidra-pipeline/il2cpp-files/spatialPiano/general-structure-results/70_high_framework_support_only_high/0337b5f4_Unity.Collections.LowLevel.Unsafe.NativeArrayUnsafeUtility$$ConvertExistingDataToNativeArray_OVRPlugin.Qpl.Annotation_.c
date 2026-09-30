/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 0337b5f4
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


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  int iVar10;
  int unaff_w23;
  long lVar11;
  long *unaff_x27;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_02a7dca0();
                    /* WARNING: Subroutine does not return */
    FUN_02ff761c(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar11 = *plVar5;
  __cxa_end_catch();
  iVar6 = 0;
  do {
    plVar5 = (long *)*in_stack_00000008;
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0337b5a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)PTR_DAT_067c91b0,0);
LAB_0337b5a8:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(lVar11);
    }
    iVar10 = unaff_w23;
    if ((iVar6 != 0xc) && (iVar6 != 0)) {
      return;
    }
    do {
      do {
        unaff_w23 = iVar10 + -1;
        if (iVar10 < 1) {
          return;
        }
        plVar5 = (long *)FUN_03abf644();
        iVar10 = unaff_w23;
      } while (plVar5 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
    } while (((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) ||
            (uVar8 = FUN_06384aa8(plVar5,0), (uVar8 & 1) != 0));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    in_stack_00000010 = lVar11;
    uVar2 = (**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(lVar11 + 0x38) = uVar2;
    plVar3 = (long *)(**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar3 + 0x188))(plVar3,in_stack_00000010,*(undefined8 *)(*plVar3 + 400));
    lVar11 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = FUN_0637014c(lVar11,0);
    if (lVar11 == 0) {
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar8 = FUN_0635bbbc(in_stack_00000010,0);
      iVar6 = 4;
      if ((uVar8 & 1) == 0) {
        iVar6 = 0xc;
      }
    }
    else {
      FUN_06371d58();
      iVar6 = 4;
    }
    lVar11 = 0;
    in_stack_00000008 = &stack0x00000010;
  } while( true );
}


