/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<Vector3>
ENTRY_POINT: 04abdcb4
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_Serializer__Get<Vector3>(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 *in_stack_00000010;
  int in_stack_00000098;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  
                    /* try { // try from 04abdcb8 to 04bbdcd7 has its CatchHandler @ 04abd9f0 */
  uVar2 = thunk_FUN_03f786f8(param_1 + 200);
  uVar3 = thunk_FUN_03f74388(uVar2,*(undefined8 *)*unaff_x19);
  iVar1 = in_stack_00000098;
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)DA_Assets_FCU_FontItem__get_LastModified(8);
    *plVar5 = *unaff_x19;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&PTR_PTR_08b42af8,0);
  }
  lVar6 = *unaff_x19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04abdcb0 with catch @ 04abdcd4
                        */
                    /* try { // try from 04abdcd8 to 04bbde7b has its CatchHandler @ 04abdcd8
                       catch() { ... } // from try @ 04abdcd8 with catch @ 04abdcd8
                       catch() { ... } // from try @ 04abdeb0 with catch @ 04abdcd8
                       catch() { ... } // from try @ 04abdf1c with catch @ 04abdcd8
                       catch() { ... } // from try @ 04abe05c with catch @ 04abdcd8 */
  *(long *)(&stack0x00000090 + (long)in_stack_00000098 * 8) = lVar6;
  in_stack_00000098 = in_stack_00000098 + 1;
  __cxa_end_catch();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (in_stack_000000f8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(long *)(in_stack_000000f8 + 0x18) != 0) {
    uVar2 = *(undefined8 *)(lVar6 + 0x90);
    uVar7 = *(undefined8 *)(*(long *)(in_stack_000000f8 + 0x18) + 0x20);
    lVar4 = thunk_FUN_03f786f8(&DAT_092c5ed8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_0752f464(uVar2,uVar7,lVar6,0);
    in_stack_00000098 = iVar1;
    FUN_0396afec(&stack0x00000048);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    in_stack_00000010[1] = *(undefined8 *)(unaff_x22 + 0x28);
    *in_stack_00000010 = uVar2;
    in_stack_00000010[2] = in_stack_000000f0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


