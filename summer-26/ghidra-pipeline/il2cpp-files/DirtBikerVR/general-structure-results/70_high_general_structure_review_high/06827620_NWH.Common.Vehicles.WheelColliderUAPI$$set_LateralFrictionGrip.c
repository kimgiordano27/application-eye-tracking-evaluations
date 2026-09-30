/*
FUNCTION_NAME: NWH.Common.Vehicles.WheelColliderUAPI$$set_LateralFrictionGrip
ENTRY_POINT: 06827620
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


undefined8 NWH_Common_Vehicles_WheelColliderUAPI__set_LateralFrictionGrip(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x25 + 0x5c8);
  do {
    lVar5 = *param_1;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto NWH_Common_Vehicles_WheelColliderUAPI__Step;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(param_1,lVar4,0);
NWH_Common_Vehicles_WheelColliderUAPI__Step:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (unaff_w21 <= iVar1) {
      Normal_Realtime_MatcherErrors__TryParseRequestErrorData<MatcherErrors_QuickmatchCapacityInvalidData>
                (param_1,*unaff_x24);
      uVar3 = FUN_06773464();
      lVar5 = *unaff_x23;
      lVar4 = *(long *)(lVar5 + 0x38);
      if (lVar4 == 0) {
        FUN_03ac40ec(lVar5);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_06827154();
      return uVar3;
    }
    lVar5 = *param_1;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_068276d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(param_1,lVar4,2);
LAB_068276d8:
    (*(code *)*puVar2)(param_1,0,puVar2[1]);
  } while( true );
}


