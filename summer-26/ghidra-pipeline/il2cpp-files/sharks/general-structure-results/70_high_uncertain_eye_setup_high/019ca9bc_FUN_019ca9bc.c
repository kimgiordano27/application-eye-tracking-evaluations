/*
FUNCTION_NAME: FUN_019ca9bc
ENTRY_POINT: 019ca9bc
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int FUN_019ca9bc(long *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  
  if ((DAT_03a2263d & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2f90);
    FUN_017fc350(PTR_DAT_037f47f0);
    FUN_017fc350(PTR_DAT_037f5ae8);
    FUN_017fc350(PTR_DAT_037f74d8);
    DAT_03a2263d = 1;
  }
  puVar5 = PTR_DAT_037f74d8;
  if (param_1 != (long *)0x0) {
    if (*param_1 == *(long *)PTR_DAT_037f5ae8) {
      iVar15 = 0;
      bVar4 = false;
      bVar3 = true;
      plVar13 = param_1;
      goto LAB_019caaa4;
    }
    if (*param_1 == *(long *)PTR_DAT_037f2f90) {
      piVar6 = (int *)thunk_FUN_01861d10(param_1);
      iVar15 = *piVar6;
      bVar3 = false;
      bVar4 = true;
      plVar13 = (long *)0x0;
      goto LAB_019caaa4;
    }
  }
  iVar15 = 0;
  bVar4 = false;
  bVar3 = false;
  plVar13 = (long *)0x0;
LAB_019caaa4:
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar7 = *(long *)puVar5;
  }
  uVar1 = *(uint *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if ((int)uVar1 < 1) {
    return 0;
  }
  uVar12 = 0;
  iVar14 = 0;
  do {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar7 = *(long *)puVar5;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
    if (lVar7 == 0) goto LAB_019cac14;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
    if (lVar7 != 0) {
      if (bVar3) {
        if ((*(long *)(lVar7 + 0x38) != 0) &&
           (uVar8 = FUN_02a4fe10(*(long *)(lVar7 + 0x38),plVar13,0), (uVar8 & 1) == 0))
        goto LAB_019cab58;
      }
      else if (bVar4) {
        if (*(int *)(lVar7 + 0x40) == iVar15) {
LAB_019cab58:
          if ((((param_2 & 1) == 0) || (*(char *)(lVar7 + 0x110) != '\0')) &&
             (iVar14 = iVar14 + 1, (param_3 & 1) != 0)) {
            if (param_4 == 0) {
LAB_019cac14:
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar10 = *(long *)(param_4 + 0x10);
            lVar11 = *(long *)PTR_DAT_037f47f0;
            *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_019cac14;
            uVar2 = *(uint *)(param_4 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(param_4 + 0x18) = uVar2 + 1;
              plVar9 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
              *plVar9 = lVar7;
              thunk_FUN_0188fd20(plVar9,lVar7);
            }
            else {
              FUN_0270a444(param_4,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      else if ((*(long *)(lVar7 + 0x30) != 0) &&
              (uVar8 = OVRPlugin__SetHandNodePoseStateLatency(param_1,*(long *)(lVar7 + 0x30),0),
              (uVar8 & 1) != 0)) goto LAB_019cab58;
    }
    if ((ulong)uVar1 - 1 == uVar12) {
      return iVar14;
    }
    lVar7 = *(long *)puVar5;
    uVar12 = uVar12 + 1;
  } while( true );
}


