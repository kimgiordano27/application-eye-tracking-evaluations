/*
FUNCTION_NAME: UnityEngine.TextCore.Text.Character$$.ctor
ENTRY_POINT: 03fd17cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fd19c8) */

undefined1  [16] UnityEngine_TextCore_Text_Character___ctor(long param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  float *in_x10;
  ulong uVar12;
  long in_x11;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  
                    /* try { // try from 03fd17cc to 040d1853 has its CatchHandler @ 03fd1578 */
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  fVar16 = *in_x10;
  uVar17 = 0;
  fVar18 = in_x10[1];
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == **(long **)(in_x11 + 0x110)) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03fd181c;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03fd181c:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar5 = PTR_DAT_04584118;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar8 = false;
  do {
    auVar13._4_4_ = 0;
    auVar13._0_4_ = fVar16;
    auVar13._8_8_ = uVar17;
    uVar10 = (ulong)(uint)fVar18;
    do {
      auVar2 = auVar13;
      uVar15 = uVar10;
      uVar17 = auVar2._8_8_;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar10 = uVar15;
      if (uVar12 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03fd18ac;
          }
          uVar12 = uVar12 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03fd18ac:
      uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_03fd199c;
        lVar11 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar10 == 0) goto LAB_03fd1974;
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03fd195c;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar5) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03fd1908;
          }
          uVar12 = uVar12 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_03fd1908:
      auVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      bVar1 = !bVar8;
      bVar8 = true;
    } while (bVar1);
    fVar16 = auVar2._0_4_;
    if (auVar13._0_4_ <= auVar2._0_4_) {
      fVar16 = auVar13._0_4_;
    }
    uVar17 = 0;
    fVar18 = (float)uVar15;
    if ((float)uVar10 <= (float)uVar15) {
      fVar18 = (float)uVar10;
    }
    bVar8 = true;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar9 = piVar9 + 4;
    if (uVar10 == 0) break;
LAB_03fd195c:
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03fd1990;
    }
  }
LAB_03fd1974:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03fd1990:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03fd199c:
  auVar14._8_8_ = uVar17;
  auVar14._0_8_ = auVar2._0_8_;
  return auVar14;
}


