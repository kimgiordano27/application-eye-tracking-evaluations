/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 05be7868
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(long param_1)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x5d8));
  *(undefined1 *)(unaff_x20 + 0xd31) = 1;
  puVar2 = PTR_DAT_071125d8;
  plVar10 = *(long **)(unaff_x19 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_071125d8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_05be78d8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)PTR_DAT_071125d8,6);
LAB_05be78d8:
    (*(code *)*puVar5)((long)&stack0x00000000 + 4,plVar10,puVar5[1]);
    fVar3 = fStack0000000000000008;
    plVar10 = *(long **)(unaff_x19 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_05be7944;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar10,lVar6,6);
LAB_05be7944:
      (*(code *)*puVar5)((long)&stack0x00000000 + 4,plVar10,puVar5[1]);
      plVar10 = *(long **)(unaff_x19 + 0x28);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        lVar6 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_05be79b0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar10,lVar6,6);
LAB_05be79b0:
        (*(code *)*puVar5)((long)&stack0x00000000 + 4,plVar10,puVar5[1]);
        iVar1 = *(int *)(unaff_x19 + 0x38);
        bVar4 = (in_stack_00000000._4_4_ & 0x20f) == 0;
        if ((iVar1 != 0) && ((fStack000000000000000c < DAT_012e381c || (iVar1 != 1)))) {
          bVar4 = (bool)((in_stack_00000000._4_4_ & 0x20f) == 0 &
                        ((iVar1 != 2 ||
                         (fVar3 < DAT_012e381c || fStack000000000000000c < DAT_012e381c)) ^ 0xffU));
        }
        *(bool *)(unaff_x19 + 100) = bVar4;
        *(undefined4 *)(unaff_x19 + 0x78) = 0;
        *(float *)(unaff_x19 + 0x74) = 1.0 - fVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


