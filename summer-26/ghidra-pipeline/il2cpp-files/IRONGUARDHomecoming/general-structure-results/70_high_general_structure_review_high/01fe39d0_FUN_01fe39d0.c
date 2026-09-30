/*
FUNCTION_NAME: FUN_01fe39d0
ENTRY_POINT: 01fe39d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2
*/


void FUN_01fe39d0(long param_1,long param_2)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint extraout_w1;
  undefined4 extraout_w1_00;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_240 [96];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_0482ee3d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Multiply<Vector4>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
                      );
    DAT_0482ee3d = 1;
  }
  puVar4 = Method_Unity_VisualScripting_Multiply<Vector4>__ctor__;
  puVar3 = Method_Unity_VisualScripting_Multiply<Vector2>__ctor__;
  puVar2 = Method_Oculus_Platform_Message<PlatformInitialize>__ctor__;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      lVar13 = *(long *)(*(long *)(param_1 + 0x50) + 0xa8);
      iVar8 = 0;
      iVar12 = 0;
      uVar14 = NEON_fmov(0x3f800000,4);
      do {
        FUN_031ba788(lVar7,iVar8,*(undefined8 *)puVar4);
        if ((extraout_w1 >> 3 & 1) == 0) {
          if (DAT_0482ee16 == '\0') {
            thunk_FUN_01efb3a4(puVar2);
            DAT_0482ee16 = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
          uStack_158 = *(undefined8 *)(lVar5 + 0x68);
          local_160 = *(undefined8 *)(lVar5 + 0x60);
          uStack_148 = *(undefined8 *)(lVar5 + 0x78);
          uStack_150 = *(undefined8 *)(lVar5 + 0x70);
          uStack_178 = *(undefined8 *)(lVar5 + 0x48);
          local_180 = *(undefined8 *)(lVar5 + 0x40);
          uStack_168 = *(undefined8 *)(lVar5 + 0x58);
          uStack_170 = *(undefined8 *)(lVar5 + 0x50);
          iVar9 = *(int *)(param_1 + 0x3c);
          uVar11 = uVar14;
          uVar15 = uVar14;
        }
        else {
          puVar6 = (undefined8 *)(lVar13 + (long)iVar12 * 0x50);
          uStack_158 = puVar6[5];
          local_160 = puVar6[4];
          uStack_148 = puVar6[7];
          uStack_150 = puVar6[6];
          uStack_178 = puVar6[1];
          local_180 = *puVar6;
          uStack_168 = puVar6[3];
          uStack_170 = puVar6[2];
          iVar12 = iVar12 + 1;
          uVar11 = puVar6[8];
          uVar15 = puVar6[9];
          iVar9 = *(int *)(param_1 + 0x3c) + 1;
          local_e0 = local_180;
          uStack_d8 = uStack_178;
          uStack_d0 = uStack_170;
          uStack_c8 = uStack_168;
          local_c0 = local_160;
          uStack_b8 = uStack_158;
          uStack_b0 = uStack_150;
          uStack_a8 = uStack_148;
        }
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        local_1e0 = FUN_031ba788(lVar7,iVar8,*(undefined8 *)puVar4);
        thunk_FUN_01f51358(&local_1e0,local_1e0);
        FUN_031ba788(lVar7,iVar8,*(undefined8 *)puVar4);
        uStack_1d8 = CONCAT44(iVar9,extraout_w1_00);
        uStack_1b8 = uStack_178;
        local_1c0 = local_180;
        uStack_1a8 = uStack_168;
        uStack_1b0 = uStack_170;
        uStack_198 = uStack_158;
        local_1a0 = local_160;
        uStack_188 = uStack_148;
        uStack_190 = uStack_150;
        local_1d0 = uVar11;
        uStack_1c8 = uVar15;
        memcpy(auStack_240,&local_1e0,0x60);
        if (param_2 == 0) goto LAB_01fe3c68;
        lVar10 = *(long *)puVar3;
        memcpy(auStack_140,auStack_240,0x60);
        lVar5 = *(long *)(param_2 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_01fe3c68;
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          __dest = (void *)(lVar5 + (long)(int)uVar1 * 0x60 + 0x20);
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          memcpy(__dest,auStack_140,0x60);
          thunk_FUN_01f51358(__dest,0);
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          memcpy(&local_e0,auStack_140,0x60);
          FUN_031bd454(param_2,&local_e0,uVar11);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar7 + 0x18));
    }
    return;
  }
LAB_01fe3c68:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


