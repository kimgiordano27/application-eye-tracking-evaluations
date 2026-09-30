/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03e664e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar8;
  
                    /* catch() { ... } // from try @ 03e662d8 with catch @ 03e664e8 */
  puVar8 = *(undefined8 **)(unaff_x20 + 0x848);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 03e664f0 to 03f664fb has its CatchHandler @ 03e66188 */
                    /* catch() { ... } // from try @ 03e664e0 with catch @ 03e664f8 */
    thunk_FUN_0159f088(PTR_DAT_06dc9678);
                    /* try { // try from 03e664fc to 03f6659f has its CatchHandler @ 03e664fc
                       catch() { ... } // from try @ 03e664fc with catch @ 03e664fc
                       catch() { ... } // from try @ 03e66618 with catch @ 03e664fc
                       catch() { ... } // from try @ 03e6664c with catch @ 03e664fc
                       catch() { ... } // from try @ 03e666dc with catch @ 03e664fc */
    thunk_FUN_0159f088(PTR_DAT_06df2320);
    thunk_FUN_0159f088(PTR_DAT_06dae408);
    thunk_FUN_0159f088(PTR_DAT_06dfff38);
    thunk_FUN_0159f088(PTR_DAT_06dfeb50);
    thunk_FUN_0159f088(PTR_DAT_06e57848);
    *(undefined1 *)(unaff_x19 + 0x2ee) = 1;
  }
  lVar4 = thunk_FUN_015d056c(*puVar8);
  puVar2 = PTR_DAT_06dfeb50;
  if (lVar4 == 0) {
LAB_03e667cc:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_03e661bc();
  uVar3 = FUN_051dd424(0);
  *(undefined4 *)(lVar4 + 0x10) = uVar3;
  uVar3 = FUN_051dd29c(0);
  *(undefined4 *)(lVar4 + 0x14) = uVar3;
  uVar3 = FUN_051dd314(0);
  *(undefined4 *)(lVar4 + 0x18) = uVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar5 = FUN_03321d18(0,0);
  *(bool *)(lVar4 + 0x1c) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x20) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(1,0);
  *(bool *)(lVar4 + 0x24) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x28) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(3,0);
  *(bool *)(lVar4 + 0x2c) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x30) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(4,0);
  *(bool *)(lVar4 + 0x34) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x38) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321e1c(5,0);
  *(bool *)(lVar4 + 0x3c) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x40) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321e1c(0xe,0);
  *(bool *)(lVar4 + 0x44) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x48) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(7,0);
  *(bool *)(lVar4 + 0x4c) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x50) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(8,0);
  *(bool *)(lVar4 + 0x54) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x58) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(9,0);
  *(bool *)(lVar4 + 0x5c) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x60) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(10,0);
  *(bool *)(lVar4 + 100) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x68) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321d18(0xb,0);
  *(bool *)(lVar4 + 0x6c) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x70) = (int)(uVar5 >> 0x20);
  uVar5 = FUN_03321e1c(0xc,0);
  *(bool *)(lVar4 + 0x74) = (uVar5 & 0xff) != 0;
  *(int *)(lVar4 + 0x78) = (int)(uVar5 >> 0x20);
  uVar6 = FUN_03321e1c(0xd,0);
  uVar5 = 0;
  *(bool *)(lVar4 + 0x7c) = (uVar6 & 0xff) != 0;
  *(int *)(lVar4 + 0x80) = (int)(uVar6 >> 0x20);
  while( true ) {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar7 = *(long *)puVar2;
    }
    if ((long)*(int *)(*(long *)(lVar7 + 0xb8) + 0x18) <= (long)uVar5) {
      return lVar4;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar6 = FUN_03321d18(0x20,0);
    lVar7 = *(long *)(lVar4 + 0x88);
    if (lVar7 == 0) goto LAB_03e667cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) break;
    *(bool *)(lVar7 + uVar5 + 0x20) = (uVar6 & 0xff) != 0;
    lVar7 = *(long *)(lVar4 + 0x90);
    if (lVar7 == 0) goto LAB_03e667cc;
    if (*(uint *)(lVar7 + 0x18) <= uVar5) break;
    lVar1 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    *(int *)(lVar7 + lVar1 + 0x20) = (int)(uVar6 >> 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


