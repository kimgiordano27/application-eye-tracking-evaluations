/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 07027c44
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_EmptyArray<OVRPlugin_Vector3f>___cctor(code *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar10;
  undefined8 *unaff_x23;
  long *unaff_x24;
  uint uVar11;
  undefined8 uVar12;
  long unaff_x26;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  uint uStack000000000000000c;
  
  uVar2 = (*param_1)();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 == 0) goto LAB_07027fc4;
  uVar13 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar10 = 0;
  if (uVar13 != 0) {
    iVar10 = (int)uVar2 / (int)uVar13;
  }
  uVar11 = uVar2 - iVar10 * uVar13;
  if (uVar13 <= uVar11) {
LAB_07027fac:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  piVar14 = (int *)(lVar6 + (ulong)uVar11 * 4 + 0x20);
  uVar13 = *piVar14 - 1;
  uStack000000000000000c = unaff_w19;
  if (unaff_x24 == (long *)0x0) {
    plVar4 = (long *)FUN_0495f518(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
    if (unaff_x26 == 0) goto LAB_07027fc4;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar13 < uVar11) {
      iVar10 = 0;
      lVar6 = unaff_x26 + 0x20;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar6 + (long)(int)uVar13 * 0x28) == uVar2) {
          if (plVar4 == (long *)0x0) goto LAB_07027fc4;
          uVar8 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(lVar6 + (long)(int)uVar13 * 0x28 + 8));
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_07027fb0;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (*(uint *)(unaff_x26 + 0x18) <= uVar13) goto LAB_07027fac;
            lVar6 = lVar6 + (long)(int)uVar13 * 0x28;
            goto LAB_07027f8c;
          }
          uVar11 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar11 <= uVar13) goto LAB_07027fac;
        uVar13 = *(uint *)(lVar6 + (long)(int)uVar13 * 0x28 + 4);
        if ((int)uVar11 <= iVar10) {
          FUN_07506dec(0);
        }
        uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar10 = iVar10 + 1;
        uVar11 = (uint)uVar12;
      } while (uVar13 < uVar11);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_07027fc4;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar13 < uVar11) {
      iVar10 = 0;
                    /* try { // try from 07027c94 to 07127ca3 has its CatchHandler @ 07027dec */
      lVar6 = unaff_x26 + 0x20;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar6 + (long)(int)uVar13 * 0x28) == uVar2) {
                    /* try { // try from 07027cbc to 07127cbf has its CatchHandler @ 07027df0 */
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
                    /* try { // try from 07027cc0 to 07127d6b has its CatchHandler @ 070278a4 */
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0406aaec(lVar5);
          }
          lVar7 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07027d2c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_0406ae20();
LAB_07027d2c:
          uVar8 = (*(code *)*puVar3)();
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_07027fb0:
              FUN_07506ce8();
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar13 < *(uint *)(unaff_x26 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar13 * 0x28;
LAB_07027f8c:
              uVar15 = unaff_x23[1];
              uVar12 = *unaff_x23;
              *(undefined8 *)(lVar6 + 0x20) = unaff_x23[2];
              *(undefined8 *)(lVar6 + 0x18) = uVar15;
              *(undefined8 *)(lVar6 + 0x10) = uVar12;
              if (uVar13 < *(uint *)(unaff_x26 + 0x18)) {
                return 1;
              }
            }
            goto LAB_07027fac;
          }
          uVar11 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar11 <= uVar13) goto LAB_07027fac;
        uVar13 = *(uint *)(lVar6 + (long)(int)uVar13 * 0x28 + 4);
        if ((int)uVar11 <= iVar10) {
          FUN_07506dec(0);
        }
        uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar10 = iVar10 + 1;
        uVar11 = (uint)uVar12;
      } while (uVar13 < uVar11);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar13 = *(uint *)(unaff_x21 + 0x20);
    if (uVar13 == uVar11) {
      FUN_07028370();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      if (lVar5 == 0) goto LAB_07027fc4;
      uVar11 = *(uint *)(lVar5 + 0x18);
      iVar10 = 0;
      if (uVar11 != 0) {
        iVar10 = (int)uVar2 / (int)uVar11;
      }
      uVar1 = uVar2 - iVar10 * uVar11;
      if (uVar11 <= uVar1) goto LAB_07027fac;
      lVar6 = *(long *)(unaff_x21 + 0x18);
      piVar14 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar13 + 1;
    }
    if (lVar6 == 0) {
LAB_07027fc4:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_07027fac;
    lVar6 = lVar6 + (long)(int)uVar13 * 0x28;
  }
  else {
    uVar13 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar11 <= uVar13) goto LAB_07027fac;
    lVar6 = unaff_x26 + (long)(int)uVar13 * 0x28;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(uint *)(lVar6 + 0x20) = uVar2;
  iVar10 = *piVar14;
  *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
  *(int *)(lVar6 + 0x24) = iVar10 + -1;
  uVar15 = unaff_x23[1];
  uVar12 = *unaff_x23;
  *(undefined8 *)(lVar6 + 0x40) = unaff_x23[2];
  *(undefined8 *)(lVar6 + 0x38) = uVar15;
  *(undefined8 *)(lVar6 + 0x30) = uVar12;
  *piVar14 = uVar13 + 1;
  return 1;
}


