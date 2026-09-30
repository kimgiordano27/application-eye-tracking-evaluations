/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RunTimeUtils$$GetInterfaceComponent<object>
ENTRY_POINT: 03708180
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03708264) */
/* WARNING: Removing unreachable block (ram,0x037082e0) */
/* WARNING: Removing unreachable block (ram,0x037082e8) */

int Meta_XR_BuildingBlocks_RunTimeUtils__GetInterfaceComponent<object>(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 uVar9;
  long *plVar10;
  int unaff_w27;
  undefined8 *unaff_x28;
  undefined8 unaff_x29;
  int *in_stack_00000008;
  int *in_stack_00000010;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    iVar2 = FUN_0363e780(*unaff_x28);
    iVar3 = FUN_0363e780(*unaff_x28);
    FUN_05ec3354(&stack0x00000040,unaff_w22 - iVar2,2,unaff_w27 - iVar3,0);
    FUN_05e8fb8c(unaff_x29,in_stack_00000040,unaff_w26,
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
    in_stack_00000038 = *unaff_x20;
    iVar2 = FUN_0371c55c(in_stack_00000020,&stack0x00000040,unaff_w27,unaff_x29,
                         uStack0000000000000018,&stack0x00000038,unaff_w26,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x40));
    if (iVar2 <= iStack000000000000001c) {
      iVar2 = iStack000000000000001c;
    }
    if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05ec33fc(&stack0x00000040,0);
    puVar1 = PTR_DAT_06a0e480;
LAB_03708268:
    do {
      plVar10 = (long *)*unaff_x20;
      unaff_w25 = unaff_w25 + 1;
      if (plVar10 == (long *)0x0) {
LAB_037082e4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03707ff0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar10,*unaff_x23,0);
LAB_03707ff0:
      iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (iVar3 <= unaff_w25) {
        FUN_042bb390(&stack0x00000048,*(undefined8 *)PTR_DAT_06a0e488);
        return iVar2;
      }
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054f73b4(uVar9,0);
      lVar6 = *unaff_x21;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar6);
        lVar6 = *unaff_x21;
      }
      uVar7 = FUN_05501380(uVar9,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8),0);
      if ((uVar7 & 1) == 0) {
        unaff_w26 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_054f73b4(uVar9,0);
        plVar10 = (long *)*unaff_x20;
        if (plVar10 == (long *)0x0) goto LAB_037082e4;
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a0e390) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_037080e8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_06a0e390,0);
LAB_037080e8:
        uVar5 = (*(code *)*puVar4)(plVar10,unaff_w25,puVar4[1]);
        unaff_w26 = FUN_036fcddc(in_stack_00000020,uVar9,uVar5,0,0);
        if (unaff_w26 < 0) goto LAB_03708268;
      }
      uVar7 = FUN_042bb470(&stack0x00000048,unaff_w26,*(undefined8 *)puVar1);
    } while ((uVar7 & 1) != 0);
    FUN_042bb420(&stack0x00000048,unaff_w26,*(undefined8 *)PTR_DAT_06a0e478);
    unaff_w27 = *in_stack_00000008;
    unaff_w22 = *in_stack_00000010;
    unaff_x28 = (undefined8 *)PTR_DAT_06a0e470;
    iStack000000000000001c = iVar2;
    if (*(int *)(*(long *)PTR_DAT_06a002a8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      unaff_x28 = (undefined8 *)PTR_DAT_06a0e470;
    }
  } while( true );
}


