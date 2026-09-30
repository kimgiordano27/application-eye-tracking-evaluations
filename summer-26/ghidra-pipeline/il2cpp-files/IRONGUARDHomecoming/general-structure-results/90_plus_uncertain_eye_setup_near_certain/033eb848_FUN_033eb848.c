/*
FUNCTION_NAME: FUN_033eb848
ENTRY_POINT: 033eb848
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x033ebf08) */
/* WARNING: Removing unreachable block (ram,0x033ebcf4) */
/* WARNING: Removing unreachable block (ram,0x033ec0d0) */
/* WARNING: Removing unreachable block (ram,0x033ec0c4) */

bool FUN_033eb848(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((DAT_048325c2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Matrix4x4_set_Item__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_Get__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsStatic__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyAllToObject<ReadOnlyArray<NamedValue>>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyToObject__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<VisibleLight>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameValueCollection_Add__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAtMutable<VisibleLight>__
                      );
    DAT_048325c2 = 1;
  }
  puVar5 = 
  Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAtMutable<VisibleLight>__
  ;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyToObject__;
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyAllToObject<ReadOnlyArray<NamedValue>>__;
  puVar3 = Method_UnityEngine_Matrix4x4_set_Item__;
  if ((param_2 != 0) && (lVar18 = *(long *)(param_2 + 0x38), lVar18 != 0)) {
    iVar9 = 0;
    lVar20 = 0;
    uVar21 = 0;
    while (plVar10 = *(long **)(lVar18 + 0x20), plVar10 != (long *)0x0) {
      iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
      if (iVar8 <= iVar9) {
        uVar12 = FUN_0340e600(uVar21,*(undefined8 *)
                                      Method_System_Collections_Specialized_NameValueCollection_Add__
                              ,0);
        if (lVar20 == 0) {
          return false;
        }
        if ((uVar12 & 1) != 0) {
          return false;
        }
        uVar12 = FUN_033ce1cc(lVar20,param_3,0);
        if ((uVar12 & 1) == 0) {
          return false;
        }
        if (param_4 != (long *)0x0) {
          uVar21 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
          if (*(int *)(*(long *)Method_Unity_VisualScripting_Member_Get__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_VisualScripting_Member_Get__);
          }
          uVar21 = FUN_0344a284(uVar21,0);
          plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar3);
          FUN_033cdcac(plVar10,0x31,0);
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (plVar13 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar13 != (long *)0x0)) {
            plVar13 = (long *)(**(code **)(*plVar13 + 0x388))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x390));
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            goto LAB_033ebb60;
          }
        }
        break;
      }
      if (((*(long *)(param_2 + 0x38) == 0) ||
          (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar10 == (long *)0x0)) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                      (plVar10,iVar9,*(undefined8 *)(*plVar10 + 0x2f0)),
         plVar10 == (long *)0x0)) break;
      bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
      uVar11 = FUN_033cea34(plVar10,0,0);
      uVar11 = FUN_033cf3e4(uVar11,0);
      uVar12 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar4,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar2,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar1,0);
          if ((uVar12 & 1) == 0) {
            thunk_FUN_0340e318(uVar11,*(undefined8 *)puVar5,0);
          }
        }
        else {
          lVar18 = FUN_033cea34(plVar10,1,0);
          if (lVar18 == 0) break;
          lVar20 = FUN_033cea34(lVar18,0,0);
        }
      }
      else {
        lVar18 = FUN_033cea34(plVar10,1,0);
        if (lVar18 == 0) break;
        uVar21 = FUN_033cea34(lVar18,0,0);
        uVar21 = FUN_033cf3e4(uVar21,0);
      }
      lVar18 = *(long *)(param_2 + 0x38);
      iVar9 = iVar9 + 1;
      if (lVar18 == 0) break;
    }
  }
  goto LAB_033eba94;
LAB_033ebb60:
  lVar20 = *plVar13;
  lVar18 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar18) {
        puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_033ebbac;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar18,0);
LAB_033ebbac:
  uVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar12 & 1) == 0) {
    plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar13 == (long *)0x0) goto LAB_033ebce8;
    lVar18 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar12 == 0) goto LAB_033ebcc0;
    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    goto LAB_033ebca8;
  }
  lVar20 = *plVar13;
  lVar18 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar18) {
        puVar14 = (undefined8 *)(lVar20 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_033ebc0c;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar18,1);
LAB_033ebc0c:
  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (plVar15 != (long *)0x0) {
    bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar7) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_033ce1dc(plVar10,plVar15,0);
  goto LAB_033ebb60;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar19 = piVar19 + 4;
    if (uVar12 == 0) break;
LAB_033ebca8:
    if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
      puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033ebcdc;
    }
  }
LAB_033ebcc0:
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_033ebcdc:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_033ebce8:
  (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
  if (plVar10 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    uVar11 = FUN_03436d88(param_4,uVar11,0);
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar18 = FUN_033d1550(*(long *)(param_2 + 0x38),0);
      lVar20 = *(long *)(param_2 + 0x38);
      if (lVar20 != 0) {
        uVar22 = *(undefined8 *)(lVar20 + 0x38);
        uVar16 = FUN_033d14c4(lVar20,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar20 = FUN_033d442c(*(long *)(param_1 + 0x58),0);
          puVar2 = Method_Meta_WitAi_Lib_MicDebug_OnStopRecording__;
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            do {
              do {
                uVar12 = FUN_033d485c(lVar20,0);
                if ((uVar12 & 1) == 0) goto LAB_033ebe84;
                plVar10 = (long *)FUN_033d4484(lVar20,0);
                uVar12 = FUN_033ec2a0(plVar10,uVar22,uVar16,plVar10);
              } while ((uVar12 & 1) == 0);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar17 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
            } while (*(int *)(lVar17 + 0x18) <= *(int *)(lVar18 + 0x18) >> 3);
            *(long *)(param_1 + 0x70) = (long)plVar10;
            thunk_FUN_01f51358((long *)(param_1 + 0x70),plVar10);
            plVar13 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*plVar13 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            uVar12 = FUN_0344270c(plVar13,uVar11,uVar21,lVar18,0);
          } while ((uVar12 & 1) == 0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_033dd4d0(*(long *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x58),0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar7 = FUN_033dd4e8(*(long *)(param_1 + 0x88),plVar10,0);
          *(byte *)(param_1 + 0x7c) = bVar7 & 1;
LAB_033ebe84:
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          plVar10 = (long *)thunk_FUN_01f116d0(lVar20,*(undefined8 *)
                                                                                                              
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                              );
          if (plVar10 != (long *)0x0) {
            lVar20 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar12 != 0) {
              piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                  puVar14 = (undefined8 *)(lVar20 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_033ebef0;
                }
                uVar12 = uVar12 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar12 != 0);
            }
            puVar14 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_033ebef0:
            (*(code *)*puVar14)(plVar10,puVar14[1]);
          }
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar10 != (long *)0x0)) {
            iVar9 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
            puVar1 = 
            Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<VisibleLight>__
            ;
            puVar2 = Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsStatic__;
            if (iVar9 == 0) {
              *(undefined1 *)(param_1 + 0x7d) = 1;
LAB_033ec054:
              bVar6 = false;
              if (*(char *)(param_1 + 0x7c) != '\0') {
                bVar6 = *(char *)(param_1 + 0x7d) != '\0';
              }
              return bVar6;
            }
            lVar20 = *(long *)(param_2 + 0x38);
            if (lVar20 != 0) {
              iVar9 = 0;
              while (plVar10 = *(long **)(lVar20 + 0x28), plVar10 != (long *)0x0) {
                iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                if (iVar8 <= iVar9) goto LAB_033ec054;
                if (((*(long *)(param_2 + 0x38) == 0) ||
                    (plVar10 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar10 == (long *)0x0)
                    ) || (plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                                      (plVar10,iVar9,
                                                       *(undefined8 *)(*plVar10 + 0x2f0)),
                         plVar10 == (long *)0x0)) break;
                bVar7 = *(byte *)(*(long *)puVar3 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar3)
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar10);
                }
                uVar21 = FUN_033cea34(plVar10,0,0);
                uVar21 = FUN_033cf3e4(uVar21,0);
                uVar12 = thunk_FUN_0340e318(uVar21,*(undefined8 *)puVar1,0);
                if ((uVar12 & 1) != 0) {
                  uVar21 = FUN_033cea34(plVar10,1,0);
                  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
                  FUN_033d0d38(uVar11,uVar21,0);
                  bVar7 = FUN_033ec39c(param_1,uVar11,lVar18);
                  *(byte *)(param_1 + 0x7d) = bVar7 & 1;
                }
                lVar20 = *(long *)(param_2 + 0x38);
                iVar9 = iVar9 + 1;
                if (lVar20 == 0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_033eba94:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


