/*
FUNCTION_NAME: Obi.SampleCharacterController$$FixedUpdate
ENTRY_POINT: 00e1ee7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Obi_SampleCharacterController__FixedUpdate(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  _Unwind_Exception *unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  ulong uVar7;
  long in_stack_00000000;
  long lStack0000000000000010;
  long in_stack_00000018;
  ulong in_stack_00000020;
  undefined *in_stack_00000028;
  undefined8 *in_stack_00000038;
  
  lStack0000000000000010 = unaff_x26[1];
  lVar2 = __cxxabiv1::__getExceptionClass(unaff_x21);
  if (lVar2 == 0x434c4e47432b2b01) {
    plVar4 = (long *)*unaff_x26;
  }
  else {
    plVar4 = unaff_x26 + 0x10;
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = in_stack_00000020 & 0xf;
  lVar2 = unaff_x25 + unaff_x27;
  while( true ) {
    for (; puVar1 = OVRPlugin_OVRP_1_35_0_TypeInfo,
        uVar5 = ((ulong)*(byte *)(unaff_x23 + lVar2) & 0x7f) << (uVar6 & 0x3f) | uVar5,
        (char)*(byte *)(unaff_x23 + lVar2) < '\0'; lVar2 = lVar2 + 1) {
      uVar6 = uVar6 + 7;
    }
    if (uVar5 == 0) break;
    if ((0xc < (uint)uVar7) || ((0x1c1dU >> uVar7 & 1) == 0)) goto LAB_00e1f020;
    in_stack_00000038 =
         (undefined8 *)
         (in_stack_00000018 - (uVar5 << (*(ulong *)(&DAT_02b8cc38 + uVar7 * 8) & 0x3f)));
    plVar3 = (long *)FUN_00e1f0e4(&stack0x00000038,in_stack_00000020);
    in_stack_00000038 = plVar4;
    uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,lStack0000000000000010,&stack0x00000038);
    if ((uVar6 & 1) != 0) {
      do {
        *(int *)(unaff_x26 + 6) = -(int)unaff_x26[6];
        *(int *)(in_stack_00000000 + 8) = *(int *)(in_stack_00000000 + 8) + 1;
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch();
        __cxa_rethrow();
      } while( true );
    }
    uVar6 = 0;
    uVar5 = 0;
    lVar2 = lVar2 + 1;
  }
  in_stack_00000028 =
       Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c_<BevelEdges>b__0_3__ + 0x10;
  uVar7 = (ulong)((int)in_stack_00000020 + 6) & 0xf;
  lVar2 = unaff_x25 + unaff_x27;
  uVar6 = 0;
  uVar5 = 0;
  while( true ) {
    for (; uVar5 = ((ulong)*(byte *)(unaff_x23 + lVar2) & 0x7f) << (uVar6 & 0x3f) | uVar5,
        (char)*(byte *)(unaff_x23 + lVar2) < '\0'; lVar2 = lVar2 + 1) {
      uVar6 = uVar6 + 7;
    }
    if (uVar5 == 0) break;
    if ((10 < (uint)uVar7) || ((0x747U >> uVar7 & 1) == 0)) {
LAB_00e1f020:
      in_stack_00000038 = (undefined8 *)in_stack_00000018;
                    /* WARNING: Subroutine does not return */
      FUN_00e1ed3c(1);
    }
    in_stack_00000038 =
         (undefined8 *)
         (in_stack_00000018 - (uVar5 << (*(ulong *)(&DAT_02b8cca0 + uVar7 * 8) & 0x3f)));
    plVar4 = (long *)FUN_00e1f0e4(&stack0x00000038,in_stack_00000020);
    in_stack_00000038 = &stack0x00000028;
    uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar1,&stack0x00000038);
    if ((uVar6 & 1) != 0) goto LAB_00e1f040;
    uVar6 = 0;
    uVar5 = 0;
    lVar2 = lVar2 + 1;
  }
  std::exception::~exception((exception *)&stack0x00000028);
  __cxa_end_catch();
  FUN_00e1e514();
LAB_00e1f040:
  __cxa_end_catch();
  plVar4 = (long *)__cxa_allocate_exception(8);
  *plVar4 = (long)(Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c_<BevelEdges>b__0_3__ +
                  0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar4,OVRPlugin_OVRP_1_35_0_TypeInfo,
              Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
}


