/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefabs
ENTRY_POINT: 072a5ee0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefabs(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  
  *(undefined8 *)(param_1 + 0x30) = unaff_x19;
  thunk_FUN_040ec700();
  lVar3 = FUN_04077674(*unaff_x26,2);
  uVar4 = FUN_04077674(*unaff_x24,7);
  FUN_07593f88(uVar4,*unaff_x21,0);
  puVar1 = PTR_DAT_092c25f0;
  if (lVar3 == 0) goto LAB_072a61ac;
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x20),uVar4);
    uVar4 = FUN_04077674(*unaff_x24,7);
    FUN_07593f88(uVar4,*(undefined8 *)puVar1,0);
    puVar2 = PTR_DAT_092c24e8;
    puVar1 = PTR_DAT_092c2238;
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x28),uVar4);
      plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x38);
      *plVar5 = lVar3;
      thunk_FUN_040ec700(plVar5,lVar3);
      lVar3 = FUN_04077674(*(undefined8 *)puVar1,2);
      lVar6 = FUN_04077674(*unaff_x26,2);
      uVar4 = FUN_04077674(*unaff_x24,0x20);
      FUN_07593f88(uVar4,*(undefined8 *)puVar2,0);
      puVar1 = PTR_DAT_092c2570;
      if (lVar6 == 0) goto LAB_072a61ac;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = uVar4;
        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar4);
        uVar4 = FUN_04077674(*unaff_x24,0x20);
        FUN_07593f88(uVar4,*(undefined8 *)puVar1,0);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = uVar4;
          thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar4);
          puVar1 = PTR_DAT_092c2568;
          if (lVar3 == 0) {
LAB_072a61ac:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(long *)(lVar3 + 0x20) = lVar6;
            thunk_FUN_040ec700((long *)(lVar3 + 0x20),lVar6);
            lVar6 = FUN_04077674(*unaff_x26,2);
            uVar4 = FUN_04077674(*unaff_x24,0x20);
            FUN_07593f88(uVar4,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_092c25c8;
            if (lVar6 == 0) goto LAB_072a61ac;
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(lVar6 + 0x20) = uVar4;
              thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar4);
              uVar4 = FUN_04077674(*unaff_x24,0x20);
              FUN_07593f88(uVar4,*(undefined8 *)puVar1,0);
              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar6 + 0x28) = uVar4;
                thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar4);
                puVar2 = PTR_DAT_092c2560;
                puVar1 = PTR_DAT_092c2558;
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                  *(long *)(lVar3 + 0x28) = lVar6;
                  thunk_FUN_040ec700((long *)(lVar3 + 0x28),lVar6);
                  plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x40);
                  *plVar5 = lVar3;
                  thunk_FUN_040ec700(plVar5,lVar3);
                  uVar4 = FUN_04077674(*unaff_x24,8);
                  FUN_07593f88(uVar4,*(undefined8 *)puVar2,0);
                  puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x48);
                  *puVar7 = uVar4;
                  thunk_FUN_040ec700(puVar7,uVar4);
                  uVar4 = FUN_04077674(*unaff_x24,8);
                  FUN_07593f88(uVar4,*(undefined8 *)puVar1,0);
                  puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x50);
                  *puVar7 = uVar4;
                  thunk_FUN_040ec700(puVar7,uVar4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


