/*
FUNCTION_NAME: Sirenix.OdinInspector.ValidateInputAttribute$$get_MemberName
ENTRY_POINT: 037d4d7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x037d51b4) */

long Sirenix_OdinInspector_ValidateInputAttribute__get_MemberName(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  
  puVar2 = StringLiteral_1218;
  puVar1 = Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__;
  if ((DAT_048376e0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_1219);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<AudioSource>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Variables>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_1218);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticPropertyAccessor<float>_GetValue__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__);
    thunk_FUN_01efb3a4(Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__);
    thunk_FUN_01efb3a4(StringLiteral_1220);
    thunk_FUN_01efb3a4(StringLiteral_1221);
    thunk_FUN_01efb3a4(StringLiteral_1222);
    DAT_048376e0 = 1;
  }
  uVar9 = FUN_01f08890(*(undefined8 *)puVar1,6);
  FUN_034a9d80(uVar9,*(undefined8 *)puVar2,0);
  lVar10 = FUN_037d5780(param_1);
  if ((lVar10 != 0) &&
     (uVar11 = FUN_03411150(lVar10,uVar9,0), puVar3 = StringLiteral_1219,
     puVar2 = Method_UnityEngine_GameObject_AddComponent<Variables>__,
     puVar1 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__,
     param_1 != 0)) {
    uVar9 = FUN_03411150(param_1,uVar9,0);
    plVar12 = (long *)FUN_022edb90(uVar11,uVar9,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02ee7c10(lVar10,*(undefined8 *)puVar2);
    if (plVar12 != (long *)0x0) {
      lVar14 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto Sirenix_OdinInspector_VerticalGroupAttribute___ctor;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_01ecb238(plVar12,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
                             ,0);
Sirenix_OdinInspector_VerticalGroupAttribute___ctor:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar8 = StringLiteral_1222;
      puVar7 = StringLiteral_1221;
      puVar6 = Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__;
      puVar5 = Method_UnityEngine_GameObject_GetComponent<AudioSource>__;
      puVar4 = Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__;
      puVar3 = Method_Unity_VisualScripting_StaticPropertyAccessor<float>_GetValue__;
      puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_037d5000;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_037d5000:
        uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar15 & 1) == 0) {
          if (plVar12 == (long *)0x0) {
            return lVar10;
          }
          lVar14 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 == 0) goto LAB_037d5150;
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_037d5138;
        }
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_037d505c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_037d505c:
        lVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = FUN_034128bc(lVar14,0);
        uVar15 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar6,0);
        if (((uVar15 & 1) != 0) ||
           (uVar15 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar8,0), (uVar15 & 1) != 0)) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02ee8df4(lVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
        }
        uVar15 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar7,0);
        if (((uVar15 & 1) == 0) &&
           (uVar15 = thunk_FUN_0340e318(uVar9,*(undefined8 *)StringLiteral_1220,0),
           (uVar15 & 1) == 0)) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        else {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02ee8df4(lVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar5);
        }
        FUN_02ee8df4(lVar10,uVar9,*(undefined8 *)puVar5);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_037d5138:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_037d516c;
    }
  }
LAB_037d5150:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_037d516c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return lVar10;
}


