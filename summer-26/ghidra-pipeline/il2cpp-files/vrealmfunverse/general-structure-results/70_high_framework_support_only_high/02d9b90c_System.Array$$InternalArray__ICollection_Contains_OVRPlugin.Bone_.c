/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 02d9b90c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  int iVar6;
  undefined8 uVar7;
  long *unaff_x24;
  
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_05c8c45c(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
LAB_02d9ba78:
    if (*(long *)(unaff_x20 + 0x48) != 0) {
      FUN_05ca25bc(*(long *)(unaff_x20 + 0x48),0);
    }
    lVar3 = *(long *)(unaff_x20 + 0x58);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02d9bab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
    return;
  }
  if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x20 + 0x28) != 0)) {
    FUN_02d4be00(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x28),0);
    puVar1 = PTR_DAT_06319bd0;
    lVar3 = *(long *)(unaff_x19 + 0x90);
    if (lVar3 != 0) {
      iVar6 = 0;
      do {
        if (*(int *)(lVar3 + 0x18) <= iVar6) goto LAB_02d9ba78;
        uVar7 = FUN_037a6268(lVar3,iVar6,*(undefined8 *)puVar1);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*unaff_x24);
        }
        uVar2 = FUN_05c8c45c(uVar7);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x90) == 0) break;
          lVar3 = FUN_037a6268(*(long *)(unaff_x19 + 0x90),iVar6,*(undefined8 *)puVar1);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*unaff_x24);
          }
          uVar2 = FUN_05c8c45c(lVar3);
          if ((uVar2 & 1) != 0) {
            if (lVar3 == 0) break;
            uVar7 = *(undefined8 *)(lVar3 + 0x28);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar2 = FUN_05c8c45c(uVar7,0,0);
            if (((uVar2 & 1) != 0) && (*(char *)(lVar3 + 0x40) != '\0')) {
              lVar4 = *(long *)(lVar3 + 0x28);
              if (lVar4 == 0) break;
              if (*(char *)(lVar4 + 400) != '\0') {
                lVar5 = *(long *)(unaff_x20 + 0x28);
                if (lVar5 == 0) break;
                if (*(char *)(lVar5 + 400) != '\0') {
                  FUN_02d4be00(lVar5,*(undefined8 *)(lVar4 + 0x28),0);
                  lVar5 = *(long *)(unaff_x20 + 0x28);
                  if ((lVar5 == 0) || (lVar4 = *(long *)(lVar3 + 0x28), lVar4 == 0)) break;
                }
                FUN_02d4be00(lVar4,*(undefined8 *)(lVar5 + 0x28),0);
              }
            }
          }
        }
        lVar3 = *(long *)(unaff_x19 + 0x90);
        iVar6 = iVar6 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


