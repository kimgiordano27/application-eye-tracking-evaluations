/*
FUNCTION_NAME: DG.Tweening.Tweener$$Setup<Vector2,-Vector2,-VectorOptions>
ENTRY_POINT: 0233d23c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DG_Tweening_Tweener__Setup<Vector2,_Vector2,_VectorOptions>
               (long param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined *puVar6;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_01ecafa0(param_3);
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_Drawing_CommandBuilder_Reserve<CommandBuilder_LineWidthData>__;
  }
  else {
    if (param_2 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0233d2cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_0233d2cc:
        iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
        if (iVar1 <= iVar11) {
          return;
        }
        lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0233d344;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_0233d344:
        uVar2 = (*(code *)*puVar3)(param_2,iVar11,puVar3[1]);
        FUN_02edeae0(param_1,uVar2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
        iVar11 = iVar11 + 1;
      } while( true );
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar6 = Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar6);
  FUN_034efd20(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_3);
}


