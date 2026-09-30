/*
FUNCTION_NAME: UnityEngine.TextCore.Text.Character$$.ctor
ENTRY_POINT: 03fd1804
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fd19c8) */

undefined1  [16] UnityEngine_TextCore_Text_Character___ctor(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong uVar13;
  ulong unaff_d8;
  ulong uVar14;
  undefined8 in_register_00005108;
  ulong unaff_d9;
  float fVar15;
  
  puVar6 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = PTR_DAT_04584118;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar5 = false;
LAB_03fd1854:
  bVar8 = bVar5;
  uVar14 = unaff_d8;
  uVar13 = unaff_d9;
                    /* try { // try from 03fd1854 to 040d185b has its CatchHandler @ 03fd18a8 */
  lVar10 = *plVar7;
                    /* try { // try from 03fd185c to 040d186b has its CatchHandler @ 03fd1578 */
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 03fd186c to 040d18a3 has its CatchHandler @ 03fd18a4 */
  unaff_d9 = uVar13;
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03fd18ac;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03fd18ac:
  uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  if ((uVar11 & 1) != 0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fd1908;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03fd1908:
    auVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    in_register_00005108 = auVar12._8_8_;
    unaff_d8 = auVar12._0_8_;
    bVar5 = true;
    if (bVar8) {
      fVar15 = (float)uVar14;
      if (auVar12._0_4_ <= fVar15) {
        fVar15 = auVar12._0_4_;
      }
      in_register_00005108 = 0;
      fVar1 = (float)uVar13;
      if ((float)unaff_d9 <= (float)uVar13) {
        fVar1 = (float)unaff_d9;
      }
      unaff_d9 = (ulong)(uint)fVar1;
      unaff_d8 = (ulong)(uint)fVar15;
      bVar5 = true;
    }
    goto LAB_03fd1854;
  }
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fd1990;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03fd1990:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  auVar12._8_8_ = in_register_00005108;
  auVar12._0_8_ = uVar14;
  return auVar12;
}


