/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 054bc8d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x054bca20) */
/* WARNING: Removing unreachable block (ram,0x054bca24) */
/* WARNING: Removing unreachable block (ram,0x054bca90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar4;
  long lVar5;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  *(undefined1 *)(unaff_x19 + 0x56) = 0;
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  puVar1 = PTR_DAT_06a181b8;
  if ((unaff_x21 & 1) != 0) {
    plVar4 = (long *)(unaff_x19 + 0x28);
    if (*plVar4 != 0) {
      if (*(int *)(*plVar4 + 0x18) == 0x1000) {
        lVar2 = *(long *)PTR_DAT_06a181b8;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar2 = *(long *)puVar1;
        }
        plVar3 = *(long **)(lVar2 + 0xb8);
        if (*plVar3 == 0) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          in_stack_00000020 = plVar3[1];
          in_stack_00000018._4_1_ = '\0';
          FUN_0554bf68(in_stack_00000020,(long)&stack0x00000018 + 4,0);
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar2 = *(long *)puVar1;
          }
          plVar3 = *(long **)(lVar2 + 0xb8);
          if (*plVar3 == 0) {
            lVar5 = *plVar4;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            *plVar3 = lVar5;
            LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar5);
          }
          if (in_stack_00000018._4_1_ != '\0') {
            thunk_FUN_02da42ec(in_stack_00000020,0);
          }
        }
      }
      *plVar4 = 0;
      LeanTween__value(plVar4,0);
      if (*(int *)(*(long *)PTR_DAT_06a0a5a0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05520f50();
    }
  }
  if (unaff_x20 != 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a21ad0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724();
  }
  return;
}


