/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 06ac0454
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions(long param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((DAT_086e2206 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ccf80,1);
    DataMemoryBarrier(2,3);
    DAT_086e2206 = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  if (uVar3 == 0) {
    return;
  }
  uVar8 = 0;
  do {
    if ((uVar3 >> (ulong)((uint)uVar8 & 0x1f) & 1) != 0) {
      plVar9 = *(long **)(param_1 + 0x38);
      if (plVar9 == (long *)0x0) {
LAB_06ac0590:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083ccf80) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06ac04f8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar9,DAT_083ccf80,0);
LAB_06ac04f8:
      puVar2 = (uint *)(*(code *)*puVar1)(plVar9,uVar8 & 0xffffffff,puVar1[1]);
      uVar3 = *puVar2;
      if (-1 < (int)uVar3) {
        lVar4 = *(long *)(param_1 + 0x18);
        if ((lVar4 == 0) || (lVar7 = *(long *)(param_1 + 0x10), lVar7 == 0)) goto LAB_06ac0590;
        if ((((uint)*(ulong *)(lVar4 + 0x18) <= uVar3) || (*(uint *)(lVar7 + 0x18) <= uVar8)) ||
           ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= uVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        FUN_06a70228(lVar4 + (ulong)uVar3 * 0x1c + 0x20,lVar7 + uVar8 * 0x1c + 0x20,
                     lVar4 + uVar8 * 0x1c + 0x20,0);
      }
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 0x18) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x44);
  } while( true );
}


