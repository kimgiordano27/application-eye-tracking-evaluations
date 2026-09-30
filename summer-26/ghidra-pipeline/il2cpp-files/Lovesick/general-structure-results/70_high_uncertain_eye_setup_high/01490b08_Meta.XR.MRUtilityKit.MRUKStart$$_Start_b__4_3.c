/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKStart$$<Start>b__4_3
ENTRY_POINT: 01490b08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKStart__<Start>b__4_3
               (ulong param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  int iStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033eb800);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                      );
    *(undefined1 *)(unaff_x22 + 0xbae) = 1;
  }
  puVar1 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  iStack000000000000002c = 0;
  FUN_017b46ec(param_2,0);
  *(undefined4 *)(param_2 + 0x18) = param_4;
  uVar5 = FUN_01490c40(param_3,param_4,&stack0x0000002c);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  puVar4 = StringLiteral_302;
  puVar3 = 
  Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
  ;
  puVar2 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (iStack000000000000002c != 0) {
    in_stack_00000008 = *(undefined8 *)PTR_DAT_033eb800;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = iStack000000000000002c;
    uVar5 = FUN_017a7f78(&stack0x00000008,0);
    uVar5 = FUN_015f5b28(*(undefined8 *)puVar3,uVar5,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    FUN_026610e4(uVar5,0);
    *(undefined8 *)(param_2 + 0x10) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  uVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,param_4);
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  return;
}


