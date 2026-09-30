/*
FUNCTION_NAME: FUN_0550e084
ENTRY_POINT: 0550e084
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0550e084(long param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_06bbf59c & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_107_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9648);
    DAT_06bbf59c = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (plVar3 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,
                                    *(int *)(*(long *)(param_1 + 0x38) + 0x18) + 1),
     plVar3 != (long *)0x0)) {
    uVar5 = plVar3[3];
    uVar6 = uVar5 & 0xffffffff;
    if (0 < (int)uVar5 + -1) {
      uVar8 = 0;
      uVar6 = uVar5 & 0xffffffff;
      do {
        uVar7 = (uint)uVar6;
        if ((param_2 == 0) || (lVar9 = *(long *)(param_1 + 0x38), lVar9 == 0)) goto LAB_0550e22c;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0550e230;
        lVar10 = *(long *)(param_2 + 0x38);
        if (lVar10 == 0) goto LAB_0550e22c;
        lVar11 = (long)(int)uVar8;
        uVar2 = *(uint *)(lVar9 + lVar11 * 0x10 + 0x20);
        if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0550e230;
        lVar9 = *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
        if (lVar9 != 0) {
          lVar10 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar10 == 0) goto LAB_0550e234;
          uVar7 = (uint)plVar3[3];
          uVar6 = plVar3[3] & 0xffffffff;
        }
        if (uVar7 <= uVar8) goto LAB_0550e230;
        uVar8 = uVar8 + 1;
        plVar3[lVar11 + 4] = lVar9;
      } while ((int)uVar8 < (int)uVar6 + -1);
    }
    if (param_3 != 0) {
      lVar9 = thunk_FUN_02f45174(param_3,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar9 == 0) {
LAB_0550e234:
        uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar4,0);
      }
      uVar6 = (ulong)*(uint *)(plVar3 + 3);
    }
    if ((int)uVar6 == 0) {
LAB_0550e230:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    cVar1 = *(char *)(param_1 + 0x20);
    *(long *)((long)plVar3 + ((long)((uVar6 << 0x20) + -0x100000000) >> 0x1d) + 0x20) = param_3;
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      if ((param_2 == 0) || (lVar9 = *(long *)(param_2 + 0x38), lVar9 == 0)) goto LAB_0550e22c;
      uVar8 = (uint)*(undefined8 *)(param_1 + 0x28);
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0550e230;
      uVar4 = *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_050163f0(*(long *)(param_1 + 0x18),uVar4,plVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(0,uVar4);
  }
LAB_0550e22c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


