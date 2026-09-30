/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveAnchorCreatedEvent
ENTRY_POINT: 072a5dec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveAnchorCreatedEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x26 + 0x588);
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x21;
  thunk_FUN_040ec700((undefined8 *)(unaff_x22 + 0x28));
  uVar5 = FUN_04077674(*unaff_x25,4);
  FUN_07593f88(uVar5,*puVar9,0);
  if (2 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x30),uVar5);
    puVar4 = PTR_DAT_092c25f8;
    puVar3 = PTR_DAT_092c2530;
    puVar2 = PTR_DAT_092c24d8;
    puVar1 = PTR_DAT_092c2208;
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(long *)(unaff_x19 + 0x48) = unaff_x20;
      thunk_FUN_040ec700();
      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
      thunk_FUN_040ec700();
      uVar5 = FUN_04077674(*unaff_x25,0x16);
      FUN_07593f88(uVar5,*(undefined8 *)puVar3,0);
      puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
      *puVar9 = uVar5;
      thunk_FUN_040ec700(puVar9,uVar5);
      uVar5 = FUN_04077674(*unaff_x24,0x40);
      FUN_07593f88(uVar5,*(undefined8 *)puVar2,0);
      puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
      *puVar9 = uVar5;
      thunk_FUN_040ec700(puVar9,uVar5);
      lVar6 = FUN_04077674(*(undefined8 *)puVar1,2);
      uVar5 = FUN_04077674(*unaff_x24,7);
      FUN_07593f88(uVar5,*(undefined8 *)puVar4,0);
      puVar2 = PTR_DAT_092c25f0;
      if (lVar6 == 0) goto LAB_072a61ac;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),uVar5);
        uVar5 = FUN_04077674(*unaff_x24,7);
        FUN_07593f88(uVar5,*(undefined8 *)puVar2,0);
        puVar3 = PTR_DAT_092c24e8;
        puVar2 = PTR_DAT_092c2238;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = uVar5;
          thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),uVar5);
          plVar7 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x38);
          *plVar7 = lVar6;
          thunk_FUN_040ec700(plVar7,lVar6);
          lVar6 = FUN_04077674(*(undefined8 *)puVar2,2);
          lVar8 = FUN_04077674(*(undefined8 *)puVar1,2);
          uVar5 = FUN_04077674(*unaff_x24,0x20);
          FUN_07593f88(uVar5,*(undefined8 *)puVar3,0);
          puVar2 = PTR_DAT_092c2570;
          if (lVar8 == 0) goto LAB_072a61ac;
          if (*(int *)(lVar8 + 0x18) != 0) {
            *(undefined8 *)(lVar8 + 0x20) = uVar5;
            thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x20),uVar5);
            uVar5 = FUN_04077674(*unaff_x24,0x20);
            FUN_07593f88(uVar5,*(undefined8 *)puVar2,0);
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar8 + 0x28) = uVar5;
              thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x28),uVar5);
              puVar2 = PTR_DAT_092c2568;
              if (lVar6 == 0) {
LAB_072a61ac:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(int *)(lVar6 + 0x18) != 0) {
                *(long *)(lVar6 + 0x20) = lVar8;
                thunk_FUN_040ec700((long *)(lVar6 + 0x20),lVar8);
                lVar8 = FUN_04077674(*(undefined8 *)puVar1,2);
                uVar5 = FUN_04077674(*unaff_x24,0x20);
                FUN_07593f88(uVar5,*(undefined8 *)puVar2,0);
                puVar1 = PTR_DAT_092c25c8;
                if (lVar8 == 0) goto LAB_072a61ac;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined8 *)(lVar8 + 0x20) = uVar5;
                  thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x20),uVar5);
                  uVar5 = FUN_04077674(*unaff_x24,0x20);
                  FUN_07593f88(uVar5,*(undefined8 *)puVar1,0);
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar8 + 0x28) = uVar5;
                    thunk_FUN_040ec700((undefined8 *)(lVar8 + 0x28),uVar5);
                    puVar2 = PTR_DAT_092c2560;
                    puVar1 = PTR_DAT_092c2558;
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                      *(long *)(lVar6 + 0x28) = lVar8;
                      thunk_FUN_040ec700((long *)(lVar6 + 0x28),lVar8);
                      plVar7 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x40);
                      *plVar7 = lVar6;
                      thunk_FUN_040ec700(plVar7,lVar6);
                      uVar5 = FUN_04077674(*unaff_x24,8);
                      FUN_07593f88(uVar5,*(undefined8 *)puVar2,0);
                      puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x48);
                      *puVar9 = uVar5;
                      thunk_FUN_040ec700(puVar9,uVar5);
                      uVar5 = FUN_04077674(*unaff_x24,8);
                      FUN_07593f88(uVar5,*(undefined8 *)puVar1,0);
                      puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x50);
                      *puVar9 = uVar5;
                      thunk_FUN_040ec700(puVar9,uVar5);
                      return;
                    }
                  }
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


