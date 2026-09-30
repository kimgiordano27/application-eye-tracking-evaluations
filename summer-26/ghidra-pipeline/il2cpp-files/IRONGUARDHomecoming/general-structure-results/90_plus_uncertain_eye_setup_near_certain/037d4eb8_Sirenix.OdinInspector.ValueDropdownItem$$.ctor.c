/*
FUNCTION_NAME: Sirenix.OdinInspector.ValueDropdownItem$$.ctor
ENTRY_POINT: 037d4eb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037d51b4) */

long Sirenix_OdinInspector_ValueDropdownItem___ctor(undefined8 param_1)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x22;
  undefined8 *puVar15;
  long unaff_x23;
  undefined8 *puVar16;
  
  puVar1 = Method_UnityEngine_GameObject_AddComponent<Variables>__;
  puVar15 = *(undefined8 **)(unaff_x22 + 0x1f0);
  puVar16 = *(undefined8 **)(unaff_x23 + 0x350);
  uVar9 = FUN_03411150();
  plVar10 = (long *)FUN_022edb90(param_1,uVar9,*puVar15);
  lVar11 = thunk_FUN_01f117cc(*puVar16);
  FUN_02ee7c10(lVar11,*(undefined8 *)puVar1);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *plVar10;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar15 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto Sirenix_OdinInspector_VerticalGroupAttribute___ctor;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
Sirenix_OdinInspector_VerticalGroupAttribute___ctor:
  plVar10 = (long *)(*(code *)*puVar15)(plVar10,puVar15[1]);
  puVar8 = StringLiteral_1222;
  puVar7 = StringLiteral_1221;
  puVar6 = Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<AudioSource>__;
  puVar4 = Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__;
  puVar3 = Method_Unity_VisualScripting_StaticPropertyAccessor<float>_GetValue__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_037d5000;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_037d5000:
    uVar13 = (*(code *)*puVar15)(plVar10,puVar15[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return lVar11;
      }
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_037d5150;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_037d505c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_037d505c:
    lVar12 = (*(code *)*puVar15)(plVar10,puVar15[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = FUN_034128bc(lVar12,0);
    uVar13 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar6,0);
    if (((uVar13 & 1) != 0) ||
       (uVar13 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar8,0), (uVar13 & 1) != 0)) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee8df4(lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
    }
    uVar13 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar7,0);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = thunk_FUN_0340e318(uVar9,*(undefined8 *)StringLiteral_1220,0), (uVar13 & 1) == 0))
    {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee8df4(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar5);
    }
    FUN_02ee8df4(lVar11,uVar9,*(undefined8 *)puVar5);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar15 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_037d516c;
    }
  }
LAB_037d5150:
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_037d516c:
  (*(code *)*puVar15)(plVar10,puVar15[1]);
  return lVar11;
}


