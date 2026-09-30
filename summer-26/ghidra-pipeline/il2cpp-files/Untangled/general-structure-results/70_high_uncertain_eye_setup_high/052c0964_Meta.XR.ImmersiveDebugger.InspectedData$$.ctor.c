/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedData$$.ctor
ENTRY_POINT: 052c0964
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_InspectedData___ctor(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long *unaff_x21;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  
  FUN_02f07e70(PTR_DAT_06d02708);
  FUN_02f07e70(PTR_DAT_06d02bc8);
  FUN_02f07e70(PTR_DAT_06d3d368);
  FUN_02f07e70(PTR_DAT_06d3d330);
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(PTR_DAT_06d3d3d0);
  FUN_02f07e70(PTR_DAT_06d3d3d8);
  FUN_02f07e70(PTR_DAT_06d3d3e0);
  FUN_02f07e70(PTR_DAT_06d3d3e8);
                    /* try { // try from 052c09d0 to 053c09df has its CatchHandler @ 052c0b44 */
  FUN_02f07e70(PTR_DAT_06d3d3f0);
  *(undefined1 *)(unaff_x20 + 0x65) = 1;
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
                    /* try { // try from 052c09e8 to 053c09f3 has its CatchHandler @ 052c0b40 */
  uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066ca6a0(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(uVar10,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) || (*(long *)(unaff_x19 + 0x38) == 0))
      goto LAB_052c0ee8;
      lVar5 = 0x28;
      if (*(char *)(*(long *)(unaff_x19 + 0x30) + 0x20) != '\0') {
        lVar5 = 0x20;
      }
      *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + lVar5);
      thunk_FUN_02f411dc();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(uVar10,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) || (*(long *)(unaff_x19 + 0x40) == 0))
      goto LAB_052c0ee8;
      lVar5 = 0x28;
      if (*(char *)(*(long *)(unaff_x19 + 0x30) + 0x20) != '\0') {
        lVar5 = 0x20;
      }
      *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + lVar5);
      thunk_FUN_02f411dc();
    }
    if ((*(long *)(unaff_x19 + 0xb0) == 0) || (*(long *)(unaff_x19 + 0xb8) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar10 = *(undefined8 *)PTR_DAT_06d3d3e0;
    }
    else {
      lVar5 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0);
      if ((lVar5 == 0) || (lVar11 = *(long *)(unaff_x19 + 0x30), lVar11 == 0)) goto LAB_052c0ee8;
      lVar8 = *(long *)(lVar11 + 0x80);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
        FUN_052c35a0(lVar11);
        lVar8 = *(long *)(lVar11 + 0x80);
        if (lVar8 == 0) goto LAB_052c0ee8;
      }
      if (*(int *)(lVar5 + 0x18) < *(int *)(lVar8 + 0x18)) {
        if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
           (lVar5 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0), puVar3 = PTR_DAT_06d02bc8,
           lVar5 == 0)) {
LAB_052c0ee8:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        iStack000000000000000c = (int)*(undefined8 *)(lVar5 + 0x18);
        uVar10 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
        lVar5 = *(long *)(unaff_x19 + 0x30);
        if (lVar5 == 0) goto LAB_052c0ee8;
        lVar11 = *(long *)(lVar5 + 0x80);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
          FUN_052c35a0(lVar5);
          lVar11 = *(long *)(lVar5 + 0x80);
          if (lVar11 == 0) goto LAB_052c0ee8;
        }
        uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
        uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
        puVar9 = (undefined8 *)PTR_DAT_06d3d3d8;
      }
      else {
        if (((*(long *)(unaff_x19 + 0xb0) == 0) ||
            (lVar5 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb0),0), lVar5 == 0)) ||
           (lVar11 = *(long *)(unaff_x19 + 0x30), lVar11 == 0)) goto LAB_052c0ee8;
        lVar8 = *(long *)(lVar11 + 0x80);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
          FUN_052c35a0(lVar11);
          lVar8 = *(long *)(lVar11 + 0x80);
          if (lVar8 == 0) goto LAB_052c0ee8;
        }
        if (*(int *)(lVar8 + 0x18) <= *(int *)(lVar5 + 0x18)) {
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 != 0) {
            lVar11 = 4;
            do {
              lVar8 = *(long *)(lVar5 + 0x80);
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
                FUN_052c35a0(lVar5);
                lVar8 = *(long *)(lVar5 + 0x80);
                if (lVar8 == 0) break;
              }
              iVar2 = (int)lVar11;
              uVar12 = iVar2 - 4;
              if (*(int *)(lVar8 + 0x18) <= (int)uVar12) {
                *(undefined1 *)(unaff_x19 + 0x78) = 1;
                return 1;
              }
              lVar5 = *(long *)(unaff_x19 + 0x30);
              if (lVar5 == 0) break;
              lVar8 = *(long *)(lVar5 + 0x80);
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
                FUN_052c35a0(lVar5);
                lVar8 = *(long *)(lVar5 + 0x80);
                if (lVar8 == 0) break;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_052c0eec:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              if (*(long *)(unaff_x19 + 0xb8) == 0) break;
              lVar8 = *(long *)(lVar8 + lVar11 * 8);
              lVar5 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0);
              if (lVar5 == 0) break;
              if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_052c0eec;
              if (*(long *)(unaff_x19 + 0xb0) == 0) break;
              lVar13 = *(long *)(lVar5 + lVar11 * 8);
              lVar5 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb0),0);
              puVar3 = PTR_DAT_06d02bc8;
              if (lVar5 == 0) break;
              if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_052c0eec;
              if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) ||
                  (lVar5 = *(long *)(lVar5 + lVar11 * 8), lVar5 == 0)) ||
                 (*(long *)(lVar5 + 0x10) == 0)) break;
              iVar1 = *(int *)(*(long *)(lVar8 + 0x20) + 0x18);
              if (iVar1 != *(int *)(*(long *)(lVar5 + 0x10) + 0x18)) {
                iStack000000000000000c = iVar2 + -4;
                uVar10 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,
                                            (long)&stack0x00000008 + 4);
                if (*(long *)(lVar5 + 0x10) != 0) {
                  uStack0000000000000008 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x18);
                  uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
                  if (*(long *)(lVar8 + 0x20) != 0) {
                    in_stack_00000000._4_4_ = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
                    uVar7 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
                    puVar9 = (undefined8 *)PTR_DAT_06d3d3d0;
LAB_052c0ec8:
                    uVar10 = FUN_05465b88(*puVar9,uVar10,uVar6,uVar7,0);
                    goto LAB_052c0c9c;
                  }
                }
                break;
              }
              if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0)) break;
              if (iVar1 != *(int *)(lVar13 + 0x18)) {
                iStack000000000000000c = iVar2 + -4;
                uVar10 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,
                                            (long)&stack0x00000008 + 4);
                if (*(long *)(lVar5 + 0x10) != 0) {
                  uStack0000000000000008 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x18);
                  uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
                  if (*(long *)(lVar8 + 0x20) != 0) {
                    in_stack_00000000._4_4_ = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
                    uVar7 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
                    puVar9 = (undefined8 *)PTR_DAT_06d3d3f0;
                    goto LAB_052c0ec8;
                  }
                }
                break;
              }
              lVar5 = *(long *)(unaff_x19 + 0x30);
              lVar11 = lVar11 + 1;
            } while (lVar5 != 0);
          }
          goto LAB_052c0ee8;
        }
        if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
           (lVar5 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0), puVar3 = PTR_DAT_06d02bc8,
           lVar5 == 0)) goto LAB_052c0ee8;
        iStack000000000000000c = (int)*(undefined8 *)(lVar5 + 0x18);
        uVar10 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
        lVar5 = *(long *)(unaff_x19 + 0x30);
        if (lVar5 == 0) goto LAB_052c0ee8;
        lVar11 = *(long *)(lVar5 + 0x80);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
          FUN_052c35a0(lVar5);
          lVar11 = *(long *)(lVar5 + 0x80);
          if (lVar11 == 0) goto LAB_052c0ee8;
        }
        uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
        uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
        puVar9 = (undefined8 *)PTR_DAT_06d3d3e8;
      }
      uVar10 = FUN_05465b44(*puVar9,uVar10,uVar6,0);
LAB_052c0c9c:
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
      }
    }
    FUN_06694324(uVar10,0);
  }
  return 0;
}


