/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03e66708
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 in_w8;
  undefined1 in_w9;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar4;
  
  *(undefined1 *)(unaff_x19 + 0x74) = in_w9;
  *(undefined4 *)(unaff_x19 + 0x78) = in_w8;
  uVar2 = FUN_03321e1c(0xd,0);
  uVar4 = 0;
  *(bool *)(unaff_x19 + 0x7c) = (uVar2 & 0xff) != 0;
  *(int *)(unaff_x19 + 0x80) = (int)(uVar2 >> 0x20);
  do {
    lVar3 = *unaff_x20;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar3 = *unaff_x20;
    }
    if ((long)*(int *)(*(long *)(lVar3 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar2 = FUN_03321d18(0x20,0);
    lVar3 = *(long *)(unaff_x19 + 0x88);
    if (lVar3 == 0) {
LAB_03e667cc:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_03e667d0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(bool *)(lVar3 + uVar4 + 0x20) = (uVar2 & 0xff) != 0;
    lVar3 = *(long *)(unaff_x19 + 0x90);
    if (lVar3 == 0) goto LAB_03e667cc;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_03e667d0;
    lVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(int *)(lVar3 + lVar1 + 0x20) = (int)(uVar2 >> 0x20);
  } while( true );
}


