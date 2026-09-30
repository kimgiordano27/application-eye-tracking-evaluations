/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 070b52d0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
                (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar10;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_070b53ec;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20();
LAB_070b53ec:
  uVar3 = (*(code *)*puVar4)();
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar10 = 0;
  if (uVar1 != 0) {
    iVar10 = (int)uVar3 / (int)uVar1;
  }
  uVar2 = uVar3 - iVar10 * uVar1;
  if (uVar2 < uVar1) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar2 = *(int *)(unaff_x22 + (ulong)uVar2 * 4 + 0x20) - 1;
    uVar7 = (ulong)uVar2;
    if (uVar2 < uVar1) {
      iVar10 = 0;
      do {
        if (*(uint *)(unaff_x23 + 0x20 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)) ==
            uVar3) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0406aaec(lVar5);
          }
          lVar6 = *unaff_x21;
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
          puVar4 = (undefined8 *)FUN_0406ae20();
LAB_070b54c0:
          uVar8 = (*(code *)*puVar4)();
          if ((uVar8 & 1) != 0) {
            return uVar7;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= (uint)uVar7) goto LAB_070b5534;
        uVar2 = *(uint *)(unaff_x23 + 0x20 + (long)(int)(uint)uVar7 * 0x10 + 4);
        uVar7 = (ulong)uVar2;
        if ((int)uVar1 <= iVar10) {
          FUN_07506dec(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar10 = iVar10 + 1;
      } while (uVar2 < uVar1);
    }
    return uVar7;
  }
LAB_070b5534:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


