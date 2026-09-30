/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 021afc98
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
          (uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar10;
  undefined8 unaff_x25;
  long unaff_x26;
  int *piVar11;
  uint unaff_w29;
  int iVar12;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
  uVar10 = *(uint *)(lVar5 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar12 = 0;
  if (uVar10 != 0) {
    iVar12 = (int)param_1 / (int)uVar10;
  }
  uVar4 = param_1 - iVar12 * uVar10;
  if (uVar4 < uVar10) {
    piVar11 = (int *)(lVar5 + (ulong)uVar4 * 4 + 0x20);
    uVar10 = *piVar11 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar4 = (uint)uVar6;
      if (uVar10 < uVar4) {
        iVar12 = 0;
        do {
          uVar4 = (uint)uVar6;
          lVar5 = (long)(int)uVar10;
          if (*(uint *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x20) == param_1) {
            plVar3 = (long *)FUN_01abe62c(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_021b0044;
            if (plVar3 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
            uVar8 = (**(code **)(*plVar3 + 0x1b8))
                              (plVar3,*(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x28),
                               uStack000000000000001c,*(undefined8 *)(*plVar3 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar2 = (undefined8 *)&stack0x00000018;
                uStack0000000000000018 = uStack000000000000001c;
                goto LAB_021b0024;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_021b0044;
              *(undefined8 *)(unaff_x26 + lVar5 * 0x18 + 0x30) = unaff_x25;
              goto LAB_021b0000;
            }
            uVar4 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar4 <= uVar10) goto LAB_021b0044;
          uVar10 = *(uint *)(unaff_x26 + lVar5 * 0x18 + 0x24);
          if ((int)uVar4 <= iVar12) {
            FUN_02befd44(0);
          }
          uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar12 = iVar12 + 1;
          uVar4 = (uint)uVar6;
        } while (uVar10 < uVar4);
      }
    }
    else {
      if (unaff_x26 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar4 = (uint)uVar6;
      if (uVar10 < uVar4) {
        iVar12 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar4 = (uint)uVar6;
          if (*(uint *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x20) == param_1) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0185daa4(lVar5);
            }
            lVar7 = *unaff_x23;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar5) {
                  puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_021afd9c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined8 *)FUN_0185dba8();
LAB_021afd9c:
            uVar8 = (*(code *)*puVar2)();
            if ((uVar8 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
                puVar2 = (undefined8 *)((long)&stack0x00000010 + 4);
                in_stack_00000010._4_4_ = uStack000000000000001c;
LAB_021b0024:
                uVar6 = thunk_FUN_018617ec(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                           puVar2);
                FUN_02befc40(uVar6,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x30) = unaff_x25;
LAB_021b0000:
                thunk_FUN_0188fd20();
                return 1;
              }
              goto LAB_021b0044;
            }
            uVar4 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar4 <= uVar10) goto LAB_021b0044;
          uVar10 = *(uint *)(unaff_x26 + (long)(int)uVar10 * 0x18 + 0x24);
          if ((int)uVar4 <= iVar12) {
            FUN_02befd44(0);
          }
          uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar12 = iVar12 + 1;
          uVar4 = (uint)uVar6;
        } while (uVar10 < uVar4);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar10 = *(uint *)(unaff_x20 + 0x20);
      if (uVar10 == uVar4) {
        FUN_021b03e4();
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
        if (lVar5 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
        uVar4 = *(uint *)(lVar5 + 0x18);
        iVar12 = 0;
        if (uVar4 != 0) {
          iVar12 = (int)param_1 / (int)uVar4;
        }
        uVar1 = param_1 - iVar12 * uVar4;
        if (uVar4 <= uVar1) goto LAB_021b0044;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar11 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
      }
      if (unaff_x26 == 0) {
System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_021b0044;
      lVar5 = (long)(int)uVar10;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar10 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_021b0044;
      lVar5 = (long)(int)uVar10;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x18 + 0x24);
    }
    lVar5 = unaff_x26 + lVar5 * 0x18;
    *(uint *)(lVar5 + 0x20) = param_1;
    *(int *)(lVar5 + 0x24) = *piVar11 + -1;
    *(undefined8 *)(lVar5 + 0x30) = unaff_x25;
    *(undefined4 *)(lVar5 + 0x28) = uStack000000000000001c;
    thunk_FUN_0188fd20((undefined8 *)(lVar5 + 0x30),unaff_x25);
    *piVar11 = uVar10 + 1;
    return 1;
  }
LAB_021b0044:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


