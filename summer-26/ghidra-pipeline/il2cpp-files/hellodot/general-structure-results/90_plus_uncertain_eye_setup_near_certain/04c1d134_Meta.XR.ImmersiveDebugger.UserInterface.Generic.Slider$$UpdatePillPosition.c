/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 04c1d134
PROGRAM: hellodot-libil2cpp.so
SCORE: 143
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1d3fc) */
/* WARNING: Removing unreachable block (ram,0x04c1d3b4) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 uVar9;
  
  thunk_FUN_02cea4e8();
  if ((unaff_x21 != 0) &&
     (lVar3 = FUN_04dc8304(), puVar2 = PTR_DAT_065e56c8, puVar1 = PTR_DAT_065dcac8, lVar3 != 0)) {
    FUN_04dc7ae8(lVar3,0);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_0354ca54(uVar9,*(undefined8 *)puVar2);
    if ((uVar4 & 1) != 0) goto LAB_04c1d3b8;
    FUN_04dc7b08();
    plVar8 = *(long **)(unaff_x20 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e5938) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04c1d218;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e5938,0);
LAB_04c1d218:
      plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
      puVar2 = PTR_DAT_065e5940;
      puVar1 = PTR_DAT_065c8d08;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar3 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c1d288;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,0);
LAB_04c1d288:
        uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_04c1d3b8;
          lVar3 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_04c1d378;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_04c1d360;
        }
        lVar3 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c1d2e4;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_04c1d2e4:
        plVar6 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
        lVar3 = FUN_04dc7f18();
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar9,uVar9);
        }
        FUN_04dc7b08(lVar3,uVar9,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_04c1d360:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04c1d394;
    }
  }
LAB_04c1d378:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1d394:
  (*(code *)*puVar5)(plVar8,puVar5[1]);
LAB_04c1d3b8:
  FUN_04dc7b08();
  (**(code **)(*unaff_x19 + 0x168))();
  return;
}


