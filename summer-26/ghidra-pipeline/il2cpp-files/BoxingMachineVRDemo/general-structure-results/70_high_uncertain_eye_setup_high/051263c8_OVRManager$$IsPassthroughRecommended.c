/*
FUNCTION_NAME: OVRManager$$IsPassthroughRecommended
ENTRY_POINT: 051263c8
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


void OVRManager__IsPassthroughRecommended(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_051263f4;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_051263f4:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar1 = PTR_DAT_0675f3d8;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0675f3d8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0512645c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d8,0);
LAB_0512645c:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_05126680;
      (**(code **)(*unaff_x19 + 0x5d8))();
      puVar2 = PTR_DAT_06780f78;
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780f78) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051264dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06780f78,0);
LAB_051264dc:
      uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      lVar7 = *plVar5;
      lVar6 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05126538;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar6,0);
LAB_05126538:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        FUN_0512168c(uVar3);
        (**(code **)(*unaff_x19 + 0x698))();
      }
      else {
        (**(code **)(*unaff_x19 + 0x598))();
        FUN_0512168c(uVar3);
        (**(code **)(*unaff_x19 + 0x698))();
        do {
          lVar6 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_051265c8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,0);
LAB_051265c8:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
          FUN_0512168c();
          (**(code **)(*unaff_x19 + 0x698))();
          lVar7 = *plVar5;
          lVar6 = *(long *)puVar1;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0512663c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar6,0);
LAB_0512663c:
          uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        } while ((uVar8 & 1) != 0);
        (**(code **)(*unaff_x19 + 0x5a8))();
      }
    }
    return;
  }
LAB_05126680:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


