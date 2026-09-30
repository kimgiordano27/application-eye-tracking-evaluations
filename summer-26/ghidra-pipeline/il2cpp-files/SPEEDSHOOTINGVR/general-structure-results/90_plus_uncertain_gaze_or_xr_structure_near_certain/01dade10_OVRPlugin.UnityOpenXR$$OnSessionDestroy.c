/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 01dade10
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daddf4) */
/* WARNING: Removing unreachable block (ram,0x01dadf70) */

void OVRPlugin_UnityOpenXR__OnSessionDestroy(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  if (param_2 != 1) {
    FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar7;
  __cxa_end_catch();
  FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c(lVar10);
  }
  if (((unaff_x19 != 0) && (lVar10 = *(long *)(unaff_x19 + 0x40), lVar10 != 0)) &&
     (lVar10 != unaff_x21)) {
    FUN_017d3a2c(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_0235a2d0);
    puVar3 = PTR_DAT_0235a2c8;
    puVar2 = PTR_DAT_0235a2b8;
    puVar1 = PTR_DAT_0235a2a8;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar5 = FUN_0150a200(&stack0x00000040,*(undefined8 *)puVar2), plVar7 = in_stack_00000050,
          (uVar5 & 1) != 0) {
      in_stack_00000028 = 0;
      if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
         (uVar5 = FUN_0146ab1c(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                               *(undefined8 *)puVar1), (uVar5 & 1) == 0)) {
        in_stack_00000020 = 0;
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),plVar7,&stack0x00000020,*(undefined8 *)puVar1);
        }
        lVar4 = in_stack_00000028;
        lVar10 = in_stack_00000020;
        if (in_stack_00000028 != in_stack_00000020) {
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar8 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_01dadd98;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_0103c348(plVar7,*(long *)puVar3,0);
LAB_01dadd98:
          (*(code *)*puVar6)(plVar7,lVar4,lVar10,1,puVar6[1]);
        }
      }
    }
    FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
  }
  return;
}


