/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$AddSegment
ENTRY_POINT: 0729ba5c
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


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__AddSegment(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  ulong uVar6;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  thunk_FUN_040ec700();
  *(long *)(unaff_x19 + 0xd8) = unaff_x20;
  thunk_FUN_040ec700();
  lVar2 = FUN_04077674(*unaff_x24,2);
  uVar3 = FUN_04077674(*unaff_x23,0x20);
  if (lVar2 == 0) goto LAB_0729bcd8;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),uVar3);
    uVar3 = FUN_04077674(*unaff_x23,0x20);
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_040ec700();
      *(long *)(unaff_x19 + 0xb8) = lVar2;
      thunk_FUN_040ec700((long *)(unaff_x19 + 0xb8),lVar2);
      lVar2 = FUN_04077674(*unaff_x24,2);
      uVar3 = FUN_04077674(*unaff_x23,*(int *)(unaff_x19 + 0xa8) * 0x180);
      if (lVar2 == 0) goto LAB_0729bcd8;
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),uVar3);
        uVar3 = FUN_04077674(*unaff_x23,*(int *)(unaff_x19 + 0xa8) * 0x180);
        puVar1 = PTR_DAT_092c2228;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          thunk_FUN_040ec700();
          *(long *)(unaff_x19 + 0xc0) = lVar2;
          thunk_FUN_040ec700((long *)(unaff_x19 + 0xc0),lVar2);
          lVar2 = FUN_04077674(*(undefined8 *)puVar1,2);
          uVar3 = FUN_04077674(*unaff_x24,3);
          if (lVar2 == 0) {
LAB_0729bcd8:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(lVar2 + 0x18) != 0) {
            *(undefined8 *)(lVar2 + 0x20) = uVar3;
            thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),uVar3);
            uVar3 = FUN_04077674(*unaff_x24,3);
            puVar1 = PTR_DAT_09286860;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar2 + 0x28) = uVar3;
              thunk_FUN_040ec700();
              plVar5 = (long *)(unaff_x19 + 200);
              *plVar5 = lVar2;
              thunk_FUN_040ec700(plVar5,lVar2);
              uVar6 = 0;
              lVar2 = 0x20;
              while (lVar4 = *plVar5, lVar4 != 0) {
                if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0729bcd4;
                lVar4 = *(long *)(lVar4 + 0x20);
                uVar3 = FUN_04077674(*unaff_x23,0x20);
                if (lVar4 == 0) break;
                if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0729bcd4;
                *(undefined8 *)(lVar4 + lVar2) = uVar3;
                thunk_FUN_040ec700(lVar4 + lVar2,uVar3);
                lVar4 = *plVar5;
                if (lVar4 == 0) break;
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_0729bcd4;
                lVar4 = *(long *)(lVar4 + 0x28);
                uVar3 = FUN_04077674(*unaff_x23,0x20);
                if (lVar4 == 0) break;
                if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0729bcd4;
                *(undefined8 *)(lVar4 + lVar2) = uVar3;
                thunk_FUN_040ec700(lVar4 + lVar2,uVar3);
                uVar6 = uVar6 + 1;
                lVar2 = lVar2 + 8;
                if (uVar6 == 3) {
                  uVar3 = FUN_04077674(*(undefined8 *)puVar1,0x20);
                  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
                  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xd0),uVar3);
                  return;
                }
              }
              goto LAB_0729bcd8;
            }
          }
        }
      }
    }
  }
LAB_0729bcd4:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


