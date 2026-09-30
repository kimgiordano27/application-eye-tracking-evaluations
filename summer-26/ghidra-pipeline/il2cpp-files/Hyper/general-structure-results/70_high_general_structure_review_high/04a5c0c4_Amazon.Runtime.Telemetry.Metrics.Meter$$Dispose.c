/*
FUNCTION_NAME: Amazon.Runtime.Telemetry.Metrics.Meter$$Dispose
ENTRY_POINT: 04a5c0c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 * Amazon_Runtime_Telemetry_Metrics_Meter__Dispose(void)

{
  undefined1 uVar1;
  long lVar2;
  long *__ptr;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  size_t __n;
  long *plVar8;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  
  do {
    lVar2 = FUN_04a5be0c();
    puVar4 = (undefined8 *)0x0;
    if (lVar2 == 0) goto LAB_04a5c240;
    plVar8 = (long *)unaff_x19[3];
    if (plVar8 == (long *)unaff_x19[4]) {
      __ptr = (long *)unaff_x19[2];
      __n = (long)plVar8 - (long)__ptr;
      if (__ptr == unaff_x22) {
        pvVar3 = malloc(__n * 2);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar8 != unaff_x22) {
          memcpy(pvVar3,unaff_x22,__n);
        }
        unaff_x19[2] = (long)pvVar3;
      }
      else {
        pvVar3 = realloc(__ptr,__n * 2);
        unaff_x19[2] = (long)pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar8 = (long *)((long)pvVar3 + __n);
      unaff_x19[3] = (long)plVar8;
      unaff_x19[4] = (long)((long)pvVar3 + ((long)__n >> 2) * 8);
    }
    unaff_x19[3] = (long)(plVar8 + 1);
    *plVar8 = lVar2;
    pcVar6 = (char *)*unaff_x19;
    if ((pcVar6 != (char *)unaff_x19[1]) && (*pcVar6 == 'Q')) {
      uVar1 = *(undefined1 *)((long)unaff_x19 + 0x30a);
      *unaff_x19 = (long)(pcVar6 + 1);
      *(undefined1 *)((long)unaff_x19 + 0x30a) = 1;
      lVar2 = FUN_04a5470c();
      *(undefined1 *)((long)unaff_x19 + 0x30a) = uVar1;
      if (((lVar2 != 0) && (pcVar6 = (char *)*unaff_x19, pcVar6 != (char *)unaff_x19[1])) &&
         (*pcVar6 == 'E')) goto LAB_04a5c1b8;
      puVar4 = (undefined8 *)0x0;
      goto LAB_04a5c240;
    }
  } while ((pcVar6 == (char *)unaff_x19[1]) || (*pcVar6 != 'E'));
  lVar2 = 0;
LAB_04a5c1b8:
  *unaff_x19 = (long)(pcVar6 + 1);
  auVar9 = FUN_04a51628();
  pvVar3 = (void *)unaff_x19[0x266];
  lVar7 = *(long *)((long)pvVar3 + 8);
  puVar5 = pvVar3;
  if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
    puVar5 = malloc(0x1000);
    if (puVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = 0;
    *puVar5 = pvVar3;
    puVar5[1] = 0;
    unaff_x19[0x266] = (long)puVar5;
  }
  *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
  puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
  *puVar4 = &PTR_FUN_0ac07a00;
  *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x26;
  *(undefined8 *)((long)puVar5 + lVar7 + 0x20) = unaff_x20;
  *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x28) = auVar9;
  *(long *)((long)puVar5 + lVar7 + 0x38) = lVar2;
  *(ushort *)((long)puVar5 + lVar7 + 0x19) =
       *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x500;
LAB_04a5c240:
  if (in_stack_00000008 <=
      (ulong)(*(long *)(in_stack_00000000 + 0x2a0) - *(long *)(in_stack_00000000 + 0x298) >> 3)) {
    *(ulong *)(in_stack_00000000 + 0x2a0) =
         *(long *)(in_stack_00000000 + 0x298) + in_stack_00000008 * 8;
    if (in_stack_00000010 != &stack0x00000028) {
      free(in_stack_00000010);
    }
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04a4c618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
               &DAT_01db6d82);
}


