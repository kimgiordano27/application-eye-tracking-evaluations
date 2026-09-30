/*
FUNCTION_NAME: OVRPlugin$$AreControllerDrivenHandPosesNatural
ENTRY_POINT: 03683944
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__AreControllerDrivenHandPosesNatural(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long in_x9;
  ulong uVar6;
  undefined4 *puVar7;
  long in_x10;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0368397c;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0368397c:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_Net_FileWebRequest__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_036839e4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)Method_System_Net_FileWebRequest__ctor__,0);
LAB_036839e4:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      puVar5 = (undefined4 *)(unaff_x19 + 0x50);
      puVar7 = (undefined4 *)(unaff_x19 + 0x54);
      puVar9 = (undefined4 *)(unaff_x19 + 0x58);
      puVar10 = (undefined4 *)(unaff_x19 + 0x5c);
    }
    else {
      puVar5 = (undefined4 *)(unaff_x19 + 0x40);
      puVar7 = (undefined4 *)(unaff_x19 + 0x44);
      puVar9 = (undefined4 *)(unaff_x19 + 0x48);
      puVar10 = (undefined4 *)(unaff_x19 + 0x4c);
    }
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x2a8))(*puVar5,*puVar7,*puVar9,*puVar10);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar4 = FUN_040703d4(*(long *)(unaff_x19 + 0x20),0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (iVar1 = FUN_0407eaa0(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
          FUN_04073314(lVar4,0 < iVar1,0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
             (lVar4 = FUN_040703d4(*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
            FUN_04073314(lVar4,*(char *)(unaff_x19 + 0x68) == '\0',0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


