/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Allocate
ENTRY_POINT: 054dfcbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Allocate(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar5;
  undefined8 *unaff_x27;
  uint uVar6;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar7;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  do {
    uVar5 = unaff_x27[1];
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
                    /* try { // try from 054dfce0 to 055dfe03 has its CatchHandler @ 054dfce0
                       catch() { ... } // from try @ 054dfce0 with catch @ 054dfce0
                       catch() { ... } // from try @ 054dfee8 with catch @ 054dfce0
                       catch() { ... } // from try @ 054dffcc with catch @ 054dfce0
                       catch() { ... } // from try @ 054dffd4 with catch @ 054dfce0
                       catch() { ... } // from try @ 054e0078 with catch @ 054dfce0 */
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,unaff_x25,uVar5,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar6 = (uint)unaff_x28;
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar6) || (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1))
      goto LAB_054dfd98;
      uVar5 = *unaff_x27;
      lVar1 = unaff_x22 + (long)(int)(uVar6 + 1) * 0x10;
      puVar3 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = unaff_x27[1];
      *puVar3 = uVar5;
      thunk_FUN_03d233cc(puVar3,0);
      uVar6 = uVar6 - 1;
      unaff_x28 = (ulong)uVar6;
      if ((int)uVar6 < unaff_w21)
      goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_054dfd98;
    }
    else {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      do {
        uVar7 = unaff_x29;
        uVar6 = (int)unaff_x28 + 1;
        if ((uint)uVar4 <= uVar6) goto LAB_054dfd98;
        lVar1 = unaff_x22 + (long)(int)uVar6 * 0x10;
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *puVar3 = unaff_x23;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
        thunk_FUN_03d233cc(puVar3,0);
        if (uVar7 == in_stack_00000000) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x29 = uVar7 + 1;
        if ((uint)uVar4 <= (uint)unaff_x29) goto LAB_054dfd98;
        lVar1 = unaff_x22 + unaff_x29 * 0x10;
        unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
        unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
        unaff_x28 = uVar7;
      } while ((long)uVar7 < in_stack_00000008);
      uVar6 = (uint)uVar7;
      if ((uint)uVar4 <= uVar6) {
LAB_054dfd98:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
    }
    unaff_x28 = (ulong)(int)uVar6;
    unaff_x27 = (undefined8 *)(unaff_x22 + unaff_x28 * 0x10 + 0x20);
    unaff_x25 = *unaff_x27;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while( true );
}


