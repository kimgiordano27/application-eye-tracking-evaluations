/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<PlatformMediaPlayer.Native.AVPPlayerTimeRange>$$Dispose
ENTRY_POINT: 087bc254
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<PlatformMediaPlayer_Native_AVPPlayerTimeRange>__Dispose
          (long *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *in_x9;
  int *piVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  uint uVar8;
  ulong unaff_x25;
  ulong uVar9;
  long unaff_x26;
  int unaff_w27;
  undefined4 *unaff_x28;
  uint uVar10;
  ulong unaff_x29;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x087bc254:
  uVar8 = (uint)unaff_x25;
  uVar10 = (uint)unaff_x29;
  uVar3 = (*in_x9)(param_1,param_2,param_3,param_4);
  do {
    uVar9 = unaff_x25;
    if ((uVar3 & 1) != 0) {
      if ((int)uVar10 < 0) {
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) goto LAB_087bc348;
        if ((uint)unaff_x26 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + unaff_x26 * 4 + 0x20) = unaff_x28[1] + 1;
          goto LAB_087bc314;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x20 + 0x18);
        if (lVar5 == 0) goto LAB_087bc348;
        if (uVar10 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar10 * 0x10 + 0x24) = unaff_x28[1];
LAB_087bc314:
          uVar1 = *(undefined4 *)(unaff_x20 + 0x24);
          uVar12 = unaff_x28[3];
          *(uint *)(unaff_x20 + 0x24) = uVar8;
          *unaff_x28 = 0xffffffff;
          unaff_x28[1] = uVar1;
          uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
          *in_stack_00000000 = uVar12;
          *(ulong *)(unaff_x20 + 0x28) = CONCAT44((int)((ulong)uVar11 >> 0x20) + 1,(int)uVar11 + 1);
          return 1;
        }
      }
LAB_087bc34c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    do {
      uVar8 = unaff_x28[1];
      unaff_x25 = (ulong)uVar8;
      unaff_x29 = uVar9 & 0xffffffff;
      uVar10 = (uint)uVar9;
      if ((int)uVar8 < 0) {
        *in_stack_00000000 = 0;
        return 0;
      }
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) goto LAB_087bc348;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_087bc34c;
      unaff_x28 = (undefined4 *)(lVar5 + 0x20 + unaff_x25 * 0x10);
      uVar9 = unaff_x25;
    } while (*(int *)(lVar5 + 0x20 + unaff_x25 * 0x10) != unaff_w27);
    plVar7 = *(long **)(unaff_x20 + 0x30);
    if (plVar7 == (long *)0x0) break;
    uVar1 = unaff_x28[2];
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_087bc270;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar7,lVar5,0);
LAB_087bc270:
    uVar3 = (*(code *)*puVar2)(plVar7,uVar1,in_stack_00000008._4_4_,puVar2[1]);
  } while( true );
  param_1 = (long *)FUN_0566cc80(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
  if (param_1 == (long *)0x0) {
LAB_087bc348:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  param_3 = (ulong)in_stack_00000008._4_4_;
  param_2 = (ulong)(uint)unaff_x28[2];
  in_x9 = *(code **)(*param_1 + 0x1b8);
  param_4 = *(undefined8 *)(*param_1 + 0x1c0);
  goto code_r0x087bc254;
}


