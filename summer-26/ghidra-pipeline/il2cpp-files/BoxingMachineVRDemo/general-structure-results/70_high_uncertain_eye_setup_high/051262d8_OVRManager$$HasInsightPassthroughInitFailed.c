/*
FUNCTION_NAME: OVRManager$$HasInsightPassthroughInitFailed
ENTRY_POINT: 051262d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__HasInsightPassthroughInitFailed(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x24;
  long *plVar11;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xf58);
  plVar11 = *(long **)(unaff_x24 + 0xf88);
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_033922f0(unaff_w21,*puVar8);
  lVar5 = *plVar11;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar5);
    lVar5 = *plVar11;
  }
  puVar1 = PTR_DAT_06780f60;
  lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *plVar11;
    }
    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780f68);
    FUN_04d5e1c4(lVar9,uVar10,*(undefined8 *)PTR_DAT_06780f80,0);
    plVar11 = (long *)(*(long *)(*plVar11 + 0xb8) + 8);
    *plVar11 = lVar9;
    thunk_FUN_02dd37b4(plVar11,lVar9);
  }
  plVar11 = (long *)FUN_033b8bc4(uVar4,lVar9,*(undefined8 *)puVar1);
  if (plVar11 != (long *)0x0) {
    lVar5 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06780f70) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051263f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_06780f70,0);
LAB_051263f4:
    plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
    puVar1 = PTR_DAT_0675f3d8;
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d8) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0512645c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0675f3d8,0);
LAB_0512645c:
      uVar6 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_05126680;
        (**(code **)(*unaff_x19 + 0x5d8))();
        puVar2 = PTR_DAT_06780f78;
        lVar5 = *plVar11;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06780f78) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_051264dc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_06780f78,0);
LAB_051264dc:
        uVar3 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        lVar9 = *plVar11;
        lVar5 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar5) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05126538;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar5,0);
LAB_05126538:
        uVar6 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        if ((uVar6 & 1) == 0) {
          FUN_0512168c(uVar3);
          (**(code **)(*unaff_x19 + 0x698))();
        }
        else {
          (**(code **)(*unaff_x19 + 0x598))();
          FUN_0512168c(uVar3);
          (**(code **)(*unaff_x19 + 0x698))();
          do {
            lVar5 = *plVar11;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_051265c8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar2,0);
LAB_051265c8:
            (*(code *)*puVar8)(plVar11,puVar8[1]);
            FUN_0512168c();
            (**(code **)(*unaff_x19 + 0x698))();
            lVar9 = *plVar11;
            lVar5 = *(long *)puVar1;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == lVar5) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0512663c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar8 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar5,0);
LAB_0512663c:
            uVar6 = (*(code *)*puVar8)(plVar11,puVar8[1]);
          } while ((uVar6 & 1) != 0);
          (**(code **)(*unaff_x19 + 0x5a8))();
        }
      }
      return;
    }
  }
LAB_05126680:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


