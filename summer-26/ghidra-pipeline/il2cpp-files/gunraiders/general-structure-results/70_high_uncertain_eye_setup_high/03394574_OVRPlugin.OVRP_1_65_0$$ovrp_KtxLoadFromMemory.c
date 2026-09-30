/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 03394574
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x29;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_01c72498();
      goto LAB_033945a0;
    }
    plVar5 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar5 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 6) * 0x10 + 0x138);
LAB_033945a0:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) == 0) {
    FUN_0339cd08();
    if ((unaff_x19 != (long *)0x0) && ((**(code **)(*unaff_x19 + 0x1b8))(), unaff_x20 != 0)) {
      if (*(long *)(unaff_x20 + 0x90) == 0) {
        lVar4 = FUN_03395dc8();
        *(long *)(unaff_x20 + 0x90) = lVar4;
        if (lVar4 == 0) {
          *(undefined8 *)(unaff_x20 + 0x98) = 0;
        }
        else {
          uVar3 = FUN_0338477c(*(undefined8 *)(lVar4 + 0x60),0);
          if ((uVar3 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
          }
          *(undefined8 *)(unaff_x20 + 0x98) = uVar6;
        }
      }
      plVar5 = (long *)FUN_03396234();
      while (uVar3 = FUN_0335ce1c(), (uVar3 & 1) != 0) {
        iVar1 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar1 != 5) {
          if (iVar1 == 0xe) goto LAB_033948dc;
          if ((plVar5 == (long *)0x0) ||
             (uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
             (uVar3 & 1) == 0)) {
            FUN_033966b4();
          }
          else {
            FUN_033962a0();
          }
          lVar4 = *unaff_x23;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x29) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_0339474c;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339474c:
          (*(code *)*puVar2)();
        }
      }
      FUN_0339d160();
LAB_033948dc:
      FUN_0339cf34();
      return;
    }
  }
  else if (unaff_x19 != (long *)0x0) {
    FUN_0335c934();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


