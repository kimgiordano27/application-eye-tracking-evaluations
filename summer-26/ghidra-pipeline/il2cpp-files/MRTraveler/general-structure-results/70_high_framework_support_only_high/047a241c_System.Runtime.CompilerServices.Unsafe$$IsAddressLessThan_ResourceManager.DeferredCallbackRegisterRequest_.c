/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<ResourceManager.DeferredCallbackRegisterRequest>
ENTRY_POINT: 047a241c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

void System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<ResourceManager_DeferredCallbackRegisterRequest>
               (long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar8;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (in_w9 == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = FUN_0710fcf0(uVar8,0);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x25 + 0x40)), lVar3 == 0)) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if ((int)unaff_x25[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x25[4] = lVar2;
    thunk_FUN_03d233cc(unaff_x25 + 4,lVar2);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e81dc0) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_047a24c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(unaff_x23,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
    lVar2 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x25 + 0x40)), lVar3 == 0)) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if (*(uint *)(unaff_x25 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x25[5] = lVar2;
    thunk_FUN_03d233cc(unaff_x25 + 5,lVar2);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = (**(code **)(*unaff_x24 + 0x428))
                      (unaff_x24,unaff_x25,*(undefined8 *)(*unaff_x24 + 0x430));
    plVar5 = (long *)FUN_03c8f97c(*unaff_x20,2);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = thunk_FUN_03cf5138(unaff_x23,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar3 == 0) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar5[4] = (long)unaff_x23;
    thunk_FUN_03d233cc(plVar5 + 4,unaff_x23);
    if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_03cf5138(), lVar3 == 0)) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar5[5] = unaff_x21;
    thunk_FUN_03d233cc();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar2);
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_047a22ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_047a22ec:
    uVar6 = (*(code *)*puVar4)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
      ;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e81e10) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 == (long *)0x0) {
LAB_047a2664:
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar8 = thunk_FUN_03cf5234();
      FUN_071004d4(uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,in_stack_00000008);
    }
    lVar2 = *plVar5;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
    if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
      if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30))
      goto LAB_047a2664;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644cb0(&stack0x00000020,plVar5,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      unaff_x23 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
    }
    else {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644ae0(&stack0x00000020,plVar5,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      unaff_x23 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x10);
    unaff_x25 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    param_1 = *unaff_x27;
    in_w9 = *(int *)(*unaff_x28 + 0xe0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar4 = (undefined8 *)FUN_03cf1348();
FUN_047a2648:
  (*(code *)*puVar4)();
  return;
}


