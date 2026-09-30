/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TrySerialize
ENTRY_POINT: 0423aaa8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TrySerialize(void)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar8;
  undefined8 unaff_x24;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x28;
  long unaff_x29;
  
  do {
    lVar11 = *unaff_x20;
    plVar3 = (long *)thunk_FUN_02cea798(unaff_x28,lVar11);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(unaff_x28,lVar11);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar11) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0423ab0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,lVar11,0);
LAB_0423ab0c:
    (*(code *)*puVar4)(plVar3,*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                       puVar4[1]);
    FUN_04dc7640();
    FUN_04dc7640();
    FUN_04dc7f18();
    unaff_w19 = unaff_w19 + 1;
    lVar11 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar5 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar11 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02ce0978(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
      lVar11 = *(long *)(unaff_x22 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_02ce0978(lVar11);
    }
    iVar2 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28));
    lVar11 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978(lVar11);
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar11 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    if (iVar2 + -1 <= unaff_w19) {
      lVar5 = *(long *)(unaff_x22 + 0x20);
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02ce0978();
      }
      iVar2 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      lVar5 = *(long *)(unaff_x22 + 0x20);
                    /* try { // try from 0423ab80 to 0433ad37 has its CatchHandler @ 0423ab80
                       catch() { ... } // from try @ 0423ab80 with catch @ 0423ab80
                       catch() { ... } // from try @ 0423adbc with catch @ 0423ab80
                       catch() { ... } // from try @ 0423add0 with catch @ 0423ab80
                       catch() { ... } // from try @ 0423ae0c with catch @ 0423ab80
                       catch() { ... } // from try @ 0423ae48 with catch @ 0423ab80 */
      uVar1 = *(ushort *)(lVar5 + 0x135);
      lVar11 = lVar5;
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_02ce0978(lVar5);
        uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
        lVar11 = *(long *)(unaff_x22 + 0x20);
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar11 = FUN_02ce0978(lVar11);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar2 + -1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
      (**(code **)(lVar11 + 0x10))(uVar10);
      lVar11 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02ce0978();
      }
      lVar11 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20));
      if (lVar11 == 0) {
LAB_0423ad04:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *unaff_x20;
      lVar5 = thunk_FUN_02cea798(lVar11,lVar8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar11,lVar8);
      }
      lVar5 = *unaff_x20;
      plVar3 = (long *)thunk_FUN_02cea798(lVar11,lVar5);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar11,lVar5);
      }
      lVar11 = *plVar3;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 == 0) goto LAB_0423ac74;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x22 + 0x20);
    uVar10 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x40);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978();
    }
    lVar11 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x40);
    *(int *)(unaff_x29 + -0xc) = unaff_w19;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
    (**(code **)(lVar11 + 0x10))(uVar10);
    lVar11 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02ce0978();
    }
    unaff_x28 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x20));
    if (unaff_x28 == 0) goto LAB_0423ad04;
    lVar5 = *unaff_x20;
    lVar11 = thunk_FUN_02cea798(unaff_x28,lVar5);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(unaff_x28,lVar5);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == lVar5) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0423ac94;
    }
  }
LAB_0423ac74:
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,lVar5,0);
LAB_0423ac94:
  (*(code *)*puVar4)(plVar3,*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                     puVar4[1]);
  FUN_04dc7640();
  FUN_04dc7f18();
  (**(code **)(*unaff_x21 + 0x168))();
  if (*(long *)(lVar8 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


