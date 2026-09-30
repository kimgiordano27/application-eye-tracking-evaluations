/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 070b5288
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__get_Current
                (long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 uStack000000000000000c;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    uStack000000000000000c = param_2;
    if (plVar11 == (long *)0x0) {
      uVar3 = FUN_07501be0(&stack0x0000000c,*(undefined8 *)(lVar5 + 400));
      uVar1 = *(uint *)(lVar13 + 0x18);
      uVar3 = uVar3 & 0x7fffffff;
      iVar10 = 0;
      if (uVar1 != 0) {
        iVar10 = (int)uVar3 / (int)uVar1;
      }
      uVar12 = uVar3 - iVar10 * uVar1;
      if (uVar1 <= uVar12) goto LAB_070b5534;
      if (lVar14 == 0) goto LAB_070b5538;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar12 * 4 + 0x20) - 1;
      uVar7 = (ulong)uVar12;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        do {
          uVar12 = (uint)uVar7;
          lVar13 = lVar14 + 0x20 + (long)(int)uVar12 * 0x10;
          if (*(uint *)(lVar14 + 0x20 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) ==
              uVar3) {
            plVar11 = (long *)FUN_04ec3220(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_070b5534;
            if (plVar11 == (long *)0x0) goto LAB_070b5538;
            uVar8 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar13 + 8),uStack000000000000000c,
                               *(undefined8 *)(*plVar11 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              return uVar7;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12) goto LAB_070b5534;
          uVar12 = *(uint *)(lVar13 + 4);
          uVar7 = (ulong)uVar12;
          if ((int)uVar1 <= iVar10) {
            FUN_07506dec(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
    else {
      lVar5 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0406aaec(lVar5);
      }
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_070b53ec;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar11,lVar5,1);
LAB_070b53ec:
      uVar3 = (*(code *)*puVar4)(plVar11,param_2,puVar4[1]);
      uVar1 = *(uint *)(lVar13 + 0x18);
      uVar3 = uVar3 & 0x7fffffff;
      iVar10 = 0;
      if (uVar1 != 0) {
        iVar10 = (int)uVar3 / (int)uVar1;
      }
      uVar12 = uVar3 - iVar10 * uVar1;
      if (uVar1 <= uVar12) {
LAB_070b5534:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (lVar14 == 0) {
LAB_070b5538:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar12 * 4 + 0x20) - 1;
      uVar7 = (ulong)uVar12;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        do {
          lVar13 = lVar14 + 0x20 + (long)(int)(uint)uVar7 * 0x10;
          if (*(uint *)(lVar14 + 0x20 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) ==
              uVar3) {
            uVar2 = *(undefined4 *)(lVar13 + 8);
            lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0406aaec(lVar5);
            }
            lVar6 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar5) {
                  puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_070b54c0;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_0406ae20(plVar11,lVar5,0);
LAB_070b54c0:
            uVar8 = (*(code *)*puVar4)(plVar11,uVar2,param_2,puVar4[1]);
            if ((uVar8 & 1) != 0) {
              return uVar7;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= (uint)uVar7) goto LAB_070b5534;
          uVar12 = *(uint *)(lVar13 + 4);
          uVar7 = (ulong)uVar12;
          if ((int)uVar1 <= iVar10) {
            FUN_07506dec(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
  }
  return uVar7;
}


