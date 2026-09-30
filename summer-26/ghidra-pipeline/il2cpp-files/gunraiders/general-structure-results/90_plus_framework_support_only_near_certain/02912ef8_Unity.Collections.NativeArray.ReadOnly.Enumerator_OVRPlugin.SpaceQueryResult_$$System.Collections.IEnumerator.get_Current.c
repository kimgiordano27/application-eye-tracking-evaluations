/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02912ef8
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


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint in_w9;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  uint uVar7;
  long unaff_x25;
  int iVar8;
  
  iVar8 = 0;
  if (in_w9 != 0) {
    iVar8 = unaff_w24 / (int)in_w9;
  }
  uVar7 = unaff_w24 - iVar8 * in_w9;
  if (uVar7 < in_w9) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = *(int *)(unaff_x25 + (ulong)uVar7 * 4 + 0x20) - 1;
    if (uVar7 < uVar1) {
      iVar8 = 0;
      do {
        if (*(int *)(unaff_x23 + (long)(int)uVar7 * 0x40 + 0x20) == unaff_w24) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01c72394(lVar3);
          }
          lVar4 = *unaff_x21;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_02912fa8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_01c72498();
LAB_02912fa8:
          uVar5 = (*(code *)*puVar2)();
          if ((uVar5 & 1) != 0) {
            return uVar7;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar7) goto LAB_0291301c;
        uVar7 = *(uint *)(unaff_x23 + (long)(int)uVar7 * 0x40 + 0x24);
        if ((int)uVar1 <= iVar8) {
          FUN_032f2aac(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar8 = iVar8 + 1;
      } while (uVar7 < uVar1);
    }
    return uVar7;
  }
LAB_0291301c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


