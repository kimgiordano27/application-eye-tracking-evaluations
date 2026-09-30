/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 02912ee4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__get_Current
               (code *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  uint uVar8;
  long unaff_x25;
  int iVar9;
  
  uVar2 = (*param_1)();
  uVar1 = *(uint *)(unaff_x25 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar9 = 0;
  if (uVar1 != 0) {
    iVar9 = (int)uVar2 / (int)uVar1;
  }
  uVar8 = uVar2 - iVar9 * uVar1;
  if (uVar8 < uVar1) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar8 = *(int *)(unaff_x25 + (ulong)uVar8 * 4 + 0x20) - 1;
    if (uVar8 < uVar1) {
      iVar9 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar8 * 0x40 + 0x20) == uVar2) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01c72394(lVar4);
          }
          lVar5 = *unaff_x21;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02912fa8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498();
LAB_02912fa8:
          uVar6 = (*(code *)*puVar3)();
          if ((uVar6 & 1) != 0) {
            return uVar8;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar8) goto LAB_0291301c;
        uVar8 = *(uint *)(unaff_x23 + (long)(int)uVar8 * 0x40 + 0x24);
        if ((int)uVar1 <= iVar9) {
          FUN_032f2aac(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar9 = iVar9 + 1;
      } while (uVar8 < uVar1);
    }
    return uVar8;
  }
LAB_0291301c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


