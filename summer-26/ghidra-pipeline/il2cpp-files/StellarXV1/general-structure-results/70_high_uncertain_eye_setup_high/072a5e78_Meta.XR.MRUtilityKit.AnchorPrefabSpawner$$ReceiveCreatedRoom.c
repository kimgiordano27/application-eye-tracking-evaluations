/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveCreatedRoom
ENTRY_POINT: 072a5e78
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


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveCreatedRoom(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_040ec700();
  uVar3 = FUN_04077674(*unaff_x25,0x16);
  FUN_07593f88(uVar3,*unaff_x22,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_040ec700(puVar4,uVar3);
  uVar3 = FUN_04077674(*unaff_x24,0x40);
  FUN_07593f88(uVar3,*unaff_x27,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
  *puVar4 = uVar3;
  thunk_FUN_040ec700(puVar4,uVar3);
  lVar5 = FUN_04077674(*unaff_x26,2);
  uVar3 = FUN_04077674(*unaff_x24,7);
  FUN_07593f88(uVar3,*unaff_x21,0);
  puVar1 = PTR_DAT_092c25f0;
  if (lVar5 == 0) goto LAB_072a61ac;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar3);
    uVar3 = FUN_04077674(*unaff_x24,7);
    FUN_07593f88(uVar3,*(undefined8 *)puVar1,0);
    puVar2 = PTR_DAT_092c24e8;
    puVar1 = PTR_DAT_092c2238;
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x28),uVar3);
      plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x38);
      *plVar6 = lVar5;
      thunk_FUN_040ec700(plVar6,lVar5);
      lVar5 = FUN_04077674(*(undefined8 *)puVar1,2);
      lVar7 = FUN_04077674(*unaff_x26,2);
      uVar3 = FUN_04077674(*unaff_x24,0x20);
      FUN_07593f88(uVar3,*(undefined8 *)puVar2,0);
      puVar1 = PTR_DAT_092c2570;
      if (lVar7 == 0) goto LAB_072a61ac;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = uVar3;
        thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x20),uVar3);
        uVar3 = FUN_04077674(*unaff_x24,0x20);
        FUN_07593f88(uVar3,*(undefined8 *)puVar1,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar7 + 0x28) = uVar3;
          thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x28),uVar3);
          puVar1 = PTR_DAT_092c2568;
          if (lVar5 == 0) {
LAB_072a61ac:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(long *)(lVar5 + 0x20) = lVar7;
            thunk_FUN_040ec700((long *)(lVar5 + 0x20),lVar7);
            lVar7 = FUN_04077674(*unaff_x26,2);
            uVar3 = FUN_04077674(*unaff_x24,0x20);
            FUN_07593f88(uVar3,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_092c25c8;
            if (lVar7 == 0) goto LAB_072a61ac;
            if (*(int *)(lVar7 + 0x18) != 0) {
              *(undefined8 *)(lVar7 + 0x20) = uVar3;
              thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x20),uVar3);
              uVar3 = FUN_04077674(*unaff_x24,0x20);
              FUN_07593f88(uVar3,*(undefined8 *)puVar1,0);
              if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar7 + 0x28) = uVar3;
                thunk_FUN_040ec700((undefined8 *)(lVar7 + 0x28),uVar3);
                puVar2 = PTR_DAT_092c2560;
                puVar1 = PTR_DAT_092c2558;
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                  *(long *)(lVar5 + 0x28) = lVar7;
                  thunk_FUN_040ec700((long *)(lVar5 + 0x28),lVar7);
                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x40);
                  *plVar6 = lVar5;
                  thunk_FUN_040ec700(plVar6,lVar5);
                  uVar3 = FUN_04077674(*unaff_x24,8);
                  FUN_07593f88(uVar3,*(undefined8 *)puVar2,0);
                  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x48);
                  *puVar4 = uVar3;
                  thunk_FUN_040ec700(puVar4,uVar3);
                  uVar3 = FUN_04077674(*unaff_x24,8);
                  FUN_07593f88(uVar3,*(undefined8 *)puVar1,0);
                  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x50);
                  *puVar4 = uVar3;
                  thunk_FUN_040ec700(puVar4,uVar3);
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


