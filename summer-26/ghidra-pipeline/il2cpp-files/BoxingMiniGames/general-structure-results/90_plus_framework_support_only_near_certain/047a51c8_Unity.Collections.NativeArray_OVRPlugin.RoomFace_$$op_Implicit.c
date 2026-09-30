/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$op_Implicit
ENTRY_POINT: 047a51c8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__op_Implicit
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  
  if (param_5 == 0) {
    unaff_x20 = (long *)FUN_054307a4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8));
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) ==
      0) {
    FUN_0367c9fc();
  }
  uVar1 = thunk_FUN_0367fe20();
  lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_047a527c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar2 = FUN_0367cd30(unaff_x20,lVar2,0);
LAB_047a527c:
  FUN_05481a64(uVar1,unaff_x20,*(undefined8 *)(lVar2 + 8),
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_047a5a90(param_2,param_3,unaff_w21,uVar1,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
  return;
}


