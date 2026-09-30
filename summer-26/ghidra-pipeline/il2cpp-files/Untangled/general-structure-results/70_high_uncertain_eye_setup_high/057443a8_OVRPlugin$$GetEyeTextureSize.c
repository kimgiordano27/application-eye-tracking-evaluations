/*
FUNCTION_NAME: OVRPlugin$$GetEyeTextureSize
ENTRY_POINT: 057443a8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057445c8) */

long OVRPlugin__GetEyeTextureSize(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  plVar5 = (long *)FUN_05753320();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar9 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05744414;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)PTR_DAT_06d581b0,0);
LAB_05744414:
  puVar4 = PTR_DAT_06d3b610;
  puVar3 = PTR_DAT_06d02048;
  puVar2 = PTR_DAT_06d01f60;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  lVar9 = 0;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05744494;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar3,0);
LAB_05744494:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return lVar9;
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_05744580;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_057444f0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar4,0);
LAB_057444f0:
    lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    bVar1 = lVar9 != 0;
    lVar9 = lVar10;
    if (bVar1) {
      thunk_FUN_02f239f0(PTR_DAT_06d55148);
      uVar7 = thunk_FUN_02ef1808();
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d590f8);
      FUN_05693110(uVar7,uVar8,0);
      uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d59100);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar7,uVar8);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0574459c;
    }
  }
LAB_05744580:
  puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar2,0);
LAB_0574459c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar9;
}


