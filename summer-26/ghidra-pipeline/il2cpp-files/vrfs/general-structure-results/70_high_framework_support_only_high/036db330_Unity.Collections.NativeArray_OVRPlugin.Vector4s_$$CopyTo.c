/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyTo
ENTRY_POINT: 036db330
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyTo(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x21;
  int iVar9;
  long unaff_x24;
  long in_stack_00000048;
  
  if (unaff_x21 != (long *)0x0) {
    lVar5 = (**(code **)(*unaff_x21 + 0x238))();
    puVar3 = PTR_DAT_06e5dc58;
    puVar2 = PTR_DAT_06de32c0;
    if (lVar5 != 0) {
      iVar9 = 0;
      do {
        iVar4 = FUN_03f054bc(lVar5,0);
        if (iVar4 <= iVar9) {
          FUN_03fbb8e8();
          uVar8 = 1;
LAB_036db5f4:
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar8);
        }
        plVar6 = (long *)(**(code **)(*unaff_x21 + 0x238))();
        if (plVar6 == (long *)0x0) break;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                   (plVar6,iVar9,*(undefined8 *)(*plVar6 + 0x310));
        if (plVar6 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if ((*(byte *)(*plVar6 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar6);
          }
        }
        uVar7 = FUN_036d8ec8();
        if ((uVar7 & 1) == 0) {
          uVar8 = FUN_0474aec4(*(undefined8 *)puVar2,0);
          *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
          thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar8);
          FUN_03fbb8e8();
          uVar8 = 0;
          goto LAB_036db5f4;
        }
        iVar9 = iVar9 + 1;
        lVar5 = (**(code **)(*unaff_x21 + 0x238))();
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


