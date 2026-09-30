/*
FUNCTION_NAME: Photon.Pun.PhotonNetwork.SerializeViewBatch$$.ctor
ENTRY_POINT: 0759889c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Photon_Pun_PhotonNetwork_SerializeViewBatch___ctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 in_stack_000000b8;
  
  do {
    uVar4 = in_stack_000000b8;
    uVar3 = in_stack_000000b0;
    uVar2 = in_stack_000000a0;
    if (unaff_x21 != 0) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_075765e0(uVar3,0);
      FUN_075763fc(unaff_x21,0);
      if ((unaff_x20 & 1) != 0) {
        lVar9 = *(long *)(unaff_x19 + 0xf0);
        in_stack_00000080 = uVar2;
        in_stack_00000088 = 0;
        thunk_FUN_03d1023c(&stack0x00000080,uVar2);
        in_stack_00000088 = CONCAT71(in_stack_00000088._1_7_,uVar4) & 0xffffffffffffff01;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar7 = *(long *)(lVar9 + 0x10);
        lVar8 = *unaff_x28;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x20);
          *puVar6 = in_stack_00000080;
          *(ulong *)(lVar7 + 0x28) = in_stack_00000088;
          thunk_FUN_03d1023c(puVar6,0);
        }
        else {
          FUN_05bffd8c(lVar9,in_stack_00000080,in_stack_00000088,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    uVar5 = FUN_06e7bd08(&stack0x00000090,*unaff_x26);
    unaff_x21 = in_stack_000000a8;
    if ((uVar5 & 1) == 0) {
      FUN_06e7be7c(&stack0x00000090,*unaff_x25);
      if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      System_Array_EmptyInternalEnumerator<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>__Dispose
                (*(long *)(unaff_x19 + 0xe8),*unaff_x24);
      return;
    }
  } while( true );
}


