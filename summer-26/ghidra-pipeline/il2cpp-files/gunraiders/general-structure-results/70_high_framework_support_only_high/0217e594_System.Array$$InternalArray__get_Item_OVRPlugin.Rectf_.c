/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Rectf>
ENTRY_POINT: 0217e594
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Rectf>(long *param_1,long param_2)

{
  undefined *puVar1;
  bool in_ZR;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x22;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  if (in_ZR) {
    *(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = param_1;
    if (*param_1 == param_2) {
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        uVar2 = FUN_01c5d2fc(*(undefined8 *)OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo,
                             *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
        lVar4 = *(long *)(unaff_x19 + 0x28);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
        puVar1 = PTR_DAT_04239678;
        if (lVar4 != 0) {
          lVar5 = 4;
          do {
            uVar6 = lVar5 - 4;
            if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
              return;
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_0217e67c:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            plVar7 = *(long **)(unaff_x19 + 0x30);
            uVar2 = *(undefined8 *)(lVar4 + lVar5 * 8);
            lVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
            FUN_020f0a84(lVar4,uVar2,0);
            if (plVar7 == (long *)0x0) break;
            if ((lVar4 != 0) &&
               (lVar3 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
              uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar2,0);
            }
            if (*(uint *)(plVar7 + 3) <= uVar6) goto LAB_0217e67c;
            plVar7[lVar5] = lVar4;
            lVar4 = *(long *)(unaff_x19 + 0x28);
            lVar5 = lVar5 + 1;
          } while (lVar4 != 0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


