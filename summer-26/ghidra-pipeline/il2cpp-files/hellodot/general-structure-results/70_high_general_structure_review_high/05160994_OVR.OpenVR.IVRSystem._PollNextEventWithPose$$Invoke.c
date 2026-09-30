/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 05160994
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066071a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066071b0);
  *(undefined1 *)(unaff_x20 + 0xfbd) = 1;
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    return;
  }
  plVar8 = *(long **)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065defe0);
  FUN_047b28cc();
  puVar2 = PTR_DAT_065defe8;
  puVar1 = PTR_DAT_065c8998;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065defe8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_05160a70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065defe8,7);
LAB_05160a70:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x28);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_04e9e238();
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_05160afc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,9);
LAB_05160afc:
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      plVar8 = *(long **)(unaff_x19 + 0x28);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      FUN_04e9e238();
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
              goto LAB_05160b88;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0xb);
LAB_05160b88:
        (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
        plVar8 = *(long **)(unaff_x19 + 0x28);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
        FUN_04e9e238();
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
                goto LAB_05160c0c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0xd);
LAB_05160c0c:
                    /* WARNING: Could not recover jumptable at 0x05160c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


