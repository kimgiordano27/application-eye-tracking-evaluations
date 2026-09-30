/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 047a8a24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              (long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  long unaff_x21;
  int iVar9;
  uint uVar10;
  ulong unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_047a8bb0;
    if (unaff_x20 == 0) break;
    puVar4 = (undefined8 *)(param_1 + unaff_x21);
    in_stack_00000048 = puVar4[1];
    in_stack_00000040 = *puVar4;
    in_stack_00000050 = puVar4[2];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) != 0) {
LAB_047a8a80:
      if (iVar1 <= (int)unaff_x22) {
        return 0;
      }
      uVar2 = unaff_x22 & 0xffffffff;
      goto LAB_047a8a98;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x18;
    if ((long)iVar1 <= (long)unaff_x22) goto LAB_047a8a80;
    param_1 = *(long *)(unaff_x19 + 0x10);
  } while (param_1 != 0);
LAB_047a8bac:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
LAB_047a8a98:
  unaff_x22 = (ulong)((int)unaff_x22 + 1);
  do {
    iVar9 = (int)unaff_x22;
    uVar8 = (uint)uVar2;
    if (iVar1 <= iVar9) {
      FUN_05e3b0f4(*(undefined8 *)(unaff_x19 + 0x10),uVar2,iVar1 - uVar8,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar8;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar1 - uVar8;
    }
    unaff_x22 = (ulong)iVar9;
    lVar6 = (long)iVar9 * 0x18 + 0x20;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_047a8bac;
      if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_047a8bb0;
      if (unaff_x20 == 0) goto LAB_047a8bac;
      puVar4 = (undefined8 *)(lVar5 + lVar6);
      in_stack_00000048 = puVar4[1];
      in_stack_00000040 = *puVar4;
      in_stack_00000050 = puVar4[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      iVar1 = *(int *)(unaff_x19 + 0x18);
      if ((uVar3 & 1) == 0) break;
      unaff_x22 = unaff_x22 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((long)unaff_x22 < (long)iVar1);
    uVar10 = (uint)unaff_x22;
  } while (iVar1 <= (int)uVar10);
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_047a8bac;
  if ((*(uint *)(lVar6 + 0x18) <= uVar10) || (*(uint *)(lVar6 + 0x18) <= uVar8)) {
LAB_047a8bb0:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  puVar7 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar10 * 0x18);
  puVar4 = (undefined8 *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x18);
  uVar2 = (ulong)(uVar8 + 1);
  uVar12 = puVar7[1];
  uVar11 = *puVar7;
  puVar4[2] = puVar7[2];
  puVar4[1] = uVar12;
  *puVar4 = uVar11;
  thunk_FUN_036b7ad0(puVar4,0);
  iVar1 = *(int *)(unaff_x19 + 0x18);
  goto LAB_047a8a98;
}


