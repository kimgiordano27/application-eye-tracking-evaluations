/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 04d52028
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x04d51f64) */
/* WARNING: Removing unreachable block (ram,0x04d51f68) */
/* WARNING: Removing unreachable block (ram,0x04d51fd4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long lVar8;
  ulong unaff_x21;
  long lVar9;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar4 = (long *)__cxa_begin_catch();
  uVar5 = thunk_FUN_02ba3594(PTR_DAT_06312bc0);
  uVar6 = thunk_FUN_02b9f224(uVar5,*(undefined8 *)*plVar4);
  if ((uVar6 & 1) == 0) {
    plVar7 = (long *)__cxa_allocate_exception(8);
    *plVar7 = *plVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar7,&PTR_PTR_05fbf508,0);
  }
  lVar8 = *plVar4;
  __cxa_end_catch();
  if (*(char *)(unaff_x19 + 0x54) == '\0') {
LAB_04d51e14:
    *(undefined1 *)(unaff_x19 + 0x56) = 0;
    *(undefined4 *)(unaff_x19 + 0x50) = 0;
    puVar1 = PTR_DAT_063293c0;
    if ((unaff_x21 & 1) != 0) {
      plVar4 = (long *)(unaff_x19 + 0x28);
      if (*plVar4 != 0) {
        if (*(int *)(*plVar4 + 0x18) == 0x1000) {
          lVar2 = *(long *)PTR_DAT_063293c0;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar2 = *(long *)puVar1;
          }
          plVar7 = *(long **)(lVar2 + 0xb8);
          if (*plVar7 == 0) {
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              plVar7 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            in_stack_00000020 = plVar7[1];
            in_stack_00000018._4_1_ = '\0';
            FUN_04ddecfc(in_stack_00000020,(long)&stack0x00000018 + 4,0);
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar2 = *(long *)puVar1;
            }
            plVar7 = *(long **)(lVar2 + 0xb8);
            if (*plVar7 == 0) {
              lVar9 = *plVar4;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                plVar7 = *(long **)(*(long *)puVar1 + 0xb8);
              }
              *plVar7 = lVar9;
              thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar9);
            }
            if (in_stack_00000018._4_1_ != '\0') {
              thunk_FUN_02b4a54c(in_stack_00000020,0);
            }
          }
        }
        *plVar4 = 0;
        thunk_FUN_02bb0e9c(plVar4,0);
        if (*(int *)(*(long *)PTR_DAT_0631cae8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_04db3f60();
      }
    }
    if (lVar8 != 0) {
      uVar5 = thunk_FUN_02ba3594(PTR_DAT_06332ac8);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(lVar8,uVar5);
    }
    return;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    thunk_FUN_02b6ddc0(uVar5,(long)&stack0x00000028 + 4);
    if (in_stack_00000028._4_4_ != 0) {
      uVar5 = FUN_04d4ed8c();
      thunk_FUN_02ba3594(PTR_DAT_06329c90);
      FUN_0275e12c();
      uVar5 = FUN_04d4ee10(uVar5,in_stack_00000028._4_4_);
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06332ac8);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,uVar3);
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_04ca4af4(*(long *)(unaff_x19 + 0x38),0);
      goto LAB_04d51e14;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


