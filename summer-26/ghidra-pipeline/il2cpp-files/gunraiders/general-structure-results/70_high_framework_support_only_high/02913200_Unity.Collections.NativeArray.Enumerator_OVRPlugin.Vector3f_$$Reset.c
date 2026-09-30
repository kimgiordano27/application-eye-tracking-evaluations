/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$Reset
ENTRY_POINT: 02913200
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__Reset(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint in_w10;
  int *piVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar10;
  long *unaff_x24;
  uint uVar11;
  long unaff_x26;
  int *piVar12;
  uint unaff_w29;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uStack000000000000000c;
  
  param_2 = param_2 & 0x7fffffff;
  iVar13 = 0;
  if (in_w10 != 0) {
    iVar13 = (int)param_2 / (int)in_w10;
  }
  uVar11 = param_2 - iVar13 * in_w10;
  if (uVar11 < in_w10) {
    piVar12 = (int *)(param_1 + (ulong)uVar11 * 4 + 0x20);
    uVar11 = *piVar12 - 1;
    if (unaff_x24 == (long *)0x0) {
      plVar3 = (long *)FUN_022cb9f0(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      if (unaff_x26 == 0) goto LAB_02913544;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar5 = (uint)uVar6;
      if (uVar11 < uVar5) {
        iVar13 = 0;
        do {
          uVar5 = (uint)uVar6;
          lVar10 = (long)(int)uVar11;
          if (*(uint *)(unaff_x26 + lVar10 * 0x40 + 0x20) == param_2) {
            if (plVar3 == (long *)0x0) goto LAB_02913544;
            uVar8 = (**(code **)(*plVar3 + 0x1b8))
                              (plVar3,*(undefined8 *)(unaff_x26 + lVar10 * 0x40 + 0x28));
            if ((uVar8 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) goto LAB_0291352c;
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              uVar16 = unaff_x19[3];
              uVar15 = unaff_x19[2];
              uVar14 = unaff_x19[5];
              uVar6 = unaff_x19[4];
              uVar18 = unaff_x19[1];
              uVar17 = *unaff_x19;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) goto LAB_02913520;
              goto LAB_02913540;
            }
            uVar5 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar5 <= uVar11) goto LAB_02913540;
          uVar11 = *(uint *)(unaff_x26 + lVar10 * 0x40 + 0x24);
          if ((int)uVar5 <= iVar13) {
            FUN_032f2aac(0);
          }
          uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar13 = iVar13 + 1;
          uVar5 = (uint)uVar6;
        } while (uVar11 < uVar5);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_02913544;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar5 = (uint)uVar6;
      if (uVar11 < uVar5) {
        iVar13 = 0;
        uStack000000000000000c = unaff_w29;
        do {
          uVar5 = (uint)uVar6;
          lVar10 = (long)(int)uVar11;
          if (*(uint *)(unaff_x26 + lVar10 * 0x40 + 0x20) == param_2) {
            lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01c72394(lVar4);
            }
            lVar7 = *unaff_x24;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar4) {
                  puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_029132bc;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined8 *)FUN_01c72498();
LAB_029132bc:
            uVar8 = (*(code *)*puVar2)();
            if ((uVar8 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
LAB_0291352c:
                FUN_032f29a8();
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              uVar16 = unaff_x19[3];
              uVar15 = unaff_x19[2];
              uVar14 = unaff_x19[5];
              uVar6 = unaff_x19[4];
              uVar18 = unaff_x19[1];
              uVar17 = *unaff_x19;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
LAB_02913520:
                lVar10 = unaff_x26 + lVar10 * 0x40;
                *(undefined8 *)(lVar10 + 0x48) = uVar16;
                *(undefined8 *)(lVar10 + 0x40) = uVar15;
                *(undefined8 *)(lVar10 + 0x58) = uVar14;
                *(undefined8 *)(lVar10 + 0x50) = uVar6;
                *(undefined8 *)(lVar10 + 0x38) = uVar18;
                *(undefined8 *)(lVar10 + 0x30) = uVar17;
                return 1;
              }
              goto LAB_02913540;
            }
            uVar5 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar5 <= uVar11) goto LAB_02913540;
          uVar11 = *(uint *)(unaff_x26 + lVar10 * 0x40 + 0x24);
          if ((int)uVar5 <= iVar13) {
            FUN_032f2aac(0);
          }
          uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar13 = iVar13 + 1;
          uVar5 = (uint)uVar6;
        } while (uVar11 < uVar5);
      }
    }
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar11 = *(uint *)(unaff_x21 + 0x20);
      if (uVar11 == uVar5) {
        FUN_029138f4();
        lVar10 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
        if (lVar10 == 0) goto LAB_02913544;
        uVar5 = *(uint *)(lVar10 + 0x18);
        iVar13 = 0;
        if (uVar5 != 0) {
          iVar13 = (int)param_2 / (int)uVar5;
        }
        uVar1 = param_2 - iVar13 * uVar5;
        if (uVar5 <= uVar1) goto LAB_02913540;
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        piVar12 = (int *)(lVar10 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      }
      if (unaff_x26 == 0) {
LAB_02913544:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_02913540;
      lVar10 = (long)(int)uVar11;
    }
    else {
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      uVar11 = *(uint *)(unaff_x21 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_02913540;
      lVar10 = (long)(int)uVar11;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar10 * 0x40 + 0x24);
    }
    lVar10 = unaff_x26 + lVar10 * 0x40;
    *(uint *)(lVar10 + 0x20) = param_2;
    iVar13 = *piVar12;
    *(undefined8 *)(lVar10 + 0x28) = unaff_x20;
    *(int *)(lVar10 + 0x24) = iVar13 + -1;
    uVar15 = unaff_x19[2];
    uVar14 = unaff_x19[5];
    uVar6 = unaff_x19[4];
    uVar17 = unaff_x19[1];
    uVar16 = *unaff_x19;
    *(undefined8 *)(lVar10 + 0x48) = unaff_x19[3];
    *(undefined8 *)(lVar10 + 0x40) = uVar15;
    *(undefined8 *)(lVar10 + 0x58) = uVar14;
    *(undefined8 *)(lVar10 + 0x50) = uVar6;
    *(undefined8 *)(lVar10 + 0x38) = uVar17;
    *(undefined8 *)(lVar10 + 0x30) = uVar16;
    *piVar12 = uVar11 + 1;
    return 1;
  }
LAB_02913540:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


