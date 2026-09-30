/*
FUNCTION_NAME: UnityEngine.PlayerConnectionInternal$$SendMessage
ENTRY_POINT: 06d4c78c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void UnityEngine_PlayerConnectionInternal__SendMessage(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long *plVar9;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x2a0));
  FUN_031f20f4(System_Collections_Generic_IEnumerator<ResponderID>_TypeInfo);
  FUN_031f20f4(PTR_DAT_076202c0);
  FUN_031f20f4(PTR_DAT_076202d0);
  FUN_031f20f4(PTR_DAT_076202d8);
  FUN_031f20f4(System_Collections_Generic_IEnumerator<SerializableGuid>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_IEnumerator<ServerName>_TypeInfo);
  FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xed4) = 1;
  FUN_06d4865c();
  puVar1 = PTR_DAT_0759b2a8;
  plVar9 = (long *)unaff_x19[0x11];
  if (plVar9 != (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_0759b2a8;
    if ((*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      bVar3 = FUN_06e587d8(plVar9,0,0);
      *(byte *)(unaff_x19 + 0x17) = bVar3 & 1;
      if ((bVar3 & 1) == 0) goto LAB_06d4c838;
      plVar9 = (long *)unaff_x19[0x11];
      uVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Collections_Generic_ICollection<AsyncOperationHandle>_TypeInfo
                                );
      FUN_056fa11c();
      puVar2 = System_Collections_Generic_HashSet<Guid>_TypeInfo;
      if (plVar9 == (long *)0x0) {
LAB_06d4cebc:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)System_Collections_Generic_HashSet<Guid>_TypeInfo)
          {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06d4c910;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_0322c1e8(plVar9,*(long *)System_Collections_Generic_HashSet<Guid>_TypeInfo,0);
LAB_06d4c910:
      (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
      plVar9 = (long *)unaff_x19[0x11];
      uVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                  System_Collections_Generic_ICollection<Attribute>_TypeInfo);
      FUN_056fa11c();
      if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_06d4c9a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,2);
LAB_06d4c9a0:
      (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
      puVar2 = Photon_Voice_IAudioPusher<float>_TypeInfo;
      if (*(char *)((long)unaff_x19 + 0xbb) != '\0') {
        plVar9 = (long *)unaff_x19[0x12];
        if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)Photon_Voice_IAudioPusher<float>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06d4ca14;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_0322c1e8(plVar9,*(long *)Photon_Voice_IAudioPusher<float>_TypeInfo,0);
LAB_06d4ca14:
        lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_076202a0);
        FUN_0520ccd4();
        if (lVar4 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar4,uVar5,*(undefined8 *)PTR_DAT_076202d8);
        plVar9 = (long *)unaff_x19[0x12];
        if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_06d4cac4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,1);
LAB_06d4cac4:
        lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_076202c0);
        FUN_0520ccd4();
        if (lVar4 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar4,uVar5,*(undefined8 *)PTR_DAT_076202d0);
      }
      puVar2 = System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo;
      if (*(char *)((long)unaff_x19 + 0xbc) != '\0') {
        plVar9 = (long *)unaff_x19[0x13];
        if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06d4cb80;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_0322c1e8(plVar9,*(long *)
                                      System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo
                              ,0);
LAB_06d4cb80:
        lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<RenamedNamespaceAttribute>_TypeInfo
                                  );
        FUN_0520ccd4();
        if (lVar4 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar4,uVar5,
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerator<SerializableGuid>_TypeInfo);
        plVar9 = (long *)unaff_x19[0x13];
        if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_06d4cc30;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar2,1);
LAB_06d4cc30:
        lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<ResponderID>_TypeInfo);
        FUN_0520ccd4();
        if (lVar4 == 0) goto LAB_06d4cebc;
        FUN_05212ddc(lVar4,uVar5,
                     *(undefined8 *)System_Collections_Generic_IEnumerator<ServerName>_TypeInfo);
      }
      if (*(char *)((long)unaff_x19 + 0xbd) != '\0') {
        plVar9 = (long *)unaff_x19[0x14];
        if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Collections_Generic_ICollection<PemHeader>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto FUN_06d4ccec;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_0322c1e8(plVar9,*(long *)
                                      System_Collections_Generic_ICollection<PemHeader>_TypeInfo,0);
FUN_06d4ccec:
        plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar5 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d9e08);
        FUN_056fc20c();
        if (plVar9 == (long *)0x0) goto LAB_06d4cebc;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)long___TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06d4cd80;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)long___TypeInfo,0);
LAB_06d4cd80:
        uVar5 = (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
        if (unaff_x19[9] == 0) goto LAB_06d4cebc;
        FUN_06c44664(unaff_x19[9],uVar5,0);
      }
      plVar9 = (long *)unaff_x19[0x11];
      *(undefined1 *)(unaff_x19 + 0x1a) = 0;
      if (plVar9 == (long *)0x0) {
LAB_06d4ce14:
        bVar3 = 1;
      }
      else {
        lVar4 = *plVar9;
        bVar3 = *(byte *)(*(long *)
                           System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                         + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
           )) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_075d5728 + 0x130);
          if ((*(byte *)(lVar4 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_075d5728
             )) goto LAB_06d4ce14;
          bVar3 = FUN_06e548ac(plVar9,0);
        }
        else {
          lVar4 = plVar9[6];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar7 = FUN_06e587d8(lVar4,0,0);
          if ((uVar7 & 1) == 0) {
            bVar3 = 0;
          }
          else {
            if (plVar9[6] == 0) goto LAB_06d4cebc;
            bVar3 = FUN_06c6f6e4(plVar9[6],unaff_x19[0x11],0);
          }
        }
        bVar3 = bVar3 & 1;
      }
      *(byte *)((long)unaff_x19 + 0xd1) = bVar3;
      if (unaff_x19[0x1d] != 0) {
        FUN_06e5c8f4();
      }
      FUN_06d4cec0();
      lVar4 = FUN_06e5c698();
      unaff_x19[0x1d] = lVar4;
      thunk_FUN_0329bf60(unaff_x19 + 0x1d,lVar4);
      goto LAB_06d4c838;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x17) = 0;
LAB_06d4c838:
  (**(code **)(*unaff_x19 + 0x248))();
  FUN_06d48768();
  return;
}


