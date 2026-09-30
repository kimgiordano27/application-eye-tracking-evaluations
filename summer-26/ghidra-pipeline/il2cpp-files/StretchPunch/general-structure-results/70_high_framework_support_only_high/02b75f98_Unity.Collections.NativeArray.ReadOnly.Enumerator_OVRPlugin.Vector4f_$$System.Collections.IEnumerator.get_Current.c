/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b75f98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
               (void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long *unaff_x21;
  uint uVar10;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  if (unaff_x21 == (long *)0x0) {
    uVar2 = FUN_033afb14(&stack0x00000008,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x168));
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = uVar2 & 0x7fffffff;
    iVar9 = 0;
    if (uVar1 != 0) {
      iVar9 = (int)uVar2 / (int)uVar1;
    }
    uVar10 = uVar2 - iVar9 * uVar1;
    if (uVar1 <= uVar10) goto LAB_02b76228;
    if (unaff_x23 == 0) goto LAB_02b7622c;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar10 = *(int *)(unaff_x22 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar10 < uVar1) {
      iVar9 = 0;
      do {
        lVar5 = (long)(int)uVar10;
        if (*(uint *)(unaff_x23 + lVar5 * 0x20 + 0x20) == uVar2) {
          plVar4 = (long *)FUN_021bb118(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_02b76228;
          if (plVar4 == (long *)0x0) goto LAB_02b7622c;
          uVar7 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(unaff_x23 + lVar5 * 0x20 + 0x28),
                             in_stack_00000008,*(undefined8 *)(*plVar4 + 0x1c0));
          if ((uVar7 & 1) != 0) {
            return uVar10;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar10) goto LAB_02b76228;
        uVar10 = *(uint *)(unaff_x23 + lVar5 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar9) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar10 < uVar1);
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 02b75fcc to 02c7602f has its CatchHandler @ 02b76134 */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02b760e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_02b760e8:
    uVar2 = (*(code *)*puVar3)();
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = uVar2 & 0x7fffffff;
    iVar9 = 0;
    if (uVar1 != 0) {
      iVar9 = (int)uVar2 / (int)uVar1;
    }
    uVar10 = uVar2 - iVar9 * uVar1;
    if (uVar1 <= uVar10) {
LAB_02b76228:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (unaff_x23 == 0) {
LAB_02b7622c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar10 = *(int *)(unaff_x22 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar10 < uVar1) {
      iVar9 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar10 * 0x20 + 0x20) == uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01dde7f8(lVar5);
          }
          lVar6 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_02b761b0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_02b761b0:
          uVar7 = (*(code *)*puVar3)();
          if ((uVar7 & 1) != 0) {
            return uVar10;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar10) goto LAB_02b76228;
        uVar10 = *(uint *)(unaff_x23 + (long)(int)uVar10 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar9) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar10 < uVar1);
    }
  }
  return uVar10;
}


