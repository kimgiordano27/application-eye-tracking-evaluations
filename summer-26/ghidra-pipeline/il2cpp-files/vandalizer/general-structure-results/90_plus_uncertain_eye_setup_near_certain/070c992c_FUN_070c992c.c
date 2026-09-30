/*
FUNCTION_NAME: FUN_070c992c
ENTRY_POINT: 070c992c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070c992c(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  if ((DAT_07a5a970 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8968);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(PTR_DAT_075d8960);
    FUN_031f20f4(PTR_DAT_075d76f8);
    FUN_031f20f4(PTR_DAT_075d7700);
    FUN_031f20f4(OVRPlugin_OVRP_1_116_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_117_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_118_0_TypeInfo);
    DAT_07a5a970 = 1;
  }
  if (*(long *)(param_1 + 0x4e8) == 0) goto LAB_070cac48;
  iVar4 = FUN_06fcd654(*(long *)(param_1 + 0x4e8),0);
  if (iVar4 != 2) {
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06deed24(*(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo,0);
    return;
  }
  uVar5 = FUN_05c87ee0(*(undefined8 *)(param_1 + 0x58),0);
  lVar12 = 0x4f8;
  if ((uVar5 & 1) == 0) {
    lVar12 = 0x4c8;
  }
  if ((*(float *)(param_1 + lVar12) < 0.0) &&
     (*(float *)(param_1 + 0x4c8) != *(float *)(param_1 + 0x4f8))) {
    *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4f8);
    FUN_06fc8b64(param_1,0);
  }
  uVar5 = FUN_05c87ee0(*(undefined8 *)(param_1 + 0x58),0);
  lVar12 = 0x4f8;
  if ((uVar5 & 1) == 0) {
    lVar12 = 0x4c8;
  }
  uVar19 = *(undefined4 *)(param_1 + lVar12);
  FUN_070caec8(param_1);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  auVar21 = FUN_06fdeaf4(1,0);
  puVar3 = PTR_DAT_075d7700;
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_075d7700) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x33) * 0x10 + 0x138);
        goto LAB_070c9b08;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075d7700,0x33);
LAB_070c9b08:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  uVar8 = FUN_06fdeb64(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x39) * 0x10 + 0x138);
        goto LAB_070c9b94;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x39);
LAB_070c9b94:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  uVar8 = FUN_06fdeb64(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x37) * 0x10 + 0x138);
        goto LAB_070c9c1c;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x37);
LAB_070c9c1c:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  uVar8 = FUN_06fdeb64(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x37) * 0x10 + 0x138);
        goto LAB_070c9ca4;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x37);
LAB_070c9ca4:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  uVar8 = FUN_06fdeb64(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x39) * 0x10 + 0x138);
        goto LAB_070c9d2c;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x39);
LAB_070c9d2c:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  auVar21 = FUN_06fdeaf4(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x33) * 0x10 + 0x138);
        goto LAB_070c9dbc;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x33);
LAB_070c9dbc:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  auVar21 = FUN_06fdeaf4(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xa3) * 0x10 + 0x138);
        goto LAB_070c9e50;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0xa3);
LAB_070c9e50:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  auVar21 = FUN_06fdeaf4(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 070c9ea8 to 071c9fbf has its CatchHandler @ 070c9ea8
                       catch() { ... } // from try @ 070c9ea8 with catch @ 070c9ea8
                       catch() { ... } // from try @ 070cb1d4 with catch @ 070c9ea8
                       catch() { ... } // from try @ 070cb22c with catch @ 070c9ea8
                       catch() { ... } // from try @ 070cb2a4 with catch @ 070c9ea8
                       catch() { ... } // from try @ 070cb444 with catch @ 070c9ea8
                       catch() { ... } // from try @ 070cb488 with catch @ 070c9ea8 */
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
        goto LAB_070c9ee4;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x3f);
LAB_070c9ee4:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  auVar21 = FUN_06fdeaf4(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xa3) * 0x10 + 0x138);
        goto LAB_070c9f78;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0xa3);
LAB_070c9f78:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  auVar21 = FUN_06fdeaf4(1,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
                    /* try { // try from 070c9fc0 to 071c9fc7 has its CatchHandler @ 070cb428 */
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
        goto LAB_070ca00c;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x3f);
LAB_070ca00c:
                    /* try { // try from 070ca00c to 071ca027 has its CatchHandler @ 070cb3b8 */
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  iVar4 = *(int *)(param_1 + 0x4f0);
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  if (iVar4 == 0) {
    auVar21 = FUN_06fe1fb0(uVar19,0);
    if (plVar6 == (long *)0x0) goto LAB_070cac48;
    lVar12 = *plVar6;
                    /* try { // try from 070ca0b0 to 071ca0bb has its CatchHandler @ 070cb2cc */
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    /* try { // try from 070ca184 to 071ca18f has its CatchHandler @ 070cb420 */
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xa3) * 0x10 + 0x138);
          goto LAB_070ca18c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0xa3);
LAB_070ca18c:
                    /* try { // try from 070ca198 to 071ca1b3 has its CatchHandler @ 070cb40c */
    (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
    if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
    plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
    auVar21 = FUN_06fdeaf4(1,0);
    uVar8 = auVar21._0_8_;
    if (plVar6 == (long *)0x0) goto LAB_070cac48;
    lVar13 = *plVar6;
    lVar12 = *(long *)puVar3;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar14 = auVar21._8_8_ & 0xffffffff;
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) goto LAB_070ca210;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    auVar21 = FUN_06fdeaf4(1,0);
    if (plVar6 == (long *)0x0) goto LAB_070cac48;
    lVar12 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    /* try { // try from 070ca0f4 to 071ca0ff has its CatchHandler @ 070cb39c */
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0xa3) * 0x10 + 0x138);
          goto LAB_070ca104;
        }
                    /* try { // try from 070ca07c to 071ca087 has its CatchHandler @ 070cb3d4 */
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0xa3);
LAB_070ca104:
                    /* try { // try from 070ca114 to 071ca12f has its CatchHandler @ 070cb3f4 */
    (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
    if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
    plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
    auVar21 = FUN_06fe1fb0(uVar19,0);
    uVar8 = auVar21._0_8_;
    if (plVar6 == (long *)0x0) goto LAB_070cac48;
    lVar13 = *plVar6;
    lVar12 = *(long *)puVar3;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar14 = auVar21._8_8_ & 0xffffffff;
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) goto LAB_070ca210;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
                    /* try { // try from 070ca208 to 071ca213 has its CatchHandler @ 070cb424 */
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,lVar12,0x3f);
LAB_070ca220:
  (*(code *)*puVar7)(plVar6,uVar8,uVar14,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) {
LAB_070cac48:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
  uVar8 = FUN_06fe1630(0,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x39) * 0x10 + 0x138);
        goto LAB_070ca2ac;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
                    /* try { // try from 070ca288 to 071ca293 has its CatchHandler @ 070cb414 */
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x39);
LAB_070ca2ac:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
                    /* try { // try from 070ca2c0 to 071ca2cb has its CatchHandler @ 070cb424 */
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4b8),0);
                    /* try { // try from 070ca2d0 to 071ca2db has its CatchHandler @ 070cb3a4 */
  uVar8 = FUN_06fe1630(0,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    /* try { // try from 070ca328 to 071ca333 has its CatchHandler @ 070cb3ac */
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x37) * 0x10 + 0x138);
        goto LAB_070ca334;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 070ca318 to 071ca323 has its CatchHandler @ 070cb3dc */
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x37);
LAB_070ca334:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  uVar8 = FUN_06fe1630(0x3f800000,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
                    /* try { // try from 070ca370 to 071ca37b has its CatchHandler @ 070cb3d8 */
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 070ca380 to 071ca38b has its CatchHandler @ 070cb3cc */
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x37) * 0x10 + 0x138);
        goto LAB_070ca3bc;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x37);
LAB_070ca3bc:
                    /* try { // try from 070ca3c8 to 071ca3d3 has its CatchHandler @ 070cb3e4 */
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
                    /* try { // try from 070ca3d8 to 071ca3e3 has its CatchHandler @ 070cb3c8 */
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  uVar8 = FUN_06fe1630(0,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x39) * 0x10 + 0x138);
        goto LAB_070ca444;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
                    /* try { // try from 070ca420 to 071ca42b has its CatchHandler @ 070cb3e8 */
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x39);
                    /* try { // try from 070ca430 to 071ca43b has its CatchHandler @ 070cb3d0 */
LAB_070ca444:
  (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
  if (*(long *)(param_1 + 0x4c0) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4c0),0);
  auVar21 = FUN_06fe1fb0(0,0);
                    /* try { // try from 070ca474 to 071ca47f has its CatchHandler @ 070cb3e0 */
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x33) * 0x10 + 0x138);
        goto LAB_070ca4d4;
      }
      uVar5 = uVar5 - 1;
                    /* try { // try from 070ca4ac to 071ca4b7 has its CatchHandler @ 070cb420 */
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 070ca4b8 to 071ca4d3 has its CatchHandler @ 070cb3ec */
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x33);
LAB_070ca4d4:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_070cac48;
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4d8),0);
  auVar21 = FUN_06fe1fb0(0,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
                    /* try { // try from 070ca514 to 071ca51f has its CatchHandler @ 070cb41c */
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x43) * 0x10 + 0x138);
        goto LAB_070ca568;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 070ca54c to 071ca557 has its CatchHandler @ 070cb414 */
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x43);
LAB_070ca568:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_070cac48;
                    /* try { // try from 070ca584 to 071ca58f has its CatchHandler @ 070cb41c */
  plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4d8),0);
                    /* try { // try from 070ca590 to 071ca5ab has its CatchHandler @ 070cb400 */
  auVar21 = FUN_06fe1fb0(0,0);
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar12 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    /* try { // try from 070ca5ec to 071ca62f has its CatchHandler @ 070cb418 */
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x6f) * 0x10 + 0x138);
        goto LAB_070ca5fc;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar3,0x6f);
LAB_070ca5fc:
  (*(code *)*puVar7)(plVar6,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar7[1]);
  if (*(long *)(param_1 + 0x4b8) == 0) goto LAB_070cac48;
  iVar4 = *(int *)(param_1 + 0x4f0);
  plVar6 = (long *)FUN_06fbc150(*(long *)(param_1 + 0x4b8),0);
  puVar2 = PTR_DAT_075d76f8;
  if (plVar6 == (long *)0x0) goto LAB_070cac48;
  lVar13 = *plVar6;
                    /* try { // try from 070ca630 to 071ca64b has its CatchHandler @ 070cb3f8 */
  uVar1 = *(ushort *)(lVar13 + 0x12e);
  uVar5 = (ulong)uVar1;
  lVar12 = *(long *)PTR_DAT_075d76f8;
  if (iVar4 == 0) {
    if (uVar1 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
                    /* try { // try from 070ca68c to 071ca6cf has its CatchHandler @ 070cb410 */
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 0x23) * 0x10 + 0x138);
          goto LAB_070ca918;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,lVar12,0x23);
LAB_070ca918:
    fVar15 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 070ca938 to 071ca943 has its CatchHandler @ 070cb35c */
    if ((*(long *)(param_1 + 0x4b8) == 0) ||
       (plVar6 = (long *)FUN_06fbc150(*(long *)(param_1 + 0x4b8),0), plVar6 == (long *)0x0))
    goto LAB_070cac48;
    lVar12 = *plVar6;
                    /* try { // try from 070ca948 to 071ca953 has its CatchHandler @ 070cb2d0 */
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 070ca98c to 071ca997 has its CatchHandler @ 070cb3a0 */
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x24) * 0x10 + 0x138);
          goto LAB_070ca990;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x24);
LAB_070ca990:
    fVar16 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 070ca99c to 071ca9a7 has its CatchHandler @ 070cb330 */
    if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_070cac48;
    iVar4 = *(int *)(param_1 + 0x4f4);
    plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4d8),0);
    if (iVar4 == 0) {
      auVar21 = FUN_06fe1fb0(fVar15 + fVar16 + *(float *)(param_1 + 0x4f8),0);
      uVar8 = auVar21._0_8_;
      if (plVar6 == (long *)0x0) goto LAB_070cac48;
      lVar13 = *plVar6;
      lVar12 = *(long *)puVar3;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 070caa38 to 071caa43 has its CatchHandler @ 070cb38c */
      uVar14 = auVar21._8_8_ & 0xffffffff;
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 070caa48 to 071caa53 has its CatchHandler @ 070cb320 */
          if (*(long *)(piVar11 + -2) == lVar12) goto LAB_070cab60;
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
    }
    else {
      plVar9 = (long *)FUN_06fbc150(param_1,0);
      if (plVar9 == (long *)0x0) goto LAB_070cac48;
      lVar12 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
                    /* try { // try from 070ca9e4 to 071ca9ef has its CatchHandler @ 070cb394 */
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x4d) * 0x10 + 0x138);
            goto LAB_070caa74;
          }
                    /* try { // try from 070ca9f4 to 071ca9ff has its CatchHandler @ 070cb318 */
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,0x4d);
LAB_070caa74:
      fVar17 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_070cac48;
      fVar20 = *(float *)(param_1 + 0x4f8);
                    /* try { // try from 070caa90 to 071caa9b has its CatchHandler @ 070cb384 */
      plVar9 = (long *)FUN_06fbc150(*(long *)(param_1 + 0x4d8),0);
      if (plVar9 == (long *)0x0) goto LAB_070cac48;
      lVar12 = *plVar9;
                    /* try { // try from 070caaa0 to 071caaab has its CatchHandler @ 070cb314 */
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 070caae4 to 071caaef has its CatchHandler @ 070cb390 */
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x4d) * 0x10 + 0x138);
            goto LAB_070caaf0;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,0x4d);
LAB_070caaf0:
                    /* try { // try from 070caaf4 to 071caaff has its CatchHandler @ 070cb334 */
      fVar18 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
      auVar21 = FUN_06fe1fb0(((fVar17 - (fVar15 + fVar16)) - fVar20) - fVar18,0);
      uVar8 = auVar21._0_8_;
      if (plVar6 == (long *)0x0) goto LAB_070cac48;
      lVar13 = *plVar6;
      lVar12 = *(long *)puVar3;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar14 = auVar21._8_8_ & 0xffffffff;
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 070cab3c to 071cab47 has its CatchHandler @ 070cb398 */
          if (*(long *)(piVar11 + -2) == lVar12) goto LAB_070cab60;
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
                    /* try { // try from 070cab4c to 071cab57 has its CatchHandler @ 070cb31c */
        } while (uVar5 != 0);
      }
    }
    uVar10 = 0x43;
  }
  else {
    if (uVar1 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 0x25) * 0x10 + 0x138);
          goto LAB_070ca6bc;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,lVar12,0x25);
LAB_070ca6bc:
    fVar15 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((*(long *)(param_1 + 0x4b8) == 0) ||
       (plVar6 = (long *)FUN_06fbc150(*(long *)(param_1 + 0x4b8),0), plVar6 == (long *)0x0))
    goto LAB_070cac48;
                    /* try { // try from 070ca6e0 to 071ca6eb has its CatchHandler @ 070cb2ac */
    lVar12 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 070ca728 to 071ca733 has its CatchHandler @ 070cb350 */
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x22) * 0x10 + 0x138);
          goto LAB_070ca734;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x22);
LAB_070ca734:
                    /* try { // try from 070ca738 to 071ca743 has its CatchHandler @ 070cb300 */
    fVar16 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_070cac48;
    iVar4 = *(int *)(param_1 + 0x4f4);
    plVar6 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4d8),0);
    if (iVar4 == 0) {
      auVar21 = FUN_06fe1fb0(fVar15 + fVar16 + *(float *)(param_1 + 0x4f8),0);
      uVar8 = auVar21._0_8_;
      if (plVar6 == (long *)0x0) goto LAB_070cac48;
      lVar13 = *plVar6;
      lVar12 = *(long *)puVar3;
                    /* try { // try from 070ca7d8 to 071ca7e3 has its CatchHandler @ 070cb36c */
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar14 = auVar21._8_8_ & 0xffffffff;
      if (uVar5 != 0) {
                    /* try { // try from 070ca7e8 to 071ca7f3 has its CatchHandler @ 070cb328 */
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar12) goto LAB_070ca8fc;
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
    }
    else {
      plVar9 = (long *)FUN_06fbc150(param_1,0);
      if (plVar9 == (long *)0x0) goto LAB_070cac48;
      lVar12 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* try { // try from 070ca780 to 071ca78b has its CatchHandler @ 070cb368 */
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* try { // try from 070ca790 to 071ca79b has its CatchHandler @ 070cb304 */
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x1e) * 0x10 + 0x138);
            goto LAB_070ca818;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,0x1e);
LAB_070ca818:
      fVar17 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_070cac48;
      fVar20 = *(float *)(param_1 + 0x4f8);
                    /* try { // try from 070ca830 to 071ca83b has its CatchHandler @ 070cb364 */
      plVar9 = (long *)FUN_06fbc150(*(long *)(param_1 + 0x4d8),0);
      if (plVar9 == (long *)0x0) goto LAB_070cac48;
                    /* try { // try from 070ca840 to 071ca84b has its CatchHandler @ 070cb30c */
      lVar12 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 070ca888 to 071ca893 has its CatchHandler @ 070cb374 */
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x1e) * 0x10 + 0x138);
            goto LAB_070ca894;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,0x1e);
LAB_070ca894:
                    /* try { // try from 070ca898 to 071ca8a3 has its CatchHandler @ 070cb2fc */
      fVar18 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
      auVar21 = FUN_06fe1fb0(((fVar17 - (fVar15 + fVar16)) - fVar20) - fVar18,0);
      uVar8 = auVar21._0_8_;
      if (plVar6 == (long *)0x0) goto LAB_070cac48;
      lVar13 = *plVar6;
      lVar12 = *(long *)puVar3;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar14 = auVar21._8_8_ & 0xffffffff;
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 070ca8e0 to 071ca8eb has its CatchHandler @ 070cb370 */
          if (*(long *)(piVar11 + -2) == lVar12) goto LAB_070ca8fc;
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
                    /* try { // try from 070ca8f0 to 071ca8fb has its CatchHandler @ 070cb324 */
        } while (uVar5 != 0);
      }
    }
    uVar10 = 0x6f;
  }
  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,lVar12,uVar10);
  goto LAB_070cab70;
LAB_070ca210:
                    /* try { // try from 070ca218 to 071ca233 has its CatchHandler @ 070cb3fc */
  puVar7 = (undefined8 *)(lVar13 + (long)(*piVar11 + 0x3f) * 0x10 + 0x138);
  goto LAB_070ca220;
LAB_070cab60:
  iVar4 = *piVar11 + 0x43;
  goto LAB_070cab68;
LAB_070ca8fc:
  iVar4 = *piVar11 + 0x6f;
LAB_070cab68:
  puVar7 = (undefined8 *)(lVar13 + (long)iVar4 * 0x10 + 0x138);
LAB_070cab70:
  (*(code *)*puVar7)(plVar6,uVar8,uVar14,puVar7[1]);
                    /* try { // try from 070cab90 to 071cab9b has its CatchHandler @ 070cb358 */
  uVar19 = 0xffffffff;
  if (*(int *)(param_1 + 0x4f4) == 0) {
    uVar19 = 1;
  }
  if (*(long *)(param_1 + 0x500) != 0) {
                    /* try { // try from 070caba0 to 071cabab has its CatchHandler @ 070cb32c */
    FUN_07018684(*(undefined8 *)(param_1 + 0x4d8),*(long *)(param_1 + 0x500),0);
  }
  uVar8 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_OVRP_1_116_0_TypeInfo);
  FUN_070caf78(uVar8,param_1,uVar19);
  *(undefined8 *)(param_1 + 0x500) = uVar8;
  thunk_FUN_0329bf60(param_1 + 0x500,uVar8);
                    /* try { // try from 070cabe8 to 071cabf3 has its CatchHandler @ 070cb354 */
  FUN_070185d8(*(undefined8 *)(param_1 + 0x4d8),*(undefined8 *)(param_1 + 0x500),0);
                    /* try { // try from 070cabf8 to 071cac03 has its CatchHandler @ 070cb2d4 */
  uVar8 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8960);
  FUN_04292d74(uVar8,param_1,*(undefined8 *)OVRPlugin_OVRP_1_117_0_TypeInfo,0);
                    /* try { // try from 070cac3c to 071cac47 has its CatchHandler @ 070cb378 */
  Fusion_Native__ExpandPtrArray<__Il2CppFullySharedGenericStructType>
            (param_1,uVar8,0,*(undefined8 *)PTR_DAT_075d8968);
  return;
}


