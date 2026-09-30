/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.FoveatedRenderingFeature$$OnInstanceCreate
ENTRY_POINT: 05a99d9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_2;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_Features_FoveatedRenderingFeature__OnInstanceCreate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long unaff_x19;
  int iVar6;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long *plVar7;
  undefined4 unaff_w28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  lVar3 = thunk_FUN_02b79644();
  FUN_05c8d65c(lVar3,0);
  plVar7 = (long *)(unaff_x19 + 0x18);
  *plVar7 = lVar3;
  thunk_FUN_02bb0e9c(plVar7,lVar3);
  if ((*plVar7 != 0) && (lVar3 = FUN_05c8c8e0(*plVar7,0), lVar3 != 0)) {
    FUN_05c9c918();
    if (*plVar7 != 0) {
      lVar3 = FUN_05c8c8e0(*plVar7,0);
      if (*(char *)(unaff_x20 + 0xd97) == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        *(undefined1 *)(unaff_x20 + 0xd97) = 1;
      }
      if (lVar3 != 0) {
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
        FUN_05c9b4fc(*puVar5,puVar5[1],puVar5[2],lVar3,0);
        if (*plVar7 != 0) {
          lVar3 = FUN_05c8c8e0(*plVar7,0);
          if (DAT_066c1d9a == '\0') {
            FUN_02b3c81c(PTR_DAT_06312cd8);
            DAT_066c1d9a = '\x01';
          }
          puVar2 = Method_System_Delegate_CreateDelegate__;
          puVar1 = Method_System_DateTime_TimeToTicks__;
          if (lVar3 != 0) {
            puVar5 = *(undefined4 **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
            FUN_05c9c3b0(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar3,0);
            in_stack_00000010 = *(undefined8 *)puVar1;
            lVar3 = *plVar7;
            in_stack_00000018 = 0xffffffffffffffff;
            in_stack_00000020 = unaff_w28;
            uVar4 = FUN_04db1580(&stack0x00000010,0);
            uVar4 = FUN_04bffdac(uVar4,*(undefined8 *)puVar2,0);
            if (((lVar3 != 0) &&
                (thunk_FUN_05c9238c(lVar3,uVar4,0), puVar1 = Method_System_Delegate_CombineImpl__,
                unaff_x23 != 0)) && (lVar3 = *(long *)(unaff_x23 + 0x30), lVar3 != 0)) {
              iVar6 = 0;
              do {
                if (*(int *)(lVar3 + 0x18) <= iVar6) {
                  if (*unaff_x22 != 0) {
                    FUN_05c8cb28(*unaff_x22,1,0);
                    return;
                  }
                  break;
                }
                System_Collections_Generic_List<Vector2>__Remove(lVar3,iVar6,*(undefined8 *)puVar1);
                if (*plVar7 == 0) break;
                FUN_05c8c8e0(*plVar7,0);
                UnityEngine_XR_OpenXR_Features_OpenXRFeature__Internal_SetProcAddressPtrAndLoadStage1
                          ();
                lVar3 = *(long *)(unaff_x23 + 0x30);
                iVar6 = iVar6 + 1;
              } while (lVar3 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


