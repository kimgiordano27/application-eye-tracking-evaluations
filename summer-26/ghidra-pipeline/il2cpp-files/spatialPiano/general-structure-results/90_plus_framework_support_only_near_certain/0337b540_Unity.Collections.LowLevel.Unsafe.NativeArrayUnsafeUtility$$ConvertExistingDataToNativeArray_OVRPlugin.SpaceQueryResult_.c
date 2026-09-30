/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0337b540
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

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceQueryResult>
               (void)

{
  byte bVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  int in_w8;
  long lVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  int unaff_w23;
  int iVar8;
  long *unaff_x27;
  long *in_stack_00000010;
  
code_r0x0337b540:
  if ((bool)in_ZR) {
    in_w9 = in_w8;
  }
  do {
    if (in_stack_00000010 != (long *)0x0) {
      lVar5 = *in_stack_00000010;
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
      puVar4 = (undefined8 *)FUN_02f421d0(in_stack_00000010,*(long *)PTR_DAT_067c91b0,0);
LAB_0337b5a8:
      (*(code *)*puVar4)(in_stack_00000010,puVar4[1]);
    }
    iVar8 = unaff_w23;
    if ((in_w9 != 0xc) && (in_w9 != 0)) {
      return;
    }
    do {
      do {
        unaff_w23 = iVar8 + -1;
        if (iVar8 < 1) {
          return;
        }
        plVar2 = (long *)FUN_03abf644();
        iVar8 = unaff_w23;
      } while (plVar2 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
    } while (((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) ||
            (uVar6 = FUN_06384aa8(plVar2,0), (uVar6 & 1) != 0));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_00000010 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    lVar5 = (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_00000010[7] = lVar5;
    plVar3 = (long *)(**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar3 + 0x188))(plVar3,in_stack_00000010,*(undefined8 *)(*plVar3 + 400));
    lVar5 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = FUN_0637014c(lVar5,0);
    if (lVar5 == 0) break;
    FUN_06371d58();
    in_w9 = 4;
  } while( true );
  if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = FUN_0635bbbc(in_stack_00000010,0);
  in_ZR = (uVar6 & 1) == 0;
  in_w8 = 0xc;
  in_w9 = 4;
  goto code_r0x0337b540;
}


