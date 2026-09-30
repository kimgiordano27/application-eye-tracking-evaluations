/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 04024d8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int in_w8;
  int *unaff_x19;
  undefined8 uVar5;
  int iStack000000000000000c;
  
  if (in_w8 <= param_2) {
    thunk_FUN_03037804(PTR_DAT_06f7a510);
    uVar5 = thunk_FUN_0301080c();
    uVar4 = thunk_FUN_03037804(PTR_DAT_06f6e3c0);
    FUN_05a662f0(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar5,param_3);
  }
  iStack000000000000000c = in_w8 + -1;
  if (param_2 == 0) {
    uVar1 = in_w8 - 2;
    if (1 < in_w8) {
      lVar2 = *(long *)(unaff_x19 + 4);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
          thunk_FUN_03048534(unaff_x19 + 2);
          lVar2 = *(long *)(unaff_x19 + 4);
          if (lVar2 == 0) goto LAB_04024e90;
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            puVar3 = (undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
            *puVar3 = 0;
            thunk_FUN_03048534(puVar3,0);
            goto LAB_04024e34;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
LAB_04024e90:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x19 + 4);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    FUN_03b63484(uVar5,&stack0x0000000c,param_2 + -1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200))
    ;
  }
LAB_04024e34:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


