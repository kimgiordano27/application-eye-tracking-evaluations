/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 01446698
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>___ctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int in_w8;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long *unaff_x23;
  uint uVar11;
  char unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int iVar12;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uVar11 = in_w8 - 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x26 == 0) goto LAB_014469b4;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar11 < uVar5) {
      iVar12 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar10 = (long)(int)uVar11;
        if (*(int *)(unaff_x26 + (long)(int)uVar11 * 0x10 + 0x20) == unaff_w27) {
          plVar3 = (long *)FUN_01169cd0(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_014469b0;
          if (plVar3 == (long *)0x0) goto LAB_014469b4;
          uVar8 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined4 *)(unaff_x26 + lVar10 * 0x10 + 0x28),
                             uStack000000000000000c,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar8 & 1) != 0) {
            if (unaff_w25 == '\x02') {
              puVar2 = (undefined8 *)&stack0x00000008;
              uStack0000000000000008 = uStack000000000000000c;
              goto LAB_01446990;
            }
            if (unaff_w25 != '\x01') {
              return 0;
            }
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) goto LAB_0144696c;
            goto LAB_014469b0;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_014469b0;
        uVar11 = *(uint *)(unaff_x26 + lVar10 * 0x10 + 0x24);
        if ((int)uVar5 <= iVar12) {
          FUN_01d69580(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar11 < uVar5);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_014469b4;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar11 < uVar5) {
      iVar12 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar10 = (long)(int)uVar11;
        if (*(int *)(unaff_x26 + (long)(int)uVar11 * 0x10 + 0x20) == unaff_w27) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244(lVar4);
          }
          lVar7 = *unaff_x23;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_01446740;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_0103c348();
LAB_01446740:
          uVar8 = (*(code *)*puVar2)();
          if ((uVar8 & 1) != 0) {
            if (unaff_w25 == '\x02') {
              puVar2 = (undefined8 *)((long)&stack0x00000000 + 4);
              in_stack_00000000._4_4_ = uStack000000000000000c;
LAB_01446990:
              uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                         puVar2);
              FUN_01d6947c(uVar6,0);
              return 0;
            }
            if (unaff_w25 != '\x01') {
              return 0;
            }
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
LAB_0144696c:
              *(undefined4 *)(unaff_x26 + lVar10 * 0x10 + 0x2c) = unaff_w19;
              return 1;
            }
            goto LAB_014469b0;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_014469b0;
        uVar11 = *(uint *)(unaff_x26 + lVar10 * 0x10 + 0x24);
        if ((int)uVar5 <= iVar12) {
          FUN_01d69580(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar11 < uVar5);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar5) {
      FUN_01446d50();
      lVar10 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar10 == 0) goto LAB_014469b4;
      uVar5 = *(uint *)(lVar10 + 0x18);
      iVar12 = 0;
      if (uVar5 != 0) {
        iVar12 = unaff_w27 / (int)uVar5;
      }
      uVar1 = unaff_w27 - iVar12 * uVar5;
      if (uVar5 <= uVar1) goto LAB_014469b0;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar10 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_014469b0;
    lVar10 = (long)(int)uVar11;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) {
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar10 = (long)(int)uVar11;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar10 * 0x10 + 0x24);
  }
  lVar10 = unaff_x26 + lVar10 * 0x10;
  *(int *)(lVar10 + 0x20) = unaff_w27;
  *(int *)(lVar10 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar10 + 0x28) = uStack000000000000000c;
  *(undefined4 *)(lVar10 + 0x2c) = unaff_w19;
  *unaff_x28 = uVar11 + 1;
  return 1;
}


