/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 0775ced8
PROGRAM: m3ar-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long *unaff_x25;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x568));
  FUN_0403162c(PTR_DAT_08fb0570);
  *(undefined1 *)(unaff_x22 + 0x4b1) = 1;
  puVar3 = PTR_DAT_08fb0570;
  puVar2 = PTR_DAT_08fb0568;
  FUN_06e106b8();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar5 = FUN_07737f84();
  uVar4 = FUN_0753e174(uVar5,0);
  lVar6 = thunk_FUN_0406deb8(*(undefined8 *)puVar3);
  FUN_057d4c24(lVar6,(ulong)uVar4,*(undefined8 *)puVar2);
  *(long *)(unaff_x20 + 0x10) = lVar6;
  puVar3 = PTR_DAT_08fb0560;
  puVar2 = PTR_DAT_08fb0558;
  if (0 < (int)uVar4) {
    lVar10 = 0;
    do {
      FUN_0753e178(lVar10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_0408f364(*unaff_x25);
      }
      uVar5 = FUN_07737e2c();
      uVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
      FUN_0775cdf0(uVar7,uVar5);
      if (lVar6 == 0) {
LAB_0775d074:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0775d074;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_057d53ac(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      if ((ulong)uVar4 - 1 == lVar10) break;
      lVar6 = *(long *)(unaff_x20 + 0x10);
      lVar10 = lVar10 + 1;
    } while( true );
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar5 = FUN_07737eb0();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  return;
}


