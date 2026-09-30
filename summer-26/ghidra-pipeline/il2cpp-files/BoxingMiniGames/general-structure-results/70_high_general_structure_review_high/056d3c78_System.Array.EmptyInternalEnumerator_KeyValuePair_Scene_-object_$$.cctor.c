/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<Scene,-object>>$$.cctor
ENTRY_POINT: 056d3c78
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<KeyValuePair<Scene,_object>>___cctor
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,char param_5,
          long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 056d3b10 with catch @ 056d3c78
                        */
  if (param_2 == (long *)0x0) {
                    /* try { // try from 056d3c94 to 057d3c97 has its CatchHandler @ 056d3ca0 */
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(5);
  }
                    /* catch() { ... } // from try @ 056d3c94 with catch @ 056d3ca0 */
                    /* try { // try from 056d3ca4 to 057d3cab has its CatchHandler @ 056d3cb4 */
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
                    /* try { // try from 056d3cac to 057d3cb7 has its CatchHandler @ 056d37e8 */
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056d3ca4 with catch @ 056d3cb4
                        */
    FUN_056d3b7c(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
  }
  plVar12 = *(long **)(param_1 + 0x30);
  lVar15 = *(long *)(param_1 + 0x18);
  if (plVar12 == (long *)0x0) {
    if (param_2 == (long *)0x0) goto LAB_056d408c;
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar5 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<SignalSubscriptionId,_object>>__get_Current
          ;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar12,lVar4,1);
System_Array_EmptyInternalEnumerator<KeyValuePair<SignalSubscriptionId,_object>>__get_Current:
    uVar2 = (*(code *)*puVar3)(plVar12,param_2,puVar3[1]);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_056d408c;
  uVar13 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar11 = 0;
  if (uVar13 != 0) {
    iVar11 = (int)uVar2 / (int)uVar13;
  }
  uVar10 = uVar2 - iVar11 * uVar13;
  if (uVar13 <= uVar10) goto LAB_056d4088;
  piVar8 = (int *)(lVar4 + (ulong)uVar10 * 4 + 0x20);
  uVar13 = *piVar8 - 1;
  uVar7 = (ulong)uVar13;
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)FUN_03b1c798(*(undefined8 *)
                                    (*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x18));
    if (lVar15 == 0) goto LAB_056d408c;
    uVar14 = *(undefined8 *)(lVar15 + 0x18);
    uVar10 = (uint)uVar14;
    if (uVar13 < uVar10) {
      iVar11 = 0;
      do {
        uVar13 = (uint)uVar14;
        uVar10 = (uint)uVar7;
        lVar4 = lVar15 + 0x20 + (long)(int)uVar10 * 0x20;
        if (*(uint *)(lVar15 + 0x20 + (-(uVar7 >> 0x1f) & 0xffffffe000000000 | uVar7 << 5)) == uVar2
           ) {
          if (plVar12 == (long *)0x0) goto LAB_056d408c;
          uVar7 = (**(code **)(*plVar12 + 0x1b8))
                            (plVar12,*(undefined8 *)(lVar4 + 8),param_2,
                             *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar7 & 1) != 0) goto LAB_056d3fc4;
          uVar13 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar13 <= uVar10) goto LAB_056d4088;
        uVar1 = *(uint *)(lVar4 + 4);
        uVar7 = (ulong)uVar1;
        if ((int)uVar13 <= iVar11) {
          FUN_05e39b64(0);
        }
        uVar14 = *(undefined8 *)(lVar15 + 0x18);
        iVar11 = iVar11 + 1;
        uVar10 = (uint)uVar14;
      } while (uVar1 < uVar10);
    }
  }
  else {
    if (lVar15 == 0) goto LAB_056d408c;
    uVar14 = *(undefined8 *)(lVar15 + 0x18);
    uVar10 = (uint)uVar14;
    if (uVar13 < uVar10) {
      iVar11 = 0;
      do {
        uVar13 = (uint)uVar14;
        uVar10 = (uint)uVar7;
        lVar4 = lVar15 + 0x20 + (long)(int)uVar10 * 0x20;
        if (*(uint *)(lVar15 + 0x20 + (-(uVar7 >> 0x1f) & 0xffffffe000000000 | uVar7 << 5)) == uVar2
           ) {
          uVar14 = *(undefined8 *)(lVar4 + 8);
          lVar5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc(lVar5);
          }
          lVar6 = *plVar12;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_056d3e48;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0367cd30(plVar12,lVar5,0);
LAB_056d3e48:
          uVar7 = (*(code *)*puVar3)(plVar12,uVar14,param_2,puVar3[1]);
          if ((uVar7 & 1) != 0) goto LAB_056d3fc4;
          uVar13 = *(uint *)(lVar15 + 0x18);
        }
        if (uVar13 <= uVar10) goto LAB_056d4088;
        uVar1 = *(uint *)(lVar4 + 4);
        uVar7 = (ulong)uVar1;
        if ((int)uVar13 <= iVar11) {
          FUN_05e39b64(0);
        }
        uVar14 = *(undefined8 *)(lVar15 + 0x18);
        iVar11 = iVar11 + 1;
        uVar10 = (uint)uVar14;
      } while (uVar1 < uVar10);
    }
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar13 = *(uint *)(param_1 + 0x20);
    if (uVar13 == uVar10) {
      FUN_056d4454(param_1,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x1b0));
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x20) = uVar10 + 1;
      if (lVar4 == 0) goto LAB_056d408c;
      uVar10 = *(uint *)(lVar4 + 0x18);
      iVar11 = 0;
      if (uVar10 != 0) {
        iVar11 = (int)uVar2 / (int)uVar10;
      }
      uVar1 = uVar2 - iVar11 * uVar10;
      if (uVar10 <= uVar1) goto LAB_056d4088;
      lVar15 = *(long *)(param_1 + 0x18);
      piVar8 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar15 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
    }
    if (lVar15 == 0) {
LAB_056d408c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_056d4088;
    lVar15 = lVar15 + (long)(int)uVar13 * 0x20;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x24);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if (uVar10 <= uVar13) goto LAB_056d4088;
    lVar15 = lVar15 + (long)(int)uVar13 * 0x20;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar15 + 0x24);
  }
  *(uint *)(lVar15 + 0x20) = uVar2;
  iVar11 = *piVar8;
  *(long *)(lVar15 + 0x28) = (long)param_2;
  *(int *)(lVar15 + 0x24) = iVar11 + -1;
  thunk_FUN_036b7ad0((long *)(lVar15 + 0x28),param_2);
  *(undefined8 *)(lVar15 + 0x30) = param_3;
  *(undefined8 *)(lVar15 + 0x38) = param_4;
  *piVar8 = uVar13 + 1;
  return 1;
LAB_056d3fc4:
  if (param_5 == '\x02') {
    FUN_05e39a60(param_2,0);
    return 0;
  }
  if (param_5 != '\x01') {
    return 0;
  }
  if (uVar10 < *(uint *)(lVar15 + 0x18)) {
    *(undefined8 *)(lVar4 + 0x10) = param_3;
    *(undefined8 *)(lVar4 + 0x18) = param_4;
    return 1;
  }
LAB_056d4088:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


