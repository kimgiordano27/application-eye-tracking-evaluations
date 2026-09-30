/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager.<>c$$.cctor
ENTRY_POINT: 06da13f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager_<>c___cctor(void)

{
  uint uVar1;
  bool in_ZR;
  bool in_CY;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  long lVar9;
  
  if (!in_CY || in_ZR) goto LAB_06da185c;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    lVar4 = *(long *)(in_x9 + 0x20);
    lVar7 = *(long *)(in_x9 + 0x28);
    lVar9 = *(long *)(in_x9 + 0x30);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_06da1620;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06da1620:
    uVar2 = (*(code *)*puVar3)();
    if (lVar9 != 0) {
      if (unaff_x21 < *(uint *)(lVar9 + 0x18)) {
        *(undefined4 *)(lVar9 + unaff_x21 * 4 + 0x20) = uVar2;
        if (lVar7 == 0) goto LAB_06da1858;
        if (unaff_x21 < *(uint *)(lVar7 + 0x18)) {
          *(undefined4 *)(lVar7 + unaff_x21 * 4 + 0x20) = uVar2;
          if (lVar4 == 0) goto LAB_06da1858;
          if (unaff_x21 < *(uint *)(lVar4 + 0x18)) {
            while( true ) {
              *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = uVar2;
              unaff_w25 = unaff_w25 + 1;
              if (*(int *)(unaff_x20 + 0xa0) <= (int)unaff_w25) {
                do {
                  unaff_x21 = unaff_x21 + 1;
                  if (unaff_x21 == 0x20) {
                    return;
                  }
                } while (*(int *)(unaff_x20 + 0xa0) < 1);
                unaff_w25 = 0;
              }
              lVar4 = *(long *)(unaff_x20 + 0xb8);
              if (lVar4 == 0) goto LAB_06da1858;
              if (*(uint *)(lVar4 + 0x18) <= unaff_w25) break;
              lVar4 = *(long *)(lVar4 + (long)(int)unaff_w25 * 8 + 0x20);
              if (lVar4 == 0) goto LAB_06da1858;
              if (*(uint *)(lVar4 + 0x18) <= unaff_x21) break;
              uVar1 = *(uint *)(lVar4 + unaff_x21 * 4 + 0x20);
              if (uVar1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x06da1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)*(byte *)(unaff_x24 + (ulong)uVar1) * 4 + 0x6da124c))();
                return;
              }
              lVar4 = *(long *)(unaff_x20 + 200);
              if (lVar4 == 0) goto LAB_06da1858;
              if (*(uint *)(lVar4 + 0x18) <= unaff_w25) break;
              lVar4 = *(long *)(lVar4 + (long)(int)unaff_w25 * 8 + 0x20);
              if (lVar4 == 0) goto LAB_06da1858;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 == 0) break;
              lVar7 = *(long *)(lVar4 + 0x20);
              if (lVar7 == 0) goto LAB_06da1858;
              if ((*(uint *)(lVar7 + 0x18) <= unaff_x21) ||
                 (*(undefined4 *)(lVar7 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar1 < 2)) break;
              lVar7 = *(long *)(lVar4 + 0x28);
              if (lVar7 == 0) goto LAB_06da1858;
              if ((*(uint *)(lVar7 + 0x18) <= unaff_x21) ||
                 (*(undefined4 *)(lVar7 + unaff_x21 * 4 + 0x20) = unaff_w23, uVar1 < 3)) break;
              lVar4 = *(long *)(lVar4 + 0x30);
              if (lVar4 == 0) goto LAB_06da1858;
              if (*(uint *)(lVar4 + 0x18) <= unaff_x21) break;
              uVar2 = 0x3f;
            }
          }
        }
      }
LAB_06da185c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
LAB_06da1858:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


