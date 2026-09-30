/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon$$.ctor
ENTRY_POINT: 06d9fa54
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


void Meta_XR_ImmersiveDebugger_Manager_SubManagerForAddon___ctor
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x23;
  long lVar9;
  
  puVar1 = PTR_DAT_08e8fb88;
  if ((*(byte *)(unaff_x23 + 0xad2) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8fb80);
    FUN_03c8f898(PTR_DAT_08e8afd0);
    FUN_03c8f898(PTR_DAT_08e6baa0);
    FUN_03c8f898(PTR_DAT_08e8fb88);
    FUN_03c8f898(PTR_DAT_08e6abb8);
    *(undefined1 *)(unaff_x23 + 0xad2) = 1;
  }
  puVar3 = PTR_DAT_08e8afd0;
  puVar2 = PTR_DAT_08e6baa0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_06d9e1e8(param_1);
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0xb0),param_2);
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
  uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x20);
  if (lVar5 == 0) goto LAB_06d9fdc4;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
    uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x20);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      thunk_FUN_03d233cc();
      *(long *)(param_1 + 0xd8) = lVar5;
      thunk_FUN_03d233cc((long *)(param_1 + 0xd8),lVar5);
      lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
      uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x20);
      if (lVar5 == 0) goto LAB_06d9fdc4;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
        uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x20);
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
          thunk_FUN_03d233cc();
          *(long *)(param_1 + 0xb8) = lVar5;
          thunk_FUN_03d233cc((long *)(param_1 + 0xb8),lVar5);
          lVar5 = FUN_03c8f97c(*(undefined8 *)puVar3,2);
          uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,*(int *)(param_1 + 0xa8) * 0x180);
          if (lVar5 == 0) goto LAB_06d9fdc4;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar6;
            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
            uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,*(int *)(param_1 + 0xa8) * 0x180);
            puVar1 = PTR_DAT_08e8fb80;
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x28) = uVar6;
              thunk_FUN_03d233cc();
              *(long *)(param_1 + 0xc0) = lVar5;
              thunk_FUN_03d233cc((long *)(param_1 + 0xc0),lVar5);
              lVar5 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
              uVar6 = FUN_03c8f97c(*(undefined8 *)puVar3,3);
              if (lVar5 == 0) {
LAB_06d9fdc4:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = uVar6;
                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
                uVar6 = FUN_03c8f97c(*(undefined8 *)puVar3,3);
                puVar1 = PTR_DAT_08e6abb8;
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar6;
                  thunk_FUN_03d233cc();
                  plVar8 = (long *)(param_1 + 200);
                  *plVar8 = lVar5;
                  thunk_FUN_03d233cc(plVar8,lVar5);
                  lVar5 = -3;
                  lVar9 = 0x20;
                  while (lVar7 = *plVar8, lVar7 != 0) {
                    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_06d9fdc8;
                    lVar7 = *(long *)(lVar7 + 0x20);
                    uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x20);
                    if (lVar7 == 0) break;
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar5 + 3U) goto LAB_06d9fdc8;
                    *(undefined8 *)(lVar7 + lVar9) = uVar6;
                    thunk_FUN_03d233cc();
                    lVar7 = *plVar8;
                    if (lVar7 == 0) break;
                    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_06d9fdc8;
                    lVar7 = *(long *)(lVar7 + 0x28);
                    uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x20);
                    if (lVar7 == 0) break;
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar5 + 3U) goto LAB_06d9fdc8;
                    *(undefined8 *)(lVar7 + lVar9) = uVar6;
                    thunk_FUN_03d233cc();
                    bVar4 = lVar5 == -1;
                    lVar5 = lVar5 + 1;
                    lVar9 = lVar9 + 8;
                    if (bVar4) {
                      uVar6 = FUN_03c8f97c(*(undefined8 *)puVar1,0x20);
                      *(undefined8 *)(param_1 + 0xd0) = uVar6;
                      thunk_FUN_03d233cc((undefined8 *)(param_1 + 0xd0),uVar6);
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


