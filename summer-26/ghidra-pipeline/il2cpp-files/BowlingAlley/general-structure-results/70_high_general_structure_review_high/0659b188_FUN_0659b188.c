/*
FUNCTION_NAME: FUN_0659b188
ENTRY_POINT: 0659b188
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


long * FUN_0659b188(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_64 [4];
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  local_60 = param_5;
  lStack_58 = param_6;
  local_50 = param_3;
  lStack_48 = param_4;
  if ((DAT_076dfe01 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280910);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<AssetType,_AssetColor[]>>_Start<AvatarManager_<LoadAvatarColors>d__22>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07280858);
    thunk_FUN_032e1da0(PTR_DAT_072872b8);
    thunk_FUN_032e1da0(PTR_DAT_072872c0);
    DAT_076dfe01 = 1;
  }
  local_64[0] = '\0';
  if (param_2 == 0) goto LAB_0659b644;
  plVar7 = (long *)FUN_0594daa4(*(undefined8 *)(param_2 + 0x20),0);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<AssetType,_AssetColor[]>>_Start<AvatarManager_<LoadAvatarColors>d__22>__
  ;
  if (plVar7 == (long *)0x0) {
LAB_0659b648:
    FUN_02d9d3f0(param_2);
    plVar7 = *(long **)(param_2 + 0x20);
    FUN_02d9d3f0(plVar7);
    uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    FUN_02d9d3f0(param_2);
    local_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_70 = *(undefined8 *)(param_2 + 0x18);
    uVar9 = thunk_FUN_032e1da0(Unity_Collections_xxHash3_StreamingState_TypeInfo);
    uVar11 = thunk_FUN_032a52d0(uVar9,&local_78);
    uVar9 = thunk_FUN_032e1da0(
                              Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_set_Item__
                              );
  }
  else {
    bVar1 = *(byte *)(*plVar7 + 0x130);
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar14 = *(long *)(*plVar7 + 200),
       *(long *)(lVar14 + (ulong)bVar2 * 8 + -8) !=
       *(long *)Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__))
    goto LAB_0659b648;
    bVar2 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<AssetType,_AssetColor[]>>_Start<AvatarManager_<LoadAvatarColors>d__22>__
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<AssetType,_AssetColor[]>>_Start<AvatarManager_<LoadAvatarColors>d__22>__
       )) {
      if (param_7 == 0) {
        FUN_02d9d3f0(param_2);
        local_78 = *(undefined8 *)(param_2 + 0x10);
        uStack_70 = *(undefined8 *)(param_2 + 0x18);
        uVar9 = thunk_FUN_032e1da0(Unity_Collections_xxHash3_StreamingState_TypeInfo);
        uVar9 = thunk_FUN_032a52d0(uVar9,&local_78);
        uVar10 = thunk_FUN_032e1da0(
                                   Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>__ctor__
                                   );
        uVar9 = FUN_057a25c4(uVar10,uVar9,0);
        goto LAB_0659b6f8;
      }
LAB_0659b288:
      uVar8 = FUN_064d86a8(&local_60,0);
      if ((uVar8 & 1) != 0) {
        lStack_58 = *(long *)(param_2 + 0x18);
        local_60 = *(long *)(param_2 + 0x10);
        lVar14 = FUN_064cf02c(&local_60,0);
        if (lVar14 == 0) goto LAB_0659b644;
        iVar6 = FUN_057b00bc(lVar14,0x3a,0);
        if (iVar6 != -1) {
          lVar14 = FUN_064cf02c(&local_60,0);
          if (lVar14 == 0) goto LAB_0659b644;
          uVar9 = FUN_057aeed8(lVar14,iVar6 + 1,0);
          FUN_064cfea8(&local_60,uVar9,0);
        }
      }
      lVar14 = FUN_064cf02c(&local_60,0);
      if (lVar14 != 0) {
        iVar6 = FUN_057af7ec(lVar14,0x2f,0);
        if (iVar6 != -1) {
          uVar9 = FUN_064cf02c(&local_60,0);
          uVar9 = FUN_064f0760(uVar9,0);
          FUN_064cfea8(&local_60,uVar9,0);
        }
        uVar8 = FUN_064d86a8(&local_50,0);
        if ((uVar8 & 1) != 0) {
          lStack_48 = *(long *)(param_2 + 0x30);
          local_50 = *(long *)(param_2 + 0x28);
          uVar8 = FUN_064d86a8(&local_50,0);
          puVar3 = PTR_DAT_07280910;
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_07280910 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (DAT_076dfe1a == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07280910);
              DAT_076dfe1a = '\x01';
            }
            lVar14 = *(long *)puVar3;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar14 = *(long *)puVar3;
            }
            lStack_48 = (*(long **)(lVar14 + 0xb8))[1];
            local_50 = **(long **)(lVar14 + 0xb8);
          }
        }
        plVar7[5] = lStack_58;
        plVar7[4] = local_60;
        thunk_FUN_0333a630(plVar7 + 4,0);
        plVar7[8] = *(long *)(param_2 + 0x98);
        thunk_FUN_0333a630();
        lVar14 = *(long *)(param_2 + 0x10);
        plVar7[0xc] = *(long *)(param_2 + 0x18);
        plVar7[0xb] = lVar14;
        thunk_FUN_0333a630(plVar7 + 0xb,0);
        plVar7[0xe] = lStack_48;
        plVar7[0xd] = local_50;
        thunk_FUN_0333a630(plVar7 + 0xd,0);
        plVar7[0x10] = param_7;
        thunk_FUN_0333a630(plVar7 + 0x10,param_7);
        plVar7[0xf] = *param_1;
        thunk_FUN_0333a630();
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
          FUN_064ebaac(plVar7,*(uint *)(param_2 + 0xa8) >> 5 & 1,0);
        }
        local_64[0] = '\0';
        FUN_0659b804(param_1,param_2,local_50,lStack_48,plVar7,local_64);
        FUN_0659bebc(plVar7);
        if (local_64[0] != '\0') {
          lVar14 = *(long *)(param_2 + 0x90);
          if (lVar14 == 0) goto LAB_0659b644;
          if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
            uVar8 = 0;
            uVar12 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
            puVar15 = (undefined8 *)(lVar14 + 0x50);
            do {
              if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              uVar12 = FUN_057ab1f0(*puVar15,0);
              if ((uVar12 & 1) == 0) {
                FUN_0659c804(plVar7,puVar15 + -6,param_2);
              }
              uVar12 = (ulong)*(uint *)(lVar14 + 0x18);
              uVar8 = uVar8 + 1;
              puVar15 = puVar15 + 0x1a;
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar14 + 0x18));
          }
        }
        return plVar7;
      }
LAB_0659b644:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (param_7 == 0) {
      *param_1 = (long)plVar7;
      thunk_FUN_0333a630(param_1,plVar7);
      lVar14 = *param_1;
      if (lVar14 == 0) goto LAB_0659b644;
      if (*(int *)(*(long *)PTR_DAT_07280858 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar13 = *param_1;
        *(undefined4 *)(lVar14 + 0x14) = 0;
        if (lVar13 == 0) goto LAB_0659b644;
      }
      else {
        *(undefined4 *)(lVar14 + 0x14) = 0;
        lVar13 = lVar14;
      }
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(param_2 + 0x38);
      lVar14 = *param_1;
      if (lVar14 == 0) goto LAB_0659b644;
      *(undefined8 *)(lVar14 + 0x138) = 0;
      thunk_FUN_0333a630(lVar14 + 0x138,0);
      lVar14 = *param_1;
      if (lVar14 == 0) goto LAB_0659b644;
      *(undefined8 *)(lVar14 + 0x150) = 0;
      thunk_FUN_0333a630(lVar14 + 0x150,0);
      lVar14 = *param_1;
      if (lVar14 == 0) goto LAB_0659b644;
      *(undefined8 *)(lVar14 + 0x140) = 0;
      thunk_FUN_0333a630(lVar14 + 0x140,0);
      lVar14 = *param_1;
      if (lVar14 == 0) goto LAB_0659b644;
      *(undefined8 *)(lVar14 + 0x148) = 0;
      thunk_FUN_0333a630(lVar14 + 0x148,0);
      if ((0xff < *(ushort *)(param_2 + 0x40)) && ((*(ushort *)(param_2 + 0x40) & 0xff) != 0)) {
        lVar14 = *param_1;
        if (lVar14 == 0) goto LAB_0659b644;
        *(uint *)(lVar14 + 0xdc) = *(uint *)(lVar14 + 0xdc) | 1;
      }
      cVar5 = FUN_06591b04(param_2);
      if (cVar5 != '\0') {
        lVar14 = *param_1;
        if (lVar14 == 0) goto LAB_0659b644;
        *(uint *)(lVar14 + 0xdc) = *(uint *)(lVar14 + 0xdc) | 0x1000;
        uVar8 = FUN_06591b04(param_2);
        if (((uVar8 & 0xff00) != 0) && ((uVar8 & 0xff) != 0)) {
          lVar14 = *param_1;
          if (lVar14 == 0) goto LAB_0659b644;
          *(uint *)(lVar14 + 0xdc) = *(uint *)(lVar14 + 0xdc) | 0x800;
        }
      }
      goto LAB_0659b288;
    }
    FUN_02d9d3f0(param_2);
    local_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_70 = *(undefined8 *)(param_2 + 0x18);
    uVar9 = thunk_FUN_032e1da0(Unity_Collections_xxHash3_StreamingState_TypeInfo);
    uVar10 = thunk_FUN_032a52d0(uVar9,&local_78);
    FUN_02d9d3f0(param_7);
    uVar11 = FUN_064eb7d4(param_7,0);
    uVar9 = thunk_FUN_032e1da0(
                              Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_set_Item__
                              );
  }
  uVar9 = FUN_057ab61c(uVar9,uVar10,uVar11,0);
LAB_0659b6f8:
  thunk_FUN_032e1da0(PTR_DAT_07279578);
  uVar10 = thunk_FUN_032a56a0();
  FUN_0592371c(uVar10,uVar9,0);
  uVar9 = thunk_FUN_032e1da0(
                            Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar10,uVar9);
}


