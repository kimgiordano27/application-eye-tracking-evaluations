/*
FUNCTION_NAME: FUN_06d4c6e8
ENTRY_POINT: 06d4c6e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_06d4c6e8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_07a50ed4 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d9e08);
    FUN_031f20f4(System_Collections_Generic_ICollection<Attribute>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<AsyncOperationHandle>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d5728);
    FUN_031f20f4(long___TypeInfo);
    FUN_031f20f4(Photon_Voice_IAudioPusher<float>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<PemHeader>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<Guid>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo);
    FUN_031f20f4(PTR_DAT_076202a0);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<ResponderID>_TypeInfo);
    FUN_031f20f4(PTR_DAT_076202c0);
    FUN_031f20f4(PTR_DAT_076202d0);
    FUN_031f20f4(PTR_DAT_076202d8);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<SerializableGuid>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IEnumerator<ServerName>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_07a50ed4 = 1;
  }
  FUN_06d4865c(param_1);
  puVar1 = PTR_DAT_0759b2a8;
  plVar10 = (long *)param_1[0x11];
  if (plVar10 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_0759b2a8;
    if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      bVar3 = FUN_06e587d8(plVar10,0,0);
      *(byte *)(param_1 + 0x17) = bVar3 & 1;
      if ((bVar3 & 1) == 0) goto LAB_06d4c838;
      plVar10 = (long *)param_1[0x11];
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Collections_Generic_ICollection<AsyncOperationHandle>_TypeInfo
                                );
      FUN_056fa11c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
      puVar2 = System_Collections_Generic_HashSet<Guid>_TypeInfo;
      if (plVar10 == (long *)0x0) {
LAB_06d4cebc:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)System_Collections_Generic_HashSet<Guid>_TypeInfo)
          {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06d4c910;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_0322c1e8(plVar10,*(long *)System_Collections_Generic_HashSet<Guid>_TypeInfo,0);
LAB_06d4c910:
      (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
      plVar10 = (long *)param_1[0x11];
      uVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Collections_Generic_ICollection<Attribute>_TypeInfo);
      FUN_056fa11c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
      if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_06d4c9a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)puVar2,2);
LAB_06d4c9a0:
      (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
      puVar2 = Photon_Voice_IAudioPusher<float>_TypeInfo;
      if (*(char *)((long)param_1 + 0xbb) != '\0') {
        plVar10 = (long *)param_1[0x12];
        if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)Photon_Voice_IAudioPusher<float>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06d4ca14;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_0322c1e8(plVar10,*(long *)Photon_Voice_IAudioPusher<float>_TypeInfo,0);
LAB_06d4ca14:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_076202a0);
        FUN_0520ccd4(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar5 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar5,uVar6,*(undefined8 *)PTR_DAT_076202d8);
        plVar10 = (long *)param_1[0x12];
        if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_06d4cac4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)puVar2,1);
LAB_06d4cac4:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_076202c0);
        FUN_0520ccd4(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar5 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar5,uVar6,*(undefined8 *)PTR_DAT_076202d0);
      }
      puVar2 = System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo;
      if (*(char *)((long)param_1 + 0xbc) != '\0') {
        plVar10 = (long *)param_1[0x13];
        if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06d4cb80;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_0322c1e8(plVar10,*(long *)
                                       System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo
                              ,0);
LAB_06d4cb80:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo
                                  );
        FUN_0520ccd4(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar5 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar5,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerator<SerializableGuid>_TypeInfo);
        plVar10 = (long *)param_1[0x13];
        if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_06d4cc30;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)puVar2,1);
LAB_06d4cc30:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<ResponderID>_TypeInfo);
        FUN_0520ccd4(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar5 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar5,uVar6,
                     *(undefined8 *)System_Collections_Generic_IEnumerator<ServerName>_TypeInfo);
      }
      if (*(char *)((long)param_1 + 0xbd) != '\0') {
        plVar10 = (long *)param_1[0x14];
        if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_Collections_Generic_ICollection<PemHeader>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto FUN_06d4ccec;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_0322c1e8(plVar10,*(long *)
                                       System_Collections_Generic_ICollection<PemHeader>_TypeInfo,0)
        ;
FUN_06d4ccec:
        plVar10 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d9e08);
        FUN_056fc20c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (plVar10 == (long *)0x0) goto LAB_06d4cebc;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)long___TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06d4cd80;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0322c1e8(plVar10,*(long *)long___TypeInfo,0);
LAB_06d4cd80:
        uVar6 = (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
        if (param_1[9] == 0) goto LAB_06d4cebc;
        FUN_06c44664(param_1[9],uVar6,0);
      }
      plVar10 = (long *)param_1[0x11];
      *(undefined1 *)(param_1 + 0x1a) = 0;
      if (plVar10 == (long *)0x0) {
LAB_06d4ce14:
        bVar3 = 1;
      }
      else {
        lVar5 = *plVar10;
        bVar3 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                         + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
           )) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_075d5728 + 0x130);
          if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_075d5728
             )) goto LAB_06d4ce14;
          bVar3 = FUN_06e548ac(plVar10,0);
        }
        else {
          lVar5 = plVar10[6];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar8 = FUN_06e587d8(lVar5,0,0);
          if ((uVar8 & 1) == 0) {
            bVar3 = 0;
          }
          else {
            if (plVar10[6] == 0) goto LAB_06d4cebc;
            bVar3 = FUN_06c6f6e4(plVar10[6],param_1[0x11],0);
          }
        }
        bVar3 = bVar3 & 1;
      }
      *(byte *)((long)param_1 + 0xd1) = bVar3;
      lVar5 = param_1[0x1d];
      if (lVar5 != 0) {
        FUN_06e5c8f4(param_1,lVar5,0);
      }
      uVar6 = FUN_06d4cec0(param_1);
      lVar5 = FUN_06e5c698(param_1,uVar6,0);
      param_1[0x1d] = lVar5;
      thunk_FUN_0329bf60(param_1 + 0x1d,lVar5);
      goto LAB_06d4c838;
    }
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
LAB_06d4c838:
  uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  FUN_06d48768(param_1,uVar4);
  return;
}


