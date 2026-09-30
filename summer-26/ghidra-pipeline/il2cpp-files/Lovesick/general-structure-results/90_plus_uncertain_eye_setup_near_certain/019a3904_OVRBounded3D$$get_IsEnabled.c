/*
FUNCTION_NAME: OVRBounded3D$$get_IsEnabled
ENTRY_POINT: 019a3904
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBounded3D__get_IsEnabled(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long *plVar10;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000078;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
      goto LAB_019a3944;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_019a3944:
  uVar4 = (*(code *)*puVar3)();
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_get_Count__;
  if ((uVar4 & 1) != 0) {
    iVar9 = 0;
    do {
      plVar10 = *(long **)(unaff_x19 + 0x68);
      if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar2;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_019a39b8;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar10,lVar6,0);
LAB_019a39b8:
      uVar5 = (*(code *)*puVar3)(plVar10,iVar9,puVar3[1]);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x22);
      }
      uVar4 = FUN_0268b4e0(uVar5,0,0);
      if ((uVar4 & 1) == 0) {
        plVar10 = *(long **)(unaff_x19 + 0x68);
        if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
        lVar7 = *plVar10;
        lVar6 = *(long *)puVar2;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_019a3a48;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar10,lVar6,0);
LAB_019a3a48:
        uVar5 = (*(code *)*puVar3)(plVar10,iVar9,puVar3[1]);
        if (in_stack_00000078 == 0) goto LAB_019a3b9c;
        OVRPlugin__EraseSpace(in_stack_00000078,iVar9,0);
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000030 = in_stack_00000010;
        FUN_019ac4bc(uVar5,&stack0x00000020,1,0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1a);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
      lVar6 = FUN_01991930();
      plVar10 = *(long **)(unaff_x19 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_019a3b9c;
      lVar7 = *plVar10;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x78);
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_019a3b3c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x23,4);
LAB_019a3b3c:
      (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar6 == 0) goto LAB_019a3b9c;
      FUN_0267be98(lVar6,uVar1,0);
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
      FUN_019a1c58();
    }
    lVar6 = *(long *)(unaff_x19 + 0x70);
    if (lVar6 == 0) {
LAB_019a3b9c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
  }
  return;
}


