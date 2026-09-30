/*
FUNCTION_NAME: FUN_0550d804
ENTRY_POINT: 0550d804
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0550d804(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_06bbf597 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf597 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_86_0_TypeInfo;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) goto LAB_0550d9cc;
  if ((*(uint *)(lVar5 + 0x14) >> 1 & 1) == 0) {
    if ((*(uint *)(lVar5 + 0x14) & 1) == 0) {
      if ((param_2 != 0) && (plVar9 = *(long **)(param_2 + 0x38), plVar9 != (long *)0x0)) {
        uVar1 = *(uint *)(lVar5 + 0x10);
        if ((param_3 != 0) &&
           (lVar5 = thunk_FUN_02f45174(param_3,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
          uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar4,0);
        }
        if (uVar1 < *(uint *)(plVar9 + 3)) {
          plVar9[(long)(int)uVar1 + 4] = param_3;
          return;
        }
LAB_0550d9d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
LAB_0550d9cc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x38), lVar6 == 0)) goto LAB_0550d9cc;
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar5 + 0x10)) goto LAB_0550d9d0;
    lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(lVar5 + 0x10) * 8 + 0x20);
    if (lVar6 == 0) goto LAB_0550d9cc;
    uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo;
    lVar5 = thunk_FUN_02f45174(lVar6,uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar6,uVar4);
    }
    lVar5 = *(long *)puVar2;
    plVar9 = (long *)thunk_FUN_02f45174(lVar6,lVar5);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar6,lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_0550d9a0;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x40), lVar6 == 0)) goto LAB_0550d9cc;
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar5 + 0x10)) goto LAB_0550d9d0;
    plVar9 = *(long **)(lVar6 + (long)(int)*(uint *)(lVar5 + 0x10) * 8 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_0550d9cc;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)OVRPlugin_OVRP_1_86_0_TypeInfo;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_0550d9a0;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar9,lVar5,1);
LAB_0550d9b0:
                    /* WARNING: Could not recover jumptable at 0x0550d9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar9,param_3,puVar3[1]);
  return;
LAB_0550d9a0:
  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  goto LAB_0550d9b0;
}


