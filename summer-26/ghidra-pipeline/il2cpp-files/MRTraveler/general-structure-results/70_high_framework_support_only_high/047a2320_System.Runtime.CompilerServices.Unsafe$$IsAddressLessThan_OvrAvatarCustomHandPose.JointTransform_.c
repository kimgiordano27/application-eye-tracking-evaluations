/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$IsAddressLessThan<OvrAvatarCustomHandPose.JointTransform>
ENTRY_POINT: 047a2320
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047a2658) */

void System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OvrAvatarCustomHandPose_JointTransform>
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long in_x11;
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
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_03cf1348();
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<PoolManagerComponent_PoolDesc>:
        plVar3 = (long *)(*(code *)*puVar2)();
        if (plVar3 == (long *)0x0) {
LAB_047a2664:
          thunk_FUN_03ce5214(PTR_DAT_08e71970);
          uVar10 = thunk_FUN_03cf5234();
          FUN_071004d4(uVar10,0);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,in_stack_00000008);
        }
        lVar6 = *plVar3;
        bVar1 = *(byte *)(*(long *)PTR_DAT_08e81de8 + 0x130);
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81de8))
        {
          bVar1 = *(byte *)(*(long *)PTR_DAT_08e81e30 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e81e30
             )) goto LAB_047a2664;
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          FUN_08644cb0(&stack0x00000020,plVar3,0);
          in_stack_00000018 = in_stack_00000028;
          in_stack_00000010 = in_stack_00000020;
          plVar3 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81e38,&stack0x00000010);
        }
        else {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          FUN_08644ae0(&stack0x00000020,plVar3,0);
          in_stack_00000018 = in_stack_00000028;
          in_stack_00000010 = in_stack_00000020;
          plVar3 = (long *)thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e81df0,&stack0x00000010);
        }
        plVar9 = *(long **)(unaff_x19 + 0x10);
        plVar4 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
        uVar10 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar6 = FUN_0710fcf0(uVar10,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((lVar6 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar4[4] = lVar6;
        thunk_FUN_03d233cc(plVar4 + 4,lVar6);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e81dc0) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_047a24c8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e81dc0,2);
LAB_047a24c8:
        lVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        if ((lVar6 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,0);
        }
        if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar4[5] = lVar6;
        thunk_FUN_03d233cc(plVar4 + 5,lVar6);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar6 = (**(code **)(*plVar9 + 0x428))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x430));
        plVar4 = (long *)FUN_03c8f97c(*unaff_x20,2);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar5 = thunk_FUN_03cf5138(plVar3,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar5 == 0) {
          uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar4[4] = (long)plVar3;
        thunk_FUN_03d233cc(plVar4 + 4,plVar3);
        if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_03cf5138(), lVar5 == 0)) {
          uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,0);
        }
        if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar4[5] = unaff_x21;
        thunk_FUN_03d233cc();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_0702dc3c(lVar6);
        lVar6 = *unaff_x22;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x29) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_047a22ec;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348();
LAB_047a22ec:
        uVar7 = (*(code *)*puVar2)();
        if ((uVar7 & 1) == 0) {
          if (unaff_x22 == (long *)0x0) {
            return;
          }
          lVar6 = *unaff_x22;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0)
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>
          ;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto 
          System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
          ;
        }
        param_1 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)PTR_DAT_08e81e10;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;

    System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<MultiColumnCollectionHeader_ViewState_ColumnState>
    :
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_047a2648;
    }
  }
System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<OVRPlugin_Qpl_Annotation_Builder_Entry>:
  puVar2 = (undefined8 *)FUN_03cf1348();
FUN_047a2648:
  (*(code *)*puVar2)();
  return;
}


