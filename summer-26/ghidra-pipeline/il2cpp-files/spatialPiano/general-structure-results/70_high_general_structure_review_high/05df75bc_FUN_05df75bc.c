/*
FUNCTION_NAME: FUN_05df75bc
ENTRY_POINT: 05df75bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2
*/


void FUN_05df75bc(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  float local_84;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined1 local_64 [4];
  
  if ((DAT_06bc3dab & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    DAT_06bc3dab = 1;
  }
  local_64[0] = 0;
  if (param_2 == 0) {
LAB_05df7b14:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar13 = *(long *)(param_2 + 0x28);
  iVar8 = *(int *)(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x34);
  cVar2 = *(char *)(param_2 + 0x35);
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar9 = FUN_060f245c(lVar13,0,0);
  if ((uVar9 & 1) != 0) {
    plVar10 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
    if (plVar10 != (long *)0x0) {
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar12,0);
      }
      puVar5 = PTR_DAT_067c8f48;
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar13;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_060a9df0(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__,plVar10,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_05df7b14;
  }
  uVar12 = FUN_034dac00(6,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  FUN_05c5cb4c(local_64,param_1,uVar12,0);
  local_78 = 0;
  puStack_70 = local_64;
  if ((cVar1 == '\0') && (iVar7 = FUN_060fb470(0), iVar7 != 0)) {
    if (iVar8 == -1) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(long *)(param_3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      iVar8 = FUN_060d41bc(*(long *)(param_3 + 0x18),0);
    }
    puVar5 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__;
    if (iVar8 == 2) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05c41350(param_1,*(long *)(*(long *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                    + 0xb8) + 0x5c,1,0);
      FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,0,0);
      FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,0,0);
      goto LAB_05df77c4;
    }
    if (iVar8 == 4) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05c41350(param_1,*(long *)(*(long *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                    + 0xb8) + 0x5c,0,0);
      FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,1,0);
      FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,0,0);
      goto LAB_05df77c4;
    }
    if (iVar8 == 8) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05c41350(param_1,*(long *)(*(long *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                    + 0xb8) + 0x5c,0,0);
      FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,0,0);
      FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,1,0);
      goto LAB_05df77c4;
    }
  }
  puVar5 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
  ;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05c41350(param_1,*(long *)(*(long *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                + 0xb8) + 0x5c,0,0);
  FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 0x60,0,0);
  FUN_05c41350(param_1,*(long *)(*(long *)puVar5 + 0xb8) + 100,0,0);
LAB_05df77c4:
  FUN_05c41350(param_1,*(long *)(*(long *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                + 0xb8) + 0x130,cVar2 != '\0',0);
  if (*(char *)(param_2 + 0x36) == '\0') {
    uVar6 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = FUN_05d6d64c(*(long *)(param_2 + 0x20),param_3,0);
    uVar6 = uVar6 & 1;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(char *)(param_3 + 0xa8) == '\0') {
    if (DAT_06bb8a4a == '\0') {
      FUN_02f08768(PTR_DAT_067c9848);
      DAT_06bb8a4a = '\x01';
    }
    uVar15 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
    local_84 = *(float *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
  }
  else {
    FUN_05c9cc94(auStack_a8,param_3,0);
    FUN_05c9cc94(auStack_a8,param_3,0);
    uVar15 = local_88;
  }
  fVar3 = local_84;
  fVar4 = 0.0;
  if (uVar6 != 0) {
    fVar3 = -local_84;
    fVar4 = local_84;
  }
  if (*(char *)(param_2 + 0x36) != '\0') {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c41104(*(undefined4 *)(lVar11 + 300),*(undefined4 *)(lVar11 + 0x130),
                 *(undefined4 *)(lVar11 + 0x134),*(undefined4 *)(lVar11 + 0x138),param_1,0);
  }
  puVar5 = Method_TMPro_SetPropertyUtility_SetStruct<bool>__;
  lVar11 = *(long *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar11 = *(long *)puVar5;
  }
  uVar14 = **(undefined4 **)(lVar11 + 0xb8);
  uVar12 = FUN_05c9cd38(param_3,0);
  if (lVar13 != 0) {
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar13,uVar14,uVar12,0);
    uVar14 = 0x3f800000;
    if (cVar2 == '\0') {
      uVar14 = 0;
    }
    UnityEngine_TextCore_Text_SpriteAsset_<>c__<SortGlyphTable>b__44_0
              (uVar14,lVar13,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05caa8c8(uVar15,fVar3,0,fVar4,param_1,param_3,lVar13,0,0);
    FUN_05c5cb50(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


