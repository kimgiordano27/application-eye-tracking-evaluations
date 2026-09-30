/*
FUNCTION_NAME: FUN_01fe8d40
ENTRY_POINT: 01fe8d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fe8f38) */

void FUN_01fe8d40(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  char cStack000000000000000c;
  
  (*(code *)*param_1)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778();
  }
  if ((unaff_w23 != 0xb) && (unaff_w23 != 0)) {
    return;
  }
  plVar3 = (long *)(**(code **)(*unaff_x20 + 0x398))();
  puVar1 = System_Xml_QueryOutputWriter_TypeInfo;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_01fe8dd0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar3,*unaff_x24,1);
LAB_01fe8dd0:
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,uVar2);
    plVar3 = (long *)(**(code **)(*unaff_x20 + 0x398))();
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01fe8e58;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar3,*unaff_x24,0);
LAB_01fe8e58:
      (*(code *)*puVar4)(plVar3,uVar5,0,puVar4[1]);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
      cStack000000000000000c = '\0';
      FUN_017d75a8(uVar9,&stack0x0000000c,0);
      puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
      *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03780807 == '\0') {
        thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
        DAT_03780807 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar1;
      }
      *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if (cStack000000000000000c == '\0') {
        return;
      }
      thunk_FUN_00d56f10(uVar9,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


