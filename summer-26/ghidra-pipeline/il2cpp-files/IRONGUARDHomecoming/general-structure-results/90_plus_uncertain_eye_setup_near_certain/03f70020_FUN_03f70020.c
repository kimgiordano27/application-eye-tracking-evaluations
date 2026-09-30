/*
FUNCTION_NAME: FUN_03f70020
ENTRY_POINT: 03f70020
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_18;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03f70490) */
/* WARNING: Removing unreachable block (ram,0x03f705bc) */

long FUN_03f70020(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483b57c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<VideoPlayer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Wit>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(PTR_DAT_04581170);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04581178);
    thunk_FUN_01efb3a4(PTR_DAT_04581180);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__);
    thunk_FUN_01efb3a4(PTR_DAT_04581188);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045811b0);
    thunk_FUN_01efb3a4(Method_System_DateTime_FromBinary__);
    DAT_0483b57c = 1;
  }
  puVar2 = Method_System_DateTime_FromBinary__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_03ec8718(*(undefined8 *)puVar2,0);
  puVar3 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__;
  puVar1 = Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__;
  if (lVar5 != 0) {
    FUN_022df844(lVar5,param_1,
                 *(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02b6aa68(lVar5,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_03eee138(param_1,0x7c,0);
    puVar4 = PTR_DAT_04581180;
    puVar3 = Method_UnityEngine_GameObject_AddComponent<Wit>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
    if (lVar6 != 0) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar12 = 0;
        uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar14 = *(long **)(lVar6 + uVar12 * 8 + 0x20);
          uVar13 = *(undefined8 *)PTR_DAT_04581188;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          uVar13 = FUN_03595430(plVar14,uVar13,0,0);
          plVar7 = (long *)FUN_022e50c4(uVar13,*(undefined8 *)PTR_DAT_04581170);
          if ((plVar14 == (long *)0x0) ||
             (uVar13 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0)),
             plVar7 == (long *)0x0)) goto LAB_03f705b8;
          lVar10 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04581178) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03f702c8;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_04581178,0);
LAB_03f702c8:
          plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_03f702dc:
          lVar10 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03f70328;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03f70328:
          uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if ((uVar9 & 1) != 0) {
            lVar10 = *plVar7;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_03f70384;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03f70384:
            lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar15 = *(undefined8 *)(lVar10 + 0x10);
            uVar9 = FUN_02b6b4d8(lVar5,uVar15,*(undefined8 *)puVar3);
            if ((uVar9 & 1) == 0) {
              FUN_02b6b2e4(lVar5,uVar15,uVar13,
                           *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<VideoPlayer>__)
              ;
            }
            else {
              uVar15 = FUN_0340f334(*(undefined8 *)PTR_DAT_045811b0,param_1,uVar15,plVar14,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_0403f2cc(uVar15,0);
            }
            goto LAB_03f702dc;
          }
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_03f70474;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_01ecb238(plVar7,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_03f70474:
            (*(code *)*puVar8)(plVar7,puVar8[1]);
          }
          uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      return lVar5;
    }
  }
LAB_03f705b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


