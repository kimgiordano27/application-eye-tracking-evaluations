/*
FUNCTION_NAME: FUN_02126574
ENTRY_POINT: 02126574
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


void FUN_02126574(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_88;
  float local_78;
  float local_74;
  
  local_88 = param_2;
  if ((DAT_03781109 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12008);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_Clear__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Quaternion>_ResizeInitialized__);
    thunk_FUN_00d48444(PTR_DAT_033eb750);
    thunk_FUN_00d48444(Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
    thunk_FUN_00d48444(StringLiteral_441);
    thunk_FUN_00d48444(
                      Method_System_Data_DataRelationCollection_DataTableRelationCollection_get_Item__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03781109 = 1;
  }
  uStack_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_78 = 0.0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  iVar7 = FUN_021cc9d4(&local_88,0);
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((iVar7 == 0x53544154) || (iVar7 == 0x444c5441)) {
    uVar14 = 0x14;
    if ((*(uint *)(param_1 + 0x168) & 0x40) != 0) {
      uVar14 = 0x1c;
    }
    Unity_Mathematics_bool4__get_ywxz(&local_198,0,local_88,uVar14,param_3,0);
    local_110 = local_188;
    uStack_118 = uStack_190;
    local_120 = local_198;
    FUN_0214730c(&local_198,&local_120,0);
    memcpy(&local_100,&local_198,0x70);
    bVar2 = false;
    bVar3 = false;
    puVar1 = (undefined4 *)(param_1 + 0xf8);
LAB_02126708:
    uVar9 = Unity_Mathematics_bool4__get_zxyx(&local_100,0);
    plVar6 = local_b8;
    if ((uVar9 & 1) != 0) {
      uVar10 = FUN_021466f4(local_b8,local_88,iVar7,0);
      uVar9 = FUN_015ff8a0(*(undefined8 *)(param_1 + 0xc0),0);
      if ((((uVar9 & 1) == 0) &&
          (uVar9 = FUN_02149214(*(undefined8 *)(param_1 + 0xc0),plVar6,0), (uVar9 & 1) != 0)) &&
         (uVar9 = FUN_02146560(plVar6,uVar10,0), (uVar9 & 1) != 0)) {
        FUN_02125b74(param_1);
        goto LAB_02126ac0;
      }
      if (((*(int *)(param_1 + 0xa0) < 1) ||
          (uVar9 = FUN_02126cac(plVar6,*(undefined8 *)(param_1 + 0xa8)), (uVar9 & 1) == 0)) &&
         ((*(int *)(param_1 + 0x90) < 1 ||
          (uVar9 = FUN_02126cac(plVar6,*(undefined8 *)(param_1 + 0x98)), (uVar9 & 1) != 0)))) {
        uVar15 = *(undefined8 *)(param_1 + 0x78);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0178a8c4(uVar15,0,0);
        if ((uVar9 & 1) != 0) {
          plVar11 = *(long **)(param_1 + 0x78);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = (**(code **)(*plVar11 + 0x8b8))(plVar11,plVar6,*(undefined8 *)(*plVar11 + 0x8c0));
          if ((uVar9 & 1) == 0) goto LAB_02126708;
        }
        uVar9 = FUN_021fe5e8(param_1 + 0x80,0);
        if ((uVar9 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_021f5d74(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                               plVar6[0xb],plVar6[0xc],0);
          if ((uVar9 & 1) != 0) {
            lVar12 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
            ;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar12 = *(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
              ;
            }
            uVar9 = FUN_021ef194(*(long *)(lVar12 + 0xb8) + 0x10,*(undefined8 *)(param_1 + 0x80),
                                 *(undefined8 *)(param_1 + 0x88),plVar6[0xb],plVar6[0xc],0);
            if ((uVar9 & 1) == 0) goto LAB_02126708;
          }
        }
        uVar9 = FUN_02146034(plVar6,uVar10,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_0129aa60(*(long *)(param_1 + 0x170),plVar6,
                               *(undefined8 *)
                                Method_Obi_ObiNativeList<Quaternion>_ResizeInitialized__);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            local_198 = local_198 & 0xffffffff00000000;
            FUN_0129a054(*(long *)(param_1 + 0x170),plVar6,&local_198,
                         *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
          }
          if (*(long *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          local_198 = local_198 & 0xffffffff00000000;
          FUN_01299e64(*(long *)(param_1 + 0x170),plVar6,&local_198,
                       *(undefined8 *)
                        Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
          goto LAB_02126708;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar16 = (float)(**(code **)(*plVar6 + 0x198))
                                  (plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x1a0));
        if (0.0 <= fVar16) {
          if (*(long *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_0129eff4(*(long *)(param_1 + 0x170),plVar6,&local_78,
                               *(undefined8 *)PTR_DAT_033eb750);
          if ((uVar9 & 1) == 0) {
            local_78 = (float)thunk_FUN_02144284(plVar6,0);
            if (*(long *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            local_198 = CONCAT44(local_198._4_4_,local_78);
            FUN_0129a054(*(long *)(param_1 + 0x170),plVar6,&local_198,
                         *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
          }
          bVar2 = true;
          if (ABS(local_78 - fVar16) < *(float *)(param_1 + 200)) goto LAB_02126708;
        }
        lVar12 = *(long *)(param_1 + 0x138);
        if (lVar12 == 0) {
          uVar9 = FUN_02144170(plVar6,0);
          fVar17 = fVar16;
          if ((uVar9 & 1) == 0) {
            fVar17 = fVar16 + 1.0;
          }
        }
        else {
          local_198 = local_88;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),plVar6,&local_198,&local_74,
                     *(undefined8 *)(lVar12 + 0x28));
          fVar17 = local_74;
        }
        puVar5 = StringLiteral_12008;
        uVar8 = FUN_012f8c34(puVar1,plVar6,*(undefined8 *)StringLiteral_441);
        if (uVar8 == 0xffffffff) {
          local_128 = CONCAT44(*puVar1,*puVar1);
          FUN_012f81e4(puVar1,plVar6,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
          local_198._0_4_ = fVar17;
          FUN_010b20b8((long *)(param_1 + 0xd0),(long)&local_128 + 4,&local_198,10,
                       *(undefined8 *)puVar5);
          local_198 = CONCAT44(local_198._4_4_,fVar16);
          FUN_010b20b8(param_1 + 0xd8,&local_128,&local_198,10,*(undefined8 *)puVar5);
          bVar2 = true;
          bVar3 = true;
          if (*(float *)(param_1 + 0xf4) <= 0.0) goto LAB_02126708;
          uVar10 = FUN_021d11ec(0);
        }
        else {
          lVar12 = *(long *)(param_1 + 0xd0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          pfVar13 = (float *)(lVar12 + (long)(int)uVar8 * 4 + 0x20);
          bVar2 = true;
          if (fVar17 <= *pfVar13) goto LAB_02126708;
          *pfVar13 = fVar17;
          bVar2 = true;
          bVar3 = true;
          if (*(float *)(param_1 + 0xf4) <= 0.0) goto LAB_02126708;
          uVar10 = FUN_021d11ec(0);
        }
        *(undefined8 *)(param_1 + 0xe0) = uVar10;
        bVar2 = true;
        bVar3 = true;
      }
      goto LAB_02126708;
    }
LAB_02126ac0:
    FUN_02148220(&local_100,0);
    if ((bVar2) && ((*(byte *)(param_1 + 0x169) >> 1 & 1) != 0)) {
      FUN_021d080c(&local_88,1,0);
    }
    if ((bVar3) && ((*(byte *)(param_1 + 0x168) >> 2 & 1) == 0)) {
      if (*(long *)(param_1 + 0x128) == 0) {
        if (*(float *)(param_1 + 0xf4) <= 0.0) {
          FUN_02125bc0(param_1);
        }
        else {
          FUN_021260a4();
        }
      }
      else {
        FUN_021260a4(param_1);
        lVar12 = *(long *)(param_1 + 0x128);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),param_1,*(undefined8 *)(lVar12 + 0x28));
      }
    }
  }
  return;
}


