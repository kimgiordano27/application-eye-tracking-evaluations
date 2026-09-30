/*
FUNCTION_NAME: Sirenix.OdinInspector.ValueDropdownItem$$ToString
ENTRY_POINT: 037d4ee8
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

long Sirenix_OdinInspector_ValueDropdownItem__ToString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  plVar9 = (long *)FUN_022edb90();
  lVar10 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_02ee7c10(lVar10,*unaff_x24);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *plVar9;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto Sirenix_OdinInspector_VerticalGroupAttribute___ctor;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
Sirenix_OdinInspector_VerticalGroupAttribute___ctor:
  plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
  puVar8 = StringLiteral_1222;
  puVar7 = StringLiteral_1221;
  puVar6 = Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<AudioSource>__;
  puVar4 = Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__;
  puVar3 = Method_Unity_VisualScripting_StaticPropertyAccessor<float>_GetValue__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037d5000;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_037d5000:
    uVar14 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return lVar10;
      }
      lVar13 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_037d5150;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037d505c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_037d505c:
    lVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = FUN_034128bc(lVar13,0);
    uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)puVar6,0);
    if (((uVar14 & 1) != 0) ||
       (uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)puVar8,0), (uVar14 & 1) != 0)) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee8df4(lVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
    }
    uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)puVar7,0);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)StringLiteral_1220,0), (uVar14 & 1) == 0))
    {
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
    FUN_02ee8df4(lVar10,uVar12,*(undefined8 *)puVar5);
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_037d516c;
    }
  }
LAB_037d5150:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_037d516c:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
  return lVar10;
}


