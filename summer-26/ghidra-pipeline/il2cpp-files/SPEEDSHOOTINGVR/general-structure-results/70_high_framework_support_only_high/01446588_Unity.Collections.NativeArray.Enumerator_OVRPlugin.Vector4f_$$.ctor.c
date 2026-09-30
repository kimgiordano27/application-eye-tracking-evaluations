/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 01446588
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
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
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>___ctor
          (long param_1,undefined4 param_2,undefined4 param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uStack000000000000000c = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_01446498(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar14 = *(long **)(param_1 + 0x30);
  lVar16 = *(long *)(param_1 + 0x18);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_01d47d20(&stack0x0000000c,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    lVar9 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_01446660;
        }
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_0103c348(plVar14,lVar6,1);
LAB_01446660:
    uVar4 = (*(code *)*puVar5)(plVar14,param_2,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_014469b4;
  uVar15 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar18 = 0;
  if (uVar15 != 0) {
    iVar18 = (int)uVar4 / (int)uVar15;
  }
  uVar8 = uVar4 - iVar18 * uVar15;
  if (uVar8 < uVar15) {
    piVar17 = (int *)(lVar6 + (ulong)uVar8 * 4 + 0x20);
    uVar15 = *piVar17 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar16 == 0) goto LAB_014469b4;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar15 < uVar8) {
        iVar18 = 0;
        do {
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar16 + (long)(int)uVar15 * 0x10 + 0x20) == uVar4) {
            plVar14 = (long *)FUN_01169cd0(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_014469b0;
            if (plVar14 == (long *)0x0) goto LAB_014469b4;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x28),
                                uStack000000000000000c,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar12 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar7 = &stack0x00000008;
                in_stack_00000008 = uStack000000000000000c;
                goto LAB_01446990;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar16 + 0x18)) goto LAB_0144696c;
              goto LAB_014469b0;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar15) goto LAB_014469b0;
          uVar15 = *(uint *)(lVar16 + lVar6 * 0x10 + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_01d69580(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar15 < uVar8);
      }
    }
    else {
      if (lVar16 == 0) goto LAB_014469b4;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar15 < uVar8) {
        iVar18 = 0;
        do {
          uVar3 = uStack000000000000000c;
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar16 + (long)(int)uVar15 * 0x10 + 0x20) == uVar4) {
            lVar9 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0103c244(lVar9);
            }
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_01446740;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_0103c348(plVar14,lVar9,0);
LAB_01446740:
            uVar12 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar12 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar7 = (undefined4 *)((long)&stack0x00000000 + 4);
                in_stack_00000000._4_4_ = uStack000000000000000c;
LAB_01446990:
                uVar10 = thunk_FUN_0103fd0c(*(undefined8 *)
                                             (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),
                                            puVar7);
                FUN_01d6947c(uVar10,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar16 + 0x18)) {
LAB_0144696c:
                *(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x2c) = param_3;
                return 1;
              }
              goto LAB_014469b0;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar15) goto LAB_014469b0;
          uVar15 = *(uint *)(lVar16 + lVar6 * 0x10 + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_01d69580(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar15 < uVar8);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar15 = *(uint *)(param_1 + 0x20);
      if (uVar15 == uVar8) {
        FUN_01446d50(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 400));
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar6 == 0) goto LAB_014469b4;
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar18 = 0;
        if (uVar8 != 0) {
          iVar18 = (int)uVar4 / (int)uVar8;
        }
        uVar2 = uVar4 - iVar18 * uVar8;
        if (uVar8 <= uVar2) goto LAB_014469b0;
        lVar16 = *(long *)(param_1 + 0x18);
        piVar17 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar16 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
      }
      if (lVar16 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_014469b0;
      lVar6 = (long)(int)uVar15;
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      uVar15 = *(uint *)(param_1 + 0x24);
      if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_014469b0;
      lVar6 = (long)(int)uVar15;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar16 + lVar6 * 0x10 + 0x24);
    }
    lVar16 = lVar16 + lVar6 * 0x10;
    *(uint *)(lVar16 + 0x20) = uVar4;
    *(int *)(lVar16 + 0x24) = *piVar17 + -1;
    *(undefined4 *)(lVar16 + 0x28) = uStack000000000000000c;
    *(undefined4 *)(lVar16 + 0x2c) = param_3;
    *piVar17 = uVar15 + 1;
    return 1;
  }
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


