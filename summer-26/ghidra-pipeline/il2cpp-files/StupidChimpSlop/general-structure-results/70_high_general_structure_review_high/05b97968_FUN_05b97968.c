/*
FUNCTION_NAME: FUN_05b97968
ENTRY_POINT: 05b97968
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05b97968(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined2 *puVar13;
  void *__dest;
  long *plVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined1 local_64 [4];
  
  puVar8 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__;
  puVar7 = Method_System_Security_Principal_GenericPrincipal__ctor__;
  if ((DAT_06a5732a & 1) == 0) {
    FUN_02d4dc40(Method_System_Net_FtpWebRequest_set_ContentOffset__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_SetData<int>__);
    FUN_02d4dc40(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__);
    FUN_02d4dc40(
                Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__
                );
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_SetData<uint>__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_SetData<Vector2Int>__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_UnlockBufferAfterWrite<byte>__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_InternalInitialization__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_SetData__);
    FUN_02d4dc40(Method_System_Security_Principal_GenericIdentity__ctor__);
    FUN_02d4dc40(Method_System_Security_Principal_GenericPrincipal__ctor__);
    FUN_02d4dc40(Method_UnityEngine_GraphicsBuffer_SetData__);
    FUN_02d4dc40(PTR_DAT_0664e7d8);
    DAT_06a5732a = 1;
  }
  local_64[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uVar11 = FUN_032f60d4(8,*(undefined8 *)puVar7);
  FUN_05b07190(local_64,uVar11,0);
  local_c0 = 0;
  puStack_b8 = local_64;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar1 = *(undefined4 *)(param_4 + 0x2b0);
  uVar2 = *(undefined4 *)(param_4 + 0x2b4);
  iVar3 = *(int *)(param_4 + 0x294);
  uVar4 = *(undefined4 *)(param_4 + 0x2ac);
  uVar5 = *(undefined4 *)(param_4 + 0x2b8);
  lVar12 = FUN_032ac380(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68),
                        *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<Vector2Int>__);
  auVar16 = FUN_032ab3fc(lVar12 + (long)*(int *)(param_4 + 0x2a4) * 0x4c,
                         *(undefined4 *)(param_4 + 0x2a8),1,
                         *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<uint>__);
  if (*(char *)(param_4 + 0x2c1) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_05f08c18(*(long *)(param_2 + 0x18),1,0);
  }
  if (*(char *)(param_4 + 0x2c2) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    thunk_FUN_05f0c2e0(*(long *)(param_2 + 0x18),*(undefined4 *)(param_4 + 0x2c4),0);
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    thunk_FUN_05f0c33c(*(long *)(param_2 + 0x18),0,*(undefined4 *)(param_4 + 0x2c8),0);
    if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    thunk_FUN_05f0c33c(*(long *)(param_2 + 0x18),1,*(undefined4 *)(param_4 + 0x2cc),0);
  }
  plVar14 = (long *)(param_1 + 0x58);
  if (*plVar14 == 0) {
    uVar10 = FUN_058e48a8(4,0);
    local_1d0 = 0;
    FUN_038c94f8(&local_1d0,8,uVar10,*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__);
    *plVar14 = local_1d0;
  }
  FUN_038ca13c(plVar14,iVar3,0,
               *(undefined8 *)Method_UnityEngine_GraphicsBuffer_InternalInitialization__);
  puVar9 = Method_UnityEngine_GraphicsBuffer_UnlockBufferAfterWrite<byte>__;
  puVar7 = Method_UnityEngine_GraphicsBuffer_SetData<int>__;
  if (0 < iVar3) {
    iVar15 = 0;
    do {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      puVar13 = (undefined2 *)FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05b8ae34(param_3,puVar13,&local_80);
      __dest = (void *)FUN_038c9600(plVar14,iVar15,*(undefined8 *)puVar9);
      local_160 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
      local_168 = 0;
      uStack_170 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      FUN_05f11174(&local_1d0,local_70 & 0xffffffff,0);
      memcpy(__dest,&local_1d0,0x78);
      lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
      if (*(char *)(lVar12 + 0x14) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_0664e7d8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar12 = FUN_05b87cb0(param_3,*puVar13);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar11 = *(undefined8 *)(lVar12 + 0xb8);
        FUN_05b47864(&local_1d0,uVar11,0);
        uStack_a8 = uStack_1c8;
        local_b0 = local_1d0;
        uStack_98 = uStack_1b8;
        uStack_a0 = local_1c0;
        local_90 = local_1b0;
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
        uVar10 = *(undefined4 *)(lVar12 + 0x18);
        lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
        local_1b0 = 0;
        local_d0 = local_90;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        FUN_05efc77c(&local_1d0,&local_f0,uVar10,0xffffffff,*(undefined4 *)(lVar12 + 0x1c),0);
        local_100 = local_1b0;
        uStack_118 = uStack_1c8;
        local_120 = local_1d0;
        uStack_108 = uStack_1b8;
        uStack_110 = local_1c0;
        FUN_05f110a0(__dest,&local_120,0);
        lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
        if (*(int *)(lVar12 + 0x10) != 1) {
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
          if (*(int *)(lVar12 + 0x10) != 2) goto LAB_05b97df8;
        }
        FUN_05b47864(&local_1d0,uVar11,0);
        local_130 = local_1b0;
        uStack_148 = uStack_1c8;
        local_150 = local_1d0;
        uStack_138 = uStack_1b8;
        uStack_140 = local_1c0;
        FUN_05f110b4(__dest,&local_150,0);
      }
LAB_05b97df8:
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
      FUN_05f11074(__dest,*(undefined4 *)(lVar12 + 0xc),0);
      lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
      FUN_05f1107c(__dest,*(undefined4 *)(lVar12 + 0x10),0);
      lVar12 = FUN_04bedb68(param_4 + 0x194,iVar15,*(undefined8 *)puVar7);
      if (*(int *)(lVar12 + 0xc) == 1) {
        FUN_05f110cc(0x3f800000,0,0,0x3f800000,__dest,0);
        FUN_05f110d8(0x3f800000,__dest,0);
        FUN_05f110e0(__dest,0,0);
        FUN_05b8b238(&local_1d0,param_3,puVar13,1);
        if ((iVar15 == 0) && (*(char *)(param_4 + 0x2c0) != '\0')) {
          FUN_05f110d8(0x3f800000,local_168._4_4_,local_160 & 0xffffffff,local_160._4_4_,__dest,0);
        }
        else {
          FUN_05f110cc(local_168 & 0xffffffff,__dest,0);
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar3 != iVar15);
  }
  auVar17 = FUN_038c9db4(plVar14,*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__
                        );
  cVar6 = *(char *)(param_4 + 0x2c0);
  auVar18 = FUN_03bb8324(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_05f0be84(*(long *)(param_2 + 0x18),uVar4,uVar1,uVar2,uVar5,auVar17._0_8_,auVar17._8_8_,
                 cVar6 + -1,*(undefined4 *)(param_4 + 700),auVar16,auVar18,0);
    **(undefined1 **)(*(long *)Method_System_Net_FtpWebRequest_set_ContentOffset__ + 0xb8) = 1;
    FUN_05b0719c(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


