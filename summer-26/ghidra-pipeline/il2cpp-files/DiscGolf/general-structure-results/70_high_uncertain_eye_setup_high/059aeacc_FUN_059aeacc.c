/*
FUNCTION_NAME: FUN_059aeacc
ENTRY_POINT: 059aeacc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_059aeacc(uint param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  
  if ((DAT_06dc148b & 1) == 0) {
    FUN_02d965b8(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_06dc148b = 1;
  }
  puVar7 = OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo;
  uVar1 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar1 = param_4;
  }
  param_1 = ~param_1;
  uVar23 = param_3;
  if (7 < (int)param_4) {
    if (param_2 == 0) {
LAB_059aede0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar24 = (int)uVar1 >> 3;
    uVar17 = *(undefined8 *)(param_2 + 0x18);
    uVar23 = (uVar1 & 0xfffffff8) + param_3;
    do {
      uVar16 = (uint)uVar17;
      if ((((uVar16 <= param_3) || (uVar16 <= param_3 + 1)) || (uVar16 <= param_3 + 2)) ||
         (uVar16 <= param_3 + 3)) goto LAB_059aeddc;
      lVar8 = *(long *)puVar7;
      uVar2 = *(undefined1 *)(param_2 + (int)param_3 + 0x20);
      uVar3 = *(undefined1 *)(param_2 + (int)(param_3 + 1) + 0x20);
      uVar4 = *(undefined1 *)(param_2 + 0x20 + (long)(int)(param_3 + 2));
      uVar5 = *(undefined1 *)(param_2 + 0x20 + (long)(int)(param_3 + 3));
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar7;
      }
      plVar18 = *(long **)(lVar8 + 0xb8);
      lVar8 = plVar18[7];
      if (lVar8 == 0) goto LAB_059aede0;
      param_1 = CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2))) ^ param_1;
      if (*(uint *)(lVar8 + 0x18) <= (param_1 & 0xff)) goto LAB_059aeddc;
      lVar20 = plVar18[6];
      if (lVar20 == 0) goto LAB_059aede0;
      uVar16 = param_1 >> 8 & 0xff;
      if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_059aeddc;
      lVar21 = plVar18[5];
      if (lVar21 == 0) goto LAB_059aede0;
      uVar6 = param_1 >> 0x10 & 0xff;
      if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_059aeddc;
      lVar22 = plVar18[4];
      if (lVar22 == 0) goto LAB_059aede0;
      if (*(uint *)(lVar22 + 0x18) <= param_1 >> 0x18) goto LAB_059aeddc;
      uVar17 = *(undefined8 *)(param_2 + 0x18);
      uVar10 = (uint)uVar17;
      if (((uVar10 <= param_3 + 4) || (uVar10 <= param_3 + 5)) ||
         ((uVar10 <= param_3 + 6 || (uVar10 <= param_3 + 7)))) goto LAB_059aeddc;
      lVar9 = plVar18[3];
      if (lVar9 == 0) goto LAB_059aede0;
      uVar10 = (uint)*(byte *)(param_2 + (int)(param_3 + 4) + 0x20);
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_059aeddc;
      lVar11 = plVar18[2];
      if (lVar11 == 0) goto LAB_059aede0;
      uVar12 = (uint)*(byte *)(param_2 + (int)(param_3 + 5) + 0x20);
      if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_059aeddc;
      lVar13 = plVar18[1];
      if (lVar13 == 0) goto LAB_059aede0;
      uVar14 = (uint)*(byte *)(param_2 + (int)(param_3 + 6) + 0x20);
      if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_059aeddc;
      lVar19 = *plVar18;
      if (lVar19 == 0) goto LAB_059aede0;
      uVar15 = (uint)*(byte *)(param_2 + (int)(param_3 + 7) + 0x20);
      if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_059aeddc;
      iVar24 = iVar24 + -1;
      param_3 = param_3 + 8;
      param_1 = *(uint *)(lVar20 + (ulong)uVar16 * 4 + 0x20) ^
                *(uint *)(lVar8 + (ulong)(param_1 & 0xff) * 4 + 0x20) ^
                *(uint *)(lVar21 + (ulong)uVar6 * 4 + 0x20) ^
                *(uint *)(lVar22 + (ulong)(param_1 >> 0x18) * 4 + 0x20) ^
                *(uint *)(lVar9 + (ulong)uVar10 * 4 + 0x20) ^
                *(uint *)(lVar11 + (ulong)uVar12 * 4 + 0x20) ^
                *(uint *)(lVar13 + (ulong)uVar14 * 4 + 0x20) ^
                *(uint *)(lVar19 + (ulong)uVar15 * 4 + 0x20);
    } while (iVar24 != 0);
  }
  iVar24 = param_4 - (uVar1 & 0xfffffff8);
  if (0 < iVar24) {
    lVar8 = *(long *)puVar7;
    do {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar7;
      }
      if (param_2 == 0) goto LAB_059aede0;
      if (*(uint *)(param_2 + 0x18) <= uVar23) {
LAB_059aeddc:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar20 = **(long **)(lVar8 + 0xb8);
      if (lVar20 == 0) goto LAB_059aede0;
      uVar1 = *(byte *)(param_2 + (int)uVar23 + 0x20) ^ param_1;
      if (*(uint *)(lVar20 + 0x18) <= (uVar1 & 0xff)) goto LAB_059aeddc;
      iVar24 = iVar24 + -1;
      uVar23 = uVar23 + 1;
      param_1 = *(uint *)(lVar20 + (ulong)(byte)uVar1 * 4 + 0x20) ^ param_1 >> 8;
    } while (iVar24 != 0);
  }
  return ~param_1;
}


