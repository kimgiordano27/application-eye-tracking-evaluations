/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 056a6a88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16])

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *in_x9;
  undefined4 *puVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 *unaff_x22;
  long *unaff_x24;
  int iVar11;
  ulong unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  bVar18 = param_7[4];
  bVar17 = param_6[8];
  uVar15 = param_5._8_8_;
  uVar14 = param_5._0_8_;
  uVar13 = param_4._8_8_;
  uVar12 = param_4._0_8_;
  while( true ) {
    if ((bVar18 & 1) != 0) {
      in_x9[2] = 0;
    }
    if ((bVar17 & 1) != 0) {
      in_x9[3] = 0;
    }
    uVar12 = uVar12 + param_3._0_8_;
    uVar13 = uVar13 + param_3._8_8_;
    uVar14 = uVar14 + param_3._0_8_;
    uVar15 = uVar15 + param_3._8_8_;
    param_1 = param_1 + -4;
    if (param_1 == 0) break;
    if (uVar14 <= param_2._0_8_) {
      in_x9[4] = 0;
    }
    if (uVar15 <= param_2._8_8_) {
      in_x9[5] = 0;
    }
    bVar18 = -(uVar12 <= param_2._0_8_);
    bVar17 = -(uVar13 <= param_2._8_8_);
    in_x9 = in_x9 + 4;
  }
  lVar4 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                       *unaff_x21);
  if (0 < (int)unaff_x26) {
    uVar12 = 0;
    do {
      if (*(char *)(lVar4 + uVar12) != '\0') {
        uVar13 = uVar12 >> 3 & 0xffffffc;
        *(uint *)(uVar13 + (long)unaff_x22) =
             *(uint *)(uVar13 + (long)unaff_x22) | 1 << (ulong)((uint)uVar12 & 0x1f);
      }
      uVar12 = uVar12 + 1;
    } while (unaff_x26 != uVar12);
  }
  lVar4 = *(long *)(unaff_x28 + 0x78);
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo;
  uVar5 = FUN_054f73b4(lVar4 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar2 = thunk_FUN_02da28e8(uVar5,0);
  iVar11 = (int)unaff_x25;
  uVar5 = FUN_0540c158(iVar2 * iVar11,0);
  puVar6 = (undefined4 *)FUN_055339fc(uVar5,0);
  puVar7 = (undefined4 *)
           FUN_036ec8cc(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                        *(undefined8 *)puVar1);
  uVar12 = unaff_x25;
  puVar10 = puVar6;
  if (0 < iVar11) {
    do {
      uVar12 = uVar12 - 1;
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar12 != 0);
  }
  lVar4 = *(long *)(unaff_x28 + 0x50);
  iVar3 = *(int *)(unaff_x20 + 0x40) + -1;
  iVar2 = *(int *)(unaff_x20 + 0x40) + 0x1e;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_054f73b4(lVar4 + 0x20,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x24);
  }
  iVar3 = thunk_FUN_02da28e8(uVar5,0);
  uVar5 = FUN_0540c158(iVar3 * ((iVar2 >> 5) + 1),0);
  lVar4 = FUN_055339fc(uVar5,0);
  if (-0x20 < unaff_w27) {
    uVar9 = unaff_x29 - 1;
    uVar12 = unaff_x29 + 3U & 0x1fffffffc;
    puVar7 = unaff_x22;
    uVar13 = _DAT_010ff5e0;
    uVar14 = _UNK_010ff5e8;
    uVar15 = _DAT_010fe1d0;
    uVar16 = _UNK_010fe1d8;
    do {
      if (uVar15 <= uVar9) {
        *puVar7 = 0;
      }
      if (uVar16 <= uVar9) {
        puVar7[1] = 0;
      }
      if (uVar13 <= uVar9) {
        puVar7[2] = 0;
      }
      if (uVar14 <= uVar9) {
        puVar7[3] = 0;
      }
      uVar13 = uVar13 + 4;
      uVar14 = uVar14 + 4;
      uVar15 = uVar15 + 4;
      uVar16 = uVar16 + 4;
      uVar12 = uVar12 - 4;
      puVar7 = puVar7 + 4;
    } while (uVar12 != 0);
  }
  lVar8 = FUN_036ec8c4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                       *(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleTextShadow,_TextShadow>_TypeInfo
                      );
  if (0 < iVar11) {
    uVar12 = 0;
    do {
      if (*(char *)(lVar8 + uVar12) != '\0') {
        uVar13 = uVar12 >> 3 & 0xffffffc;
        *(uint *)(uVar13 + lVar4) = *(uint *)(uVar13 + lVar4) | 1 << (ulong)((uint)uVar12 & 0x1f);
      }
      uVar12 = uVar12 + 1;
    } while (unaff_x25 != uVar12);
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  *(undefined4 **)(unaff_x19 + 4) = unaff_x22;
  unaff_x19[6] = iVar11;
  unaff_x19[7] = 0;
  *unaff_x19 = in_stack_00000008._4_4_;
  unaff_x19[1] = (int)unaff_x26;
  *(undefined4 **)(unaff_x19 + 8) = puVar6;
  *(long *)(unaff_x19 + 10) = lVar4;
  return;
}


