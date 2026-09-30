/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedItemBase$$set_Valid
ENTRY_POINT: 052c0b0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


undefined8 Meta_XR_ImmersiveDebugger_InspectedItemBase__set_Valid(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int in_w9;
  long unaff_x19;
  uint uVar11;
  long lVar12;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  
  if (in_w9 < *(int *)(param_1 + 0x18)) {
    if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
       (lVar4 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0), puVar3 = PTR_DAT_06d02bc8, lVar4 != 0))
    {
      iStack000000000000000c = (int)*(undefined8 *)(lVar4 + 0x18);
      uVar5 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 != 0) {
        lVar8 = *(long *)(lVar4 + 0x80);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
          FUN_052c35a0(lVar4);
          lVar8 = *(long *)(lVar4 + 0x80);
          if (lVar8 == 0) goto LAB_052c0ee8;
        }
        uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
        uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
        puVar10 = (undefined8 *)PTR_DAT_06d3d3d8;
LAB_052c0c84:
        uVar5 = FUN_05465b44(*puVar10,uVar5,uVar6,0);
LAB_052c0c9c:
        if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
        }
        FUN_06694324(uVar5,0);
        return 0;
      }
    }
  }
  else if (((*(long *)(unaff_x19 + 0xb0) != 0) &&
           (lVar4 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb0),0), lVar4 != 0)) &&
          (lVar8 = *(long *)(unaff_x19 + 0x30), lVar8 != 0)) {
    lVar9 = *(long *)(lVar8 + 0x80);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
      FUN_052c35a0(lVar8);
      lVar9 = *(long *)(lVar8 + 0x80);
      if (lVar9 == 0) goto LAB_052c0ee8;
    }
    if (*(int *)(lVar4 + 0x18) < *(int *)(lVar9 + 0x18)) {
      if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
         (lVar4 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0), puVar3 = PTR_DAT_06d02bc8, lVar4 != 0
         )) {
        iStack000000000000000c = (int)*(undefined8 *)(lVar4 + 0x18);
        uVar5 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
        lVar4 = *(long *)(unaff_x19 + 0x30);
        if (lVar4 != 0) {
          lVar8 = *(long *)(lVar4 + 0x80);
          if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
            FUN_052c35a0(lVar4);
            lVar8 = *(long *)(lVar4 + 0x80);
            if (lVar8 == 0) goto LAB_052c0ee8;
          }
          uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
          uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
          puVar10 = (undefined8 *)PTR_DAT_06d3d3e8;
          goto LAB_052c0c84;
        }
      }
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 != 0) {
        lVar8 = 4;
        do {
          lVar9 = *(long *)(lVar4 + 0x80);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
            FUN_052c35a0(lVar4);
            lVar9 = *(long *)(lVar4 + 0x80);
            if (lVar9 == 0) break;
          }
          iVar2 = (int)lVar8;
          uVar11 = iVar2 - 4;
          if (*(int *)(lVar9 + 0x18) <= (int)uVar11) {
            *(undefined1 *)(unaff_x19 + 0x78) = 1;
            return 1;
          }
          lVar4 = *(long *)(unaff_x19 + 0x30);
          if (lVar4 == 0) break;
          lVar9 = *(long *)(lVar4 + 0x80);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
            FUN_052c35a0(lVar4);
            lVar9 = *(long *)(lVar4 + 0x80);
            if (lVar9 == 0) break;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_052c0eec:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          if (*(long *)(unaff_x19 + 0xb8) == 0) break;
          lVar9 = *(long *)(lVar9 + lVar8 * 8);
          lVar4 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0);
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_052c0eec;
          if (*(long *)(unaff_x19 + 0xb0) == 0) break;
          lVar12 = *(long *)(lVar4 + lVar8 * 8);
          lVar4 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb0),0);
          puVar3 = PTR_DAT_06d02bc8;
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_052c0eec;
          if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
              (lVar4 = *(long *)(lVar4 + lVar8 * 8), lVar4 == 0)) || (*(long *)(lVar4 + 0x10) == 0))
          break;
          iVar1 = *(int *)(*(long *)(lVar9 + 0x20) + 0x18);
          if (iVar1 != *(int *)(*(long *)(lVar4 + 0x10) + 0x18)) {
            iStack000000000000000c = iVar2 + -4;
            uVar5 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
            if (*(long *)(lVar4 + 0x10) != 0) {
              uStack0000000000000008 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18);
              uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
              if (*(long *)(lVar9 + 0x20) != 0) {
                in_stack_00000000._4_4_ = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x18);
                uVar7 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
                puVar10 = (undefined8 *)PTR_DAT_06d3d3d0;
LAB_052c0ec8:
                uVar5 = FUN_05465b88(*puVar10,uVar5,uVar6,uVar7,0);
                goto LAB_052c0c9c;
              }
            }
            break;
          }
          if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) break;
          if (iVar1 != *(int *)(lVar12 + 0x18)) {
            iStack000000000000000c = iVar2 + -4;
            uVar5 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
            if (*(long *)(lVar4 + 0x10) != 0) {
              uStack0000000000000008 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18);
              uVar6 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,&stack0x00000008);
              if (*(long *)(lVar9 + 0x20) != 0) {
                in_stack_00000000._4_4_ = *(undefined4 *)(*(long *)(lVar9 + 0x20) + 0x18);
                uVar7 = thunk_FUN_02ef1438(*(undefined8 *)puVar3,(long)&stack0x00000000 + 4);
                puVar10 = (undefined8 *)PTR_DAT_06d3d3f0;
                goto LAB_052c0ec8;
              }
            }
            break;
          }
          lVar4 = *(long *)(unaff_x19 + 0x30);
          lVar8 = lVar8 + 1;
        } while (lVar4 != 0);
      }
    }
  }
LAB_052c0ee8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


