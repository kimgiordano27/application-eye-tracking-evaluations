/*
FUNCTION_NAME: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord$$Equals
ENTRY_POINT: 03fd1478
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


/* WARNING: Removing unreachable block (ram,0x03fd1628) */

undefined1  [16] UnityEngine_TextCore_LowLevel_GlyphAdjustmentRecord__Equals(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
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
  
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(**(code **)(param_1 + 0x138))();
  puVar4 = PTR_DAT_04584118;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar5 = false;
LAB_03fd14b4:
  bVar8 = bVar5;
  uVar14 = unaff_d8;
  uVar13 = unaff_d9;
  lVar10 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  unaff_d9 = uVar13;
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03fd150c;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03fd150c:
  uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar11 & 1) != 0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fd1568;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03fd1568:
    auVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    in_register_00005108 = auVar12._8_8_;
    unaff_d8 = auVar12._0_8_;
    bVar5 = true;
    if (bVar8) {
      fVar15 = (float)uVar14;
      if (fVar15 <= auVar12._0_4_) {
        fVar15 = auVar12._0_4_;
      }
      in_register_00005108 = 0;
      fVar1 = (float)uVar13;
      if ((float)uVar13 <= (float)unaff_d9) {
        fVar1 = (float)unaff_d9;
      }
      unaff_d9 = (ulong)(uint)fVar1;
      unaff_d8 = (ulong)(uint)fVar15;
      bVar5 = true;
    }
    goto LAB_03fd14b4;
  }
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03fd15f0;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03fd15f0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  auVar12._8_8_ = in_register_00005108;
  auVar12._0_8_ = uVar14;
  return auVar12;
}


