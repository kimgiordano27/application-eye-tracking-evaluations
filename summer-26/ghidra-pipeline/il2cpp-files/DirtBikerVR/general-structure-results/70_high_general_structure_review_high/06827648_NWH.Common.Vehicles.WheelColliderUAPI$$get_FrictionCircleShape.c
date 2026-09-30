/*
FUNCTION_NAME: NWH.Common.Vehicles.WheelColliderUAPI$$get_FrictionCircleShape
ENTRY_POINT: 06827648
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
NWH_Common_Vehicles_WheelColliderUAPI__get_FrictionCircleShape
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  int unaff_w21;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto NWH_Common_Vehicles_WheelColliderUAPI__Step;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_03ac43c4();
NWH_Common_Vehicles_WheelColliderUAPI__Step:
        iVar1 = (*(code *)*puVar2)();
        if (unaff_w21 <= iVar1) {
          Normal_Realtime_MatcherErrors__TryParseRequestErrorData<MatcherErrors_QuickmatchCapacityInvalidData>
                    ();
          uVar3 = FUN_06773464();
          lVar7 = *unaff_x23;
          lVar4 = *(long *)(lVar7 + 0x38);
          if (lVar4 == 0) {
            FUN_03ac40ec(lVar7);
            lVar4 = *(long *)(lVar7 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03ac4090();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          FUN_06827154();
          return uVar3;
        }
        lVar4 = *unaff_x22;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_068276d8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_068276d8:
        (*(code *)*puVar2)();
        param_1 = *unaff_x22;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


