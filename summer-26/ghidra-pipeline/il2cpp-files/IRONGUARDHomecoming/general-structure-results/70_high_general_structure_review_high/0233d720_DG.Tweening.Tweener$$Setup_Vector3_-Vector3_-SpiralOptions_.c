/*
FUNCTION_NAME: DG.Tweening.Tweener$$Setup<Vector3,-Vector3,-SpiralOptions>
ENTRY_POINT: 0233d720
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DG_Tweening_Tweener__Setup<Vector3,_Vector3,_SpiralOptions>
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  long unaff_x23;
  int iVar12;
  long unaff_x29;
  undefined *puVar5;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar6 = *(long *)(param_4 + 0x38);
  if (lVar6 == 0) {
    FUN_01ecafa0(param_4);
    lVar6 = *(long *)(param_4 + 0x38);
  }
  puVar11 = (undefined8 *)
            (&stack0x00000000 +
            -((ulong)*(uint *)(*(long *)(lVar6 + 0x18) + 0xfc) + 0xf & 0x1fffffff0));
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_Drawing_CommandBuilder_Reserve<CommandBuilder_LineWidthData>__;
  }
  else {
    if (param_3 != (long *)0x0) {
      iVar12 = 0;
      do {
        lVar6 = *(long *)(lVar6 + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0233d7d0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(param_3,lVar6,0);
LAB_0233d7d0:
        iVar1 = (*(code *)*puVar2)(param_3,puVar2[1]);
        if (iVar1 <= iVar12) {
          if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        *(int *)(unaff_x29 + -0xc) = iVar12;
        lVar7 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              lVar6 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
              goto LAB_0233d84c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar6 = FUN_01ecb238(param_3,lVar6,0);
LAB_0233d84c:
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
        lVar6 = *(long *)(lVar6 + 8);
        (**(code **)(lVar6 + 0x10))
                  (*(undefined8 *)(lVar6 + 8),lVar6,param_3,unaff_x29 + -0x20,puVar11);
        puVar2 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x20);
        uVar3 = *puVar2;
        puVar8 = puVar11;
        if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x18) + 0x28)) {
          puVar8 = (undefined8 *)*puVar11;
        }
        *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
        (*(code *)puVar2[2])(uVar3,puVar2,param_2,unaff_x29 + -0x20,unaff_x29 + -0xc);
        lVar6 = *(long *)(param_4 + 0x38);
        iVar12 = iVar12 + 1;
      } while( true );
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar5);
  FUN_034efd20(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_4);
}


