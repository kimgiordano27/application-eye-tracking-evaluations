/*
FUNCTION_NAME: FUN_065505d4
ENTRY_POINT: 065505d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_065505d4(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint param_5,
                 uint param_6,ulong param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_070f2030;
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_075572c2 & 1) == 0) {
    FUN_03188a78(System_Collections_Generic_List<GraphicsBuffer>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_ICollection<OVRSpatialAnchor>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_ICollection<object>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_ICollection<OcspResponse>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<Guid>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<HTTP2FrameHeaderAndPayload>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<BaseRaycaster>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2030);
    FUN_03188a78(System_Collections_Generic_IEnumerable<KeyValuePair<int,_byte[]>>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<HTTP2Stream>_TypeInfo);
    DAT_075572c2 = 1;
  }
  lVar6 = *(long *)puVar2;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  iVar5 = *(int *)(lVar6 + 0xe4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (iVar5 == 0) {
    thunk_FUN_031e5338();
    lVar6 = *(long *)puVar2;
  }
  FUN_065ab194(*(long *)(lVar6 + 0xb8) + 0x50,0);
  auVar13._8_8_ = local_80._8_8_;
  auVar13._0_8_ = local_80._0_8_;
  if (((param_7 & 1) == 0) && (local_80 = auVar13, 0 < *param_4)) {
    if (*param_4 != 1) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      uVar8 = thunk_FUN_031edd38(System_Func<object,_string>_TypeInfo);
      uVar8 = thunk_FUN_031c39fc(uVar8,&local_90);
      uVar10 = thunk_FUN_031edd38(System_Collections_Generic_List<HTTPRequest>_TypeInfo);
      uVar8 = FUN_057b5e54(uVar10,uVar8,0);
      thunk_FUN_031edd38(PTR_DAT_070c2da8);
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_0592abbc(uVar10,uVar8,0);
      uVar8 = thunk_FUN_031edd38(System_Collections_Generic_List<HandBoneInfo>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar10,uVar8);
    }
    local_80 = FUN_03f4ad64(param_4,0,
                            *(undefined8 *)System_Collections_Generic_List<BaseRaycaster>_TypeInfo);
    uVar7 = FUN_064e814c(local_80,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_065509f0;
      FUN_051ff1b8(*(long *)(param_1 + 0x30),param_2,param_3,local_80._0_8_,local_80._8_8_,
                   *(undefined8 *)System_Collections_Generic_List<Guid>_TypeInfo);
    }
  }
  puVar2 = System_Collections_Generic_ICollection<OVRSpatialAnchor>_TypeInfo;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_05206d24(*(long *)(param_1 + 0x48),param_2,param_3,
                 *(undefined8 *)System_Collections_Generic_ICollection<OVRSpatialAnchor>_TypeInfo);
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar5 = FUN_0520556c(*(long *)(param_1 + 0x48),
                           *(undefined8 *)
                            System_Collections_Generic_List<GraphicsDeviceType>_TypeInfo);
      puVar3 = System_Collections_Generic_List<HTTP2FrameHeaderAndPayload>_TypeInfo;
      if (iVar5 < 1) {
LAB_065508ec:
        puVar3 = System_Collections_Generic_List<BaseRaycaster>_TypeInfo;
        puVar2 = System_Collections_Generic_IEnumerable<KeyValuePair<int,_byte[]>>_TypeInfo;
        if ((param_7 & 1) == 0) {
          FUN_06550d4c(param_1,param_2,param_3,param_6 & 1);
        }
        else if (0 < *param_4) {
          iVar5 = 0;
          do {
            auVar13 = FUN_03f4ad64(param_4,iVar5,*(undefined8 *)puVar3);
            FUN_06550d4c(param_1,auVar13._0_8_,auVar13._8_8_,param_6 & 1);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *param_4);
        }
        puVar4 = System_Collections_Generic_List<HTTP2Stream>_TypeInfo;
        puVar3 = System_Collections_Generic_List<GraphicsBuffer>_TypeInfo;
        uVar8 = FUN_064df4cc(&local_70,0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar6);
          lVar6 = *(long *)puVar2;
        }
        uVar12 = 2;
        if ((param_5 & 1) == 0) {
          uVar12 = 0;
        }
        FUN_03a5a0e4(param_1 + 0x230,uVar8,uVar12,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                     *(undefined8 *)puVar4,0,*(undefined8 *)puVar3);
        return;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar8 = FUN_0520557c(*(long *)(param_1 + 0x48),
                             *(undefined8 *)
                              System_Collections_Generic_ICollection<OcspResponse>_TypeInfo);
        lVar6 = FUN_03a90264(uVar8,*(undefined8 *)puVar3);
        puVar3 = System_Collections_Generic_List<BaseRaycaster>_TypeInfo;
        if (lVar6 != 0) {
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar7 = 0;
            uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_065509f0;
              lVar1 = lVar6 + uVar7 * 0x10;
              uVar8 = *(undefined8 *)(lVar1 + 0x20);
              uVar10 = *(undefined8 *)(lVar1 + 0x28);
              FUN_052057d4(*(long *)(param_1 + 0x48),uVar8,uVar10,
                           *(undefined8 *)System_Collections_Generic_ICollection<object>_TypeInfo);
              if ((param_7 & 1) == 0) {
                uVar9 = FUN_064e007c(param_2,param_3,0);
                uVar11 = FUN_064efda4(extraout_x1,uVar9,0x3b,0);
                if ((uVar11 & 1) != 0) {
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_065509f0;
                  FUN_05206d24(*(long *)(param_1 + 0x48),uVar8,uVar10,*(undefined8 *)puVar2);
                }
              }
              else if (0 < *param_4) {
                iVar5 = 0;
                do {
                  auVar13 = FUN_03f4ad64(param_4,iVar5,*(undefined8 *)puVar3);
                  uVar11 = FUN_064df3b4(uVar8,uVar10,auVar13._0_8_,auVar13._8_8_,0);
                  if ((uVar11 & 1) == 0) {
                    auVar13 = FUN_03f4ad64(param_4,iVar5,*(undefined8 *)puVar3);
                    uVar9 = FUN_064e007c(auVar13._0_8_,auVar13._8_8_,0);
                    uVar11 = FUN_064efda4(extraout_x1,uVar9,0x3b,0);
                    if ((uVar11 & 1) != 0) goto LAB_06550874;
                  }
                  else {
LAB_06550874:
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_065509f0;
                    FUN_05206d24(*(long *)(param_1 + 0x48),uVar8,uVar10,*(undefined8 *)puVar2);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *param_4);
              }
              uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
          goto LAB_065508ec;
        }
      }
    }
  }
LAB_065509f0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


