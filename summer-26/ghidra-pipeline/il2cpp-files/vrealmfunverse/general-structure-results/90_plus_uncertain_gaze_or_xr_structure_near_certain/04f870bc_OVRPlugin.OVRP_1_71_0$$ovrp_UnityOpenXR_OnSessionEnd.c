/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 04f870bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(void)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long *unaff_x21;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fVar2 = fStack0000000000000008;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_04f87114;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c();
LAB_04f87114:
    (*(code *)*puVar4)((long)&stack0x00000000 + 4);
    plVar8 = *(long **)(unaff_x19 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_04f87180;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x21,6);
LAB_04f87180:
      (*(code *)*puVar4)((long)&stack0x00000000 + 4,plVar8,puVar4[1]);
      iVar1 = *(int *)(unaff_x19 + 0x38);
      bVar3 = (in_stack_00000000._4_4_ & 0x20f) == 0;
      if ((iVar1 != 0) && ((fStack000000000000000c < DAT_01032234 || (iVar1 != 1)))) {
        bVar3 = (bool)((in_stack_00000000._4_4_ & 0x20f) == 0 &
                      ((iVar1 != 2 ||
                       (fVar2 < DAT_01032234 || fStack000000000000000c < DAT_01032234)) ^ 0xffU));
      }
      *(bool *)(unaff_x19 + 100) = bVar3;
      *(undefined4 *)(unaff_x19 + 0x78) = 0;
      *(float *)(unaff_x19 + 0x74) = 1.0 - fVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


