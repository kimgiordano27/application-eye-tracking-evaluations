/*
FUNCTION_NAME: FUN_062380f8
ENTRY_POINT: 062380f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_permission_setup
*/


void FUN_062380f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_06dc7259 & 1) == 0) {
    FUN_02d965b8(Method_OVRHand_OnSceneChanged__);
    FUN_02d965b8(Method_OVRLocatable_ScheduleUpdateTransforms__);
    FUN_02d965b8(Method_OVRManager_OnPermissionGranted__);
    FUN_02d965b8(Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__);
    FUN_02d965b8(Method_OVRNativeList_ToNativeList<Guid>__);
    FUN_02d965b8(Method_UnityEngine_Object_FindAnyObjectByType<OVRManager>__);
    FUN_02d965b8(Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc7259 = 1;
  }
  puVar2 = PTR_DAT_069fb990;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar5 = FUN_06229270(*(long *)(param_1 + 0x20),0);
    if (lVar5 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar5 + 0x38);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_06350670(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar10 = *(long *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = param_3;
          LeanTween__value(puVar8,param_3);
        }
        else {
          FUN_040101ec(lVar5,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar5 = *(long *)(param_1 + 0xc0);
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar10 = *(long *)Method_UnityEngine_Object_FindAnyObjectByType<OVRManager>__;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *puVar8 = param_2;
              LeanTween__value(puVar8,param_2);
            }
            else {
              FUN_040101ec(lVar5,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            FUN_06239074(param_1,param_2,param_3);
            FUN_0622a5b8(param_1,0);
            FUN_0623918c(param_1,0);
            if (*(long *)(param_1 + 0x80) != 0) {
              FUN_04010c90(&local_68,*(long *)(param_1 + 0x80),
                           *(undefined8 *)
                            Method_OVRNativeList_WithSuggestedCapacityFrom<OVRAnchor>__);
              puVar4 = Method_OVRNativeList_ToNativeList<Guid>__;
              puVar3 = Method_OVRLocatable_ScheduleUpdateTransforms__;
              uStack_48 = puStack_60;
              local_50 = local_68;
              local_40 = local_58;
              local_68 = 0;
              puStack_60 = &local_50;
              while( true ) {
                do {
                  do {
                    uVar6 = FUN_05156804(&local_50,*(undefined8 *)puVar3);
                    lVar5 = local_40;
                    if ((uVar6 & 1) == 0) {
                      FUN_05156800(&local_50,*(undefined8 *)Method_OVRHand_OnSceneChanged__);
                      return;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar6 = FUN_06350670(lVar5,0,0);
                  } while ((uVar6 & 1) != 0);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar6 = FUN_0634b218(lVar5,0);
                } while ((uVar6 & 1) == 0);
                FUN_0634b308(lVar5,0,0);
                lVar7 = *(long *)(param_1 + 0xe0);
                if (lVar7 == 0) break;
                lVar10 = *(long *)(lVar7 + 0x10);
                lVar11 = *(long *)puVar4;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar10 == 0) break;
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar5;
                  LeanTween__value(plVar9,lVar5);
                }
                else {
                  FUN_040101ec(lVar7,lVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


