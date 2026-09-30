/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01cc4fe4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01cc4e3c) */
/* WARNING: Removing unreachable block (ram,0x01cc5070) */

void System_Array__InternalArray__get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  void *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar9;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  if (!in_ZR) {
    if (unaff_x21 != (long *)0x0) {
      lVar9 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x01cc5058;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78();
code_r0x01cc5058:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar9 = *plVar4;
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc4c80;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01cc4c80:
    (*(code *)*puVar3)();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(lVar9);
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar4 = (long *)FUN_01d01ae8((long)unaff_x19 + 0x28,0);
  puVar2 = StringLiteral_1246;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar9 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc4d14;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar1,0);
LAB_01cc4d14:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_01cc4e30;
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 == 0) goto LAB_01cc4e08;
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01cc4d70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)puVar2,0);
LAB_01cc4d70:
    auVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    _in_stack_00000080 = auVar10;
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d041cc(*(long *)(unaff_x20 + 0x30),&stack0x00000080,&stack0x000000b0,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d047b8(*(long *)(unaff_x20 + 0x30),&stack0x00000080,&stack0x00000100,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d03de8(*(long *)(unaff_x20 + 0x30),&stack0x000000b0,&stack0x00000080,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01cc4e24;
    }
  }
LAB_01cc4e08:
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar4,*unaff_x24,0);
LAB_01cc4e24:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_01cc4e30:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01cc5760();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_02396e54(*(long *)(unaff_x20 + 0x30),&stack0x00000100,*(undefined8 *)StringLiteral_1247);
    lVar9 = *(long *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000008,unaff_x19,0x78);
    if (lVar9 != 0) {
      uVar8 = *(undefined8 *)StringLiteral_1237;
      memcpy(&stack0x00000118,&stack0x00000008,0x78);
      FUN_024290c8(lVar9,&stack0x00000118,uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


