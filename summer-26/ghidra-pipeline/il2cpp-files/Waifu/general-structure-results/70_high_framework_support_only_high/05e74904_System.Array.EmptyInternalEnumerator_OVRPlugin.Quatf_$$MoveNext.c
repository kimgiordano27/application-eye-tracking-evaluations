/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 05e74904
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar9;
  uint uVar10;
  
  uVar1 = (*(code *)*param_1)();
  uVar10 = *(uint *)(unaff_x22 + 0x18);
  uVar1 = uVar1 & 0x7fffffff;
  iVar9 = 0;
  if (uVar10 != 0) {
    iVar9 = (int)uVar1 / (int)uVar10;
  }
  uVar4 = uVar1 - iVar9 * uVar10;
  if (uVar10 <= uVar4) {
LAB_05e74a40:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  if (unaff_x23 != 0) {
    uVar5 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar10 = *(int *)(unaff_x22 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (uVar10 < (uint)uVar5) {
      iVar9 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar10 * 0x18 + 0x20) == uVar1) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0338f618(lVar3);
          }
          lVar6 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05e749d4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c();
LAB_05e749d4:
          uVar7 = (*(code *)*puVar2)();
          if ((uVar7 & 1) != 0) {
            return uVar10;
          }
          uVar5 = *(undefined8 *)(unaff_x23 + 0x18);
        }
        uVar4 = (uint)uVar5;
        if (uVar4 <= uVar10) goto LAB_05e74a40;
        if ((int)uVar4 <= iVar9) {
          FUN_06851c18(0);
          goto LAB_05e74a4c;
        }
        uVar10 = *(uint *)(unaff_x23 + (long)(int)uVar10 * 0x18 + 0x24);
        iVar9 = iVar9 + 1;
      } while (uVar10 < uVar4);
    }
    return uVar10;
  }
LAB_05e74a4c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


