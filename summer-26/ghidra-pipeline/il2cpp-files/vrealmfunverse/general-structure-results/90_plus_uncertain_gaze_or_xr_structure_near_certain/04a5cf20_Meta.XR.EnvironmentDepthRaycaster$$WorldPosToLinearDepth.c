/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 04a5cf20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  long lVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  
  do {
    in_x11 = in_x11 + 0x10;
    if ((long)in_w12 <= (long)in_x9) {
      *(uint *)(unaff_x19 + 0x24) = in_w8;
      *(long *)(unaff_x19 + 0x18) = unaff_x21;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 0x18);
    if (lVar6 == 0) {
LAB_04a5cfa4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar6 + 0x18) <= in_x9) goto LAB_04a5cfa0;
    if (-1 < *(int *)(lVar6 + in_x11)) {
      if (unaff_x21 == 0) goto LAB_04a5cfa4;
      if (*(uint *)(unaff_x21 + 0x18) <= in_w8) {
LAB_04a5cfa0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar5 = (long)(int)in_w8;
      uVar7 = *(undefined8 *)(lVar6 + in_x11);
      lVar1 = unaff_x21 + lVar5 * 0x10;
      *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar6 + in_x11))[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar7;
      if (*(uint *)(unaff_x21 + 0x18) <= in_w8) goto LAB_04a5cfa0;
      if (unaff_x22 == 0) goto LAB_04a5cfa4;
      iVar4 = (int)uVar7;
      iVar3 = 0;
      if (unaff_w20 != 0) {
        iVar3 = iVar4 / unaff_w20;
      }
      uVar2 = iVar4 - iVar3 * unaff_w20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_04a5cfa0;
      lVar6 = unaff_x22 + (long)(int)uVar2 * 4;
      in_w8 = in_w8 + 1;
      *(int *)(in_x10 + lVar5 * 0x10 + 4) = *(int *)(lVar6 + 0x20) + -1;
      *(uint *)(lVar6 + 0x20) = in_w8;
      in_w12 = *(int *)(unaff_x19 + 0x24);
    }
    in_x9 = in_x9 + 1;
  } while( true );
}


