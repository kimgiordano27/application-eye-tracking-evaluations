/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 02b75f8c
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


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 02b75f8c to 02c75fb3 has its CatchHandler @ 02b76130 */
  plVar9 = *(long **)(param_1 + 0x30);
  lVar12 = *(long *)(param_1 + 0x18);
  if (plVar9 == (long *)0x0) {
    uVar2 = FUN_033afb14(&stack0x00000008,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168));
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = uVar2 & 0x7fffffff;
    iVar8 = 0;
    if (uVar1 != 0) {
      iVar8 = (int)uVar2 / (int)uVar1;
    }
    uVar10 = uVar2 - iVar8 * uVar1;
    if (uVar1 <= uVar10) goto LAB_02b76228;
    if (lVar12 == 0) goto LAB_02b7622c;
    uVar1 = *(uint *)(lVar12 + 0x18);
    uVar10 = *(int *)(unaff_x22 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar10 < uVar1) {
      iVar8 = 0;
      do {
        lVar4 = (long)(int)uVar10;
        if (*(uint *)(lVar12 + lVar4 * 0x20 + 0x20) == uVar2) {
          plVar9 = (long *)FUN_021bb118(*(undefined8 *)
                                         (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_02b76228;
          if (plVar9 == (long *)0x0) goto LAB_02b7622c;
          uVar6 = (**(code **)(*plVar9 + 0x1b8))
                            (plVar9,*(undefined8 *)(lVar12 + lVar4 * 0x20 + 0x28),in_stack_00000008,
                             *(undefined8 *)(*plVar9 + 0x1c0));
          if ((uVar6 & 1) != 0) {
            return uVar10;
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
        }
        if (uVar1 <= uVar10) goto LAB_02b76228;
        uVar10 = *(uint *)(lVar12 + lVar4 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar8) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        iVar8 = iVar8 + 1;
      } while (uVar10 < uVar1);
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_02b760e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar9,lVar4,1);
LAB_02b760e8:
    uVar2 = (*(code *)*puVar3)(plVar9,param_2,puVar3[1]);
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = uVar2 & 0x7fffffff;
    iVar8 = 0;
    if (uVar1 != 0) {
      iVar8 = (int)uVar2 / (int)uVar1;
    }
    uVar10 = uVar2 - iVar8 * uVar1;
    if (uVar1 <= uVar10) {
LAB_02b76228:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (lVar12 == 0) {
LAB_02b7622c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    uVar10 = *(int *)(unaff_x22 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar10 < uVar1) {
      iVar8 = 0;
      do {
        lVar4 = lVar12 + (long)(int)uVar10 * 0x20;
        if (*(uint *)(lVar4 + 0x20) == uVar2) {
          uVar11 = *(undefined8 *)(lVar4 + 0x28);
          lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01dde7f8(lVar4);
          }
          lVar5 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02b761b0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar9,lVar4,0);
LAB_02b761b0:
          uVar6 = (*(code *)*puVar3)(plVar9,uVar11,param_2,puVar3[1]);
          if ((uVar6 & 1) != 0) {
            return uVar10;
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
        }
        if (uVar1 <= uVar10) goto LAB_02b76228;
        uVar10 = *(uint *)(lVar12 + (long)(int)uVar10 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar8) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        iVar8 = iVar8 + 1;
      } while (uVar10 < uVar1);
    }
  }
  return uVar10;
}


