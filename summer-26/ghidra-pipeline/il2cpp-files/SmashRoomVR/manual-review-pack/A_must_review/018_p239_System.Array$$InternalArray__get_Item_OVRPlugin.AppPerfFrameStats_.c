/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01cc507c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01cc5520) */
/* WARNING: Removing unreachable block (ram,0x01cc55dc) */

void System_Array__InternalArray__get_Item<OVRPlugin_AppPerfFrameStats>
               (long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_1d8 [120];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  puVar4 = StringLiteral_757;
                    /* try { // try from 01cc5084 to 01dc508b has its CatchHandler @ 01cc5188 */
                    /* try { // try from 01cc509c to 01dc50a3 has its CatchHandler @ 01cc5180 */
                    /* try { // try from 01cc50ac to 01dc50bb has its CatchHandler @ 01cc518c */
  if ((DAT_03fedaa0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
                    /* try { // try from 01cc50c8 to 01dc512f has its CatchHandler @ 01cc5190 */
    thunk_FUN_01ad9084(StringLiteral_1246);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_757);
    thunk_FUN_01ad9084(StringLiteral_1247);
    thunk_FUN_01ad9084(StringLiteral_1248);
    thunk_FUN_01ad9084(StringLiteral_1237);
    DAT_03fedaa0 = 1;
  }
  local_130 = 0;
  uStack_128 = 0;
  local_150._0_8_ = 0;
  local_150._8_8_ = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_160._0_8_ = 0;
  local_160._8_8_ = 0;
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  lVar7 = *(long *)puVar4;
                    /* try { // try from 01cc5130 to 01dc516f has its CatchHandler @ 01cc4d54 */
  uVar13 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    lVar7 = thunk_FUN_01ac7298();
  }
  local_140 = local_e0;
  local_138 = (undefined4)uStack_d8;
  uVar6 = FUN_01cc1a10(lVar7,uVar13,&local_140,&local_120);
  FUN_01c9b9b8(uVar6 & 1,0);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_01cac9a8(&local_c8,&local_120,uStack_d8._4_4_,0);
  uStack_128 = uStack_c0;
  local_130 = local_c8;
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Array__InternalArray__set_Item<OVRRaycaster_RaycastHit>
              (*(long *)(param_1 + 0x30),&local_e0,&local_130,0);
    puVar3 = StringLiteral_1248;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_01d047b8(*(long *)(param_1 + 0x30),&local_130,&local_e0,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
      plVar8 = (long *)FUN_01d01ae8(param_2 + 10,0);
      puVar5 = StringLiteral_1246;
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar7 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01cc5258;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,0);
LAB_01cc5258:
        uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_01cc5370;
          lVar10 = *plVar8;
          lVar7 = *(long *)puVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_01cc5348;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_01cc5330;
        }
        lVar7 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01cc52b4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar5,0);
LAB_01cc52b4:
        auVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        local_150 = auVar14;
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_01d03de8(*(long *)(param_1 + 0x30),local_150,&local_130,0);
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        System_Array__InternalArray__set_Item<OVRRaycaster_RaycastHit>
                  (*(long *)(param_1 + 0x30),local_150,&local_e0,0);
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_01d041cc(*(long *)(param_1 + 0x30),&local_130,local_150,0);
      } while( true );
    }
  }
  goto LAB_01cc55d8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_01cc5330:
    if (*(long *)(piVar12 + -2) == lVar7) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01cc5364;
    }
  }
LAB_01cc5348:
  puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,lVar7,0);
LAB_01cc5364:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01cc5370:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar8 = (long *)FUN_01d01ae8(param_2 + 5,0);
  puVar2 = StringLiteral_1246;
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01cc53f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar3,0);
LAB_01cc53f8:
    uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_01cc5514;
      lVar10 = *plVar8;
      lVar7 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_01cc54ec;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01cc5454;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,0);
LAB_01cc5454:
    auVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    local_160 = auVar14;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d041cc(*(long *)(param_1 + 0x30),local_160,&local_130,0);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d047b8(*(long *)(param_1 + 0x30),local_160,&local_e0,0);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d03de8(*(long *)(param_1 + 0x30),&local_130,local_160,0);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar7) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01cc5508;
    }
  }
LAB_01cc54ec:
  puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,lVar7,0);
LAB_01cc5508:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_01cc5514:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01cc5760(param_1,local_e0,uStack_d8 & 0xffffffff);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_02396e54(*(long *)(param_1 + 0x30),&local_e0,*(undefined8 *)StringLiteral_1247);
    lVar7 = *(long *)(param_1 + 0x40);
    memcpy(auStack_1d8,param_2,0x78);
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)StringLiteral_1237;
      memcpy(&local_c8,auStack_1d8,0x78);
      FUN_024290c8(lVar7,&local_c8,uVar13);
      return;
    }
  }
LAB_01cc55d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


