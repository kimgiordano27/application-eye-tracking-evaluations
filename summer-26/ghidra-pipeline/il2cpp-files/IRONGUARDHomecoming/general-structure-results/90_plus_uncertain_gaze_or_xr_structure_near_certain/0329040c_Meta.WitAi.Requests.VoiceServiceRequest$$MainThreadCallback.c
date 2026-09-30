/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest$$MainThreadCallback
ENTRY_POINT: 0329040c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 167
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x032905f0) */

void Meta_WitAi_Requests_VoiceServiceRequest__MainThreadCallback(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  undefined1 auVar9 [16];
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03290464;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03290464:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_0329059c;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_032904dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_032904dc:
    auVar9 = (*(code *)*puVar2)();
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(uint *)(unaff_x21 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_0328ece4();
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pauVar3 = (undefined1 (*) [16])(lVar4 + (long)(int)uVar6 * 0x10 + 0x20);
    *pauVar3 = auVar9;
    thunk_FUN_01f51358(pauVar3,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_032905b8;
    }
  }
LAB_0329059c:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_032905b8:
  (*(code *)*puVar2)();
  return;
}


