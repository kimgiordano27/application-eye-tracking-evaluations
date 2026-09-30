/*
FUNCTION_NAME: NWH.Common.Vehicles.WheelColliderUAPI$$set_LongitudinalFrictionStiffness
ENTRY_POINT: 06827610
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


undefined8 NWH_Common_Vehicles_WheelColliderUAPI__set_LongitudinalFrictionStiffness(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int unaff_w21;
  long unaff_x24;
  undefined8 *puVar10;
  
  puVar2 = PTR_DAT_084ae5e0;
  puVar1 = PTR_DAT_084ae5c8;
  puVar10 = *(undefined8 **)(unaff_x24 + 0x5e8);
  do {
    lVar7 = *param_1;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto NWH_Common_Vehicles_WheelColliderUAPI__Step;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(param_1,lVar6,0);
NWH_Common_Vehicles_WheelColliderUAPI__Step:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (unaff_w21 <= iVar3) {
      Normal_Realtime_MatcherErrors__TryParseRequestErrorData<MatcherErrors_QuickmatchCapacityInvalidData>
                (param_1,*puVar10);
      uVar5 = FUN_06773464();
      lVar7 = *(long *)puVar2;
      lVar6 = *(long *)(lVar7 + 0x38);
      if (lVar6 == 0) {
        FUN_03ac40ec(lVar7);
        lVar6 = *(long *)(lVar7 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_06827154();
      return uVar5;
    }
    lVar7 = *param_1;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_068276d8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(param_1,lVar6,2);
LAB_068276d8:
    (*(code *)*puVar4)(param_1,0,puVar4[1]);
  } while( true );
}


