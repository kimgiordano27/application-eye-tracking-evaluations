/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 06ad8318
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int iVar9;
  uint uVar10;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_03cf1348();
      goto LAB_06ad8428;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
LAB_06ad8428:
  uVar3 = (*(code *)*puVar4)();
  uVar2 = *(uint *)(unaff_x22 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar9 = 0;
  if (uVar2 != 0) {
    iVar9 = (int)uVar3 / (int)uVar2;
  }
  uVar10 = uVar3 - iVar9 * uVar2;
  if (uVar10 < uVar2) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    uVar10 = *(int *)(unaff_x22 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar10 < uVar2) {
      iVar9 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar10 * 0x18 + 0x20) == uVar3) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03cf1244(lVar5);
          }
          lVar6 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06ad84fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ad84fc:
          uVar7 = (*(code *)*puVar4)();
          if ((uVar7 & 1) != 0) {
            return uVar10;
          }
          uVar2 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar2 <= uVar10)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
        uVar10 = *(uint *)(unaff_x23 + (long)(int)uVar10 * 0x18 + 0x24);
        if ((int)uVar2 <= iVar9) {
          FUN_07122f08(0);
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar10 < uVar2);
    }
    return uVar10;
  }
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


