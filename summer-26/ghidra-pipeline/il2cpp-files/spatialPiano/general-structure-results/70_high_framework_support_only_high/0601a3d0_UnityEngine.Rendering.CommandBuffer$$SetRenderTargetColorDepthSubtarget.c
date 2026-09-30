/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetRenderTargetColorDepthSubtarget
ENTRY_POINT: 0601a3d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Rendering_CommandBuffer__SetRenderTargetColorDepthSubtarget(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  long *in_stack_00000030;
  
  do {
    FUN_04477a3c();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0447a8e4(unaff_x21,unaff_x22,*unaff_x29);
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_0601a43c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(unaff_x20,*unaff_x26,1);
LAB_0601a43c:
    lVar3 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    uVar2 = thunk_FUN_02f45270(*unaff_x23);
    FUN_04477a3c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0447a8e4(lVar3,uVar2,*unaff_x27);
    do {
      uVar4 = FUN_04afea94(&stack0x00000020,*unaff_x25);
      unaff_x20 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        FUN_04afea90(&stack0x00000020,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_47__);
        if (*(long *)(unaff_x19 + 0xe0) != 0) {
          System_Array_InternalEnumerator<ValueTuple<Rect,_Rect,_object>>__System_Collections_IEnumerator_Reset
                    (*(long *)(unaff_x19 + 0xe0),
                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_5__);
          *(undefined1 *)(unaff_x19 + 0xc0) = 0;
          if (*(long *)(unaff_x19 + 0xf0) != 0) {
            FUN_060f3324();
            *(undefined8 *)(unaff_x19 + 0xf0) = 0;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    } while (in_stack_00000030 == (long *)0x0);
    lVar3 = *in_stack_00000030;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0601a3a4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000030,*unaff_x26,0);
LAB_0601a3a4:
    unaff_x21 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    unaff_x22 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
  } while( true );
}


