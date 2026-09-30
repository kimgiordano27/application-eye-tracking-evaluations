/*
FUNCTION_NAME: FUN_0362af14
ENTRY_POINT: 0362af14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void FUN_0362af14(long param_1,long *param_2,long param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredSByte_TypeInfo;
  if ((DAT_045381c1 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__);
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__);
    FUN_01c5d288(Method_System_Buffer_BlockCopy__);
    FUN_01c5d288(Method_System_Buffer_ByteLength__);
    FUN_01c5d288(Method_Mono_Net_Security_BufferOffsetSize__ctor__);
    FUN_01c5d288(Method_Unity_Services_Analytics_Internal_BufferX__ctor__);
    FUN_01c5d288(Method_BufferedAudioStream_AddData__);
    FUN_01c5d288(Method_System_IO_BufferedStream__ctor__);
    FUN_01c5d288(Method_System_IO_BufferedStream_ClearReadBufferBeforeWrite__);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredSByte_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo);
    DAT_045381c1 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar5 = FUN_0364da5c(param_3,0);
  puVar3 = Method_Mono_Net_Security_BufferOffsetSize__ctor__;
  if (param_3 == 0) goto LAB_0362b3d0;
  uVar6 = FUN_032107dc(param_3,0);
  if (((uVar6 & 1) == 0) && (lVar7 = FUN_03625f5c(param_1,param_2,0xffffffff), lVar7 != 0)) {
    lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_IO_BufferedStream_ClearReadBufferBeforeWrite__);
    FUN_02d4f880(lVar8,*(undefined8 *)Method_System_IO_BufferedStream__ctor__);
    if (lVar8 == 0) goto LAB_0362b3d0;
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_0362b3d0;
    uVar4 = *(uint *)(lVar8 + 0x18);
    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar4 + 1;
      *(long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20) = lVar7;
      plVar2 = (long *)Method_System_Buffer_ByteLength__;
    }
    else {
      FUN_02d5004c(lVar8,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      plVar2 = (long *)Method_System_Buffer_ByteLength__;
    }
  }
  else {
    lVar8 = 0;
    plVar2 = (long *)Method_System_Buffer_ByteLength__;
  }
  Method_System_Buffer_ByteLength__ = (undefined *)plVar2;
  if (param_4 == (long *)0x0) goto LAB_0362b3d0;
  lVar7 = *param_4;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *plVar2) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_0362b108;
      }
      uVar6 = uVar6 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_01c72498(param_4,*plVar2,1);
LAB_0362b108:
  uVar4 = (*(code *)*puVar9)(param_4,puVar9[1]);
  if (0 < (int)uVar4) {
    uVar15 = 0;
    do {
      lVar7 = *param_4;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *plVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0362b170;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01c72498(param_4,*plVar2,0);
LAB_0362b170:
      uVar10 = (*(code *)*puVar9)(param_4,uVar15,puVar9[1]);
      if (lVar5 == 0) goto LAB_0362b3d0;
      if (*(uint *)(lVar5 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar11 = *(long **)(lVar5 + (long)(int)uVar15 * 8 + 0x20);
      if ((plVar11 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0)),
         lVar7 == 0)) goto LAB_0362b3d0;
      uVar6 = FUN_032eaf90(lVar7,0);
      if ((uVar6 & 1) == 0) {
        FUN_03622ad0(param_1,uVar10);
      }
      else {
        lVar7 = FUN_03625f5c(param_1,uVar10,uVar15);
        if (lVar7 != 0) {
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_IO_BufferedStream_ClearReadBufferBeforeWrite__
                                      );
            FUN_02d4f880(lVar8,*(undefined8 *)Method_System_IO_BufferedStream__ctor__);
            if (lVar8 == 0) goto LAB_0362b3d0;
          }
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0362b3d0;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
          }
          else {
            FUN_02d5004c(lVar8,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar4);
  }
  uVar6 = FUN_032107dc(param_3,0);
  if ((uVar6 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_0362b3d0;
    uVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo + 0xe0) == 0
       ) {
      thunk_FUN_01c1d1e8(*(long *)CodeStage_AntiCheat_ObscuredTypes_ObscuredQuaternion_TypeInfo);
    }
    uVar6 = FUN_0364e730(uVar10,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_0361d254(*(long *)(param_1 + 0x10),param_3,lVar5);
        return;
      }
      goto LAB_0362b3d0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      uVar10 = FUN_0360c6d4(param_3,lVar5,0);
      FUN_036188d8(lVar7,uVar10);
      return;
    }
  }
  else {
    uVar10 = FUN_02d51a80(lVar8,*(undefined8 *)Method_BufferedAudioStream_AddData__);
    if (lVar7 != 0) {
      FUN_0361d1a8(lVar7,param_3,lVar5,uVar10);
      FUN_02d50a3c(&local_78,lVar8,
                   *(undefined8 *)Method_Unity_Services_Analytics_Internal_BufferX__ctor__);
      puVar3 = Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__;
      while( true ) {
        uVar6 = FUN_029fd614(&local_78,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          FUN_029fd610(&local_78,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__)
          ;
          return;
        }
        if (local_68 == (long *)0x0) break;
        (**(code **)(*local_68 + 0x188))
                  (local_68,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(*local_68 + 400));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
LAB_0362b3d0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


