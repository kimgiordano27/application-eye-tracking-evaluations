/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 0906c378
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long in_x9;
  ulong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0906c3b4;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_0906c3b4:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac43fe0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0906c41c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac43fe0,0);
LAB_0906c41c:
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
        lVar4 = FUN_0a178414(*(long *)(unaff_x19 + 0x20),0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (iVar1 = FUN_0a18bd78(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
          FUN_0a17ba14(lVar4,0 < iVar1,0);
          if ((*(long *)(unaff_x19 + 0x28) != 0) &&
             (lVar4 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
            FUN_0a17ba14(lVar4,*(char *)(unaff_x19 + 0x68) == '\0',0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


