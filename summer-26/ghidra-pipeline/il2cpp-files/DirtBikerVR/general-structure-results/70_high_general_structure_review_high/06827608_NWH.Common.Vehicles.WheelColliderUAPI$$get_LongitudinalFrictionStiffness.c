/*
FUNCTION_NAME: NWH.Common.Vehicles.WheelColliderUAPI$$get_LongitudinalFrictionStiffness
ENTRY_POINT: 06827608
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


undefined8 NWH_Common_Vehicles_WheelColliderUAPI__get_LongitudinalFrictionStiffness(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int unaff_w21;
  
  puVar3 = PTR_DAT_084ae5e8;
  puVar2 = PTR_DAT_084ae5e0;
  puVar1 = PTR_DAT_084ae5c8;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  do {
    lVar8 = *param_1;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto NWH_Common_Vehicles_WheelColliderUAPI__Step;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(param_1,lVar7,0);
NWH_Common_Vehicles_WheelColliderUAPI__Step:
    iVar4 = (*(code *)*puVar5)(param_1,puVar5[1]);
    if (unaff_w21 <= iVar4) {
      Normal_Realtime_MatcherErrors__TryParseRequestErrorData<MatcherErrors_QuickmatchCapacityInvalidData>
                (param_1,*(undefined8 *)puVar3);
      uVar6 = FUN_06773464();
      lVar8 = *(long *)puVar2;
      lVar7 = *(long *)(lVar8 + 0x38);
      if (lVar7 == 0) {
        FUN_03ac40ec(lVar8);
        lVar7 = *(long *)(lVar8 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03ac4090();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_06827154();
      return uVar6;
    }
    lVar8 = *param_1;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_068276d8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(param_1,lVar7,2);
LAB_068276d8:
    (*(code *)*puVar5)(param_1,0,puVar5[1]);
  } while( true );
}


