/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$Reset
ENTRY_POINT: 01446610
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__Reset
          (long param_1,undefined8 param_2,long param_3)

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
  long in_x9;
  ulong uVar10;
  int *piVar11;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar12;
  char unaff_w25;
  long unaff_x26;
  int *piVar13;
  int iVar14;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar13 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar13 + 1) * 0x10 + 0x138);
      goto LAB_01446660;
    }
    in_x9 = in_x9 + -1;
    piVar13 = piVar13 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_0103c348();
LAB_01446660:
  uVar2 = (*(code *)*puVar3)();
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 == 0) goto LAB_014469b4;
  uVar12 = *(uint *)(lVar7 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar14 = 0;
  if (uVar12 != 0) {
    iVar14 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar14 * uVar12;
  if (uVar6 < uVar12) {
    piVar13 = (int *)(lVar7 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar13 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_014469b4;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x10 + 0x20) == uVar2) {
            plVar4 = (long *)FUN_01169cd0(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_014469b0;
            if (plVar4 == (long *)0x0) goto LAB_014469b4;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined4 *)(unaff_x26 + lVar7 * 0x10 + 0x28),
                                uStack000000000000000c,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if (unaff_w25 == '\x02') {
                puVar3 = (undefined8 *)&stack0x00000008;
                uStack0000000000000008 = uStack000000000000000c;
                goto LAB_01446990;
              }
              if (unaff_w25 != '\x01') {
                return 0;
              }
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) goto LAB_0144696c;
              goto LAB_014469b0;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_014469b0;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x10 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_01d69580(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_014469b4;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x10 + 0x20) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0103c244(lVar5);
            }
            lVar9 = *unaff_x23;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_01446740;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_0103c348();
LAB_01446740:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if (unaff_w25 == '\x02') {
                puVar3 = (undefined8 *)((long)&stack0x00000000 + 4);
                in_stack_00000000._4_4_ = uStack000000000000000c;
LAB_01446990:
                uVar8 = thunk_FUN_0103fd0c(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                           puVar3);
                FUN_01d6947c(uVar8,0);
                return 0;
              }
              if (unaff_w25 != '\x01') {
                return 0;
              }
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
LAB_0144696c:
                *(undefined4 *)(unaff_x26 + lVar7 * 0x10 + 0x2c) = unaff_w19;
                return 1;
              }
              goto LAB_014469b0;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_014469b0;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x10 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_01d69580(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x20 + 0x20);
      if (uVar12 == uVar6) {
        FUN_01446d50();
        lVar7 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
        if (lVar7 == 0) goto LAB_014469b4;
        uVar6 = *(uint *)(lVar7 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1) goto LAB_014469b0;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar13 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_014469b0;
      lVar7 = (long)(int)uVar12;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar12 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_014469b0;
      lVar7 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x10 + 0x24);
    }
    lVar7 = unaff_x26 + lVar7 * 0x10;
    *(uint *)(lVar7 + 0x20) = uVar2;
    *(int *)(lVar7 + 0x24) = *piVar13 + -1;
    *(undefined4 *)(lVar7 + 0x28) = uStack000000000000000c;
    *(undefined4 *)(lVar7 + 0x2c) = unaff_w19;
    *piVar13 = uVar12 + 1;
    return 1;
  }
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


