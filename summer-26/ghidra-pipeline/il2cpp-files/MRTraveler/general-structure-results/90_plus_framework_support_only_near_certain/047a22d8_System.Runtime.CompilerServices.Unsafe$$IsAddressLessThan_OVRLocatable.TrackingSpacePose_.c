/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 047a22d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

void System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRLocatable_TrackingSpacePose>(void)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
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
  
code_r0x047a22d8:
  puVar2 = (undefined8 *)FUN_03cf1348();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        return;
      }
      lVar7 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
      ;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e81e10) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 == (long *)0x0) {
LAB_047a2664:
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar10 = thunk_FUN_03cf5234();
      FUN_071004d4(uVar10,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,in_stack_00000008);
    }
    lVar7 = *plVar4;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30))
      goto LAB_047a2664;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644cb0(&stack0x00000020,plVar4,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      plVar4 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
    }
    else {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644ae0(&stack0x00000020,plVar4,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      plVar4 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
    }
    plVar9 = *(long **)(unaff_x19 + 0x10);
    plVar5 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar10 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar7 = FUN_0710fcf0(uVar10,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((lVar7 != 0) &&
       (lVar6 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar5[4] = lVar7;
    thunk_FUN_03d233cc(plVar5 + 4,lVar7);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e81dc0) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_047a24c8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
    lVar7 = (*(code *)*puVar2)(plVar4,puVar2[1]);
    if ((lVar7 != 0) &&
       (lVar6 = thunk_FUN_03cf5138(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar5[5] = lVar7;
    thunk_FUN_03d233cc(plVar5 + 5,lVar7);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = (**(code **)(*plVar9 + 0x428))(plVar9,plVar5,*(undefined8 *)(*plVar9 + 0x430));
    plVar5 = (long *)FUN_03c8f97c(*unaff_x20,2);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = thunk_FUN_03cf5138(plVar4,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar6 == 0) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar5[4] = (long)plVar4;
    thunk_FUN_03d233cc(plVar5 + 4,plVar4);
    if ((unaff_x21 != 0) && (lVar6 = thunk_FUN_03cf5138(), lVar6 == 0)) {
      uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar5[5] = unaff_x21;
    thunk_FUN_03d233cc();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar7);
    lVar7 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 == 0) goto code_r0x047a22d8;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != *unaff_x29) {
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
      if (uVar3 == 0) goto code_r0x047a22d8;
    }
    puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar2 = (undefined8 *)FUN_03cf1348();
FUN_047a2648:
  (*(code *)*puVar2)();
  return;
}


