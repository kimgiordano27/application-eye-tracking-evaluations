/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializingCallbacks
ENTRY_POINT: 01769900
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_OnSerializingCallbacks(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  long unaff_x19;
  uint uVar14;
  long unaff_x22;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long unaff_x29;
  undefined1 auVar19 [16];
  undefined8 auStack_10 [2];
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<object>_Add__);
  thunk_FUN_00d48444(Unity_Mathematics_float4x4_TypeInfo);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_BaseAffordanceTheme<float2>__ctor__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Rigidbody,_bool>_get_Current__
                    );
  thunk_FUN_00d48444(StringLiteral_363);
  thunk_FUN_00d48444(StringLiteral_2437);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_MoveNext__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_InputRemoting_DeserializeData<InputRemoting_NewDeviceMsg_Data>__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<ManifestErrorHandler>_MoveNext__
                    );
  thunk_FUN_00d48444(StringLiteral_7951);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_s16__);
  thunk_FUN_00d48444(UnityEngine_XR_MeshGenerationResult_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xced) = 1;
  *(undefined4 *)(unaff_x29 + -0x74) = 0;
  auVar19 = FUN_0176a7e0();
  uVar10 = auVar19._8_8_;
  psVar6 = auVar19._0_8_;
  uVar14 = auVar19._8_4_;
  if (((uVar14 != 0) && (*psVar6 == 0x7b)) &&
     (uVar7 = FUN_0176aa8c(psVar6,uVar10,1),
     puVar3 = 
     Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
     , (uVar7 & 1) != 0)) {
    lVar16 = *(long *)
              Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
    ;
    if (uVar14 < 3) {
      FUN_01792d54(0);
    }
    lVar11 = *(long *)(lVar16 + 0x20);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lVar8 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_00d5941c(lVar11);
      uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
      lVar8 = *(long *)(lVar16 + 0x20);
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_00d5941c(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
    *(undefined4 *)(unaff_x29 + -0x54) = 3;
    *(short **)(unaff_x29 + -0x70) = psVar6;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__;
    (**(code **)(lVar8 + 0x10))(uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
    uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
    if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    uVar4 = FUN_00be3c0c(uVar15,uVar14 - 3,0x2c,*(undefined8 *)puVar2);
    if (0 < (int)uVar4) {
      lVar16 = *(long *)PTR_DAT_033f62e0;
      if ((uVar14 < 3) || (uVar14 - 3 < uVar4)) {
        FUN_01792d54(0);
      }
      lVar11 = *(long *)(lVar16 + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x132);
      lVar8 = lVar11;
      if ((uVar1 & 1) == 0) {
        lVar11 = FUN_00d5941c(lVar11);
        uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
        lVar8 = *(long *)(lVar16 + 0x20);
      }
      uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
      *(undefined4 *)(unaff_x29 + -0x54) = 3;
      *(short **)(unaff_x29 + -0x70) = psVar6;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
      (**(code **)(lVar8 + 0x10))(uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
      uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
      if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      *(undefined4 *)(unaff_x29 + -0x70) = 0;
      uVar7 = FUN_0176ad28(uVar15,uVar4,unaff_x29 + -0x70,0xffffffff,0x1000);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar7 = FUN_0176aa8c(psVar6,uVar10,uVar4 + 4);
      if ((uVar7 & 1) != 0) {
        lVar16 = *(long *)puVar3;
        uVar4 = uVar4 + 6;
        if (uVar14 < uVar4) {
          FUN_01792d54(0);
        }
        lVar11 = *(long *)(lVar16 + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x132);
        lVar8 = lVar11;
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_00d5941c(lVar11);
          uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
          lVar8 = *(long *)(lVar16 + 0x20);
        }
        uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
        *(uint *)(unaff_x29 + -0x54) = uVar4;
        *(short **)(unaff_x29 + -0x70) = psVar6;
        *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
        (**(code **)(lVar8 + 0x10))(uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
        uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
        if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        uVar5 = FUN_00be3c0c(uVar15,uVar14 - uVar4,0x2c,*(undefined8 *)puVar2);
        if (0 < (int)uVar5) {
          lVar16 = *(long *)PTR_DAT_033f62e0;
          if ((uVar14 < uVar4) || (uVar14 - uVar4 < uVar5)) {
            FUN_01792d54(0);
          }
          lVar11 = *(long *)(lVar16 + 0x20);
          uVar1 = *(ushort *)(lVar11 + 0x132);
          lVar8 = lVar11;
          if ((uVar1 & 1) == 0) {
            lVar11 = FUN_00d5941c(lVar11);
            uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
            lVar8 = *(long *)(lVar16 + 0x20);
          }
          uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_00d5941c(lVar8);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
          *(uint *)(unaff_x29 + -0x54) = uVar4;
          *(short **)(unaff_x29 + -0x70) = psVar6;
          *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
          (**(code **)(lVar8 + 0x10))(uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
          uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
          if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          *(undefined4 *)(unaff_x29 + -0x60) = 0;
          *(undefined4 *)(unaff_x29 + -0x70) = 0;
          *(undefined2 *)(unaff_x19 + 4) = 0;
          uVar7 = FUN_0176ad28(uVar15,uVar5,unaff_x29 + -0x60,0xffffffff,0x1000,unaff_x29 + -0x70);
          *(short *)(unaff_x19 + 4) = (short)*(undefined4 *)(unaff_x29 + -0x70);
          puVar3 = 
          Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
          ;
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          uVar7 = FUN_0176aa8c(psVar6,uVar10,uVar5 + uVar4 + 1);
          if ((uVar7 & 1) != 0) {
            lVar16 = *(long *)puVar3;
            uVar4 = uVar5 + uVar4 + 3;
            if (uVar14 < uVar4) {
              FUN_01792d54(0);
            }
            lVar11 = *(long *)(lVar16 + 0x20);
            uVar1 = *(ushort *)(lVar11 + 0x132);
            lVar8 = lVar11;
            if ((uVar1 & 1) == 0) {
              lVar11 = FUN_00d5941c(lVar11);
              uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
              lVar8 = *(long *)(lVar16 + 0x20);
            }
            uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
            if ((uVar1 & 1) == 0) {
              lVar8 = FUN_00d5941c(lVar8);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
            *(uint *)(unaff_x29 + -0x54) = uVar4;
            *(short **)(unaff_x29 + -0x70) = psVar6;
            *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
            (**(code **)(lVar8 + 0x10))(uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
            uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
            if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            uVar5 = FUN_00be3c0c(uVar15,uVar14 - uVar4,0x2c,*(undefined8 *)puVar2);
            if (0 < (int)uVar5) {
              lVar16 = *(long *)PTR_DAT_033f62e0;
              if ((uVar14 < uVar4) || (uVar14 - uVar4 < uVar5)) {
                FUN_01792d54(0);
              }
              lVar11 = *(long *)(lVar16 + 0x20);
              uVar1 = *(ushort *)(lVar11 + 0x132);
              lVar8 = lVar11;
              if ((uVar1 & 1) == 0) {
                lVar11 = FUN_00d5941c(lVar11);
                uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
                lVar8 = *(long *)(lVar16 + 0x20);
              }
              uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_00d5941c(lVar8);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
              *(uint *)(unaff_x29 + -0x54) = uVar4;
              *(short **)(unaff_x29 + -0x70) = psVar6;
              *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
              (**(code **)(lVar8 + 0x10))(uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
              uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
              if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              *(undefined4 *)(unaff_x29 + -0x60) = 0;
              *(undefined4 *)(unaff_x29 + -0x70) = 0;
              *(undefined2 *)(unaff_x19 + 6) = 0;
              uVar7 = FUN_0176ad28(uVar15,uVar5,unaff_x29 + -0x60,0xffffffff,0x1000,
                                   unaff_x29 + -0x70);
              uVar9 = 0;
              *(short *)(unaff_x19 + 6) = (short)*(undefined4 *)(unaff_x29 + -0x70);
              plVar17 = (long *)
                        Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
              ;
              if ((uVar7 & 1) == 0) {
                return 0;
              }
              uVar5 = uVar5 + 1;
              uVar13 = uVar5 + uVar4;
              if ((int)uVar13 < (int)uVar14) {
                if (uVar14 <= uVar13) {
LAB_0176a2e8:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194(uVar9);
                }
                if (psVar6[(int)uVar13] == 0x7b) {
                  uVar15 = *(undefined8 *)StringLiteral_7738;
                  auStack_10[0] = 0;
                  *(undefined8 *)(unaff_x29 + -0x70) = 0;
                  *(undefined8 *)(unaff_x29 + -0x68) = 0;
                  uVar9 = FUN_00bd59c0(unaff_x29 + -0x70,auStack_10,8,uVar15);
                  uVar7 = (ulong)*(uint *)(unaff_x29 + -0x68);
                  puVar12 = *(undefined1 **)(unaff_x29 + -0x70);
                  if (0 < (int)*(uint *)(unaff_x29 + -0x68)) {
                    uVar18 = 0;
                    *(ulong *)(unaff_x29 + -0x88) = uVar7;
                    *(undefined1 **)(unaff_x29 + -0x80) = puVar12;
                    do {
                      uVar7 = FUN_0176aa8c(psVar6,uVar10,uVar4 + uVar5 + 1);
                      if ((uVar7 & 1) == 0) goto LAB_0176a268;
                      lVar16 = *plVar17;
                      uVar4 = uVar4 + uVar5 + 3;
                      if (uVar14 < uVar4) {
                        FUN_01792d54(0);
                      }
                      lVar11 = *(long *)(lVar16 + 0x20);
                      uVar1 = *(ushort *)(lVar11 + 0x132);
                      lVar8 = lVar11;
                      if ((uVar1 & 1) == 0) {
                        lVar11 = FUN_00d5941c(lVar11);
                        uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
                        lVar8 = *(long *)(lVar16 + 0x20);
                      }
                      uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
                      if ((uVar1 & 1) == 0) {
                        lVar8 = FUN_00d5941c(lVar8);
                      }
                      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
                      *(uint *)(unaff_x29 + -0x54) = uVar4;
                      *(short **)(unaff_x29 + -0x70) = psVar6;
                      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
                      (**(code **)(lVar8 + 0x10))
                                (uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
                      uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
                      uVar13 = uVar14 - uVar4;
                      if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
                        FUN_00d5941c();
                      }
                      if (uVar18 < 7) {
                        uVar5 = FUN_00be3c0c(uVar15,uVar13,0x2c,*(undefined8 *)puVar2);
                      }
                      else {
                        uVar5 = FUN_00be3c0c(uVar15,uVar13,0x7d,*(undefined8 *)puVar2);
                      }
                      if ((int)uVar5 < 1) goto LAB_0176a268;
                      lVar16 = *(long *)PTR_DAT_033f62e0;
                      if ((uVar14 < uVar4) || (uVar13 < uVar5)) {
                        FUN_01792d54(0);
                      }
                      lVar11 = *(long *)(lVar16 + 0x20);
                      uVar1 = *(ushort *)(lVar11 + 0x132);
                      lVar8 = lVar11;
                      if ((uVar1 & 1) == 0) {
                        lVar11 = FUN_00d5941c(lVar11);
                        uVar1 = *(ushort *)(*(long *)(lVar16 + 0x20) + 0x132);
                        lVar8 = *(long *)(lVar16 + 0x20);
                      }
                      uVar15 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
                      if ((uVar1 & 1) == 0) {
                        lVar8 = FUN_00d5941c(lVar8);
                      }
                      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x30);
                      *(uint *)(unaff_x29 + -0x54) = uVar4;
                      *(short **)(unaff_x29 + -0x70) = psVar6;
                      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x54;
                      (**(code **)(lVar8 + 0x10))
                                (uVar15,lVar8,0,unaff_x29 + -0x70,unaff_x29 + -0x60);
                      uVar15 = *(undefined8 *)(unaff_x29 + -0x60);
                      if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x132) & 1) == 0) {
                        FUN_00d5941c();
                      }
                      *(undefined4 *)(unaff_x29 + -0x70) = 0;
                      uVar9 = FUN_0176ad28(uVar15,uVar5,unaff_x29 + -0x70,0xffffffff,0x1000,
                                           unaff_x29 + -0x74);
                      plVar17 = (long *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
                      ;
                      if ((uVar9 & 1) == 0) {
                        return 0;
                      }
                      if (0xff < *(uint *)(unaff_x29 + -0x74)) goto LAB_0176a268;
                      uVar7 = *(ulong *)(unaff_x29 + -0x88);
                      puVar12 = *(undefined1 **)(unaff_x29 + -0x80);
                      puVar12[uVar18] = (char)*(uint *)(unaff_x29 + -0x74);
                      uVar18 = uVar18 + 1;
                    } while (uVar7 != uVar18);
                  }
                  uVar13 = (uint)uVar7;
                  if (((((uVar13 == 0) || (*(undefined1 *)(unaff_x19 + 8) = *puVar12, uVar13 == 1))
                       || (*(undefined1 *)(unaff_x19 + 9) = puVar12[1], uVar13 < 3)) ||
                      ((*(undefined1 *)(unaff_x19 + 10) = puVar12[2], uVar13 == 3 ||
                       (*(undefined1 *)(unaff_x19 + 0xb) = puVar12[3], uVar13 < 5)))) ||
                     ((*(undefined1 *)(unaff_x19 + 0xc) = puVar12[4], uVar13 == 5 ||
                      ((*(undefined1 *)(unaff_x19 + 0xd) = puVar12[5], uVar13 < 7 ||
                       (*(undefined1 *)(unaff_x19 + 0xe) = puVar12[6], uVar13 == 7))))))
                  goto LAB_0176a2e8;
                  uVar4 = uVar4 + uVar5 + 1;
                  *(undefined1 *)(unaff_x19 + 0xf) = puVar12[7];
                  if ((int)uVar4 < (int)uVar14) {
                    if (uVar14 <= uVar4) goto LAB_0176a2e8;
                    if ((psVar6[(int)uVar4] == 0x7d) && (uVar4 == uVar14 - 1)) {
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0176a268:
  FUN_0176a7a0();
  return 0;
}


