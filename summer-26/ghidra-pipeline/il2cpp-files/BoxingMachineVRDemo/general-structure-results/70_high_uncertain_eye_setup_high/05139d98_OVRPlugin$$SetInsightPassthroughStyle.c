/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 05139d98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05139c98) */
/* WARNING: Removing unreachable block (ram,0x05139cb4) */
/* WARNING: Removing unreachable block (ram,0x05139cb8) */
/* WARNING: Removing unreachable block (ram,0x05139c90) */
/* WARNING: Removing unreachable block (ram,0x05139efc) */
/* WARNING: Removing unreachable block (ram,0x05139e44) */

void OVRPlugin__SetInsightPassthroughStyle(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int unaff_w24;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  if (param_2 == 1) {
    plVar3 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar3;
    __cxa_end_catch();
    if ((unaff_w24 < 0) && (plVar3 = *(long **)(unaff_x19 + 0xe), plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05139bfc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139bfc:
      (*(code *)*puVar1)(plVar3,puVar1[1]);
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae0(lVar9);
    }
    lVar9 = 0;
  }
  else {
    if ((unaff_w24 < 0) && (plVar3 = *(long **)(unaff_x19 + 0xe), plVar3 != (long *)0x0)) {
      lVar9 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar1 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x05139e34;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0675f3d0,0);
code_r0x05139e34:
      (*(code *)*puVar1)(plVar3,puVar1[1]);
    }
    if (param_2 != 1) {
      if ((unaff_w24 < 0) && (plVar3 = *(long **)(unaff_x19 + 0xc), plVar3 != (long *)0x0)) {
        lVar9 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar1 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x05139eec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0675f3d0,0);
code_r0x05139eec:
        (*(code *)*puVar1)(plVar3,puVar1[1]);
      }
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02e42304(param_1);
      }
      puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067608d0);
      uVar6 = RootMotion_FinalIK_IKMappingSpine__Initiate(uVar8,*(undefined8 *)*puVar1);
      if ((uVar6 & 1) == 0) {
        puVar4 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&PTR_PTR_0638da48,0);
      }
      in_stack_00000000 = *puVar1;
      in_stack_00000008 = 1;
      __cxa_end_catch();
      iVar10 = 0;
      goto code_r0x05139cd8;
    }
    plVar3 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar3;
    __cxa_end_catch();
  }
  if ((unaff_w24 < 0) && (plVar3 = *(long **)(unaff_x19 + 0xc), plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05139c7c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139c7c:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar9);
  }
  iVar10 = -1;
code_r0x05139cd8:
  uVar8 = (&stack0x00000000)[iVar10];
  *unaff_x19 = 0xfffffffe;
  lVar9 = thunk_FUN_02dc61f4(PTR_DAT_067816e8);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_06781718);
  FUN_03deda94(unaff_x19 + 2,uVar8,uVar2);
  return;
}


