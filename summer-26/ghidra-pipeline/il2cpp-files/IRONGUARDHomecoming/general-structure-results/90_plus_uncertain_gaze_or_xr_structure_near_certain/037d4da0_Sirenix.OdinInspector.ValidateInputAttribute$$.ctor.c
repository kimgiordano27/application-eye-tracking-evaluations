/*
FUNCTION_NAME: Sirenix.OdinInspector.ValidateInputAttribute$$.ctor
ENTRY_POINT: 037d4da0
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

long Sirenix_OdinInspector_ValidateInputAttribute___ctor(ulong param_1,long param_2)

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
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar17;
  
  puVar17 = *(undefined8 **)(unaff_x22 + 0x440);
  puVar16 = *(undefined8 **)(unaff_x20 + 0x1e8);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0x6e0) = 1;
  }
  uVar9 = FUN_01f08890(*puVar17,6);
  FUN_034a9d80(uVar9,*puVar16,0);
  lVar10 = FUN_037d5780(param_2);
  if ((lVar10 != 0) &&
     (uVar11 = FUN_03411150(lVar10,uVar9,0), puVar3 = StringLiteral_1219,
     puVar2 = Method_UnityEngine_GameObject_AddComponent<Variables>__,
     puVar1 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__,
     param_2 != 0)) {
    uVar9 = FUN_03411150(param_2,uVar9,0);
    plVar12 = (long *)FUN_022edb90(uVar11,uVar9,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_02ee7c10(lVar10,*(undefined8 *)puVar2);
    if (plVar12 != (long *)0x0) {
      lVar13 = *plVar12;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
            puVar16 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto Sirenix_OdinInspector_VerticalGroupAttribute___ctor;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)
                FUN_01ecb238(plVar12,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
                             ,0);
Sirenix_OdinInspector_VerticalGroupAttribute___ctor:
      plVar12 = (long *)(*(code *)*puVar16)(plVar12,puVar16[1]);
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
        lVar13 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar16 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_037d5000;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar16 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_037d5000:
        uVar14 = (*(code *)*puVar16)(plVar12,puVar16[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar12 == (long *)0x0) {
            return lVar10;
          }
          lVar13 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_037d5150;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_037d5138;
        }
        lVar13 = *plVar12;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar16 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_037d505c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar16 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_037d505c:
        lVar13 = (*(code *)*puVar16)(plVar12,puVar16[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = FUN_034128bc(lVar13,0);
        uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar6,0);
        if (((uVar14 & 1) != 0) ||
           (uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar8,0), (uVar14 & 1) != 0)) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02ee8df4(lVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
        }
        uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar7,0);
        if (((uVar14 & 1) == 0) &&
           (uVar14 = thunk_FUN_0340e318(uVar9,*(undefined8 *)StringLiteral_1220,0),
           (uVar14 & 1) == 0)) {
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
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_037d5138:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar16 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_037d516c;
    }
  }
LAB_037d5150:
  puVar16 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_037d516c:
  (*(code *)*puVar16)(plVar12,puVar16[1]);
  return lVar10;
}


