/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox3D
ENTRY_POINT: 0281a3d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox3D(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int unaff_w21;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  
  do {
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0281a424;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_0281a424:
    iVar1 = (*(code *)*puVar2)();
    if (unaff_w21 <= iVar1) {
      FUN_01f70920();
      uVar3 = FUN_02793500();
      lVar7 = *unaff_x23;
      lVar4 = *(long *)(lVar7 + 0x38);
      if (lVar4 == 0) {
        FUN_01a47054(lVar7);
        lVar4 = *(long *)(lVar7 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      FUN_02819f60();
      return uVar3;
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0281a488;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_0281a488:
    (*(code *)*puVar2)();
  } while( true );
}


