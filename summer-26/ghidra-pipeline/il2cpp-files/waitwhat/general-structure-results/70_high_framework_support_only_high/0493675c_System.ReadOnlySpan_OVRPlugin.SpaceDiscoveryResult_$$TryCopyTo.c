/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$TryCopyTo
ENTRY_POINT: 0493675c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  float fVar7;
  float unaff_s12;
  undefined1 auVar8 [16];
  
  fVar6 = (float)(*(code *)*param_1)();
  if (*(long *)(unaff_x19 + 0x500) != 0) {
                    /* try { // try from 04936770 to 04a36783 has its CatchHandler @ 049368e4 */
    fVar7 = *(float *)(unaff_x19 + 0x4b8);
    plVar1 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x500),0);
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 04936784 to 04a368db has its CatchHandler @ 049366ac */
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      fVar6 = (float)(int)(fVar6 * fVar7) - (unaff_s12 + unaff_s10 + unaff_s8);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x4e) * 0x10 + 0x138);
            goto LAB_049367ec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar1,*unaff_x24,0x4e);
LAB_049367ec:
      fVar7 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
      if (ABS(fVar7 - fVar6) <= DAT_012e37c4) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x500) != 0) {
        plVar1 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
        fVar7 = 0.0;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        auVar8 = FUN_06b3dc78(fVar7,0);
        if (plVar1 != (long *)0x0) {
          lVar3 = *plVar1;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x25) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xa5) * 0x10 + 0x138);
                goto LAB_049368b0;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_031c0d08(plVar1,*unaff_x25,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar2)(plVar1,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,puVar2[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


