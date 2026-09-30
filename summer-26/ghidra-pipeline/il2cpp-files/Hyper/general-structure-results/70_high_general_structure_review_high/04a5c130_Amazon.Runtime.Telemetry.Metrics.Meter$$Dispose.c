/*
FUNCTION_NAME: Amazon.Runtime.Telemetry.Metrics.Meter$$Dispose
ENTRY_POINT: 04a5c130
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


undefined8 * Amazon_Runtime_Telemetry_Metrics_Meter__Dispose(void *param_1)

{
  undefined1 uVar1;
  long *__ptr;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  size_t unaff_x23;
  long *plVar7;
  void *pvVar8;
  long unaff_x26;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  ulong in_stack_00000008;
  undefined1 *in_stack_00000010;
  
code_r0x04a5c130:
  unaff_x19[2] = (long)param_1;
  do {
    plVar7 = (long *)((long)param_1 + unaff_x23);
    unaff_x19[3] = (long)plVar7;
    unaff_x19[4] = (long)((long)param_1 + ((long)unaff_x23 >> 2) * 8);
    do {
      unaff_x19[3] = (long)(plVar7 + 1);
      *plVar7 = unaff_x26;
      pcVar5 = (char *)*unaff_x19;
      if ((pcVar5 != (char *)unaff_x19[1]) && (*pcVar5 == 'Q')) {
        uVar1 = *(undefined1 *)((long)unaff_x19 + 0x30a);
        *unaff_x19 = (long)(pcVar5 + 1);
        *(undefined1 *)((long)unaff_x19 + 0x30a) = 1;
        lVar2 = FUN_04a5470c();
        *(undefined1 *)((long)unaff_x19 + 0x30a) = uVar1;
        if (((lVar2 == 0) || (pcVar5 = (char *)*unaff_x19, pcVar5 == (char *)unaff_x19[1])) ||
           (*pcVar5 != 'E')) {
          puVar3 = (undefined8 *)0x0;
          goto LAB_04a5c240;
        }
LAB_04a5c1b8:
        *unaff_x19 = (long)(pcVar5 + 1);
        auVar9 = FUN_04a51628();
        pvVar8 = (void *)unaff_x19[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar4 = pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar6 = 0;
          *puVar4 = pvVar8;
          puVar4[1] = 0;
          unaff_x19[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
        puVar3 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
        *puVar3 = &PTR_FUN_0ac07a00;
        *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x26;
        *(undefined8 *)((long)puVar4 + lVar6 + 0x20) = unaff_x20;
        *(undefined1 (*) [16])((long)puVar4 + lVar6 + 0x28) = auVar9;
        *(long *)((long)puVar4 + lVar6 + 0x38) = lVar2;
        *(ushort *)((long)puVar4 + lVar6 + 0x19) =
             *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x500;
LAB_04a5c240:
        if (in_stack_00000008 <=
            (ulong)(*(long *)(in_stack_00000000 + 0x2a0) - *(long *)(in_stack_00000000 + 0x298) >> 3
                   )) {
          *(ulong *)(in_stack_00000000 + 0x2a0) =
               *(long *)(in_stack_00000000 + 0x298) + in_stack_00000008 * 8;
          if (in_stack_00000010 != &stack0x00000028) {
            free(in_stack_00000010);
          }
          return puVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_04a4c618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
                     &DAT_01db6d82);
      }
      if ((pcVar5 != (char *)unaff_x19[1]) && (*pcVar5 == 'E')) {
        lVar2 = 0;
        goto LAB_04a5c1b8;
      }
      unaff_x26 = FUN_04a5be0c();
      puVar3 = (undefined8 *)0x0;
      if (unaff_x26 == 0) goto LAB_04a5c240;
      plVar7 = (long *)unaff_x19[3];
    } while (plVar7 != (long *)unaff_x19[4]);
    __ptr = (long *)unaff_x19[2];
    unaff_x23 = (long)plVar7 - (long)__ptr;
    if (__ptr == unaff_x22) break;
    param_1 = realloc(__ptr,unaff_x23 * 2);
    unaff_x19[2] = (long)param_1;
    if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  } while( true );
  param_1 = malloc(unaff_x23 * 2);
  if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (plVar7 != unaff_x22) {
    memcpy(param_1,unaff_x22,unaff_x23);
  }
  goto code_r0x04a5c130;
}


