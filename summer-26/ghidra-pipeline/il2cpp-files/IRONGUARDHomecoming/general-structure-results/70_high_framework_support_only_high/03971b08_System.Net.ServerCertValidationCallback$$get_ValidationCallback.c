/*
FUNCTION_NAME: System.Net.ServerCertValidationCallback$$get_ValidationCallback
ENTRY_POINT: 03971b08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03971cdc) */
/* WARNING: Removing unreachable block (ram,0x03971d1c) */

undefined1  [16] System_Net_ServerCertValidationCallback__get_ValidationCallback(long param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  long *in_x10;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  
  if (in_x9 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *in_x10) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03971b4c;
      }
      in_x9 = in_x9 + -1;
      piVar13 = piVar13 + 4;
    } while (in_x9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03971b4c:
  puVar5 = StringLiteral_4462;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)(*(code *)*puVar7)();
  bVar6 = false;
  auVar15 = ZEXT816(0);
  do {
    bVar1 = bVar6;
    uVar9 = auVar15._8_8_;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03971bd8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03971bd8:
    uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_03971cd0;
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03971ca8;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03971c34;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_03971c34:
    auVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    auVar2._8_8_ = uVar9;
    auVar2._0_8_ = auVar15._0_8_;
    fVar16 = auVar15._0_4_;
    bVar6 = true;
    auVar15 = auVar14;
    if (((fVar16 <= auVar14._0_4_) && (bVar1)) &&
       (bVar6 = true, auVar15 = auVar2, 0x7f800000 < (uint)ABS(auVar14._0_4_))) {
      auVar15 = auVar14;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03971cc4;
    }
  }
LAB_03971ca8:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03971cc4:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_03971cd0:
  if (bVar1) {
    auVar15._8_8_ = uVar9;
    return auVar15;
  }
  uVar9 = FUN_03971224();
  uVar10 = thunk_FUN_01efb3a4(StringLiteral_4465);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar10);
}


