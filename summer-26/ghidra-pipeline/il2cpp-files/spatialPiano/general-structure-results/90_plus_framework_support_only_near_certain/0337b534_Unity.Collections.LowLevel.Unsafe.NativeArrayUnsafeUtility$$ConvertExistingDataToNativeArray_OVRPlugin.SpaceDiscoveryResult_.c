/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0337b534
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0337b660) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceDiscoveryResult>
               (ulong param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  int unaff_w23;
  int iVar9;
  long *unaff_x27;
  long *in_stack_00000010;
  
code_r0x0337b534:
  iVar5 = 4;
  if ((param_1 & 1) == 0) {
    iVar5 = 0xc;
  }
  do {
    if (in_stack_00000010 != (long *)0x0) {
      lVar6 = *in_stack_00000010;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0337b5a8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(in_stack_00000010,*(long *)PTR_DAT_067c91b0,0);
LAB_0337b5a8:
      (*(code *)*puVar4)(in_stack_00000010,puVar4[1]);
    }
    iVar9 = unaff_w23;
    if ((iVar5 != 0xc) && (iVar5 != 0)) {
      return;
    }
    do {
      do {
        unaff_w23 = iVar9 + -1;
        if (iVar9 < 1) {
          return;
        }
        plVar2 = (long *)FUN_03abf644();
        iVar9 = unaff_w23;
      } while (plVar2 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
    } while (((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) ||
            (uVar7 = FUN_06384aa8(plVar2,0), (uVar7 & 1) != 0));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_00000010 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    lVar6 = (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_00000010[7] = lVar6;
    plVar3 = (long *)(**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar3 + 0x188))(plVar3,in_stack_00000010,*(undefined8 *)(*plVar3 + 400));
    lVar6 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = FUN_0637014c(lVar6,0);
    if (lVar6 == 0) break;
    FUN_06371d58();
    iVar5 = 4;
  } while( true );
  if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  param_1 = FUN_0635bbbc(in_stack_00000010,0);
  goto code_r0x0337b534;
}


