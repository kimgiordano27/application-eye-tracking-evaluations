/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 021afcb0
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor(code *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar11;
  undefined8 unaff_x25;
  long unaff_x26;
  int *piVar12;
  uint unaff_w29;
  int iVar13;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar2 = (*param_1)();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
  uVar11 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)uVar2 / (int)uVar11;
  }
  uVar5 = uVar2 - iVar13 * uVar11;
  if (uVar5 < uVar11) {
    piVar12 = (int *)(lVar6 + (ulong)uVar5 * 4 + 0x20);
    uVar11 = *piVar12 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar5 = (uint)uVar7;
      if (uVar11 < uVar5) {
        iVar13 = 0;
        do {
          uVar5 = (uint)uVar7;
          lVar6 = (long)(int)uVar11;
          if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x20) == uVar2) {
            plVar4 = (long *)FUN_01abe62c(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_021b0044;
            if (plVar4 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
            uVar9 = (**(code **)(*plVar4 + 0x1b8))
                              (plVar4,*(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x28),
                               uStack000000000000001c,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar9 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar3 = (undefined8 *)&stack0x00000018;
                uStack0000000000000018 = uStack000000000000001c;
                goto LAB_021b0024;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_021b0044;
              *(undefined8 *)(unaff_x26 + lVar6 * 0x18 + 0x30) = unaff_x25;
              goto LAB_021b0000;
            }
            uVar5 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar5 <= uVar11) goto LAB_021b0044;
          uVar11 = *(uint *)(unaff_x26 + lVar6 * 0x18 + 0x24);
          if ((int)uVar5 <= iVar13) {
            FUN_02befd44(0);
          }
          uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar13 = iVar13 + 1;
          uVar5 = (uint)uVar7;
        } while (uVar11 < uVar5);
      }
    }
    else {
      if (unaff_x26 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar5 = (uint)uVar7;
      if (uVar11 < uVar5) {
        iVar13 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar5 = (uint)uVar7;
          if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x20) == uVar2) {
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0185daa4(lVar6);
            }
            lVar8 = *unaff_x23;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_021afd9c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_0185dba8();
LAB_021afd9c:
            uVar9 = (*(code *)*puVar3)();
            if ((uVar9 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
                puVar3 = (undefined8 *)((long)&stack0x00000010 + 4);
                in_stack_00000010._4_4_ = uStack000000000000001c;
LAB_021b0024:
                uVar7 = thunk_FUN_018617ec(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                           puVar3);
                FUN_02befc40(uVar7,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x30) = unaff_x25;
LAB_021b0000:
                thunk_FUN_0188fd20();
                return 1;
              }
              goto LAB_021b0044;
            }
            uVar5 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar5 <= uVar11) goto LAB_021b0044;
          uVar11 = *(uint *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x24);
          if ((int)uVar5 <= iVar13) {
            FUN_02befd44(0);
          }
          uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar13 = iVar13 + 1;
          uVar5 = (uint)uVar7;
        } while (uVar11 < uVar5);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar11 = *(uint *)(unaff_x20 + 0x20);
      if (uVar11 == uVar5) {
        FUN_021b03e4();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
        if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
        uVar5 = *(uint *)(lVar6 + 0x18);
        iVar13 = 0;
        if (uVar5 != 0) {
          iVar13 = (int)uVar2 / (int)uVar5;
        }
        uVar1 = uVar2 - iVar13 * uVar5;
        if (uVar5 <= uVar1) goto LAB_021b0044;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar12 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      }
      if (unaff_x26 == 0) {
System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_021b0044;
      lVar6 = (long)(int)uVar11;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar11 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_021b0044;
      lVar6 = (long)(int)uVar11;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x24);
    }
    lVar6 = unaff_x26 + lVar6 * 0x18;
    *(uint *)(lVar6 + 0x20) = uVar2;
    *(int *)(lVar6 + 0x24) = *piVar12 + -1;
    *(undefined8 *)(lVar6 + 0x30) = unaff_x25;
    *(undefined4 *)(lVar6 + 0x28) = uStack000000000000001c;
    thunk_FUN_0188fd20((undefined8 *)(lVar6 + 0x30),unaff_x25);
    *piVar12 = uVar11 + 1;
    return 1;
  }
LAB_021b0044:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


