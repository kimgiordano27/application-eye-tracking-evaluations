/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 01f94428
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__MarkerStart(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint in_w8;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar9;
  ulong unaff_x24;
  undefined1 unaff_w25;
  uint unaff_w26;
  long unaff_x28;
  
code_r0x01f94428:
  if (unaff_w26 < in_w8) {
    *(int *)(unaff_x19 + unaff_x28 * 4 + 0x20) = (int)unaff_x24;
    if (unaff_x20 == 0) goto LAB_01f94518;
    if (unaff_x24 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined1 *)(unaff_x20 + unaff_x24 + 0x20) = unaff_w25;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
      while( true ) {
        uVar4 = (uint)uVar5;
        if (unaff_w26 == uVar4) {
          return 0;
        }
        unaff_x24 = unaff_x24 + 1;
        if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) break;
        if ((int)uVar4 < 1) {
          unaff_w26 = 0;
        }
        else {
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_01f94514;
          unaff_w26 = 0;
          while( true ) {
            if ((uint)uVar5 <= unaff_w26) goto LAB_01f94514;
            unaff_x28 = (long)(int)unaff_w26;
            plVar3 = *(long **)(unaff_x22 + unaff_x28 * 8 + 0x20);
            if (plVar3 == (long *)0x0) goto LAB_01f94518;
            lVar9 = *(long *)(unaff_x21 + unaff_x24 * 8 + 0x20);
            uVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
            if (lVar9 == 0) goto LAB_01f94518;
            uVar6 = FUN_01e68100(lVar9,uVar5,0);
            if ((uVar6 & 1) != 0) {
              if (unaff_x19 == 0) goto LAB_01f94518;
              in_w8 = *(uint *)(unaff_x19 + 0x18);
              goto code_r0x01f94428;
            }
            uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
            unaff_w26 = unaff_w26 + 1;
            if ((int)uVar5 <= (int)unaff_w26) break;
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_01f94514;
          }
        }
      }
      if ((int)uVar4 < 1) {
        return 1;
      }
      if (unaff_x19 == 0) goto LAB_01f94518;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      uVar6 = 0;
      uVar7 = 0;
      while (uVar6 < uVar1) {
        puVar8 = (uint *)(unaff_x19 + uVar6 * 4 + 0x20);
        uVar2 = uVar7;
        if ((*puVar8 == 0xffffffff) && ((int)uVar7 < (int)uVar4)) {
          if (unaff_x20 == 0) {
LAB_01f94518:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          do {
            if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_01f94514;
            if (*(char *)(unaff_x20 + (int)uVar7 + 0x20) == '\0') {
              *puVar8 = uVar7;
              uVar2 = uVar7 + 1;
              break;
            }
            uVar7 = uVar7 + 1;
            uVar2 = uVar4;
          } while (uVar4 != uVar7);
        }
        uVar7 = uVar2;
        uVar6 = uVar6 + 1;
        if ((long)(int)uVar4 <= (long)uVar6) {
          return 1;
        }
      }
    }
  }
LAB_01f94514:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


