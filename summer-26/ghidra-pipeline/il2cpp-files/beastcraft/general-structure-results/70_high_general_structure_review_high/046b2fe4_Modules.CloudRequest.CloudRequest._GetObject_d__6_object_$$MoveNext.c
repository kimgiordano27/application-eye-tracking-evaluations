/*
FUNCTION_NAME: Modules.CloudRequest.CloudRequest.<GetObject>d__6<object>$$MoveNext
ENTRY_POINT: 046b2fe4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x046b3098) */

void Modules_CloudRequest_CloudRequest_<GetObject>d__6<object>__MoveNext
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  FUN_056696f0(param_1,param_2,0);
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  Unity_Properties_IndexedCollectionPropertyBagEnumerator<TimeValue>__Dispose
            (lVar1,*(undefined4 *)(unaff_x19 + 0x20),1,
             *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  lVar1 = *(long *)(unaff_x19 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 != 0) {
    thunk_FUN_02e75384(lVar2 + 0x10,0);
    if (*(long *)(lVar2 + 0x18) != 0) {
      if (*(char *)(*(long *)(lVar2 + 0x18) + 0x14) != '\0') {
        FUN_053ec020(lVar2,lVar1);
      }
      *(undefined1 *)(lVar2 + 0x14) = 1;
      if (in_stack_00000020._4_1_ != '\0') {
        thunk_FUN_02e4a4d0(*in_stack_00000018,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


