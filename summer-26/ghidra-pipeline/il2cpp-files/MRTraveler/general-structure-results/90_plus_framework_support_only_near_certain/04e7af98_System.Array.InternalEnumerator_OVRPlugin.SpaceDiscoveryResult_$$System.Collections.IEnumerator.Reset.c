/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04e7af98
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x22;
  long *plVar11;
  int iVar12;
  long in_stack_00000008;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  if (lVar6 == 0) {
LAB_04e7b124:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  iVar12 = 0;
  if (uVar1 != 0) {
    iVar12 = param_1 / (int)uVar1;
  }
  uVar2 = param_1 - iVar12 * uVar1;
  if (uVar1 <= uVar2) {
LAB_04e7b0e4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  uVar1 = *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar1) {
    lVar6 = *(long *)(unaff_x22 + 0x18);
    if (lVar6 == 0) goto LAB_04e7b124;
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    iVar12 = 0;
    do {
      if ((uint)uVar7 <= uVar1) goto LAB_04e7b0e4;
      if (*(int *)(lVar6 + (ulong)uVar1 * 0x18 + 0x20) == param_1) {
        plVar11 = *(long **)(unaff_x22 + 0x30);
        if (plVar11 == (long *)0x0) goto LAB_04e7b124;
        lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
        lVar8 = lVar6 + (ulong)uVar1 * 0x18;
        uVar7 = *(undefined8 *)(lVar8 + 0x28);
        uVar4 = *(undefined8 *)(lVar8 + 0x30);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03cf1244(lVar5);
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04e7b078;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(plVar11,lVar5,0);
LAB_04e7b078:
        uVar9 = (*(code *)*puVar3)(plVar11,uVar7,uVar4);
        if ((uVar9 & 1) != 0) {
          return uVar1;
        }
        uVar7 = *(undefined8 *)(lVar6 + 0x18);
      }
      if ((int)(uint)uVar7 <= iVar12) {
        thunk_FUN_03ce5214(PTR_DAT_08e71970);
        uVar7 = thunk_FUN_03cf5234();
        uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
        FUN_07100530(uVar7,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar7,in_stack_00000008);
      }
      if ((uint)uVar7 <= uVar1) goto LAB_04e7b0e4;
      uVar1 = *(uint *)(lVar6 + (ulong)uVar1 * 0x18 + 0x24);
      iVar12 = iVar12 + 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}


