/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 014465a4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__Dispose
          (long param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w8;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x21;
  long *plVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  *(int *)(param_1 + 0x2c) = in_w8 + 1;
  if (in_x9 == 0) {
    FUN_01446498(param_1,0,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10));
  }
  plVar13 = *(long **)(param_1 + 0x30);
  lVar15 = *(long *)(param_1 + 0x18);
  if (plVar13 == (long *)0x0) {
    uVar4 = FUN_01d47d20((long)&stack0x00000008 + 4,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    lVar8 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01446660;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348(plVar13,lVar6,1);
LAB_01446660:
    uVar4 = (*(code *)*puVar5)(plVar13,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_014469b4;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar17 = 0;
  if (uVar14 != 0) {
    iVar17 = (int)uVar4 / (int)uVar14;
  }
  uVar7 = uVar4 - iVar17 * uVar14;
  if (uVar7 < uVar14) {
    piVar16 = (int *)(lVar6 + (ulong)uVar7 * 4 + 0x20);
    uVar14 = *piVar16 - 1;
    if (plVar13 == (long *)0x0) {
      if (lVar15 == 0) goto LAB_014469b4;
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar14 < uVar7) {
        iVar17 = 0;
        do {
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x10 + 0x20) == uVar4) {
            plVar13 = (long *)FUN_01169cd0(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_014469b0;
            if (plVar13 == (long *)0x0) goto LAB_014469b4;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined4 *)(lVar15 + lVar6 * 0x10 + 0x28),
                                uStack000000000000000c,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar11 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar5 = (undefined8 *)&stack0x00000008;
                uStack0000000000000008 = uStack000000000000000c;
                goto LAB_01446990;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar14 < *(uint *)(lVar15 + 0x18)) goto LAB_0144696c;
              goto LAB_014469b0;
            }
            uVar7 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar7 <= uVar14) goto LAB_014469b0;
          uVar14 = *(uint *)(lVar15 + lVar6 * 0x10 + 0x24);
          if ((int)uVar7 <= iVar17) {
            FUN_01d69580(0);
          }
          uVar9 = *(undefined8 *)(lVar15 + 0x18);
          iVar17 = iVar17 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar14 < uVar7);
      }
    }
    else {
      if (lVar15 == 0) goto LAB_014469b4;
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar14 < uVar7) {
        iVar17 = 0;
        do {
          uVar3 = uStack000000000000000c;
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x10 + 0x20) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar15 + lVar6 * 0x10 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0103c244(lVar8);
            }
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01446740;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0103c348(plVar13,lVar8,0);
LAB_01446740:
            uVar11 = (*(code *)*puVar5)(plVar13,uVar1,uVar3,puVar5[1]);
            if ((uVar11 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar5 = (undefined8 *)((long)&stack0x00000000 + 4);
                in_stack_00000000._4_4_ = uStack000000000000000c;
LAB_01446990:
                uVar9 = thunk_FUN_0103fd0c(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                           puVar5);
                FUN_01d6947c(uVar9,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar14 < *(uint *)(lVar15 + 0x18)) {
LAB_0144696c:
                *(undefined4 *)(lVar15 + lVar6 * 0x10 + 0x2c) = param_3;
                return 1;
              }
              goto LAB_014469b0;
            }
            uVar7 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar7 <= uVar14) goto LAB_014469b0;
          uVar14 = *(uint *)(lVar15 + lVar6 * 0x10 + 0x24);
          if ((int)uVar7 <= iVar17) {
            FUN_01d69580(0);
          }
          uVar9 = *(undefined8 *)(lVar15 + 0x18);
          iVar17 = iVar17 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar14 < uVar7);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar14 = *(uint *)(param_1 + 0x20);
      if (uVar14 == uVar7) {
        FUN_01446d50(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 400));
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto LAB_014469b4;
        uVar7 = *(uint *)(lVar6 + 0x18);
        iVar17 = 0;
        if (uVar7 != 0) {
          iVar17 = (int)uVar4 / (int)uVar7;
        }
        uVar2 = uVar4 - iVar17 * uVar7;
        if (uVar7 <= uVar2) goto LAB_014469b0;
        lVar15 = *(long *)(param_1 + 0x18);
        piVar16 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar15 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
      }
      if (lVar15 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_014469b0;
      lVar6 = (long)(int)uVar14;
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      uVar14 = *(uint *)(param_1 + 0x24);
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_014469b0;
      lVar6 = (long)(int)uVar14;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar15 + lVar6 * 0x10 + 0x24);
    }
    lVar15 = lVar15 + lVar6 * 0x10;
    *(uint *)(lVar15 + 0x20) = uVar4;
    *(int *)(lVar15 + 0x24) = *piVar16 + -1;
    *(undefined4 *)(lVar15 + 0x28) = uStack000000000000000c;
    *(undefined4 *)(lVar15 + 0x2c) = param_3;
    *piVar16 = uVar14 + 1;
    return 1;
  }
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


