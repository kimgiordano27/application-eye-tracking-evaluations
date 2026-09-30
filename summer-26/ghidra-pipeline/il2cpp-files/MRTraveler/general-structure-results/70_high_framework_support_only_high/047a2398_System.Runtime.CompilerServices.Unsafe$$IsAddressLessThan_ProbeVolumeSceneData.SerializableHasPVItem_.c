/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<ProbeVolumeSceneData.SerializableHasPVItem>
ENTRY_POINT: 047a2398
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

void System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<ProbeVolumeSceneData_SerializableHasPVItem>
               (long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint in_w9;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x047a2398:
  bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
  if ((in_w9 < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30)) {
LAB_047a2664:
    thunk_FUN_03ce5214(PTR_DAT_08e71970);
    uVar10 = thunk_FUN_03cf5234();
    FUN_071004d4(uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar10,in_stack_00000008);
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_08644cb0(&stack0x00000020,param_3,0);
  in_stack_00000018 = in_stack_00000028;
  in_stack_00000010 = in_stack_00000020;
  plVar2 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
  do {
    plVar9 = *(long **)(unaff_x19 + 0x10);
    plVar3 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar10 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar4 = FUN_0710fcf0(uVar10,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar3[4] = lVar4;
    thunk_FUN_03d233cc(plVar3 + 4,lVar4);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e81dc0) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_047a24c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar2,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
    lVar4 = (*(code *)*puVar6)(plVar2,puVar6[1]);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar3[5] = lVar4;
    thunk_FUN_03d233cc(plVar3 + 5,lVar4);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = (**(code **)(*plVar9 + 0x428))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x430));
    plVar3 = (long *)FUN_03c8f97c(*unaff_x20,2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = thunk_FUN_03cf5138(plVar2,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar5 == 0) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar3[4] = (long)plVar2;
    thunk_FUN_03d233cc(plVar3 + 4,plVar2);
    if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_03cf5138(), lVar5 == 0)) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar3[5] = unaff_x21;
    thunk_FUN_03d233cc();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar4);
    lVar4 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_047a22ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_047a22ec:
    uVar7 = (*(code *)*puVar6)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
      ;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e81e10) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
    param_3 = (long *)(*(code *)*puVar6)();
    if (param_3 == (long *)0x0) goto LAB_047a2664;
    param_1 = *param_3;
    in_w9 = (uint)*(byte *)(param_1 + 0x130);
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
    if ((*(byte *)(param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8))
    goto code_r0x047a2398;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    FUN_08644ae0(&stack0x00000020,param_3,0);
    in_stack_00000018 = in_stack_00000028;
    in_stack_00000010 = in_stack_00000020;
    plVar2 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar6 = (undefined8 *)FUN_03cf1348();
FUN_047a2648:
  (*(code *)*puVar6)();
  return;
}


