/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitialized
ENTRY_POINT: 05126260
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


void OVRManager__IsInsightPassthroughInitialized(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  undefined4 unaff_w21;
  long lVar9;
  undefined8 uVar10;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(param_1);
  }
  uVar3 = FUN_0503c2b4();
  puVar2 = PTR_DAT_06780f88;
  puVar1 = PTR_DAT_06780f58;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06767ef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_033922f0(unaff_w21,*(undefined8 *)puVar1);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_06780f60;
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780f68);
      FUN_04d5e1c4(lVar9,uVar10,*(undefined8 *)PTR_DAT_06780f80,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar9;
      thunk_FUN_02dd37b4(plVar5,lVar9);
    }
    plVar5 = (long *)FUN_033b8bc4(uVar4,lVar9,*(undefined8 *)puVar1);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06780f70) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051263f4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06780f70,0);
LAB_051263f4:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar1 = PTR_DAT_0675f3d8;
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d8) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0512645c;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d8,0);
LAB_0512645c:
        uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x5d8))();
          puVar2 = PTR_DAT_06780f78;
          lVar7 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06780f78) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_051264dc;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06780f78,0);
LAB_051264dc:
          unaff_w21 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          lVar9 = *plVar5;
          lVar7 = *(long *)puVar1;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05126538;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar7,0);
LAB_05126538:
          uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar3 & 1) != 0) {
            (**(code **)(*unaff_x19 + 0x598))();
            FUN_0512168c(unaff_w21);
            (**(code **)(*unaff_x19 + 0x698))();
            do {
              lVar7 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_051265c8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar3 != 0);
              }
              puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0);
LAB_051265c8:
              (*(code *)*puVar6)(plVar5,puVar6[1]);
              FUN_0512168c();
              (**(code **)(*unaff_x19 + 0x698))();
              lVar9 = *plVar5;
              lVar7 = *(long *)puVar1;
              uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0512663c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar3 != 0);
              }
              puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar7,0);
LAB_0512663c:
              uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar3 & 1) == 0) {
                (**(code **)(*unaff_x19 + 0x5a8))();
                return;
              }
            } while( true );
          }
          goto LAB_051262a8;
        }
      }
    }
  }
  else if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
LAB_051262a8:
    FUN_0512168c(unaff_w21);
    (**(code **)(*unaff_x19 + 0x698))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


