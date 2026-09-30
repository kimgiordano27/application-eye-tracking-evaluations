/*
FUNCTION_NAME: Sirenix.Serialization.IntPtrSerializer$$.ctor
ENTRY_POINT: 01b44e50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Sirenix_Serialization_IntPtrSerializer___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar10;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xc0));
  *(undefined1 *)(unaff_x22 + 0x46b) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if ((DAT_0377d468 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_15__);
    DAT_0377d468 = 1;
  }
  if (*unaff_x20 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(*unaff_x20 + 0x18);
  }
  FUN_013421d4(&stack0x00000008,uVar8,unaff_w19,1,
               *(undefined8 *)Method_System_Xml_Linq_XDocument_GetFirstNode<XElement>__);
  puVar3 = StringLiteral_2497;
  puVar2 = StringLiteral_1191;
  puVar1 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Remove__;
  if (*unaff_x20 != 0) {
    FUN_01323390(*unaff_x20,&stack0x00000030,*(undefined8 *)StringLiteral_4089);
    iVar10 = 0;
    while (uVar6 = FUN_012b894c(&stack0x00000030,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
      FUN_00c33c44(&stack0x00000018,&stack0x00000030,*(undefined8 *)puVar3);
      uVar5 = in_stack_00000028;
      uVar4 = in_stack_00000020;
      uVar7 = FUN_017bd58c(in_stack_00000018,0);
      puVar9 = (undefined8 *)(in_stack_00000008 + (long)iVar10 * 0x18);
      iVar10 = iVar10 + 1;
      *puVar9 = uVar7;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
    }
    FUN_012b8948(&stack0x00000030,*(undefined8 *)puVar2);
  }
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_stack_00000008,in_stack_00000010);
}


