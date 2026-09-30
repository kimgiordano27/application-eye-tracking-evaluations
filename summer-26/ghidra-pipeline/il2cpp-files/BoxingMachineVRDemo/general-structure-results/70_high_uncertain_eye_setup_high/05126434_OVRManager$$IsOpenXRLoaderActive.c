/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 05126434
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsOpenXRLoaderActive(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_0512645c;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
LAB_0512645c:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*unaff_x19 + 0x5d8))();
    puVar2 = PTR_DAT_06780f78;
    lVar6 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06780f78) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051264dc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051264dc:
    uVar3 = (*(code *)*puVar4)();
    lVar6 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05126538;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05126538:
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) == 0) {
      FUN_0512168c(uVar3);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    else {
      (**(code **)(*unaff_x19 + 0x598))();
      FUN_0512168c(uVar3);
      (**(code **)(*unaff_x19 + 0x698))();
      do {
        lVar6 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_051265c8;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051265c8:
        (*(code *)*puVar4)();
        FUN_0512168c();
        (**(code **)(*unaff_x19 + 0x698))();
        lVar6 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0512663c;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0512663c:
        uVar5 = (*(code *)*puVar4)();
      } while ((uVar5 & 1) != 0);
      (**(code **)(*unaff_x19 + 0x5a8))();
    }
  }
  return;
}


