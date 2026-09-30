/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$Reset
ENTRY_POINT: 029130ec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset
          (long param_1,long *param_2,undefined8 *param_3,char param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(5);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_02913024(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar11 = *(long **)(param_1 + 0x30);
  lVar13 = *(long *)(param_1 + 0x18);
  if (plVar11 == (long *)0x0) {
    if (param_2 == (long *)0x0) goto LAB_02913544;
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394(lVar4);
    }
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_029131e4;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar11,lVar4,1);
LAB_029131e4:
    uVar2 = (*(code *)*puVar3)(plVar11,param_2,puVar3[1]);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_02913544;
  uVar12 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar15 = 0;
  if (uVar12 != 0) {
    iVar15 = (int)uVar2 / (int)uVar12;
  }
  uVar5 = uVar2 - iVar15 * uVar12;
  if (uVar5 < uVar12) {
    piVar14 = (int *)(lVar4 + (ulong)uVar5 * 4 + 0x20);
    uVar12 = *piVar14 - 1;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)FUN_022cb9f0(*(undefined8 *)
                                      (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
      if (lVar13 == 0) goto LAB_02913544;
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar5 = (uint)uVar7;
      if (uVar12 < uVar5) {
        iVar15 = 0;
        do {
          uVar5 = (uint)uVar7;
          lVar4 = (long)(int)uVar12;
          if (*(uint *)(lVar13 + lVar4 * 0x40 + 0x20) == uVar2) {
            if (plVar11 == (long *)0x0) goto LAB_02913544;
            uVar9 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined8 *)(lVar13 + lVar4 * 0x40 + 0x28),param_2,
                               *(undefined8 *)(*plVar11 + 0x1c0));
            if ((uVar9 & 1) != 0) {
              if (param_4 == '\x02') goto LAB_0291352c;
              if (param_4 != '\x01') {
                return 0;
              }
              uVar18 = param_3[3];
              uVar17 = param_3[2];
              uVar16 = param_3[5];
              uVar7 = param_3[4];
              uVar20 = param_3[1];
              uVar19 = *param_3;
              if (uVar12 < *(uint *)(lVar13 + 0x18)) goto LAB_02913520;
              goto LAB_02913540;
            }
            uVar5 = *(uint *)(lVar13 + 0x18);
          }
          if (uVar5 <= uVar12) goto LAB_02913540;
          uVar12 = *(uint *)(lVar13 + lVar4 * 0x40 + 0x24);
          if ((int)uVar5 <= iVar15) {
            FUN_032f2aac(0);
          }
          uVar7 = *(undefined8 *)(lVar13 + 0x18);
          iVar15 = iVar15 + 1;
          uVar5 = (uint)uVar7;
        } while (uVar12 < uVar5);
      }
    }
    else {
      if (lVar13 == 0) goto LAB_02913544;
      uVar7 = *(undefined8 *)(lVar13 + 0x18);
      uVar5 = (uint)uVar7;
      if (uVar12 < uVar5) {
        iVar15 = 0;
        do {
          uVar5 = (uint)uVar7;
          lVar4 = (long)(int)uVar12;
          lVar6 = lVar13 + lVar4 * 0x40;
          if (*(uint *)(lVar6 + 0x20) == uVar2) {
            uVar7 = *(undefined8 *)(lVar6 + 0x28);
            lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394(lVar6);
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_029132bc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_01c72498(plVar11,lVar6,0);
LAB_029132bc:
            uVar9 = (*(code *)*puVar3)(plVar11,uVar7,param_2,puVar3[1]);
            if ((uVar9 & 1) != 0) {
              if (param_4 == '\x02') {
LAB_0291352c:
                FUN_032f29a8(param_2,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              uVar18 = param_3[3];
              uVar17 = param_3[2];
              uVar16 = param_3[5];
              uVar7 = param_3[4];
              uVar20 = param_3[1];
              uVar19 = *param_3;
              if (uVar12 < *(uint *)(lVar13 + 0x18)) {
LAB_02913520:
                lVar13 = lVar13 + lVar4 * 0x40;
                *(undefined8 *)(lVar13 + 0x48) = uVar18;
                *(undefined8 *)(lVar13 + 0x40) = uVar17;
                *(undefined8 *)(lVar13 + 0x58) = uVar16;
                *(undefined8 *)(lVar13 + 0x50) = uVar7;
                *(undefined8 *)(lVar13 + 0x38) = uVar20;
                *(undefined8 *)(lVar13 + 0x30) = uVar19;
                return 1;
              }
              goto LAB_02913540;
            }
            uVar5 = *(uint *)(lVar13 + 0x18);
          }
          if (uVar5 <= uVar12) goto LAB_02913540;
          uVar12 = *(uint *)(lVar13 + lVar4 * 0x40 + 0x24);
          if ((int)uVar5 <= iVar15) {
            FUN_032f2aac(0);
          }
          uVar7 = *(undefined8 *)(lVar13 + 0x18);
          iVar15 = iVar15 + 1;
          uVar5 = (uint)uVar7;
        } while (uVar12 < uVar5);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar12 = *(uint *)(param_1 + 0x20);
      if (uVar12 == uVar5) {
        FUN_029138f4(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b0));
        lVar4 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar12 + 1;
        if (lVar4 == 0) goto LAB_02913544;
        uVar5 = *(uint *)(lVar4 + 0x18);
        iVar15 = 0;
        if (uVar5 != 0) {
          iVar15 = (int)uVar2 / (int)uVar5;
        }
        uVar1 = uVar2 - iVar15 * uVar5;
        if (uVar5 <= uVar1) goto LAB_02913540;
        lVar13 = *(long *)(param_1 + 0x18);
        piVar14 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar13 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar12 + 1;
      }
      if (lVar13 == 0) {
LAB_02913544:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_02913540;
      lVar4 = (long)(int)uVar12;
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      uVar12 = *(uint *)(param_1 + 0x24);
      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_02913540;
      lVar4 = (long)(int)uVar12;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar13 + lVar4 * 0x40 + 0x24);
    }
    lVar13 = lVar13 + lVar4 * 0x40;
    *(uint *)(lVar13 + 0x20) = uVar2;
    iVar15 = *piVar14;
    *(long **)(lVar13 + 0x28) = param_2;
    *(int *)(lVar13 + 0x24) = iVar15 + -1;
    uVar17 = param_3[2];
    uVar16 = param_3[5];
    uVar7 = param_3[4];
    uVar19 = param_3[1];
    uVar18 = *param_3;
    *(undefined8 *)(lVar13 + 0x48) = param_3[3];
    *(undefined8 *)(lVar13 + 0x40) = uVar17;
    *(undefined8 *)(lVar13 + 0x58) = uVar16;
    *(undefined8 *)(lVar13 + 0x50) = uVar7;
    *(undefined8 *)(lVar13 + 0x38) = uVar19;
    *(undefined8 *)(lVar13 + 0x30) = uVar18;
    *piVar14 = uVar12 + 1;
    return 1;
  }
LAB_02913540:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


