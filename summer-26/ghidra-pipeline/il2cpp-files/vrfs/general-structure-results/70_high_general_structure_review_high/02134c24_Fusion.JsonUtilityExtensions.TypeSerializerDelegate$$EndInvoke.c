/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeSerializerDelegate$$EndInvoke
ENTRY_POINT: 02134c24
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Fusion_JsonUtilityExtensions_TypeSerializerDelegate__EndInvoke(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  
  (**(code **)(param_1 + 0x138))();
  puVar5 = (undefined8 *)(unaff_x19 + 0x2c);
  plVar11 = (long *)*puVar5;
  if (plVar11 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x22 + 300);
    if ((bVar1 <= *(byte *)(*plVar11 + 300)) &&
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
      lVar4 = FUN_02df4dd8(plVar11,0);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar4,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06e25be8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(plVar11,uVar6);
  }
  *puVar5 = 0;
  thunk_FUN_01656ef8(puVar5,0);
  *(undefined8 *)(unaff_x19 + 0x2a) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 0x2a,0);
  lVar4 = *unaff_x26;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar4 = *unaff_x26;
  }
  if (*(long *)(unaff_x19 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x16) + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  uVar6 = FUN_0187928c(lVar7,0);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_041f44c0(&stack0x00000008,uVar10,uVar6,*unaff_x29);
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x26) = in_stack_00000008;
  thunk_FUN_01656ef8(unaff_x19 + 0x26,0);
  unaff_x19[0x24] = 1;
  plVar11 = *(long **)(unaff_x19 + 0x16);
  if (plVar11 != (long *)0x0) {
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d8b348) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02135460;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar11,*(long *)PTR_DAT_06d8b348,0);
LAB_02135460:
    _in_stack_00000040 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    _in_stack_00000050 = FUN_036991cc(&stack0x00000040,0);
    if (*(char *)(unaff_x28 + 0x6b5) == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e52150);
      thunk_FUN_0159f088(PTR_DAT_06dd2198);
      *(undefined1 *)(unaff_x28 + 0x6b5) = 1;
    }
    plVar11 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar4 = *in_stack_00000050;
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(lVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
        uVar12 = in_stack_00000058 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02135578;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x27,0);
LAB_02135578:
        iVar3 = (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
        if (iVar3 == 0) goto LAB_0213566c;
      }
      else {
        uVar8 = FUN_036982e0(in_stack_00000050,0);
        if ((uVar8 & 1) == 0) {
LAB_0213566c:
          *unaff_x19 = 3;
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
    plVar11 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar4 = *in_stack_00000050;
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(lVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
        uVar12 = in_stack_00000058 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02134bf4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x27,2);
LAB_02134bf4:
        (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
      }
      else {
        FUN_02df6c8c(in_stack_00000050,0);
      }
    }
  }
  puVar5 = (undefined8 *)(unaff_x19 + 0x22);
  plVar11 = (long *)*puVar5;
  if (plVar11 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x22 + 300);
    if ((bVar1 <= *(byte *)(*plVar11 + 300)) &&
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
      lVar4 = FUN_02df4dd8(plVar11,0);
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar4,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06e25be8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(plVar11,uVar6);
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
  plVar11 = *(long **)(unaff_x19 + 0x14);
  if (plVar11 != (long *)0x0) {
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d8b348) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_021351ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar11,*(long *)PTR_DAT_06d8b348,0);
LAB_021351ec:
    auVar13 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    _in_stack_00000040 = auVar13;
    auVar13 = FUN_036991cc(&stack0x00000040,0);
    lVar4 = auVar13._0_8_;
    if (*(char *)(unaff_x28 + 0x6b5) == '\0') {
      _in_stack_00000050 = auVar13;
      thunk_FUN_0159f088(PTR_DAT_06e52150);
      thunk_FUN_0159f088(PTR_DAT_06dd2198);
      *(undefined1 *)(unaff_x28 + 0x6b5) = 1;
      auVar13 = _in_stack_00000050;
      lVar4 = (long)in_stack_00000050;
    }
    _in_stack_00000050 = auVar13;
    if (lVar4 != 0) {
      plVar11 = in_stack_00000050;
      lVar4 = *in_stack_00000050;
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(lVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
        uVar12 = in_stack_00000058 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_021352c0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x27,0);
LAB_021352c0:
        iVar3 = (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
        if (iVar3 == 0) goto LAB_02135530;
      }
      else {
        uVar8 = FUN_036982e0(in_stack_00000050,0);
        if ((uVar8 & 1) == 0) {
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
    plVar11 = in_stack_00000050;
    if (in_stack_00000050 != (long *)0x0) {
      lVar4 = *in_stack_00000050;
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((*(byte *)(lVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
        uVar12 = in_stack_00000058 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02135380;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x27,2);
LAB_02135380:
        (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
      }
      else {
        FUN_02df6c8c(in_stack_00000050,0);
      }
    }
  }
  puVar5 = (undefined8 *)(unaff_x19 + 0x1a);
  plVar11 = (long *)*puVar5;
  if (plVar11 == (long *)0x0) {
    if (unaff_x19[0x1c] == 1) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x1e);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
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
      uVar10 = 0;
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
    FUN_050a9c68(unaff_x19 + 2,uVar6,uVar10,*(undefined8 *)puVar2);
    return;
  }
  bVar1 = *(byte *)(*unaff_x22 + 300);
  if ((bVar1 <= *(byte *)(*plVar11 + 300)) &&
     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
    lVar4 = FUN_02df4dd8(plVar11,0);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02df4ea4(lVar4,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06e25be8);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(plVar11,uVar6);
}


