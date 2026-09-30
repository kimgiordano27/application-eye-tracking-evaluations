/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$BeginInvoke
ENTRY_POINT: 06dc7768
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__BeginInvoke(void)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e90cc8);
  FUN_03c8f898(PTR_DAT_08e90178);
  FUN_03c8f898(PTR_DAT_08e90d60);
  FUN_03c8f898(PTR_DAT_08e90c10);
  FUN_03c8f898(PTR_DAT_08e90780);
  *(undefined1 *)(unaff_x22 + 0xc52) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uVar3 = FUN_06dc5fa4();
  puVar2 = PTR_DAT_08e90178;
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_06dc5de4();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08e90c10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar5 = FUN_06dc4b68();
      if (((unaff_x19 == 0) || (lVar5 == 0)) ||
         (lVar5 = FUN_0681e440(lVar5,*(undefined8 *)(unaff_x19 + 0x20),
                               *(undefined8 *)PTR_DAT_08e90c30), lVar5 == 0)) goto LAB_06dc7a04;
      FUN_05213710(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_08e90d60);
      puVar2 = PTR_DAT_08e90d50;
      while (uVar3 = FUN_049dc4d0(&stack0x00000008,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
        FUN_06dc7a80(uVar3,in_stack_00000018);
      }
      FUN_049dc4cc(&stack0x00000008,*(undefined8 *)PTR_DAT_08e90d48);
    }
    return;
  }
  plVar7 = *(long **)(unaff_x21 + 0x48);
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90178) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06dc78c4;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e90178,1);
LAB_06dc78c4:
    (*(code *)*puVar4)(plVar7);
    plVar7 = *(long **)(unaff_x21 + 0x48);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_08e90780;
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_06dc7938;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,3);
LAB_06dc7938:
      (*(code *)*puVar4)(plVar7,uVar9);
      if (((unaff_x19 != 0) && (*(long *)(unaff_x21 + 0x40) != 0)) &&
         (plVar7 = *(long **)(unaff_x21 + 0x60), plVar7 != (long *)0x0)) {
        uVar9 = *(undefined8 *)(unaff_x21 + 0x48);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
        lVar5 = *plVar7;
        cVar1 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0xd0);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x28);
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e90cc8) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_06dc79c8;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e90cc8,2);
LAB_06dc79c8:
        (*(code *)*puVar4)(uVar10,plVar7,uVar9,uVar8,cVar1 != '\0',0,puVar4[1]);
        return;
      }
    }
  }
LAB_06dc7a04:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


