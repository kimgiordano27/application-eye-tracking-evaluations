/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bbc3cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  uint unaff_w24;
  uint uVar9;
  int *piVar10;
  long lVar11;
  int unaff_w27;
  ulong uVar12;
  uint unaff_w29;
  long lStack0000000000000000;
  long in_stack_00000008;
  
  lStack0000000000000000 = in_x10;
  do {
    uVar9 = unaff_w24;
                    /* try { // try from 02bbc3d0 to 02cbc423 has its CatchHandler @ 02bbc3d0
                       catch() { ... } // from try @ 02bbc3d0 with catch @ 02bbc3d0
                       catch() { ... } // from try @ 02bbc4e8 with catch @ 02bbc3d0
                       catch() { ... } // from try @ 02bbc570 with catch @ 02bbc3d0
                       catch() { ... } // from try @ 02bbc5b4 with catch @ 02bbc3d0
                       catch() { ... } // from try @ 02bbc5e4 with catch @ 02bbc3d0
                       catch() { ... } // from try @ 02bbc660 with catch @ 02bbc3d0 */
    lVar11 = *(long *)(unaff_x19 + 0x18);
    if (lVar11 == 0) goto LAB_02bbc5bc;
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_02bbc5c0;
    piVar10 = (int *)(lVar11 + (ulong)uVar9 * (unaff_x20 & 0xffffffff) + 0x20);
    uVar12 = (ulong)uVar9;
    if (*piVar10 == unaff_w27) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_02249368(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar4 == (long *)0x0) goto LAB_02bbc5bc;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar11 + uVar12 * unaff_x20 + 0x28));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_02bbc5bc;
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
                    /* try { // try from 02bbc424 to 02cbc44f has its CatchHandler @ 02bbc4e8 */
        uVar8 = *(undefined8 *)(lVar11 + uVar12 * unaff_x20 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02bbc4cc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar4,lVar3,0);
LAB_02bbc4cc:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar8);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w29 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_02bbc5bc;
          if (*(uint *)(lVar3 + 0x18) <= (uint)lStack0000000000000000) goto LAB_02bbc5c0;
          *(int *)(lVar3 + lStack0000000000000000 * 4 + 0x20) =
               *(int *)(lVar11 + uVar12 * 0x18 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_02bbc5bc:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w29) {
LAB_02bbc5c0:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w29 * 0x18 + 0x24) =
               *(undefined4 *)(lVar11 + uVar12 * 0x18 + 0x24);
        }
        *piVar10 = -1;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
        lVar11 = lVar11 + uVar12 * 0x18;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined4 *)(lVar11 + 0x24) = uVar1;
        *(uint *)(unaff_x19 + 0x24) = uVar9;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w24 = *(uint *)(lVar11 + uVar12 * unaff_x20 + 0x24);
    unaff_w29 = uVar9;
    if ((int)unaff_w24 < 0) {
      return 0;
    }
  } while( true );
}


