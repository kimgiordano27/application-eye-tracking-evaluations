/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2DCount
ENTRY_POINT: 05d91db0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetSpaceBoundary2DCount(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  iVar6 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose();
  if (iVar6 == 0) {
    lVar8 = 0;
  }
  else {
    uVar7 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose();
    lVar8 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072b1b30,uVar7);
    FUN_050f8f40(&stack0x000000a0);
    puVar3 = PTR_DAT_07289818;
    puVar2 = PTR_DAT_072804e0;
    puVar1 = PTR_DAT_07279510;
    uVar15 = 0;
    in_stack_000000d8 = in_stack_000000a8;
    in_stack_000000d0 = in_stack_000000a0;
    in_stack_000000e8 = in_stack_000000b8;
    in_stack_000000e0 = in_stack_000000b0;
    in_stack_000000f0 = in_stack_000000c0;
    while (uVar9 = FUN_05391a64(&stack0x000000d0,*(undefined8 *)puVar3), plVar5 = in_stack_000000e8,
          plVar4 = in_stack_000000e0, (uVar9 & 1) != 0) {
      if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = thunk_FUN_032f70fc(in_stack_000000e8,0);
      uVar14 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_059324dc(uVar14,0);
      uVar9 = FUN_0593b434(uVar10,uVar14,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_032f70fc(plVar5,0);
        uVar14 = *(undefined8 *)PTR_DAT_072813d0;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar14 = FUN_059324dc(uVar14,0);
        uVar9 = FUN_0593b434(uVar10,uVar14,0);
        if ((uVar9 & 1) == 0) {
          uVar10 = thunk_FUN_032f70fc(plVar5,0);
          uVar14 = *(undefined8 *)PTR_DAT_072804d8;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar14 = FUN_059324dc(uVar14,0);
          uVar9 = FUN_0593b434(uVar10,uVar14,0);
          if ((uVar9 & 1) == 0) {
            thunk_FUN_032e1da0(PTR_DAT_0727b240);
            uVar10 = thunk_FUN_032a56a0();
            uVar14 = thunk_FUN_032e1da0(PTR_DAT_072b1b40);
            FUN_0595ad48(uVar10,uVar14,0);
            uVar14 = thunk_FUN_032e1da0(PTR_DAT_072b1b48);
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar10,uVar14);
          }
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = (long *)0x0;
          in_stack_000000b8 = (long *)0x0;
          in_stack_000000b0 = (long *)0x0;
          if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_0727e390 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar5);
          }
          puVar12 = (undefined8 *)thunk_FUN_032a57f4(plVar5);
          uVar10 = *puVar12;
          in_stack_000000a0 = plVar4;
          thunk_FUN_0333a630(&stack0x000000a0,plVar4);
          in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
          in_stack_000000b0 = (long *)0x0;
          in_stack_000000c0 = uVar10;
          thunk_FUN_0333a630(&stack0x000000b0,0);
          in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
          *(undefined8 *)(lVar13 + 0x40) = in_stack_000000c0;
          *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
          *(long **)(lVar13 + 0x20) = in_stack_000000a0;
          *(long **)(lVar13 + 0x38) = in_stack_000000b8;
          *(long **)(lVar13 + 0x30) = in_stack_000000b0;
          thunk_FUN_0333a630(lVar13 + 0x20,0);
        }
        else {
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = (long *)0x0;
          in_stack_000000b8 = (long *)0x0;
          in_stack_000000b0 = (long *)0x0;
          if (*plVar5 != *(long *)PTR_DAT_072794f8) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar5);
          }
          in_stack_000000a0 = plVar4;
          thunk_FUN_0333a630(&stack0x000000a0,plVar4);
          in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
          in_stack_000000b0 = plVar5;
          thunk_FUN_0333a630(&stack0x000000b0,plVar5);
          in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
          in_stack_000000c0 = 0;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
          *(undefined8 *)(lVar13 + 0x40) = 0;
          *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
          *(long **)(lVar13 + 0x20) = in_stack_000000a0;
          *(long **)(lVar13 + 0x38) = in_stack_000000b8;
          *(long **)(lVar13 + 0x30) = in_stack_000000b0;
          thunk_FUN_0333a630(lVar13 + 0x20,0);
        }
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_07279558 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar5);
        }
        puVar11 = (undefined4 *)thunk_FUN_032a57f4(plVar5);
        uVar7 = *puVar11;
        in_stack_000000a0 = plVar4;
        thunk_FUN_0333a630(&stack0x000000a0,plVar4);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
        in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar7);
        in_stack_000000b0 = (long *)0x0;
        thunk_FUN_0333a630(&stack0x000000b0,0);
        in_stack_000000c0 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar13 = lVar8 + (long)(int)uVar15 * 0x28;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(ulong *)(lVar13 + 0x28) = in_stack_000000a8;
        *(long **)(lVar13 + 0x20) = in_stack_000000a0;
        *(long **)(lVar13 + 0x38) = in_stack_000000b8;
        *(long **)(lVar13 + 0x30) = in_stack_000000b0;
        thunk_FUN_0333a630(lVar13 + 0x20,0);
      }
      uVar15 = uVar15 + 1;
    }
    FUN_05391b84(&stack0x000000d0,*(undefined8 *)PTR_DAT_07289810);
  }
  return lVar8;
}


