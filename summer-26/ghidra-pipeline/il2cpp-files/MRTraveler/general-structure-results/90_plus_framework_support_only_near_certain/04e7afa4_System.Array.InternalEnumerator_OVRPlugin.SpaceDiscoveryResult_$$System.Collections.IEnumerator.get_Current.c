/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04e7afa4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint in_w10;
  int *piVar8;
  long unaff_x22;
  long *plVar9;
  long lVar10;
  int iVar11;
  long in_stack_00000008;
  
  iVar11 = 0;
  if (in_w10 != 0) {
    iVar11 = param_2 / (int)in_w10;
  }
  uVar1 = param_2 - iVar11 * in_w10;
  if (in_w10 <= uVar1) {
LAB_04e7b0e4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  uVar1 = *(int *)(param_1 + (long)(int)uVar1 * 4 + 0x20) - 1;
  if (-1 < (int)uVar1) {
    lVar10 = *(long *)(unaff_x22 + 0x18);
    if (lVar10 == 0) {
LAB_04e7b124:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x18);
    iVar11 = 0;
    do {
      if ((uint)uVar5 <= uVar1) goto LAB_04e7b0e4;
      if (*(int *)(lVar10 + (ulong)uVar1 * 0x18 + 0x20) == param_2) {
        plVar9 = *(long **)(unaff_x22 + 0x30);
        if (plVar9 == (long *)0x0) goto LAB_04e7b124;
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
        lVar6 = lVar10 + (ulong)uVar1 * 0x18;
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        uVar3 = *(undefined8 *)(lVar6 + 0x30);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03cf1244(lVar4);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04e7b078;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348(plVar9,lVar4,0);
LAB_04e7b078:
        uVar7 = (*(code *)*puVar2)(plVar9,uVar5,uVar3);
        if ((uVar7 & 1) != 0) {
          return uVar1;
        }
        uVar5 = *(undefined8 *)(lVar10 + 0x18);
      }
      if ((int)(uint)uVar5 <= iVar11) {
        thunk_FUN_03ce5214(PTR_DAT_08e71970);
        uVar5 = thunk_FUN_03cf5234();
        uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
        FUN_07100530(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5,in_stack_00000008);
      }
      if ((uint)uVar5 <= uVar1) goto LAB_04e7b0e4;
      uVar1 = *(uint *)(lVar10 + (ulong)uVar1 * 0x18 + 0x24);
      iVar11 = iVar11 + 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}


