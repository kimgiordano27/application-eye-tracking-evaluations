/*
FUNCTION_NAME: NWH.VehiclePhysics2.Demo.DemoTelemetry$$LateUpdate
ENTRY_POINT: 0686f43c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 NWH_VehiclePhysics2_Demo_DemoTelemetry__LateUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x24;
  
  uVar3 = (**(code **)(*unaff_x21 + 0x1f8))();
  if ((uVar3 & 1) == 0) {
    lVar8 = *(long *)(unaff_x19 + 0x30);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084ae0e8);
    FUN_04de7d48(uVar4,*(undefined8 *)PTR_DAT_084ae0e0);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 0xe0);
      *puVar9 = uVar4;
      thunk_FUN_03afed3c(puVar9,uVar4);
      uVar4 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_08491ab8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar8 = FUN_06831720(uVar4,0);
      puVar2 = PTR_DAT_084ae148;
      puVar1 = PTR_DAT_08491d30;
      if ((lVar8 != 0) && (lVar5 = *(long *)(lVar8 + 0x20), lVar5 != 0)) {
        uVar3 = 0;
        while( true ) {
          if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar3) goto LAB_0686f034;
          lVar5 = *(long *)(lVar8 + 0x18);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar10 = *unaff_x20;
          uVar4 = *(undefined8 *)(lVar5 + uVar3 * 8 + 0x20);
          if (*(int *)(*(long *)(unaff_x24 + 0x98) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_067855e8(uVar10,uVar4,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar1);
          }
          uVar4 = FUN_0688ded0(uVar4,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (plVar11 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar11 == (long *)0x0))
          break;
          lVar5 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_0686f5b4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar2,2);
LAB_0686f5b4:
          (*(code *)*puVar9)(plVar11,uVar4,puVar9[1]);
          lVar5 = *(long *)(lVar8 + 0x20);
          uVar3 = uVar3 + 1;
          if (lVar5 == 0) break;
        }
      }
    }
  }
  else {
LAB_0686f034:
    lVar8 = FUN_0686e80c();
    if (lVar8 != 0) {
      return *(undefined8 *)(lVar8 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


