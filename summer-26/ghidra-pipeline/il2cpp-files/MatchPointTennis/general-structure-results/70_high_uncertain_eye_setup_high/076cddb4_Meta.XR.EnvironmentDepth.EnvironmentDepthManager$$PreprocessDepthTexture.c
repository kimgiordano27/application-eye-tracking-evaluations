/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$PreprocessDepthTexture
ENTRY_POINT: 076cddb4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__PreprocessDepthTexture(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar10;
  
  puVar2 = PTR_DAT_09f2cfc8;
  puVar1 = PTR_DAT_09f2cfc0;
  uVar10 = 0;
  do {
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076cde18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(param_1,*(long *)puVar1,0);
LAB_076cde18:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if ((long)iVar3 <= (long)uVar10) {
      return;
    }
    plVar5 = (long *)(**(code **)(*unaff_x20 + 0x1e8))();
    if (plVar5 == (long *)0x0) break;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076cde90;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cde90:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,uVar10 & 0xffffffff,puVar4[1]);
    if (plVar5 == (long *)0x0) break;
    lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar7 != 0) {
      if ((unaff_x19 == 0) || (lVar7 = *(long *)(unaff_x19 + 0x10), lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) break;
      if (*(long *)(lVar7 + 0x18) == 0) {
        lVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar6 == 0) break;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x18),0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        lVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar6 == 0) break;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x10),0);
      }
      if (*(long *)(lVar7 + 0x20) == 0) {
        lVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar6 == 0) break;
        *(undefined8 *)(lVar6 + 0x20) = 0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x20),0);
      }
      if (*(long *)(lVar7 + 0x28) == 0) {
        lVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar6 == 0) break;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x28),0);
      }
      if (*(long *)(lVar7 + 0x30) == 0) {
        lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar7 == 0) break;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x30),0);
      }
    }
    uVar10 = uVar10 + 1;
    param_1 = (long *)(**(code **)(*unaff_x20 + 0x1e8))();
  } while (param_1 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


