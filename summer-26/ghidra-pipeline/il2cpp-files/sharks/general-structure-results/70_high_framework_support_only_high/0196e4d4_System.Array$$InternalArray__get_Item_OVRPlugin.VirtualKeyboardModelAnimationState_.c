/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0196e4d4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_VirtualKeyboardModelAnimationState>
               (float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (0.0 < param_1) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    uVar8 = FUN_033f2e00(*(long *)(unaff_x19 + 0xa0),0);
    puVar2 = PTR_DAT_037f4a40;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x118);
    if (*(int *)(*(long *)PTR_DAT_037f4a40 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = FUN_03432304(uVar8,param_2,param_3,0x40800000,uVar1,0);
    if (lVar4 != 0) {
      if (2 < *(int *)(lVar4 + 0x18)) {
        return;
      }
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        uVar8 = FUN_033f2e00(*(long *)(unaff_x19 + 0xa0),0);
        uVar1 = *(undefined4 *)(unaff_x19 + 0x174);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar4 = FUN_03432304(uVar8,param_2,param_3,0x40000000,uVar1,0);
        puVar3 = PTR_DAT_037f61d8;
        puVar2 = PTR_DAT_037f2b10;
        if (lVar4 != 0) {
          if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
            return;
          }
          uVar7 = 0;
          uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
            lVar6 = *(long *)(lVar4 + 0x20 + uVar7 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar5 = FUN_033e963c(lVar6,0,0);
            if ((uVar5 & 1) != 0) {
              uVar8 = FUN_033e6c58();
              if (lVar6 == 0) break;
              FUN_033e7338(lVar6,*(undefined8 *)puVar3,uVar8,1,0);
            }
            uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar7 = uVar7 + 1;
            if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar7) {
              return;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


