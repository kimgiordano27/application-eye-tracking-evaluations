/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_IsCreated
ENTRY_POINT: 044f193c
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

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_IsCreated
               (long param_1,undefined1 param_2 [16])

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 in_x9;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  long *in_stack_00000058;
  
  uStack0000000000000048 = param_2._8_8_;
  uStack0000000000000040 = param_2._0_8_;
  uStack0000000000000050 = in_x9;
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044f1934 with catch @ 044f1940
                        */
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    if (uVar5 == *(uint *)(param_1 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy();
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
    }
    plVar1 = in_stack_00000058;
    if (*(uint *)(param_1 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    param_1 = param_1 + (long)(int)uVar5 * (long)unaff_w23;
    *(undefined8 *)(param_1 + 0x28) = uStack0000000000000048;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000040;
    *(undefined8 *)(param_1 + 0x30) = uStack0000000000000050;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *in_stack_00000058;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_044f189c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*unaff_x22,0);
LAB_044f189c:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000058;
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000058;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_044f1a20;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_044f1920;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar1,lVar3,0);
LAB_044f1920:
    (*(code *)*puVar2)(&stack0x00000018,plVar1,puVar2[1]);
    param_1 = *(long *)(unaff_x20 + 0x10);
    uStack0000000000000050 = in_stack_00000028;
    uStack0000000000000040 = in_stack_00000018;
    uStack0000000000000048 = in_stack_00000020;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_044f1a3c;
    }
  }
LAB_044f1a20:
  puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*(long *)PTR_DAT_070c2e88,0);
LAB_044f1a3c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


