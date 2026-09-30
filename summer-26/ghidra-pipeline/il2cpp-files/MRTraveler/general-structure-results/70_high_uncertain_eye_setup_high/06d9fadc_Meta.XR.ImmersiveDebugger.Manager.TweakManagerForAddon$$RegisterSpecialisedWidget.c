/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$RegisterSpecialisedWidget
ENTRY_POINT: 06d9fadc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__RegisterSpecialisedWidget(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar6;
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar7;
  
  *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x21;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xb0));
  *(undefined4 *)(unaff_x19 + 0xa8) = unaff_w20;
  lVar3 = FUN_03c8f97c(*unaff_x24,2);
  uVar4 = FUN_03c8f97c(*unaff_x23,0x20);
  if (lVar3 == 0) goto LAB_06d9fdc4;
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20),uVar4);
    uVar4 = FUN_03c8f97c(*unaff_x23,0x20);
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      thunk_FUN_03d233cc();
      *(long *)(unaff_x19 + 0xd8) = lVar3;
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0xd8),lVar3);
      lVar3 = FUN_03c8f97c(*unaff_x24,2);
      uVar4 = FUN_03c8f97c(*unaff_x23,0x20);
      if (lVar3 == 0) goto LAB_06d9fdc4;
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = uVar4;
        thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20),uVar4);
        uVar4 = FUN_03c8f97c(*unaff_x23,0x20);
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_03d233cc();
          *(long *)(unaff_x19 + 0xb8) = lVar3;
          thunk_FUN_03d233cc((long *)(unaff_x19 + 0xb8),lVar3);
          lVar3 = FUN_03c8f97c(*unaff_x24,2);
          uVar4 = FUN_03c8f97c(*unaff_x23,*(int *)(unaff_x19 + 0xa8) * 0x180);
          if (lVar3 == 0) goto LAB_06d9fdc4;
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) = uVar4;
            thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20),uVar4);
            uVar4 = FUN_03c8f97c(*unaff_x23,*(int *)(unaff_x19 + 0xa8) * 0x180);
            puVar1 = PTR_DAT_08e8fb80;
            if (1 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x28) = uVar4;
              thunk_FUN_03d233cc();
              *(long *)(unaff_x19 + 0xc0) = lVar3;
              thunk_FUN_03d233cc((long *)(unaff_x19 + 0xc0),lVar3);
              lVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
              uVar4 = FUN_03c8f97c(*unaff_x24,3);
              if (lVar3 == 0) {
LAB_06d9fdc4:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if (*(int *)(lVar3 + 0x18) != 0) {
                *(undefined8 *)(lVar3 + 0x20) = uVar4;
                thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20),uVar4);
                uVar4 = FUN_03c8f97c(*unaff_x24,3);
                puVar1 = PTR_DAT_08e6abb8;
                if (1 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x28) = uVar4;
                  thunk_FUN_03d233cc();
                  plVar6 = (long *)(unaff_x19 + 200);
                  *plVar6 = lVar3;
                  thunk_FUN_03d233cc(plVar6,lVar3);
                  lVar3 = -3;
                  lVar7 = 0x20;
                  while (lVar5 = *plVar6, lVar5 != 0) {
                    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06d9fdc8;
                    lVar5 = *(long *)(lVar5 + 0x20);
                    uVar4 = FUN_03c8f97c(*unaff_x23,0x20);
                    if (lVar5 == 0) break;
                    if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar3 + 3U) goto LAB_06d9fdc8;
                    *(undefined8 *)(lVar5 + lVar7) = uVar4;
                    thunk_FUN_03d233cc();
                    lVar5 = *plVar6;
                    if (lVar5 == 0) break;
                    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06d9fdc8;
                    lVar5 = *(long *)(lVar5 + 0x28);
                    uVar4 = FUN_03c8f97c(*unaff_x23,0x20);
                    if (lVar5 == 0) break;
                    if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar3 + 3U) goto LAB_06d9fdc8;
                    *(undefined8 *)(lVar5 + lVar7) = uVar4;
                    thunk_FUN_03d233cc();
                    bVar2 = lVar3 == -1;
                    lVar3 = lVar3 + 1;
                    lVar7 = lVar7 + 8;
                    if (bVar2) {
                      uVar4 = FUN_03c8f97c(*(undefined8 *)puVar1,0x20);
                      *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
                      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xd0),uVar4);
                      return;
                    }
                  }
                  goto LAB_06d9fdc4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06d9fdc8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


