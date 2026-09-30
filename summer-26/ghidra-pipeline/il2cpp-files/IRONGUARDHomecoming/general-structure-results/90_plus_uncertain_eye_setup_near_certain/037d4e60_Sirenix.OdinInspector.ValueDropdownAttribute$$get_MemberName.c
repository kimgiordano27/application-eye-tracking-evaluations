/*
FUNCTION_NAME: Sirenix.OdinInspector.ValueDropdownAttribute$$get_MemberName
ENTRY_POINT: 037d4e60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037d51b4) */

long Sirenix_OdinInspector_ValueDropdownAttribute__get_MemberName(void)

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
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(StringLiteral_1222);
  *(undefined1 *)(unaff_x21 + 0x6e0) = 1;
  uVar9 = FUN_01f08890(*unaff_x22,6);
  FUN_034a9d80(uVar9,*unaff_x20,0);
  lVar10 = FUN_037d5780();
  if ((lVar10 != 0) &&
     (uVar9 = FUN_03411150(lVar10,uVar9,0), puVar3 = StringLiteral_1219,
     puVar2 = Method_UnityEngine_GameObject_AddComponent<Variables>__,
     puVar1 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalLightData>__,
     unaff_x19 != 0)) {
    uVar11 = FUN_03411150();
    plVar12 = (long *)FUN_022edb90(uVar9,uVar11,*(undefined8 *)puVar3);
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


