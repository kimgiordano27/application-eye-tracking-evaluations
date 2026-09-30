/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$Invoke
ENTRY_POINT: 02134bf0
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  
  (**(code **)(param_1 + 0x138))();
  puVar5 = (undefined8 *)(unaff_x19 + 0x22);
  plVar10 = (long *)*puVar5;
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x22 + 300);
    if ((bVar1 <= *(byte *)(*plVar10 + 300)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
      lVar4 = FUN_02df4dd8(plVar10,0);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar4,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06e25be8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(plVar10,uVar6);
  }
  if (unaff_x19[0x24] == 1) {
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x1e) = *(undefined8 *)(unaff_x19 + 0x26);
    thunk_FUN_01656ef8(unaff_x19 + 0x1e,0);
    unaff_x19[0x1c] = 1;
  }
  else {
    *puVar5 = 0;
    thunk_FUN_01656ef8(puVar5,0);
    *(undefined8 *)(unaff_x19 + 0x26) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  plVar10 = *(long **)(unaff_x19 + 0x14);
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d8b348) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_021351ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06d8b348,0);
LAB_021351ec:
    _in_stack_00000040 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    _in_stack_00000050 = FUN_036991cc(&stack0x00000040,0);
    if (*(char *)(unaff_x28 + 0x6b5) == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e52150);
      thunk_FUN_0159f088(PTR_DAT_06dd2198);
      *(undefined1 *)(unaff_x28 + 0x6b5) = 1;
    }
    if (in_stack_00000050 != (long *)0x0) {
      plVar10 = in_stack_00000050;
      lVar4 = *in_stack_00000050;
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(lVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
        uVar11 = in_stack_00000058 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_021352c0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x27,0);
LAB_021352c0:
        iVar3 = (*(code *)*puVar5)(plVar10,uVar11,puVar5[1]);
        if (iVar3 == 0) goto LAB_02135530;
      }
      else {
        uVar7 = FUN_036982e0(in_stack_00000050,0);
        if ((uVar7 & 1) == 0) {
LAB_02135530:
          *unaff_x19 = 4;
          *(undefined1 (*) [16])(unaff_x19 + 0x34) = _in_stack_00000050;
          thunk_FUN_01656ef8((undefined1 (*) [16])(unaff_x19 + 0x34),0);
          FUN_046272f4(unaff_x19 + 2,&stack0x00000050);
          return;
        }
      }
    }
    if (*(char *)(unaff_x25 + 0x6b6) == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e52150);
      thunk_FUN_0159f088(PTR_DAT_06dd2198);
      *(undefined1 *)(unaff_x25 + 0x6b6) = 1;
    }
    plVar10 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar4 = *in_stack_00000050;
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(lVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
        uVar11 = in_stack_00000058 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_02135380;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x27,2);
LAB_02135380:
        (*(code *)*puVar5)(plVar10,uVar11,puVar5[1]);
      }
      else {
        FUN_02df6c8c(in_stack_00000050,0);
      }
    }
  }
  puVar5 = (undefined8 *)(unaff_x19 + 0x1a);
  plVar10 = (long *)*puVar5;
  if (plVar10 == (long *)0x0) {
    if (unaff_x19[0x1c] == 1) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x1e);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    }
    else {
      *puVar5 = 0;
      thunk_FUN_01656ef8(puVar5,0);
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      thunk_FUN_01656ef8(unaff_x19 + 0x14,0);
      *(undefined8 *)(unaff_x19 + 0x16) = 0;
      thunk_FUN_01656ef8(unaff_x19 + 0x16,0);
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_01656ef8(unaff_x19 + 0x18,0);
      uVar9 = 0;
      uVar6 = 0;
    }
    puVar2 = PTR_DAT_06e448e8;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    thunk_FUN_01656ef8(unaff_x19 + 0x14,0);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    thunk_FUN_01656ef8(unaff_x19 + 0x16,0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_01656ef8(unaff_x19 + 0x18,0);
    FUN_050a9c68(unaff_x19 + 2,uVar6,uVar9,*(undefined8 *)puVar2);
    return;
  }
  bVar1 = *(byte *)(*unaff_x22 + 300);
  if ((bVar1 <= *(byte *)(*plVar10 + 300)) &&
     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
    lVar4 = FUN_02df4dd8(plVar10,0);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02df4ea4(lVar4,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06e25be8);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(plVar10,uVar6);
}


