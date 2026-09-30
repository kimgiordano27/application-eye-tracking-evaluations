/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 044f18c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x044f1a74) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Item(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ushort in_w8;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_031c09d4(param_2);
    }
    lVar3 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_2) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_044f1920;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(unaff_x21,param_2,0);
LAB_044f1920:
    (*(code *)*puVar2)(&stack0x00000018,unaff_x21,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    plVar1 = in_stack_00000058;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar3 = lVar3 + (long)(int)uVar4 * (long)unaff_w23;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000050;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *in_stack_00000058;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_044f189c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*unaff_x22,0);
LAB_044f189c:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000058;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000058;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_044f1a20;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    in_w8 = *(ushort *)(param_2 + 0x135);
    unaff_x21 = in_stack_00000058;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_044f1a3c;
    }
  }
LAB_044f1a20:
  puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*(long *)PTR_DAT_070c2e88,0);
LAB_044f1a3c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


