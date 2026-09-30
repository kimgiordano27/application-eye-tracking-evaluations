/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitPending
ENTRY_POINT: 05126350
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughInitPending(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *in_x9;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x24;
  
  uVar4 = thunk_FUN_02d9d534(*in_x9);
  FUN_04d5e1c4();
  puVar5 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_02dd37b4(puVar5,uVar4);
  plVar6 = (long *)FUN_033b8bc4();
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06780f70) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_051263f4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06780f70,0);
LAB_051263f4:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar1 = PTR_DAT_0675f3d8;
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0512645c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0675f3d8,0);
LAB_0512645c:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_05126680;
        (**(code **)(*unaff_x19 + 0x5d8))();
        puVar2 = PTR_DAT_06780f78;
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06780f78) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_051264dc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06780f78,0);
LAB_051264dc:
        uVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        lVar8 = *plVar6;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05126538;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar7,0);
LAB_05126538:
        uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          FUN_0512168c(uVar3);
          (**(code **)(*unaff_x19 + 0x698))();
        }
        else {
          (**(code **)(*unaff_x19 + 0x598))();
          FUN_0512168c(uVar3);
          (**(code **)(*unaff_x19 + 0x698))();
          do {
            lVar7 = *plVar6;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_051265c8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0);
LAB_051265c8:
            (*(code *)*puVar5)(plVar6,puVar5[1]);
            FUN_0512168c();
            (**(code **)(*unaff_x19 + 0x698))();
            lVar8 = *plVar6;
            lVar7 = *(long *)puVar1;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0512663c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar7,0);
LAB_0512663c:
            uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          } while ((uVar9 & 1) != 0);
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


