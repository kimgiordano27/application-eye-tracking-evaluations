/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 06db60a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long *unaff_x29;
  
code_r0x06db60a8:
  puVar2 = (undefined8 *)FUN_03cf1348(unaff_x26,param_2,4);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x26,unaff_x25);
    if (unaff_x25 == (long *)0x0) {
LAB_06db62f4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *unaff_x25;
    if ((uVar3 & 1) == 0) {
      uVar4 = (**(code **)(lVar7 + 0x1e8))(unaff_x25,*(undefined8 *)(lVar7 + 0x1f0));
      if (*(int *)(*(long *)PTR_DAT_08e81bd0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e81bd0);
      }
      uVar3 = FUN_06db5dc4(uVar4);
      if ((uVar3 & 1) == 0) {
        cVar1 = *(char *)(unaff_x20 + 0x20);
        uVar4 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        if (cVar1 == '\0') {
          uVar4 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90308,uVar4,0);
        }
        else {
          uVar4 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e90320,uVar4,*(undefined8 *)PTR_DAT_08e90310
                               ,0);
        }
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06dfdd34(uVar4,0);
        unaff_w27 = 0;
      }
    }
    else {
      (**(code **)(lVar7 + 0x1d8))(unaff_x25,*(undefined8 *)(lVar7 + 0x1e0));
      if (unaff_x24 == 0) goto LAB_06db62f4;
      System_Array_InternalEnumerator<MaterialPropertyVector>__MoveNext();
    }
    unaff_w28 = unaff_w28 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w28) {
      if ((unaff_w27 & 1) != 0) {
        return 1;
      }
      if (*(char *)(unaff_x20 + 0x20) != '\0') {
        uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90300);
        FUN_04e4b630(uVar4,*(undefined8 *)PTR_DAT_08e902f8);
        uVar4 = FUN_06db62fc();
        return uVar4;
      }
      plVar5 = *(long **)(unaff_x19 + 0x10);
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
        plVar5 = *(long **)(unaff_x19 + 0x18);
        if (plVar5 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          uVar4 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e90318,uVar4,uVar6);
          if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
          }
          FUN_06dfdd34(uVar4,0);
          return 0;
        }
      }
      goto LAB_06db62f4;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w28) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x26 = *(long **)(unaff_x20 + 0x18);
    if (unaff_x26 == (long *)0x0) goto LAB_06db62f4;
    lVar7 = *unaff_x26;
    unaff_x25 = *(long **)(unaff_x22 + (long)(int)unaff_w28 * 8 + 0x20);
    param_2 = *unaff_x29;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 == 0) goto code_r0x06db60a8;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
      if (uVar3 == 0) goto code_r0x06db60a8;
    }
    puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
  } while( true );
}


