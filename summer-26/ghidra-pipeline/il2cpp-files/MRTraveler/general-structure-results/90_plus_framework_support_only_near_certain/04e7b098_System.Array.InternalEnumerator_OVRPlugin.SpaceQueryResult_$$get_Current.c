/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 04e7b098
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long *plVar10;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  
  do {
    do {
      uVar6 = (uint)*(undefined8 *)(unaff_x28 + 0x18);
      if ((int)uVar6 <= unaff_w29) {
        thunk_FUN_03ce5214(PTR_DAT_08e71970);
        uVar3 = thunk_FUN_03cf5234();
        uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
        FUN_07100530(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar3,in_stack_00000008);
      }
      if (uVar6 <= (uint)unaff_x24) {
LAB_04e7b0e4:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar1 = *(uint *)(unaff_x28 + unaff_x20 * unaff_x19 + 0x24);
      unaff_x20 = (ulong)uVar1;
      unaff_w29 = unaff_w29 + 1;
      if ((int)uVar1 < 0) {
        return 0xffffffff;
      }
      if (uVar6 <= uVar1) goto LAB_04e7b0e4;
      unaff_x24 = unaff_x20;
    } while (*(int *)(unaff_x28 + unaff_x20 * (unaff_x19 & 0xffffffff) + 0x20) != unaff_w23);
    plVar10 = *(long **)(unaff_x22 + 0x30);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
    lVar7 = unaff_x28 + unaff_x20 * unaff_x19;
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    uVar4 = *(undefined8 *)(lVar7 + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04e7b078;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar10,lVar5,0);
LAB_04e7b078:
    uVar8 = (*(code *)*puVar2)(plVar10,uVar3,uVar4);
    if ((uVar8 & 1) != 0) {
      return unaff_x20;
    }
  } while( true );
}


