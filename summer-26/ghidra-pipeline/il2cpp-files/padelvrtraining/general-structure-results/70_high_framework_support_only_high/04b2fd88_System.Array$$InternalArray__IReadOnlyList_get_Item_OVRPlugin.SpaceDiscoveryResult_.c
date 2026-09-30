/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04b2fd88
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  iVar2 = thunk_FUN_03d9e884();
                    /* try { // try from 04b2fd98 to 04c2fdbb has its CatchHandler @ 04b2fed8 */
  if (1 < iVar2) {
    thunk_FUN_03d1e194(PTR_DAT_091f9158);
                    /* try { // try from 04b2fe98 to 04c2fea3 has its CatchHandler @ 04b2fecc */
    uVar4 = thunk_FUN_03d2ef40();
                    /* try { // try from 04b2fea4 to 04c2feef has its CatchHandler @ 04b2fd48 */
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
    FUN_071895f4(uVar4,uVar6,0);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fe80 with catch @ 04b2febc
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fe70 with catch @ 04b2fec0
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fe40 with catch @ 04b2fec4
                        */
    FUN_03d2d414(uVar4);
  }
  uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
                    /* try { // try from 04b2fdc8 to 04c2fddf has its CatchHandler @ 04b2fec8 */
    do {
      memcpy(&stack0x00000048,
             (void *)((long)unaff_x21 + uVar8 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
                    /* try { // try from 04b2fde8 to 04c2fdf7 has its CatchHandler @ 04b2fed0 */
      in_stack_00000038 = uStack0000000000000050;
      in_stack_00000030 = uStack0000000000000048;
      in_stack_00000040 = uStack0000000000000058;
      uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                    /* try { // try from 04b2fe10 to 04c2fe33 has its CatchHandler @ 04b2fed8 */
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = unaff_x20[2];
      in_stack_00000020 = unaff_x20[1];
      in_stack_00000018 = *unaff_x20;
      in_stack_00000008 = lVar7;
      uVar5 = thunk_FUN_071d4ed8(&stack0x00000008,uVar4,0);
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


