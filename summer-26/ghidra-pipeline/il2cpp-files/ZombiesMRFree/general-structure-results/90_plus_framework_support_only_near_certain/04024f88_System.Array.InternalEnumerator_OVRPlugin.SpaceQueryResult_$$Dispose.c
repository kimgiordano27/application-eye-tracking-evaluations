/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 04024f88
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  int *unaff_x21;
  int unaff_w23;
  
  do {
    lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0xe0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_04024fec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
FUN_04024fec:
    uVar1 = (*(code *)*puVar2)();
    if (((uVar1 & 1) != 0) || (unaff_w23 = unaff_w23 + 1, *unaff_x21 <= unaff_w23)) {
      return uVar1 & 1;
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    FUN_04023f10();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02feb2c4();
    }
  } while( true );
}


