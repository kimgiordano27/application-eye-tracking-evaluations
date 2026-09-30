/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTracker
ENTRY_POINT: 04f72820
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateDynamicObjectTracker
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               undefined4 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  do {
    if (*(long *)(in_x10 + -2) == param_7) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04f72864;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f72864:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
    FUN_04f72168();
    if (*(char *)(unaff_x21 + 0x34) != '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar8 = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
      if (*(int *)(*(long *)System_Collections_Generic_Dictionary<string,_PropertyMetadata>_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04f4cbe0();
      uVar6 = FUN_04f720b8();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar9 = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
        uVar10 = param_4;
        FUN_04f4ce0c();
        uVar7 = FUN_05c7bb74(0);
        lVar2 = FUN_05c89340();
        if (lVar2 != 0) {
          FUN_05c9cce4(uVar6,uVar8,param_4,uVar7,uVar9,uVar10,param_5,lVar2,0);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_05c56fc0(*(long *)(unaff_x19 + 0x40),1,0);
            plVar5 = *(long **)(unaff_x19 + 0x58);
            if (plVar5 == (long *)0x0) {
              uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
            }
            else {
              lVar2 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) == *(long *)System_Data_IndexField_var) {
                    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_04f729cc;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar3 != 0);
              }
              puVar1 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)System_Data_IndexField_var,0);
LAB_04f729cc:
              uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
            }
            lVar2 = 0x98;
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              lVar2 = 0x90;
            }
            if (*(long *)(unaff_x19 + lVar2) != 0) {
              FUN_05c3b794(uVar3,*(long *)(unaff_x19 + lVar2),0);
              FUN_04f725f0();
              FUN_04f72a34();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


