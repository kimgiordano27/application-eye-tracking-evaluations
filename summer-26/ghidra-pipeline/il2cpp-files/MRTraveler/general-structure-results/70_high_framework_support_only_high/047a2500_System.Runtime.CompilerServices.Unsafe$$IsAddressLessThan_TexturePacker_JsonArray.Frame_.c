/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<TexturePacker_JsonArray.Frame>
ENTRY_POINT: 047a2500
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

void System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<TexturePacker_JsonArray_Frame>
               (long *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
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
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    param_1[5] = unaff_x26;
    thunk_FUN_03d233cc(param_1 + 5,unaff_x26);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = (**(code **)(*unaff_x24 + 0x428))
                      (unaff_x24,unaff_x25,*(undefined8 *)(*unaff_x24 + 0x430));
    plVar4 = (long *)FUN_03c8f97c(*unaff_x20,2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = thunk_FUN_03cf5138(unaff_x23,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar4[4] = (long)unaff_x23;
    thunk_FUN_03d233cc(plVar4 + 4,unaff_x23);
    if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_03cf5138(), lVar5 == 0)) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar4[5] = unaff_x21;
    thunk_FUN_03d233cc();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar3);
    lVar3 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_047a22ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_047a22ec:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0)
      goto 
      System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
      ;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e81e10) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 == (long *)0x0) {
LAB_047a2664:
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar8 = thunk_FUN_03cf5234();
      FUN_071004d4(uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,in_stack_00000008);
    }
    lVar3 = *plVar4;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
      if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30))
      goto LAB_047a2664;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644cb0(&stack0x00000020,plVar4,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      unaff_x23 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
    }
    else {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_08644ae0(&stack0x00000020,plVar4,0);
      in_stack_00000018 = in_stack_00000028;
      in_stack_00000010 = in_stack_00000020;
      unaff_x23 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x10);
    param_1 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    uVar8 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar3 = FUN_0710fcf0(uVar8,0);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_03cf5138(lVar3,*(undefined8 *)(*param_1 + 0x40)), lVar5 == 0)) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    if ((int)param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    param_1[4] = lVar3;
    thunk_FUN_03d233cc(param_1 + 4,lVar3);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e81dc0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_047a24c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(unaff_x23,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
    unaff_x26 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if ((unaff_x26 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(unaff_x26,*(undefined8 *)(*param_1 + 0x40)), lVar3 == 0)) {
      uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,0);
    }
    unaff_x25 = param_1;
    if (*(uint *)(param_1 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar2 = (undefined8 *)FUN_03cf1348();
FUN_047a2648:
  (*(code *)*puVar2)();
  return;
}


