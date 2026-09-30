/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 066ea208
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(void)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  char *unaff_x21;
  uint uVar7;
  byte *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x26;
  long *in_stack_00000000;
  long *in_stack_00000008;
  
  FUN_0675ff58();
  uVar2 = FUN_06684430();
  if ((uVar2 & 1) != 0) {
    *unaff_x22 = 1;
    return;
  }
  uVar8 = *unaff_x24;
  if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 066ea240 to 067ea3af has its CatchHandler @ 066ea240
                       catch() { ... } // from try @ 066ea240 with catch @ 066ea240
                       catch() { ... } // from try @ 066ea4a8 with catch @ 066ea240
                       catch() { ... } // from try @ 066ea510 with catch @ 066ea240
                       catch() { ... } // from try @ 066ea550 with catch @ 066ea240
                       catch() { ... } // from try @ 066ea58c with catch @ 066ea240 */
  FUN_0675ff58(uVar8,0);
  bVar1 = FUN_06684430();
  *unaff_x22 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    return;
  }
  if (*unaff_x21 != '\0') {
    FUN_066ea600(&stack0x00000008);
  }
  if ((unaff_x20 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_066ea5f4;
  }
  else {
    FUN_06797008(0);
    if (unaff_x19 == 0) goto LAB_066ea5f4;
    FUN_065d8050();
  }
  FUN_065d8050();
  if (in_stack_00000000 != (long *)0x0) {
    (**(code **)(*in_stack_00000000 + 0x168))
              (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x170));
    FUN_065d8050();
    FUN_065d8050();
    if (in_stack_00000008 != (long *)0x0) {
      (**(code **)(*in_stack_00000008 + 0x1b8))
                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
      FUN_065d8050();
      if (in_stack_00000008 != (long *)0x0) {
        uVar2 = (**(code **)(*in_stack_00000008 + 0x318))
                          (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 800));
        if ((uVar2 & 1) != 0) {
          if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
          lVar6 = *in_stack_00000008;
          bVar1 = *(byte *)(*(long *)PTR_DAT_08497210 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08497210
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40();
          }
          in_stack_00000008 =
               (long *)(**(code **)(lVar6 + 0x408))
                                 (in_stack_00000008,*(undefined8 *)(lVar6 + 0x410));
          if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
          lVar6 = (**(code **)(*in_stack_00000008 + 0x338))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x340));
          FUN_065d8050();
          if (lVar6 == 0) goto LAB_066ea5f4;
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (0 < (int)uVar5) {
            uVar7 = 0;
            do {
              if (uVar7 != 0) {
                FUN_065d8050();
                uVar5 = *(uint *)(lVar6 + 0x18);
              }
              if (uVar5 <= uVar7) goto LAB_066ea5f8;
              plVar3 = *(long **)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
              if (plVar3 == (long *)0x0) goto LAB_066ea5f4;
              (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
              FUN_065d8050();
              uVar5 = *(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)uVar5);
          }
          FUN_065d8050();
        }
        if (in_stack_00000008 != (long *)0x0) {
          lVar6 = (**(code **)(*in_stack_00000008 + 600))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
          FUN_065d8050();
          if (lVar6 != 0) {
            uVar5 = *(uint *)(lVar6 + 0x18);
            if (0 < (int)uVar5) {
              uVar7 = 0;
              do {
                if (uVar7 != 0) {
                  FUN_065d8050();
                  uVar5 = *(uint *)(lVar6 + 0x18);
                }
                if (uVar5 <= uVar7) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
                  FUN_03a8a9c8();
                }
                plVar9 = (long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
                plVar3 = (long *)*plVar9;
                if (((plVar3 == (long *)0x0) ||
                    (plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))
                                                (plVar3,*(undefined8 *)(*plVar3 + 0x1f0)),
                    plVar3 == (long *)0x0)) ||
                   ((uVar2 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0))
                    , (uVar2 & 1) != 0 &&
                    ((uVar2 = (**(code **)(*plVar3 + 1000))(plVar3,*(undefined8 *)(*plVar3 + 0x3f0))
                     , (uVar2 & 1) == 0 &&
                     (plVar3 = (long *)(**(code **)(*plVar3 + 0x458))
                                                 (plVar3,*(undefined8 *)(*plVar3 + 0x460)),
                     plVar3 == (long *)0x0)))))) goto LAB_066ea5f4;
                (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                FUN_065d8050();
                if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_066ea5f8;
                plVar3 = (long *)*plVar9;
                if (plVar3 == (long *)0x0) goto LAB_066ea5f4;
                lVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
                if (lVar4 != 0) {
                  FUN_065d8050();
                  if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_066ea5f8;
                  plVar9 = (long *)*plVar9;
                  if (plVar9 == (long *)0x0) goto LAB_066ea5f4;
                  (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                  FUN_065d8050();
                }
                uVar5 = *(uint *)(lVar6 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < (int)uVar5);
            }
            FUN_065d8050();
            return;
          }
        }
      }
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


