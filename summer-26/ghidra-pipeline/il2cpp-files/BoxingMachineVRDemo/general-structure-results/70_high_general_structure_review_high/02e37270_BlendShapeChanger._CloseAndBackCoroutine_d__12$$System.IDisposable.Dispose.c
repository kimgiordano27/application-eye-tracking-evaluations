/*
FUNCTION_NAME: BlendShapeChanger.<CloseAndBackCoroutine>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 02e37270
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void BlendShapeChanger_<CloseAndBackCoroutine>d__12__System_IDisposable_Dispose(void)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  size_t in_x9;
  long in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  ulong *unaff_x24;
  long unaff_x29;
  
  if (in_x9 <= (ulong)(in_x10 << 1)) {
    in_x9 = in_x10 << 1;
  }
  unaff_x19[2] = in_x9;
  pvVar1 = realloc((void *)*unaff_x19,in_x9);
  *unaff_x19 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    memmove((void *)((long)pvVar1 + *unaff_x24),unaff_x22,unaff_x21);
    uVar2 = *unaff_x24 + unaff_x21;
    *unaff_x24 = uVar2;
    uVar3 = uVar2 + 1;
    if (uVar3 < (ulong)unaff_x19[2]) {
      pvVar1 = (void *)*unaff_x19;
    }
    else {
      uVar2 = unaff_x19[2] << 1;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      unaff_x19[2] = uVar3;
      pvVar1 = realloc((void *)*unaff_x19,uVar3);
      *unaff_x19 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_02e37338;
      uVar2 = *unaff_x24;
      uVar3 = uVar2 + 1;
    }
    unaff_x19[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + uVar2) = 0x20;
    plVar4 = *(long **)(unaff_x20 + 0x18);
    (**(code **)(*plVar4 + 0x20))(plVar4);
    if (*(char *)((long)plVar4 + 9) != '\x01') {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uVar2 = unaff_x19[1];
    uVar3 = uVar2 + 1;
    if (uVar3 < (ulong)unaff_x19[2]) {
      pvVar1 = (void *)*unaff_x19;
    }
    else {
      uVar2 = unaff_x19[2] << 1;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      unaff_x19[2] = uVar3;
      pvVar1 = realloc((void *)*unaff_x19,uVar3);
      *unaff_x19 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_02e37338;
      uVar2 = *unaff_x24;
      uVar3 = uVar2 + 1;
    }
    *unaff_x24 = uVar3;
    *(undefined1 *)((long)pvVar1 + uVar2) = 0x29;
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_02e37338:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


