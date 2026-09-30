/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 02c220b0
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02c22168) */

undefined8 OVRPlugin__SetTrackingOriginType(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long lVar7;
  
  if (param_2 != 1) {
    plVar3 = (long *)thunk_FUN_01861ac0();
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_037f3288) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x02c22150;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0185dba8(plVar3,*(long *)PTR_DAT_037f3288,0);
code_r0x02c22150:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_018fe5f4();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  puVar1 = PTR_DAT_037f3288;
  plVar3 = (long *)thunk_FUN_01861ac0();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02c21ffc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8(plVar3,*(long *)puVar1,0);
LAB_02c21ffc:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0(lVar7);
  }
  *unaff_x19 = 0;
  return 0xffffffff;
}


