/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<NetworkSceneManager.DeferredObjectsMovedEvent>
ENTRY_POINT: 047a2290
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

void System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkSceneManager_DeferredObjectsMovedEvent>
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar3 = PTR_DAT_08e6a290;
  puVar2 = PTR_DAT_08e69878;
  do {
    lVar8 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_047a22ec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_047a22ec:
    uVar9 = (*(code *)*puVar4)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        return;
      }
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
      ;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e81e10) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 == (long *)0x0) {
LAB_047a2664:
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar12 = thunk_FUN_03cf5234();
      FUN_071004d4(uVar12,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,in_stack_00000008);
    }
    lVar8 = *plVar5;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30))
      goto LAB_047a2664;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644cb0(&stack0x00000020,plVar5,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      plVar5 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
    }
    else {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644ae0(&stack0x00000020,plVar5,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      plVar5 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
    }
    plVar11 = *(long **)(unaff_x19 + 0x10);
    plVar6 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar12 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar8 = FUN_0710fcf0(uVar12,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((lVar8 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar6[4] = lVar8;
    thunk_FUN_03d233cc(plVar6 + 4,lVar8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e81dc0) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_047a24c8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
    lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((lVar8 != 0) &&
       (lVar7 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar6[5] = lVar8;
    thunk_FUN_03d233cc(plVar6 + 5,lVar8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = (**(code **)(*plVar11 + 0x428))(plVar11,plVar6,*(undefined8 *)(*plVar11 + 0x430));
    plVar6 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = thunk_FUN_03cf5138(plVar5,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar7 == 0) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar6[4] = (long)plVar5;
    thunk_FUN_03d233cc(plVar6 + 4,plVar5);
    if ((unaff_x21 != 0) && (lVar7 = thunk_FUN_03cf5138(), lVar7 == 0)) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar6[5] = unaff_x21;
    thunk_FUN_03d233cc();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar8);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar4 = (undefined8 *)FUN_03cf1348();
FUN_047a2648:
  (*(code *)*puVar4)();
  return;
}


