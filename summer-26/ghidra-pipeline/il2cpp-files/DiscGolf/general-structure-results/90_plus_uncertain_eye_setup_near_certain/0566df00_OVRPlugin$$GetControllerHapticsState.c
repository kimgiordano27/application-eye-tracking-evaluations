/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 0566df00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsState(ulong param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  int unaff_w19;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_List<IDeserializable>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IDeserializable>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IDeserializable>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IEventBinding>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IGravityController>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IGroupBoxOption>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IMetricObserver>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<INetworkAdapter>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<INetworkHooks>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IOvrGpuSkinner>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IPAddress>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IPanel>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<IRaycaster>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x637) = 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar9 = FUN_0564a090(uVar1,unaff_w19,0);
  if (iVar9 == 0) {
    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                 System_Collections_Generic_List<IDeserializable>_TypeInfo);
    FUN_0406ea0c(uVar10,0x40,
                 *(undefined8 *)System_Collections_Generic_List<IDeserializable>_TypeInfo);
    puVar8 = System_Collections_Generic_List<IOvrGpuSkinner>_TypeInfo;
    puVar7 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
    puVar6 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
    puVar5 = PTR_DAT_069fb990;
    lVar14 = *(long *)(param_2 + 0xe0);
    if (lVar14 == 0) {
LAB_0566e67c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
      uVar15 = 0;
      uVar12 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
LAB_0566e680:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar16 = *(long *)(lVar14 + uVar15 * 8 + 0x20);
        if ((lVar16 != 0) && (uVar2 = *(uint *)(lVar16 + 0x18), 0 < (int)uVar2)) {
          lVar17 = 0;
          do {
            if (uVar2 <= (uint)lVar17) goto LAB_0566e680;
            lVar18 = *(long *)(lVar16 + 0x20 + lVar17 * 8);
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_0566e67c;
            plVar13 = *(long **)(*(long *)(lVar18 + 0x20) + 0x28);
            if (plVar13 == (long *)0x0) {
LAB_0566e0bc:
              plVar13 = (long *)0x0;
            }
            else {
              bVar3 = *(byte *)(*(long *)puVar6 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar3) goto LAB_0566e0bc;
              if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar6) {
                plVar13 = (long *)0x0;
              }
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar12 = FUN_0634eb94(plVar13,0,0);
            if ((uVar12 & 1) == 0) goto LAB_0566e638;
            if (unaff_w19 < 1) {
              if ((plVar13 == (long *)0x0) || (lVar11 = thunk_FUN_0631c110(plVar13,0), lVar11 == 0))
              goto LAB_0566e67c;
              FUN_0631fad4(lVar11,*(undefined8 *)
                                   System_Collections_Generic_List<IEventBinding>_TypeInfo,0);
              lVar11 = thunk_FUN_0631c110(plVar13,0);
              if (lVar11 == 0) goto LAB_0566e67c;
              FUN_06322274(0x3f800000,lVar11,
                           *(undefined8 *)System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,
                           0);
              lVar11 = thunk_FUN_0631c110(plVar13,0);
              if (lVar11 == 0) goto LAB_0566e67c;
              FUN_0631fad4(lVar11,*(undefined8 *)System_Collections_Generic_List<IPAddress>_TypeInfo
                           ,0);
              lVar11 = thunk_FUN_0631c110(plVar13,0);
              if (lVar11 == 0) goto LAB_0566e67c;
              uVar10 = 0x3f800000;
            }
            else {
              if ((plVar13 == (long *)0x0) || (lVar11 = thunk_FUN_0631c110(plVar13,0), lVar11 == 0))
              goto LAB_0566e67c;
              FUN_0631fcd8(lVar11,*(undefined8 *)
                                   System_Collections_Generic_List<IEventBinding>_TypeInfo,0);
              lVar11 = thunk_FUN_0631c110(plVar13,0);
              if (lVar11 == 0) goto LAB_0566e67c;
              FUN_06322274(0,lVar11,*(undefined8 *)
                                     System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0);
              lVar11 = thunk_FUN_0631c110(plVar13,0);
              if (lVar11 == 0) goto LAB_0566e67c;
              FUN_0631fcd8(lVar11,*(undefined8 *)System_Collections_Generic_List<IPAddress>_TypeInfo
                           ,0);
              lVar11 = thunk_FUN_0631c110(plVar13,0);
              if (lVar11 == 0) goto LAB_0566e67c;
              uVar10 = 0;
            }
            FUN_06322274(uVar10,lVar11,
                         *(undefined8 *)System_Collections_Generic_List<IPanel>_TypeInfo,0);
            lVar11 = thunk_FUN_0631c110(plVar13,0);
            if (lVar11 == 0) goto LAB_0566e67c;
            FUN_0631fcd8(lVar11,*(undefined8 *)puVar8,0);
            lVar11 = thunk_FUN_0631c110(plVar13,0);
            if (lVar11 == 0) goto LAB_0566e67c;
            FUN_06322274(0,lVar11,*(undefined8 *)puVar8,0);
            lVar18 = *(long *)(lVar18 + 0x30);
            if (lVar18 == 0) goto LAB_0566e67c;
            if (*(char *)(lVar18 + 0xd5) == '\0') {
              cVar4 = *(char *)(lVar18 + 0xd6);
              lVar18 = thunk_FUN_0631c110(plVar13,0);
              if (cVar4 == '\0') {
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IRaycaster>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fad4(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IGravityController>_TypeInfo,0)
                ;
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                uVar12 = FUN_0631f9c0(lVar18,*(undefined8 *)puVar7,0);
                if ((uVar12 & 1) != 0) {
                  lVar18 = thunk_FUN_0631c110(plVar13,0);
                  if (lVar18 != 0) {
                    uVar10 = *(undefined8 *)puVar7;
                    uVar19 = 0x40400000;
                    goto LAB_0566e630;
                  }
                  goto LAB_0566e67c;
                }
              }
              else {
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IRaycaster>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fad4(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IGravityController>_TypeInfo,0)
                ;
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                uVar12 = FUN_0631f9c0(lVar18,*(undefined8 *)puVar7,0);
                if ((uVar12 & 1) != 0) {
                  lVar18 = thunk_FUN_0631c110(plVar13,0);
                  if (lVar18 != 0) {
                    uVar10 = *(undefined8 *)puVar7;
                    uVar19 = 0x40800000;
                    goto LAB_0566e630;
                  }
                  goto LAB_0566e67c;
                }
              }
            }
            else {
              lVar18 = thunk_FUN_0631c110(plVar13,0);
              if (unaff_w19 < 1) {
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fad4(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IRaycaster>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IGravityController>_TypeInfo,0)
                ;
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                uVar12 = FUN_0631f9c0(lVar18,*(undefined8 *)puVar7,0);
                if ((uVar12 & 1) != 0) {
                  lVar18 = thunk_FUN_0631c110(plVar13,0);
                  if (lVar18 != 0) {
                    uVar10 = *(undefined8 *)puVar7;
                    uVar19 = 0x3f800000;
                    goto LAB_0566e630;
                  }
                  goto LAB_0566e67c;
                }
              }
              else {
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fad4(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IRaycaster>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                FUN_0631fcd8(lVar18,*(undefined8 *)
                                     System_Collections_Generic_List<IGravityController>_TypeInfo,0)
                ;
                lVar18 = thunk_FUN_0631c110(plVar13,0);
                if (lVar18 == 0) goto LAB_0566e67c;
                uVar12 = FUN_0631f9c0(lVar18,*(undefined8 *)puVar7,0);
                if ((uVar12 & 1) != 0) {
                  lVar18 = thunk_FUN_0631c110(plVar13,0);
                  if (lVar18 == 0) goto LAB_0566e67c;
                  uVar19 = 0;
                  uVar10 = *(undefined8 *)puVar7;
LAB_0566e630:
                  FUN_06322274(uVar19,lVar18,uVar10,0);
                }
              }
            }
LAB_0566e638:
            uVar2 = *(uint *)(lVar16 + 0x18);
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 < (int)uVar2);
        }
        uVar15 = uVar15 + 1;
        uVar12 = (ulong)*(uint *)(lVar14 + 0x18);
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar14 + 0x18));
    }
  }
  return;
}


