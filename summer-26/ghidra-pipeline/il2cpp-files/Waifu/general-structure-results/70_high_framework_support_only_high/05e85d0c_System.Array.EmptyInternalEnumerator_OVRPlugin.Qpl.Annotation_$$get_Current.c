/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 05e85d0c
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


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x25;
  uint uVar10;
  int iVar11;
  
  do {
    in_x9 = in_x9 + -1;
    piVar9 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_0338f71c();
      goto LAB_05e85e14;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar9;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
LAB_05e85e14:
  uVar2 = (*(code *)*puVar3)();
  uVar10 = *(uint *)(unaff_x23 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar11 = 0;
  if (uVar10 != 0) {
    iVar11 = (int)uVar2 / (int)uVar10;
  }
  uVar5 = uVar2 - iVar11 * uVar10;
  if (uVar10 <= uVar5) {
LAB_05e85f58:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  if (unaff_x25 != 0) {
    uVar6 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar10 = *(int *)(unaff_x23 + (ulong)uVar5 * 4 + 0x20) - 1;
    if (uVar10 < (uint)uVar6) {
      iVar11 = 0;
      do {
        if (*(uint *)(unaff_x25 + (long)(int)uVar10 * 0x20 + 0x20) == uVar2) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0338f618(lVar4);
          }
          lVar7 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05e85ee4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_0338f71c();
LAB_05e85ee4:
          uVar8 = (*(code *)*puVar3)();
          if ((uVar8 & 1) != 0) {
            return uVar10;
          }
          uVar6 = *(undefined8 *)(unaff_x25 + 0x18);
        }
        uVar5 = (uint)uVar6;
        if (uVar5 <= uVar10) goto LAB_05e85f58;
        if ((int)uVar5 <= iVar11) {
          FUN_06851c18(0);
          goto LAB_05e85f64;
        }
        uVar10 = *(uint *)(unaff_x25 + (long)(int)uVar10 * 0x20 + 0x24);
        iVar11 = iVar11 + 1;
      } while (uVar10 < uVar5);
    }
    return uVar10;
  }
LAB_05e85f64:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


