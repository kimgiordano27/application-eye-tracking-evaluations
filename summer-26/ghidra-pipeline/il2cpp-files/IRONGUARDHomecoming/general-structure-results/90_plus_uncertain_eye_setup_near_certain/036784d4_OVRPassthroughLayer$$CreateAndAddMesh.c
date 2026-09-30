/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateAndAddMesh
ENTRY_POINT: 036784d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03678864) */

void OVRPassthroughLayer__CreateAndAddMesh(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  long lVar16;
  
  piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar15 + -2) == param_3) {
      puVar8 = (undefined8 *)(param_1 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03678510;
    }
    in_x9 = in_x9 + -1;
    piVar15 = piVar15 + 4;
  } while (in_x9 != 0);
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03678510:
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_24__;
  puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_20__;
  puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_18__;
  puVar2 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
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
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03678598;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03678598:
    uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_036787d4;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_036785f4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_036785f4:
    uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar14 = FUN_02b302f0(*(long *)(unaff_x20 + 0x30),uVar7,*(undefined8 *)puVar3);
    if ((uVar14 & 1) == 0) {
      lVar16 = *(long *)(unaff_x20 + 0x30);
      plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_23__
                                     ,2);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
      FUN_03678954();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar10[4] = lVar13;
      thunk_FUN_01f51358(plVar10 + 4,lVar13);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
      FUN_03678954();
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,0);
      }
      if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar10[5] = lVar13;
      thunk_FUN_01f51358(plVar10 + 5,lVar13);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b300fc(lVar16,uVar7,plVar10,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_17__);
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = FUN_02b3005c(*(long *)(unaff_x20 + 0x30),uVar7,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_10__
                           );
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x20 + 0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(unaff_x20 + 0x48) * 8 + 0x20);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = *(long **)(unaff_x20 + 0x28);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar16 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar15 + 9) * 0x10 + 0x138);
            goto LAB_03678774;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,9);
LAB_03678774:
      bVar6 = (*(code *)*puVar8)(plVar10,uVar7,lVar13 + 0x14,puVar8[1]);
      *(byte *)(lVar13 + 0x10) = bVar6 & 1;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_036787f0;
    }
  }
LAB_036787d4:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_036787f0:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return;
}


