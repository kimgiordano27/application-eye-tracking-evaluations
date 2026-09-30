/*
FUNCTION_NAME: FUN_04cf21f8
ENTRY_POINT: 04cf21f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04cf25cc) */

void FUN_04cf21f8(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* catch() { ... } // from try @ 04cf21f0 with catch @ 04cf2214 */
                    /* try { // try from 04cf2218 to 04df2223 has its CatchHandler @ 04cf2238 */
  if (*(long *)(param_3 + 0x38) == 0) {
                    /* try { // try from 04cf2224 to 04df222f has its CatchHandler @ 04cf213c */
    FUN_04447ba8(PTR_DAT_09f1f008);
                    /* try { // try from 04cf2230 to 04df2237 has its CatchHandler @ 04cf2238 */
    FUN_04447ba8(PTR_DAT_09f1f018);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04cf2218 with catch @ 04cf2238
                       catch(type#2 @ 00000000) { ... } // from try @ 04cf2230 with catch @ 04cf2238
                        */
    if (*(long *)(param_3 + 0x38) == 0) {
                    /* try { // try from 04cf223c to 04df2297 has its CatchHandler @ 04cf223c
                       catch() { ... } // from try @ 04cf223c with catch @ 04cf223c
                       catch() { ... } // from try @ 04cf22b8 with catch @ 04cf223c
                       catch() { ... } // from try @ 04cf22f4 with catch @ 04cf223c
                       catch() { ... } // from try @ 04cf2324 with catch @ 04cf223c */
      FUN_04482014(param_3);
    }
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25790);
    uVar4 = FUN_0837c304(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4,param_3);
  }
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  plVar2 = (long *)thunk_FUN_04485110(param_2,lVar5);
  if (plVar2 == (long *)0x0) {
    lVar5 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04cf23ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(param_2,lVar5,0);
LAB_04cf23ec:
    plVar2 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f018) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04cf2454;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar2,*(long *)PTR_DAT_09f1f018,0);
LAB_04cf2454:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      iVar9 = 6;
      iVar1 = 6;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04cf24d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar2,lVar5,0);
LAB_04cf24d8:
      (*(code *)*puVar3)(&local_88,plVar2,puVar3[1]);
      iVar9 = 8;
      iVar1 = 8;
      local_60 = local_88;
      uStack_58 = uStack_80;
      uStack_50 = local_78;
      uStack_48 = uStack_70;
      local_40 = local_68;
    }
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04cf255c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar2,*(long *)PTR_DAT_09f1f008,0);
LAB_04cf255c:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      iVar1 = iVar9;
    }
    if (iVar1 != 0) {
      local_68 = local_40;
      local_78 = uStack_50;
      uStack_70 = uStack_48;
      local_88 = local_60;
      uStack_80 = uStack_58;
      if (iVar1 == 8) goto UnityEngine_JsonUtility__FromJson<MissedHitInfo>;
      if (iVar1 != 6) {
        return;
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04cf233c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar2,lVar5,0);
LAB_04cf233c:
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (0 < iVar1) {
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04cf23b4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar2,lVar5,0);
LAB_04cf23b4:
      (*(code *)*puVar3)(&local_88,plVar2,0,puVar3[1]);
UnityEngine_JsonUtility__FromJson<MissedHitInfo>:
      param_1[4] = local_68;
      param_1[1] = uStack_80;
      *param_1 = local_88;
      param_1[3] = uStack_70;
      param_1[2] = local_78;
      return;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


