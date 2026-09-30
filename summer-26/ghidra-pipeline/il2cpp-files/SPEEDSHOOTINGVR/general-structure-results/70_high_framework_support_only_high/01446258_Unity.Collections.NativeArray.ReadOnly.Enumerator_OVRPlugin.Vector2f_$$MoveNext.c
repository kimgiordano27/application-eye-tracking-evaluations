/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$MoveNext
ENTRY_POINT: 01446258
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__MoveNext(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint uVar8;
  int iVar9;
  
  puVar3 = (undefined8 *)FUN_0103c348();
  uVar2 = (*(code *)*puVar3)();
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar9 = 0;
  if (uVar1 != 0) {
    iVar9 = (int)uVar2 / (int)uVar1;
  }
  uVar8 = uVar2 - iVar9 * uVar1;
  if (uVar8 < uVar1) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar8 = *(int *)(unaff_x22 + (ulong)uVar8 * 4 + 0x20) - 1;
    if (uVar8 < uVar1) {
      iVar9 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar8 * 0x10 + 0x20) == uVar2) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244(lVar4);
          }
          lVar5 = *unaff_x21;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_01446418;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_0103c348();
LAB_01446418:
          uVar6 = (*(code *)*puVar3)();
          if ((uVar6 & 1) != 0) {
            return uVar8;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar8) goto LAB_01446490;
        uVar8 = *(uint *)(unaff_x23 + (long)(int)uVar8 * 0x10 + 0x24);
        if ((int)uVar1 <= iVar9) {
          FUN_01d69580(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar8 < uVar1);
    }
    return uVar8;
  }
LAB_01446490:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


