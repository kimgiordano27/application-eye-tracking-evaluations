/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector2f>$$.cctor
ENTRY_POINT: 07027b84
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector2f>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar9;
  undefined8 *unaff_x23;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  undefined8 uVar16;
  uint uStack000000000000000c;
  
  *(int *)(unaff_x21 + 0x2c) = in_w8 + 1;
  if (in_x9 == 0) {
    FUN_07027a74();
  }
  plVar10 = *(long **)(unaff_x21 + 0x30);
  lVar13 = *(long *)(unaff_x21 + 0x18);
                    /* try { // try from 07027bb0 to 07127bd7 has its CatchHandler @ 07027df4 */
  if (plVar10 == (long *)0x0) {
    if (unaff_x20 == (long *)0x0) goto LAB_07027fc4;
    uVar2 = (**(code **)(*unaff_x20 + 0x158))();
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_07027c3c;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 07027bfc to 07127c5f has its CatchHandler @ 07027df8 */
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar10,lVar4,1);
LAB_07027c3c:
    uVar2 = (*(code *)*puVar3)(plVar10);
  }
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 == 0) goto LAB_07027fc4;
  uVar14 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar9 = 0;
  if (uVar14 != 0) {
    iVar9 = (int)uVar2 / (int)uVar14;
  }
  uVar11 = uVar2 - iVar9 * uVar14;
  if (uVar14 <= uVar11) {
LAB_07027fac:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  piVar15 = (int *)(lVar4 + (ulong)uVar11 * 4 + 0x20);
  uVar14 = *piVar15 - 1;
  uStack000000000000000c = unaff_w19;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)FUN_0495f518(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
    if (lVar13 == 0) goto LAB_07027fc4;
    uVar12 = *(undefined8 *)(lVar13 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar14 < uVar11) {
      iVar9 = 0;
      lVar4 = lVar13 + 0x20;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar4 + (long)(int)uVar14 * 0x28) == uVar2) {
          if (plVar10 == (long *)0x0) goto LAB_07027fc4;
          uVar7 = (**(code **)(*plVar10 + 0x1b8))
                            (plVar10,*(undefined8 *)(lVar4 + (long)(int)uVar14 * 0x28 + 8));
          if ((uVar7 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_07027fb0;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_07027fac;
            lVar4 = lVar4 + (long)(int)uVar14 * 0x28;
            goto LAB_07027f8c;
          }
          uVar11 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar11 <= uVar14) goto LAB_07027fac;
        uVar14 = *(uint *)(lVar4 + (long)(int)uVar14 * 0x28 + 4);
        if ((int)uVar11 <= iVar9) {
          FUN_07506dec(0);
        }
        uVar12 = *(undefined8 *)(lVar13 + 0x18);
        iVar9 = iVar9 + 1;
        uVar11 = (uint)uVar12;
      } while (uVar14 < uVar11);
    }
  }
  else {
    if (lVar13 == 0) goto LAB_07027fc4;
    uVar12 = *(undefined8 *)(lVar13 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar14 < uVar11) {
      iVar9 = 0;
      lVar4 = lVar13 + 0x20;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar4 + (long)(int)uVar14 * 0x28) == uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
          uVar12 = *(undefined8 *)(lVar4 + (long)(int)uVar14 * 0x28 + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0406aaec(lVar5);
          }
          lVar6 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_07027d2c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0406ae20(plVar10,lVar5,0);
LAB_07027d2c:
          uVar7 = (*(code *)*puVar3)(plVar10,uVar12);
          if ((uVar7 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_07027fb0:
              FUN_07506ce8();
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar14 < *(uint *)(lVar13 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar14 * 0x28;
LAB_07027f8c:
              uVar16 = unaff_x23[1];
              uVar12 = *unaff_x23;
              *(undefined8 *)(lVar4 + 0x20) = unaff_x23[2];
              *(undefined8 *)(lVar4 + 0x18) = uVar16;
              *(undefined8 *)(lVar4 + 0x10) = uVar12;
              if (uVar14 < *(uint *)(lVar13 + 0x18)) {
                return 1;
              }
            }
            goto LAB_07027fac;
          }
          uVar11 = *(uint *)(lVar13 + 0x18);
        }
        if (uVar11 <= uVar14) goto LAB_07027fac;
        uVar14 = *(uint *)(lVar4 + (long)(int)uVar14 * 0x28 + 4);
        if ((int)uVar11 <= iVar9) {
          FUN_07506dec(0);
        }
        uVar12 = *(undefined8 *)(lVar13 + 0x18);
        iVar9 = iVar9 + 1;
        uVar11 = (uint)uVar12;
      } while (uVar14 < uVar11);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar14 = *(uint *)(unaff_x21 + 0x20);
    if (uVar14 == uVar11) {
      FUN_07028370();
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      if (lVar4 == 0) goto LAB_07027fc4;
      uVar11 = *(uint *)(lVar4 + 0x18);
      iVar9 = 0;
      if (uVar11 != 0) {
        iVar9 = (int)uVar2 / (int)uVar11;
      }
      uVar1 = uVar2 - iVar9 * uVar11;
      if (uVar11 <= uVar1) goto LAB_07027fac;
      lVar13 = *(long *)(unaff_x21 + 0x18);
      piVar15 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar13 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar14 + 1;
    }
    if (lVar13 == 0) {
LAB_07027fc4:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_07027fac;
    lVar13 = lVar13 + (long)(int)uVar14 * 0x28;
  }
  else {
    uVar14 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar11 <= uVar14) goto LAB_07027fac;
    lVar13 = lVar13 + (long)(int)uVar14 * 0x28;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar13 + 0x24);
  }
  *(uint *)(lVar13 + 0x20) = uVar2;
  iVar9 = *piVar15;
  *(long **)(lVar13 + 0x28) = unaff_x20;
  *(int *)(lVar13 + 0x24) = iVar9 + -1;
  uVar16 = unaff_x23[1];
  uVar12 = *unaff_x23;
  *(undefined8 *)(lVar13 + 0x40) = unaff_x23[2];
  *(undefined8 *)(lVar13 + 0x38) = uVar16;
  *(undefined8 *)(lVar13 + 0x30) = uVar12;
  *piVar15 = uVar14 + 1;
  return 1;
}


