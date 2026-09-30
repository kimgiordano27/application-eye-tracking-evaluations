/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 05e85d04
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long in_x11;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x25;
  uint uVar9;
  int iVar10;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0338f71c();
      goto LAB_05e85e14;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_05e85e14:
  uVar1 = (*(code *)*puVar2)();
  uVar9 = *(uint *)(unaff_x23 + 0x18);
  uVar1 = uVar1 & 0x7fffffff;
  iVar10 = 0;
  if (uVar9 != 0) {
    iVar10 = (int)uVar1 / (int)uVar9;
  }
  uVar4 = uVar1 - iVar10 * uVar9;
  if (uVar9 <= uVar4) {
LAB_05e85f58:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  if (unaff_x25 != 0) {
    uVar5 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar9 = *(int *)(unaff_x23 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (uVar9 < (uint)uVar5) {
      iVar10 = 0;
      do {
        if (*(uint *)(unaff_x25 + (long)(int)uVar9 * 0x20 + 0x20) == uVar1) {
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
                goto LAB_05e85ee4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c();
LAB_05e85ee4:
          uVar7 = (*(code *)*puVar2)();
          if ((uVar7 & 1) != 0) {
            return uVar9;
          }
          uVar5 = *(undefined8 *)(unaff_x25 + 0x18);
        }
        uVar4 = (uint)uVar5;
        if (uVar4 <= uVar9) goto LAB_05e85f58;
        if ((int)uVar4 <= iVar10) {
          FUN_06851c18(0);
          goto LAB_05e85f64;
        }
        uVar9 = *(uint *)(unaff_x25 + (long)(int)uVar9 * 0x20 + 0x24);
        iVar10 = iVar10 + 1;
      } while (uVar9 < uVar4);
    }
    return uVar9;
  }
LAB_05e85f64:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


