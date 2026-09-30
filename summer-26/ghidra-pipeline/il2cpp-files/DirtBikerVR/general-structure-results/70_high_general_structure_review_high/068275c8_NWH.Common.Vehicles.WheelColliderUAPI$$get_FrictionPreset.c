/*
FUNCTION_NAME: NWH.Common.Vehicles.WheelColliderUAPI$$get_FrictionPreset
ENTRY_POINT: 068275c8
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


undefined8
NWH_Common_Vehicles_WheelColliderUAPI__get_FrictionPreset(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int unaff_w21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084ae5e0);
    FUN_03a8a718(PTR_DAT_084ae5e8);
    FUN_03a8a718(PTR_DAT_084ae5c8);
    *(undefined1 *)(unaff_x22 + 0x344) = 1;
  }
  plVar5 = (long *)FUN_06826ea0(param_2,unaff_w21);
  puVar3 = PTR_DAT_084ae5e8;
  puVar2 = PTR_DAT_084ae5e0;
  puVar1 = PTR_DAT_084ae5c8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  do {
    lVar9 = *plVar5;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto NWH_Common_Vehicles_WheelColliderUAPI__Step;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,lVar8,0);
NWH_Common_Vehicles_WheelColliderUAPI__Step:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (unaff_w21 <= iVar4) {
      Normal_Realtime_MatcherErrors__TryParseRequestErrorData<MatcherErrors_QuickmatchCapacityInvalidData>
                (plVar5,*(undefined8 *)puVar3);
      uVar7 = FUN_06773464();
      lVar9 = *(long *)puVar2;
      lVar8 = *(long *)(lVar9 + 0x38);
      if (lVar8 == 0) {
        FUN_03ac40ec(lVar9);
        lVar8 = *(long *)(lVar9 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090();
      }
      FUN_06827154(param_2,uVar7,**(undefined8 **)(lVar8 + 0xb8));
      return uVar7;
    }
    lVar9 = *plVar5;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_068276d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,lVar8,2);
LAB_068276d8:
    (*(code *)*puVar6)(plVar5,0,puVar6[1]);
  } while( true );
}


