/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 05744350
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057445c8) */

long OVRPlugin__GetEyeFrustum(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x1b0));
  FUN_02f07e70(PTR_DAT_06d3b610);
  FUN_02f07e70(PTR_DAT_06d02048);
  FUN_02f07e70(PTR_DAT_06d590f0);
  *(undefined1 *)(unaff_x22 + 0x9aa) = 1;
  lVar5 = thunk_FUN_02ef1808(*unaff_x23);
  FUN_05750690();
  if ((lVar5 == 0) || (plVar6 = (long *)FUN_05753320(lVar5), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar5 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05744414;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d581b0,0);
LAB_05744414:
  puVar4 = PTR_DAT_06d3b610;
  puVar3 = PTR_DAT_06d02048;
  puVar2 = PTR_DAT_06d01f60;
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  lVar5 = 0;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05744494;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar3,0);
LAB_05744494:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return lVar5;
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_05744580;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_057444f0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar4,0);
LAB_057444f0:
    lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    bVar1 = lVar5 != 0;
    lVar5 = lVar10;
    if (bVar1) {
      thunk_FUN_02f239f0(PTR_DAT_06d55148);
      uVar8 = thunk_FUN_02ef1808();
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d590f8);
      FUN_05693110(uVar8,uVar9,0);
      uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d59100);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar8,uVar9);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0574459c;
    }
  }
LAB_05744580:
  puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_0574459c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return lVar5;
}


