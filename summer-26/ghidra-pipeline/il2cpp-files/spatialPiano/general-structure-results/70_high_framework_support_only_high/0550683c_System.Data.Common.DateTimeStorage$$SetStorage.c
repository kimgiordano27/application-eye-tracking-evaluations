/*
FUNCTION_NAME: System.Data.Common.DateTimeStorage$$SetStorage
ENTRY_POINT: 0550683c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05506d10) */
/* WARNING: Removing unreachable block (ram,0x05506b68) */
/* WARNING: Removing unreachable block (ram,0x05506d24) */
/* WARNING: Removing unreachable block (ram,0x05506c4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Data_Common_DateTimeStorage__SetStorage(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_x1;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x27;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  
  uVar4 = (**(code **)(param_1 + 0x188))();
  auVar15 = FUN_054ce908(uVar4,*unaff_x21,0);
  uVar4 = auVar15._0_8_;
  uVar8 = auVar15._8_8_;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar5 = (long *)FUN_040bcacc(*(long *)(unaff_x20 + 0x18),
                                  *(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
    puVar3 = PTR_DAT_067ccec0;
    puVar2 = PTR_DAT_067ca818;
    puVar1 = PTR_DAT_067c91b8;
joined_r0x05506880:
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *plVar5;
    lVar10 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_055068ec;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar5,lVar10,0);
LAB_055068ec:
    uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar13 & 1) != 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)OVRPlugin_OVRP_1_115_0_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05506958;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo,0);
LAB_05506958:
      lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar7 = (long *)FUN_040bcacc(*(long *)(lVar10 + 0x10),*(undefined8 *)PTR_DAT_067ca820);
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar7;
        lVar11 = *(long *)puVar1;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_055069e4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_02f421d0(plVar7,lVar11,0);
LAB_055069e4:
        uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar13 & 1) == 0) goto LAB_05506ae8;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05506a48;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar2,0);
LAB_05506a48:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar8 = FUN_054c5a1c();
        uVar9 = FUN_054cbc9c(uVar4,*(undefined8 *)(lVar10 + 0x18),0);
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar11 = *(long *)puVar3;
        }
        FUN_054c07d0(uVar8,uVar9,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0xd0),0);
        FUN_05505f68();
      } while( true );
    }
    if (plVar5 == (long *)0x0) goto LAB_05506c3c;
    lVar10 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 == 0) goto LAB_05506c14;
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_05506bfc;
  }
  goto LAB_05506d18;
LAB_05506ae8:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05506b50;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067c91b0,0);
LAB_05506b50:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  goto joined_r0x05506880;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_05506bfc:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05506c30;
    }
  }
LAB_05506c14:
  puVar6 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)PTR_DAT_067c91b0,0);
LAB_05506c30:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_05506c3c:
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_054ce7b0(uVar4,uVar8,0);
  FUN_055073c8();
  uVar4 = 0;
  uVar8 = extraout_x1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uVar4 = FUN_054f6fe4();
    uVar8 = in_stack_00000008;
    if (lVar10 != 0) {
      FUN_0550dba0(lVar10);
      return;
    }
  }
LAB_05506d18:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8(uVar4,uVar8);
}


