/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsReady
ENTRY_POINT: 08a296a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__get_IsReady(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined4 uVar10;
  
  *(undefined1 *)(unaff_x20 + 0x32c) = 1;
  lVar4 = FUN_08a28878();
  if (lVar4 != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar4 + 0x60);
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x20));
    uVar1 = *(undefined1 *)(lVar4 + 0x40);
    plVar9 = *(long **)(unaff_x19 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x2c) = *(undefined8 *)(lVar4 + 0x44);
    uVar10 = *(undefined4 *)(lVar4 + 0x4c);
    *(undefined1 *)(unaff_x19 + 0x28) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x34) = uVar10;
    puVar3 = PTR_DAT_0ac4c7d8;
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      cVar2 = *(char *)(lVar4 + 0x41);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_08a2974c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac4c7d8,1);
LAB_08a2974c:
      (*(code *)*puVar5)(plVar9,cVar2 != '\0',puVar5[1]);
      plVar9 = *(long **)(unaff_x19 + 0x58);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        cVar2 = *(char *)(lVar4 + 0x42);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_08a297bc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar9,*(long *)puVar3,1);
LAB_08a297bc:
        (*(code *)*puVar5)(plVar9,cVar2 != '\0',puVar5[1]);
        FUN_08a29850();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


