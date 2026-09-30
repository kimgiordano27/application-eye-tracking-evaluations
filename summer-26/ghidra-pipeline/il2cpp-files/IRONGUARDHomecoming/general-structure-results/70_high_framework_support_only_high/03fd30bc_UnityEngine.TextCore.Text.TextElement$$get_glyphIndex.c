/*
FUNCTION_NAME: UnityEngine.TextCore.Text.TextElement$$get_glyphIndex
ENTRY_POINT: 03fd30bc
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


/* WARNING: Removing unreachable block (ram,0x03fd32ac) */

undefined1  [16]
UnityEngine_TextCore_Text_TextElement__get_glyphIndex
          (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5,
          long param_6)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  bool bVar9;
  int *piVar10;
  long in_x9;
  long lVar11;
  int *in_x10;
  ulong uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  ulong unaff_d11;
  ulong uVar15;
  undefined8 in_register_00005168;
  ulong unaff_d12;
  ulong uVar16;
  ulong unaff_d13;
  ulong uVar17;
  
  do {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar7 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03fd30f0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03fd30f0:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = StringLiteral_2368;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar6 = false;
LAB_03fd3120:
  bVar9 = bVar6;
  uVar17 = unaff_d13;
  uVar16 = unaff_d12;
  uVar15 = unaff_d11;
  lVar11 = *plVar8;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03fd317c;
      }
      uVar12 = uVar12 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03fd317c:
  uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  if ((uVar12 & 1) != 0) {
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03fd31d8;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_03fd31d8:
    auVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    in_register_00005168 = auVar13._8_8_;
    unaff_d11 = auVar13._0_8_;
    unaff_d12 = param_3;
    unaff_d13 = param_4;
    bVar6 = true;
    if (bVar9) {
      fVar14 = (float)uVar15;
      if (fVar14 <= auVar13._0_4_) {
        fVar14 = auVar13._0_4_;
      }
      in_register_00005168 = 0;
      fVar1 = (float)uVar16;
      if ((float)uVar16 <= (float)param_3) {
        fVar1 = (float)param_3;
      }
      fVar2 = (float)uVar17;
      if ((float)uVar17 <= (float)param_4) {
        fVar2 = (float)param_4;
      }
      unaff_d11 = (ulong)(uint)fVar14;
      unaff_d12 = (ulong)(uint)fVar1;
      unaff_d13 = (ulong)(uint)fVar2;
      bVar6 = true;
    }
    goto LAB_03fd3120;
  }
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03fd326c;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03fd326c:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  auVar13._8_8_ = in_register_00005168;
  auVar13._0_8_ = uVar15;
  return auVar13;
}


