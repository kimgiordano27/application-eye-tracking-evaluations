/*
FUNCTION_NAME: BlendShapeChanger.<TriggerCloseAndBack>d__10$$System.IDisposable.Dispose
ENTRY_POINT: 02e375b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void BlendShapeChanger_<TriggerCloseAndBack>d__10__System_IDisposable_Dispose(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  
  *(undefined1 *)(*unaff_x19 + param_1) = 0x28;
  unaff_x19[1] = unaff_x19[1] + 1;
  lVar6 = unaff_x19[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)unaff_x19[2]) {
    pvVar3 = (void *)*unaff_x19;
  }
  else {
    uVar5 = unaff_x19[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    unaff_x19[2] = uVar1;
    pvVar3 = realloc((void *)*unaff_x19,uVar1);
    *unaff_x19 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_02e378a8;
    lVar6 = unaff_x19[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
  unaff_x19[1] = unaff_x19[1] + 1;
  plVar10 = *(long **)(unaff_x20 + 0x10);
  (**(code **)(*plVar10 + 0x20))(plVar10);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  lVar6 = unaff_x19[1];
  uVar1 = lVar6 + 2;
  if (uVar1 < (ulong)unaff_x19[2]) {
    pvVar3 = (void *)*unaff_x19;
  }
  else {
    uVar5 = unaff_x19[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    unaff_x19[2] = uVar1;
    pvVar3 = realloc((void *)*unaff_x19,uVar1);
    *unaff_x19 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_02e378a8;
    lVar6 = unaff_x19[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2029;
  lVar6 = unaff_x19[1] + 2;
  unaff_x19[1] = lVar6;
  pvVar3 = *(void **)(unaff_x20 + 0x18);
  __n = *(long *)(unaff_x20 + 0x20) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar6 + __n;
    if (uVar1 < (ulong)unaff_x19[2]) {
      pvVar4 = (void *)*unaff_x19;
    }
    else {
      uVar5 = unaff_x19[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      unaff_x19[2] = uVar1;
      pvVar4 = realloc((void *)*unaff_x19,uVar1);
      *unaff_x19 = (long)pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_02e378a8;
      lVar6 = unaff_x19[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar3,__n);
    lVar6 = unaff_x19[1] + __n;
    unaff_x19[1] = lVar6;
  }
  uVar1 = lVar6 + 2;
  if (uVar1 < (ulong)unaff_x19[2]) {
    pvVar3 = (void *)*unaff_x19;
  }
  else {
    uVar5 = unaff_x19[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    unaff_x19[2] = uVar1;
    pvVar3 = realloc((void *)*unaff_x19,uVar1);
    *unaff_x19 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_02e378a8;
    lVar6 = unaff_x19[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2820;
  unaff_x19[1] = unaff_x19[1] + 2;
  plVar10 = *(long **)(unaff_x20 + 0x28);
  (**(code **)(*plVar10 + 0x20))(plVar10);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  lVar6 = unaff_x19[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)unaff_x19[2]) {
    pvVar3 = (void *)*unaff_x19;
  }
  else {
    uVar5 = unaff_x19[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    unaff_x19[2] = uVar1;
    pvVar3 = realloc((void *)*unaff_x19,uVar1);
    *unaff_x19 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_02e378a8;
    lVar6 = unaff_x19[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
  lVar7 = unaff_x19[1];
  lVar6 = lVar7 + 1;
  unaff_x19[1] = lVar6;
  pcVar8 = *(char **)(unaff_x20 + 0x18);
  pcVar2 = *(char **)(unaff_x20 + 0x20);
  if ((long)pcVar2 - (long)pcVar8 == 1) {
    if (pcVar8 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar8 != *pcVar9) {
          return;
        }
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar8);
    }
    uVar1 = lVar7 + 2;
    if (uVar1 < (ulong)unaff_x19[2]) {
      pvVar3 = (void *)*unaff_x19;
    }
    else {
      uVar5 = unaff_x19[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      unaff_x19[2] = uVar1;
      pvVar3 = realloc((void *)*unaff_x19,uVar1);
      *unaff_x19 = (long)pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_02e378a8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = unaff_x19[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
    unaff_x19[1] = unaff_x19[1] + 1;
  }
  return;
}


