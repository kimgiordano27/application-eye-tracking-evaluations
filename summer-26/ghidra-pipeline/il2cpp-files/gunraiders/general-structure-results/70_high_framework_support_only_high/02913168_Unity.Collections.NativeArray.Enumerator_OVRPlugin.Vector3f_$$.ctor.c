/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 02913168
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  uint uVar12;
  long unaff_x26;
  int *piVar13;
  uint unaff_w29;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uStack000000000000000c;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
  }
  lVar7 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_029131e4;
      }
      uVar10 = uVar10 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_029131e4:
  uVar2 = (*(code *)*puVar3)();
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if (lVar5 == 0) goto LAB_02913544;
  uVar12 = *(uint *)(lVar5 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar14 = 0;
  if (uVar12 != 0) {
    iVar14 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar14 * uVar12;
  if (uVar6 < uVar12) {
    piVar13 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar13 - 1;
    if (unaff_x24 == (long *)0x0) {
      plVar4 = (long *)FUN_022cb9f0(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      if (unaff_x26 == 0) goto LAB_02913544;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar5 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + lVar5 * 0x40 + 0x20) == uVar2) {
            if (plVar4 == (long *)0x0) goto LAB_02913544;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined8 *)(unaff_x26 + lVar5 * 0x40 + 0x28));
            if ((uVar10 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) goto LAB_0291352c;
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              uVar17 = unaff_x19[3];
              uVar16 = unaff_x19[2];
              uVar15 = unaff_x19[5];
              uVar8 = unaff_x19[4];
              uVar19 = unaff_x19[1];
              uVar18 = *unaff_x19;
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) goto LAB_02913520;
              goto LAB_02913540;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_02913540;
          uVar12 = *(uint *)(unaff_x26 + lVar5 * 0x40 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_032f2aac(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_02913544;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        uStack000000000000000c = unaff_w29;
        do {
          uVar6 = (uint)uVar8;
          lVar5 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + lVar5 * 0x40 + 0x20) == uVar2) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01c72394(lVar7);
            }
            lVar9 = *unaff_x24;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_029132bc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_01c72498();
LAB_029132bc:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
LAB_0291352c:
                FUN_032f29a8();
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              uVar17 = unaff_x19[3];
              uVar16 = unaff_x19[2];
              uVar15 = unaff_x19[5];
              uVar8 = unaff_x19[4];
              uVar19 = unaff_x19[1];
              uVar18 = *unaff_x19;
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
LAB_02913520:
                lVar5 = unaff_x26 + lVar5 * 0x40;
                *(undefined8 *)(lVar5 + 0x48) = uVar17;
                *(undefined8 *)(lVar5 + 0x40) = uVar16;
                *(undefined8 *)(lVar5 + 0x58) = uVar15;
                *(undefined8 *)(lVar5 + 0x50) = uVar8;
                *(undefined8 *)(lVar5 + 0x38) = uVar19;
                *(undefined8 *)(lVar5 + 0x30) = uVar18;
                return 1;
              }
              goto LAB_02913540;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_02913540;
          uVar12 = *(uint *)(unaff_x26 + lVar5 * 0x40 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_032f2aac(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x21 + 0x20);
      if (uVar12 == uVar6) {
        FUN_029138f4();
        lVar5 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
        if (lVar5 == 0) goto LAB_02913544;
        uVar6 = *(uint *)(lVar5 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1) goto LAB_02913540;
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        piVar13 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
LAB_02913544:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_02913540;
      lVar5 = (long)(int)uVar12;
    }
    else {
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      uVar12 = *(uint *)(unaff_x21 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_02913540;
      lVar5 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x40 + 0x24);
    }
    lVar5 = unaff_x26 + lVar5 * 0x40;
    *(uint *)(lVar5 + 0x20) = uVar2;
    iVar14 = *piVar13;
    *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
    *(int *)(lVar5 + 0x24) = iVar14 + -1;
    uVar16 = unaff_x19[2];
    uVar15 = unaff_x19[5];
    uVar8 = unaff_x19[4];
    uVar18 = unaff_x19[1];
    uVar17 = *unaff_x19;
    *(undefined8 *)(lVar5 + 0x48) = unaff_x19[3];
    *(undefined8 *)(lVar5 + 0x40) = uVar16;
    *(undefined8 *)(lVar5 + 0x58) = uVar15;
    *(undefined8 *)(lVar5 + 0x50) = uVar8;
    *(undefined8 *)(lVar5 + 0x38) = uVar18;
    *(undefined8 *)(lVar5 + 0x30) = uVar17;
    *piVar13 = uVar12 + 1;
    return 1;
  }
LAB_02913540:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


