/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 05d3e024
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcInputVideoBufferType(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  ulong in_stack_00000000;
  float in_stack_00000008;
  
  *(undefined1 *)(unaff_x20 + 0xad6) = in_w8;
  puVar2 = PTR_DAT_06fb4e90;
  plVar9 = *(long **)(unaff_x19 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06fb4e90) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_05d3e088;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)PTR_DAT_06fb4e90,6);
LAB_05d3e088:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      lVar4 = *(long *)puVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_05d3e0f4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar9,lVar4,6);
LAB_05d3e0f4:
      (*(code *)*puVar3)(plVar9,puVar3[1]);
      plVar9 = *(long **)(unaff_x19 + 0x28);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        lVar4 = *(long *)puVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_05d3e160;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02feb5b8(plVar9,lVar4,6);
LAB_05d3e160:
        (*(code *)*puVar3)(plVar9,puVar3[1]);
        iVar1 = *(int *)(unaff_x19 + 0x38);
        if (((iVar1 == 0) || ((DAT_01369eb0 <= in_stack_00000008 && (iVar1 == 1)))) ||
           ((bVar7 = false, DAT_01369eb0 <= in_stack_00000000._4_4_ &&
            ((DAT_01369eb0 <= in_stack_00000008 && (iVar1 == 2)))))) {
          bVar7 = (in_stack_00000000 & 0x20f) == 0;
        }
        *(bool *)(unaff_x19 + 100) = bVar7;
        *(float *)(unaff_x19 + 0x74) = 1.0 - in_stack_00000000._4_4_;
        *(undefined4 *)(unaff_x19 + 0x78) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


