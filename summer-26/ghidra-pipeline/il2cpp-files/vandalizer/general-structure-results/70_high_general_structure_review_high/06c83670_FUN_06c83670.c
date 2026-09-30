/*
FUNCTION_NAME: FUN_06c83670
ENTRY_POINT: 06c83670
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_06c83670(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar2 = System_Collections_Generic_IEnumerator<Vector3>_TypeInfo;
  puVar1 = PTR_DAT_0759b2a8;
  if ((DAT_07a50707 & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_IEnumerator<KeyShareEntry>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(System_Collections_Generic_ICollection<OcspResponse>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<VolumeProfile>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759ca20);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<X509Certificate>_TypeInfo);
    DAT_07a50707 = 1;
  }
  lVar3 = FUN_03d78ef4(param_1,*(undefined8 *)puVar2);
  plVar7 = (long *)(param_1 + 0x28);
  *plVar7 = lVar3;
  thunk_FUN_0329bf60(plVar7,lVar3);
  lVar3 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_06e5ba28(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_06e5ba28(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      if (*plVar7 == 0) {
LAB_06c83940:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar5 = *(undefined8 *)(*plVar7 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = FUN_06e587d8(uVar5,0,0);
      if (((uVar4 & 1) == 0) ||
         (lVar3 = thunk_FUN_0322f04c(uVar5,*(undefined8 *)
                                            System_Collections_Generic_ICollection<OcspResponse>_TypeInfo
                                    ), lVar3 == 0)) {
        if (*plVar7 == 0) goto LAB_06c83940;
        lVar3 = FUN_03d79538(*plVar7,*(undefined8 *)
                                      System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                            );
      }
      plVar7 = (long *)(param_1 + 0x30);
      *plVar7 = lVar3;
      thunk_FUN_0329bf60(plVar7);
      if (*plVar7 != 0) {
        lVar3 = *(long *)(param_1 + 0x20);
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<KeyShareEntry>_TypeInfo);
        FUN_056fa11c(uVar5,param_1,
                     *(undefined8 *)System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo,0
                    );
        if (lVar3 != 0) {
          FUN_06cb71a4(lVar3,uVar5,0);
          return;
        }
        goto LAB_06c83940;
      }
      if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = *(undefined8 *)System_Collections_Generic_IEnumerator<VolumeProfile>_TypeInfo;
      goto LAB_06c83820;
    }
    lVar3 = FUN_06e550fc(param_1,0);
    if (lVar3 == 0) goto LAB_06c83940;
    uVar5 = thunk_FUN_06e5f718(lVar3,0);
    puVar6 = (undefined8 *)System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo;
  }
  else {
    lVar3 = FUN_06e550fc(param_1,0);
    if (lVar3 == 0) goto LAB_06c83940;
    uVar5 = thunk_FUN_06e5f718(lVar3,0);
    puVar6 = (undefined8 *)System_Collections_Generic_IEnumerator<X509Certificate>_TypeInfo;
  }
  uVar5 = FUN_05c88a70(*puVar6,uVar5,*(undefined8 *)PTR_DAT_0759ca20,0);
  if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_0759b238);
  }
LAB_06c83820:
  FUN_06deee2c(uVar5,param_1,0);
  FUN_06e547e8(param_1,0,0);
  return;
}


