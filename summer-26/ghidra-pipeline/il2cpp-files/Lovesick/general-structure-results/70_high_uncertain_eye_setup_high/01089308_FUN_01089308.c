/*
FUNCTION_NAME: FUN_01089308
ENTRY_POINT: 01089308
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_01089308(undefined8 param_1,long param_2,int param_3,int param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  short sVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  long *plVar23;
  ushort local_68 [2];
  undefined2 local_64 [2];
  
  puVar10 = Method_UnityEngine_UIElements_TextInputBaseField<string>__ctor__;
  if ((DAT_03776271 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_MonoBehaviourEndOfFrameExtensions_UnregisterEndOfFrameCallback__
                      );
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(StringLiteral_1595);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ValueTask<int>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState<__Il2CppFullySharedGenericStructType>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CatchAssistData>_get_Item__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TextInputBaseField<string>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetKeys__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_Add__
                      );
    DAT_03776271 = 1;
  }
  lVar17 = *(long *)puVar10;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar10;
  }
  if ((param_5 & 1) == 0) {
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 != 0) {
      FUN_0160c56c(lVar17,param_2,param_3,param_4,0);
LAB_010899a8:
      return **(undefined8 **)(*(long *)puVar10 + 0xb8);
    }
  }
  else {
    lVar17 = (*(long **)(lVar17 + 0xb8))[1];
    if (lVar17 != 0) {
      lVar21 = *(long *)
                Method_System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_GetEnumerator__
      ;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      uVar18 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 200));
      if ((uVar18 & 1) == 0) {
        *(undefined4 *)(lVar17 + 0x18) = 0;
        plVar23 = (long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      }
      else {
        iVar3 = *(int *)(lVar17 + 0x18);
        *(undefined4 *)(lVar17 + 0x18) = 0;
        plVar23 = (long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__;
        if (0 < iVar3) {
          FUN_0179519c(*(undefined8 *)(lVar17 + 0x10),0,iVar3,0);
          plVar23 = (long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__;
        }
      }
      Method_OVRPlugin_<>c_<_cctor>b__796_105__ = (undefined *)plVar23;
      if (param_2 != 0) {
        iVar3 = *(int *)(param_2 + 0x10);
        if (param_4 < 1) {
          iVar22 = 0;
        }
        else {
          bVar6 = false;
          iVar22 = 0;
          iVar4 = iVar3 + -1;
          do {
            if (iVar4 < iVar22) break;
            uVar15 = FUN_015fa29c(param_2,iVar22,0);
            if ((uVar15 & 0xffff) == 0x3c) {
              uVar15 = FUN_015fa29c(param_2,iVar22 + 1,0);
              lVar17 = *(long *)puVar10;
              bVar1 = iVar4 <= iVar22;
              bVar12 = (uVar15 & 0xffff) != 0x2f;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar17 = *(long *)puVar10;
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
              if (bVar1 || bVar12) {
                if (lVar17 == 0) goto LAB_010899d4;
                uVar2 = 99;
                if ((uVar15 & 0xffff) != 0x23) {
                  uVar2 = uVar15;
                }
                FUN_00ac29ec(lVar17,uVar2,*(undefined8 *)StringLiteral_1595);
              }
              else {
                if (lVar17 == 0) goto LAB_010899d4;
                FUN_01324ac8(lVar17,*(int *)(lVar17 + 0x18) + -1,
                             *(undefined8 *)Method_System_Threading_Tasks_ValueTask<int>__ctor__);
              }
              uVar19 = FUN_01603ec8(param_2,iVar22,0);
              if (*(int *)(*plVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864(*plVar23);
              }
              plVar20 = (long *)FUN_0202015c(uVar19,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Concurrent_ConcurrentDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_GetKeys__
                                             ,0);
              if (plVar20 == (long *)0x0) goto LAB_010899d4;
              uVar18 = FUN_0201bf00(plVar20,0);
              bVar11 = bVar1 || bVar12;
              if ((uVar18 & 1) != 0) {
                if (!bVar6 && (!bVar1 && !bVar12)) {
                  sVar13 = FUN_015fa29c(param_2,iVar22 + 1,0);
                  if (sVar13 == 99) {
                    lVar17 = FUN_00da4fb8(*(undefined8 *)
                                           Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                          ,2);
                    if (lVar17 == 0) goto LAB_010899d4;
                    if ((*(int *)(lVar17 + 0x18) == 0) ||
                       (*(undefined2 *)(lVar17 + 0x20) = 0x23, *(int *)(lVar17 + 0x18) == 1)) {
LAB_010899d8:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    *(undefined2 *)(lVar17 + 0x22) = 99;
                  }
                  else {
                    lVar17 = FUN_00da4fb8(*(undefined8 *)
                                           Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                          ,1);
                    if (lVar17 == 0) goto LAB_010899d4;
                    if (*(int *)(lVar17 + 0x18) == 0) goto LAB_010899d8;
                    *(short *)(lVar17 + 0x20) = sVar13;
                  }
                  iVar16 = iVar22 + -1;
                  iVar7 = iVar22;
                  while (-1 < iVar16) {
                    iVar5 = iVar7 + -1;
                    sVar13 = FUN_015fa29c(param_2,iVar5,0);
                    if ((sVar13 == 0x3c) && (sVar13 = FUN_015fa29c(param_2,iVar7,0), sVar13 != 0x2f)
                       ) {
                      local_64[0] = FUN_015fa29c(param_2,iVar7 + 1,0);
                      iVar16 = FUN_010ae258(lVar17,local_64,
                                            *(undefined8 *)
                                             Method_Oculus_Interaction_MonoBehaviourEndOfFrameExtensions_UnregisterEndOfFrameCallback__
                                           );
                      if (iVar16 != -1) {
                        lVar17 = *(long *)puVar10;
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar17 = *(long *)puVar10;
                        }
                        lVar17 = **(long **)(lVar17 + 0xb8);
                        iVar16 = FUN_016047b8(param_2,0x3e,iVar5,0);
                        uVar19 = FUN_01601d40(param_2,iVar5,(iVar16 - iVar7) + 2,0);
                        if (lVar17 == 0) goto LAB_010899d4;
                        FUN_0160cfc4(lVar17,0,uVar19,0);
                        break;
                      }
                    }
                    iVar16 = iVar7 + -2;
                    iVar7 = iVar5;
                  }
                }
                lVar17 = *(long *)puVar10;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar17 = *(long *)puVar10;
                }
                lVar17 = **(long **)(lVar17 + 0xb8);
                uVar19 = FUN_0201bd24(plVar20,0);
                if (lVar17 == 0) goto LAB_010899d4;
                FUN_0160c430(lVar17,uVar19,0);
                lVar17 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400));
                plVar23 = (long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__;
                if ((lVar17 == 0) ||
                   (lVar17 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered
                                       (lVar17,1,0), lVar17 == 0)) goto LAB_010899d4;
                iVar16 = *(int *)(lVar17 + 0x10) + 1;
                param_4 = iVar16 + param_4;
                param_3 = iVar16 + param_3;
                iVar22 = *(int *)(lVar17 + 0x10) + iVar22;
              }
            }
            else {
              bVar11 = bVar6;
              if (param_3 <= iVar22) {
                lVar17 = *(long *)puVar10;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar17 = *(long *)puVar10;
                }
                if (**(long **)(lVar17 + 0xb8) == 0) goto LAB_010899d4;
                FUN_0160cd0c(**(long **)(lVar17 + 0xb8),uVar15,0);
              }
            }
            bVar6 = bVar11;
            iVar22 = iVar22 + 1;
          } while (iVar22 < param_4);
        }
        lVar17 = *(long *)puVar10;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar17 = *(long *)puVar10;
        }
        puVar9 = Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_Add__;
        puVar8 = Method_System_Collections_Generic_List<CatchAssistData>_get_Item__;
        lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
        if (lVar21 != 0) {
          if ((*(int *)(lVar21 + 0x18) < 1) || (iVar3 = iVar3 + -1, iVar3 <= iVar22)) {
LAB_0108999c:
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            goto LAB_010899a8;
          }
          while( true ) {
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar17 = *(long *)puVar10;
            }
            lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
            if (lVar21 == 0) break;
            if ((iVar3 <= iVar22) || (*(int *)(lVar21 + 0x18) < 1)) goto LAB_0108999c;
            uVar19 = FUN_01603ec8(param_2,iVar22,0);
            if (*(int *)(*plVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar23);
            }
            lVar17 = FUN_0202015c(uVar19,*(undefined8 *)puVar9,0);
            if (lVar17 == 0) break;
            uVar18 = FUN_0201bf00(lVar17,0);
            if ((uVar18 & 1) == 0) {
              lVar17 = *(long *)puVar10;
              goto LAB_0108999c;
            }
            lVar21 = FUN_0201bd24(lVar17,0);
            if (lVar21 == 0) break;
            uVar14 = FUN_015fa29c(lVar21,2,0);
            lVar21 = *(long *)puVar10;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar21);
              lVar21 = *(long *)puVar10;
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
            if (lVar21 == 0) break;
            FUN_0132138c(lVar21,*(int *)(lVar21 + 0x18) + -1,local_68,*(undefined8 *)puVar8);
            if (local_68[0] == uVar14) {
              lVar21 = *(long *)puVar10;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar21 = *(long *)puVar10;
              }
              lVar21 = **(long **)(lVar21 + 0xb8);
              uVar19 = FUN_0201bd24(lVar17,0);
              if (lVar21 == 0) break;
              FUN_0160c430(lVar21,uVar19,0);
              lVar21 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
              if (lVar21 == 0) break;
              FUN_01324ac8(lVar21,*(int *)(lVar21 + 0x18) + -1,
                           *(undefined8 *)Method_System_Threading_Tasks_ValueTask<int>__ctor__);
            }
            lVar21 = FUN_0201bd24(lVar17,0);
            if (lVar21 == 0) break;
            lVar17 = *(long *)puVar10;
            iVar22 = *(int *)(lVar21 + 0x10) + iVar22;
          }
        }
      }
    }
  }
LAB_010899d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


