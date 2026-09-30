/*
FUNCTION_NAME: OVRPassthroughLayer$$GetTransformMatrixForPassthroughSurfaceObject
ENTRY_POINT: 03678790
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03678864) */

void OVRPassthroughLayer__GetTransformMatrixForPassthroughSurfaceObject(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  do {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03678598;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03678598:
    uVar8 = (*(code *)*puVar3)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_036787d4;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036785f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_036785f4:
    uVar2 = (*(code *)*puVar3)();
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = FUN_02b302f0(*(long *)(unaff_x20 + 0x30),uVar2,*unaff_x28);
    if ((uVar8 & 1) == 0) {
      lVar10 = *(long *)(unaff_x20 + 0x30);
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_23__
                                    ,2);
      lVar7 = thunk_FUN_01f117cc(*unaff_x25);
      FUN_03678954();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((lVar7 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar4[4] = lVar7;
      thunk_FUN_01f51358(plVar4 + 4,lVar7);
      lVar7 = thunk_FUN_01f117cc(*unaff_x25);
      FUN_03678954();
      if ((lVar7 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar4[5] = lVar7;
      thunk_FUN_01f51358(plVar4 + 5,lVar7);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b300fc(lVar10,uVar2,plVar4,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_17__);
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = FUN_02b3005c(*(long *)(unaff_x20 + 0x30),uVar2,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_10__)
      ;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x48) * 8 + 0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar4 = *(long **)(unaff_x20 + 0x28);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 9) * 0x10 + 0x138);
            goto LAB_03678774;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x29,9);
LAB_03678774:
      bVar1 = (*(code *)*puVar3)(plVar4,uVar2,lVar7 + 0x14,puVar3[1]);
      *(byte *)(lVar7 + 0x10) = bVar1 & 1;
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_036787f0;
    }
  }
LAB_036787d4:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_036787f0:
  (*(code *)*puVar3)();
  return;
}


