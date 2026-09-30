/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 02c49988
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4986c) */
/* WARNING: Removing unreachable block (ram,0x02c49a34) */

void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  long *unaff_x22;
  
  if (param_2 != 1) {
    if (unaff_x20 != (long *)0x0) {
      lVar9 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x02c49a1c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_0185dba8();
code_r0x02c49a1c:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_018fe5f4(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch();
  lVar9 = *plVar5;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02c4982c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c4982c:
    (*(code *)*puVar1)();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0(lVar9);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    FUN_02c49394();
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar2 = thunk_FUN_01861bbc();
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c848);
  uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb630);
  FUN_02b3cc64(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c878);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2,uVar3);
}


