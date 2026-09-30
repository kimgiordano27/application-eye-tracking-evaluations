/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<MRUKRoom.Surface>
ENTRY_POINT: 047a21dc
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

long System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MRUKRoom_Surface>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
  uVar12 = *(undefined8 *)(*unaff_x27 + 0x18);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar12 = FUN_0710fcf0(uVar12,0);
  plVar4 = (long *)FUN_08649324(uVar12,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar9 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e08) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto 
        System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>
        ;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e08,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<NetworkMessageManager_MessageWithHandler>:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = PTR_DAT_08e6a290;
  puVar2 = PTR_DAT_08e69878;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_047a22ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar3,0);
LAB_047a22ec:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return param_1;
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
      ;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e10) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e10,0);
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
LAB_047a2664:
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar12 = thunk_FUN_03cf5234();
      FUN_071004d4(uVar12,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,unaff_x20);
    }
    lVar9 = *plVar6;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30))
      goto LAB_047a2664;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644cb0(&stack0x00000020,plVar6,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      plVar6 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
    }
    else {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644ae0(&stack0x00000020,plVar6,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      plVar6 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
    }
    plVar13 = *(long **)(unaff_x19 + 0x10);
    plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar12 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar9 = FUN_0710fcf0(uVar12,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((lVar9 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar7[4] = lVar9;
    thunk_FUN_03d233cc(plVar7 + 4,lVar9);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81dc0) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_047a24c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
    lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((lVar9 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar7[5] = lVar9;
    thunk_FUN_03d233cc(plVar7 + 5,lVar9);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar9 = (**(code **)(*plVar13 + 0x428))(plVar13,plVar7,*(undefined8 *)(*plVar13 + 0x430));
    plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)puVar2,2);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = thunk_FUN_03cf5138(plVar6,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar7[4] = (long)plVar6;
    thunk_FUN_03d233cc(plVar7 + 4,plVar6);
    if ((param_1 != 0) &&
       (lVar8 = thunk_FUN_03cf5138(param_1,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
      uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar12,0);
    }
    if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar7[5] = param_1;
    thunk_FUN_03d233cc(plVar7 + 5,param_1);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar9);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
FUN_047a2648:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return param_1;
}


