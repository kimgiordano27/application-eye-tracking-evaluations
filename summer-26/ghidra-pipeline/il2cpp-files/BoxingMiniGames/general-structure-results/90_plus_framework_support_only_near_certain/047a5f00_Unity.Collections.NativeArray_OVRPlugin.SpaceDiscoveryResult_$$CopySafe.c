/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 047a5f00
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar7;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  uVar7 = unaff_w19 + (unaff_w24 >> 1);
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
                    /* try { // try from 047a5f1c to 048a5f43 has its CatchHandler @ 047a60d4 */
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a58a4();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
                    /* try { // try from 047a5f68 to 048a5fc7 has its CatchHandler @ 047a60d8 */
  FUN_047a58a4();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a58a4();
  if (unaff_x20 == 0) {
LAB_047a6180:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (uVar7 < *(uint *)(unaff_x20 + 0x18)) {
    lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
    uVar7 = unaff_w23 - 1;
    uVar1 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
                    /* try { // try from 047a5fdc to 048a5feb has its CatchHandler @ 047a60c8 */
    FUN_047a59e8();
    if ((int)uVar7 <= (int)unaff_w19) {
LAB_047a6100:
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a59e8();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_047a6180;
      lVar6 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
      uVar2 = *(undefined8 *)(lVar6 + 0x20);
      uVar4 = *(undefined8 *)(lVar6 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      iVar5 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar2,uVar4,uVar1,uVar3,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar5) {
        do {
          uVar7 = uVar7 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_047a617c;
          lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
          uVar2 = *(undefined8 *)(lVar6 + 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x28);
          if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          iVar5 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar3,uVar2,uVar4,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar5 < 0);
        if ((int)uVar7 <= (int)unaff_w19) goto LAB_047a6100;
        lVar6 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a59e8();
      }
    }
  }
LAB_047a617c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


