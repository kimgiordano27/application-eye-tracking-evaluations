/*
FUNCTION_NAME: FUN_063b864c
ENTRY_POINT: 063b864c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool FUN_063b864c(undefined4 param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 *param_7,int *param_8,
                 undefined8 *param_9,int *param_10)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  float *pfVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 uStack_f0;
  long local_e8 [10];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  puVar8 = System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo;
  puVar7 = System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo;
  puVar5 = PTR_DAT_06d38278;
  puVar4 = PTR_DAT_06d0d0e8;
  if ((DAT_071cd543 & 1) == 0) {
    FUN_02f07e70(
                System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d38278);
    FUN_02f07e70(PlayFab_Internal_PlayFabHttp_ApiProcessingEvent<ApiProcessingEventArgs>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0d170);
    FUN_02f07e70(Photon_Voice_ArrayPoolSet<short>_TypeInfo);
    FUN_02f07e70(System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_float>_TypeInfo);
    FUN_02f07e70(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0d0e8);
    FUN_02f07e70(
                System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                );
    FUN_02f07e70(System_ComponentModel_GuidConverter_var);
    FUN_02f07e70(PTR_DAT_06d96040);
    DAT_071cd543 = 1;
  }
  puVar6 = System_ComponentModel_GuidConverter_var;
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_e8[6] = 0;
  local_e8[7] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  FUN_04224550(local_e8 + 8,*param_10,param_1,1,*(undefined8 *)puVar7);
  FUN_0426ef74(local_e8 + 6,*param_10,param_1,1,*(undefined8 *)puVar8);
  FUN_0426ef74(local_e8 + 4,*param_10,param_1,1,*(undefined8 *)puVar8);
  FUN_0426ef74(local_e8 + 2,*param_8,param_1,1,*(undefined8 *)puVar8);
  FUN_04206974(local_e8,*param_10,param_1,1,*(undefined8 *)puVar4);
  FUN_04206974(&local_f8,*param_10,param_1,1,*(undefined8 *)puVar4);
  FUN_04206974(&local_108,*param_8,param_1,1,*(undefined8 *)puVar4);
  uVar14 = *param_7;
  uVar22 = param_7[1];
  iVar27 = *param_8;
  uVar1 = *param_9;
  uVar24 = param_9[1];
  iVar28 = *param_10;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0631d814(uVar14,uVar22,iVar27,uVar1,uVar24,iVar28,local_e8 + 8,(long)&local_98 + 4,
               local_e8 + 6,&local_98,(long)&local_78 + 4,(long)&uStack_88 + 4,(long)&local_80 + 4,0
              );
  FUN_0426ef74(&local_118,local_98 & 0xffffffff,param_1,1,
               *(undefined8 *)
                System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
              );
  uVar14 = FUN_03b0bd10(local_e8[6],local_e8[7],
                        *(undefined8 *)
                         PlayFab_Internal_PlayFabHttp_ApiProcessingEvent<ApiProcessingEventArgs>_TypeInfo
                       );
  FUN_03afe164(uVar14,0,(int)local_98 + -1,0,
               *(undefined8 *)
                System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
              );
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_063b81e4(&local_118,local_e8 + 6,&local_98,local_e8 + 4);
  puVar4 = PTR_DAT_06d96040;
  iVar27 = *param_8;
  if (0 < iVar27) {
    uVar29 = 0;
    do {
      lVar15 = local_e8[6];
                    /* try { // try from 063b8924 to 064b89e7 has its CatchHandler @ 063b8924
                       catch() { ... } // from try @ 063b8924 with catch @ 063b8924
                       catch() { ... } // from try @ 063b8da4 with catch @ 063b8924
                       catch() { ... } // from try @ 063b8e50 with catch @ 063b8924
                       catch() { ... } // from try @ 063b8e74 with catch @ 063b8924
                       catch() { ... } // from try @ 063b8e8c with catch @ 063b8924
                       catch() { ... } // from try @ 063b8f3c with catch @ 063b8924 */
      iVar27 = (int)local_98;
      uVar20 = local_98 & 0xffffffff;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar10 = local_e8[5];
      lVar9 = local_e8[4];
      if (0 < iVar27) {
        uVar26 = 0;
        uVar16 = 0;
        puVar19 = (uint *)(lVar15 + 4);
        do {
          if ((uVar29 == puVar19[-1]) || (uVar29 == *puVar19)) {
            local_f8[(int)uVar26] = (int)uVar16;
            uVar26 = uVar26 + 1;
          }
          *(undefined4 *)(local_e8[0] + uVar16 * 4) = 0;
          uVar16 = uVar16 + 1;
          puVar19 = puVar19 + 4;
        } while (uVar20 != uVar16);
        bVar13 = 0 < (int)uVar26;
        if ((int)uVar26 < 1) {
          bVar13 = false;
        }
        else {
          uVar20 = (ulong)uVar26;
          piVar17 = local_f8;
          do {
            lVar15 = local_e8[6] + (long)*piVar17 * 0x10;
            if ((*(int *)(lVar15 + 8) == -1) || (*(int *)(lVar15 + 0xc) == -1)) goto LAB_063b8ac4;
            uVar20 = uVar20 - 1;
            piVar17 = piVar17 + 1;
          } while (uVar20 != 0);
        }
        if (uVar26 != 0) {
                    /* try { // try from 063b89e8 to 064b89f3 has its CatchHandler @ 063b8ed0 */
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    /* try { // try from 063b89f8 to 064b89ff has its CatchHandler @ 063b8eb4 */
            thunk_FUN_02f12b58();
          }
          uVar20 = FUN_063b8534(local_e8 + 2,&local_f8,local_e8,lVar9,lVar10,uVar26);
          if ((uVar20 & 1) == 0) {
            iVar28 = *param_10;
            iVar27 = *param_8;
            *param_10 = 0;
            *param_8 = 0;
            local_98 = local_98 & 0xffffffff;
                    /* try { // try from 063b8c30 to 064b8c3b has its CatchHandler @ 063b8ed4 */
            bVar13 = true;
            puVar21 = (undefined8 *)Photon_Voice_ArrayPoolSet<short>_TypeInfo;
            puVar23 = (undefined8 *)PTR_DAT_06d0d170;
            puVar25 = (undefined8 *)
                      System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_float>_TypeInfo;
            goto LAB_063b8c4c;
          }
          local_120 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
          local_128 = 0;
          if (bVar13) {
            lVar15 = 0;
            uVar20 = (ulong)uVar26;
            do {
              lVar10 = local_e8[9];
              lVar9 = local_e8[8];
                    /* try { // try from 063b8a44 to 064b8a4b has its CatchHandler @ 063b8eac */
              uVar14 = *(undefined8 *)(local_e8[2] + lVar15);
              uVar1 = ((undefined8 *)(local_e8[2] + lVar15))[1];
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    /* try { // try from 063b8a5c to 064b8a67 has its CatchHandler @ 063b8e58 */
                thunk_FUN_02f12b58();
              }
              FUN_063b842c(uVar14,uVar1,lVar9,lVar10,&local_120,(long)&local_128 + 4,&local_128);
              uVar20 = uVar20 - 1;
              lVar15 = lVar15 + 0x10;
            } while (uVar20 != 0);
          }
          else {
            local_128._4_4_ = 0.0;
          }
          local_120 = CONCAT44((float)((ulong)local_120 >> 0x20) / (local_128._4_4_ * 3.0),
                               (float)local_120 / (local_128._4_4_ * 3.0));
                    /* try { // try from 063b8ac0 to 064b8acf has its CatchHandler @ 063b8ea8 */
          *(undefined8 *)(*param_2 + uVar29 * 8) = local_120;
        }
      }
LAB_063b8ac4:
      iVar27 = *param_8;
      uVar29 = uVar29 + 1;
    } while ((long)uVar29 < (long)iVar27);
  }
  iVar28 = *param_10;
  *param_10 = 0;
  *param_8 = 0;
  local_98 = local_98 & 0xffffffff;
                    /* try { // try from 063b8af4 to 064b8af7 has its CatchHandler @ 063b8ea0 */
                    /* try { // try from 063b8b00 to 064b8b03 has its CatchHandler @ 063b8e9c */
  uVar29 = FUN_063b7f98(param_1,*param_2,param_2[1],param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10);
  if ((uVar29 & 1) == 0) {
                    /* try { // try from 063b8c0c to 064b8c0f has its CatchHandler @ 063b8ef4 */
    bVar13 = false;
    puVar21 = (undefined8 *)Photon_Voice_ArrayPoolSet<short>_TypeInfo;
    puVar23 = (undefined8 *)PTR_DAT_06d0d170;
    puVar25 = (undefined8 *)System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_float>_TypeInfo;
  }
  else {
    uVar14 = *param_7;
    uVar1 = param_7[1];
    iVar2 = *param_8;
    iVar3 = *param_10;
    uVar22 = *param_9;
    uVar24 = param_9[1];
    if (*(int *)(*(long *)PTR_DAT_06d38278 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
                    /* try { // try from 063b8b74 to 064b8b77 has its CatchHandler @ 063b8f24 */
                    /* try { // try from 063b8b80 to 064b8b8f has its CatchHandler @ 063b8f1c */
    FUN_0631d41c(uVar14,uVar1,iVar2,uVar22,uVar24,iVar3,local_e8 + 8,(long)&local_98 + 4,&local_78,
                 (long)&uStack_88 + 4,&local_80,(long)&local_90 + 4,&local_90,&uStack_88,0);
    lVar15 = *(long *)puVar6;
    fVar11 = (float)local_78;
    fVar12 = local_78._4_4_;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar15 = *(long *)puVar6;
    }
    puVar21 = (undefined8 *)Photon_Voice_ArrayPoolSet<short>_TypeInfo;
    puVar25 = (undefined8 *)System_Action<NetworkRunner,_PlayerRef,_ReliableKey,_float>_TypeInfo;
    puVar23 = (undefined8 *)PTR_DAT_06d0d170;
    pfVar18 = *(float **)(lVar15 + 0xb8);
    if (fVar12 * *pfVar18 <= fVar11) {
      bVar13 = false;
    }
    else {
      fVar12 = local_90._4_4_;
                    /* try { // try from 063b8be4 to 064b8beb has its CatchHandler @ 063b8efc */
      fVar11 = (float)local_90;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        pfVar18 = *(float **)(*(long *)puVar6 + 0xb8);
      }
      bVar13 = fVar12 < fVar11 * pfVar18[1];
    }
  }
LAB_063b8c4c:
  FUN_0422489c(local_e8 + 8,*puVar25);
  FUN_0426f248(local_e8 + 6,*puVar21);
  FUN_0426f248(&local_118,*puVar21);
                    /* try { // try from 063b8c74 to 064b8c7b has its CatchHandler @ 063b8ee8 */
  FUN_04206c34(local_e8,*puVar23);
                    /* try { // try from 063b8c80 to 064b8c93 has its CatchHandler @ 063b8ee4 */
  FUN_0426f248(local_e8 + 4,*puVar21);
  FUN_04206c34(&local_f8,*puVar23);
  FUN_04206c34(&local_108,*puVar23);
                    /* try { // try from 063b8ca0 to 064b8ca3 has its CatchHandler @ 063b8f08 */
  FUN_0426f248(local_e8 + 2,*puVar21);
  if ((bVar13) && (iVar28 == *param_10)) {
    bVar13 = iVar27 == *param_8;
                    /* try { // try from 063b8cc8 to 064b8ccf has its CatchHandler @ 063b8f0c */
  }
  else {
    bVar13 = false;
  }
                    /* try { // try from 063b8cd8 to 064b8ce7 has its CatchHandler @ 063b8f10 */
  return bVar13;
}


