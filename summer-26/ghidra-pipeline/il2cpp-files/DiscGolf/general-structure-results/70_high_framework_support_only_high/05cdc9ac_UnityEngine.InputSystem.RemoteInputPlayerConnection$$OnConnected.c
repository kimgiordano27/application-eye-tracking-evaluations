/*
FUNCTION_NAME: UnityEngine.InputSystem.RemoteInputPlayerConnection$$OnConnected
ENTRY_POINT: 05cdc9ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cdca48) */

undefined8 UnityEngine_InputSystem_RemoteInputPlayerConnection__OnConnected(void)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long in_stack_00000018;
  
  plVar2 = (long *)FUN_05ce858c();
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar3 = (long *)FUN_05c40a04(*unaff_x21,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  bVar1 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                   + 0x130);
  if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = (**(code **)(*plVar2 + 0x138))(plVar2,plVar3[2],*(undefined8 *)(*plVar2 + 0x140));
  if ((uVar4 & 1) == 0) {
    if (*unaff_x21 != 0) {
      FUN_05c44d2c(*unaff_x21,0);
      thunk_FUN_02dfd288(PTR_DAT_06a10338);
      uVar5 = thunk_FUN_02dd3144();
      uVar6 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_UIR_Utility_GPUBuffer<Vertex>_get_BufferPointer__
                                );
      FUN_05ce56b4(uVar5,uVar6,7,0);
      uVar6 = thunk_FUN_02dfd288(
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_xrOrigin__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *unaff_x20 = 1;
  if (in_stack_00000018 != 0) {
    FUN_05c44d2c(in_stack_00000018,0);
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


