/*
FUNCTION_NAME: FUN_03678364
ENTRY_POINT: 03678364
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03678864) */

void FUN_03678364(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  if ((DAT_04833de7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_17__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_10__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_21__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_23__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_24__);
    DAT_04833de7 = 1;
  }
  puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__;
  puVar1 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_21__;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    FUN_02b07348(*(long *)(param_1 + 0x40),*(undefined4 *)(param_2 + 0x10),
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_19__);
    lVar15 = *(long *)(param_1 + 0x40);
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    uVar17 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_030bc950(uVar8,uVar17,*(undefined8 *)puVar1);
    if (lVar15 != 0) {
      FUN_02b07154(lVar15,uVar7,uVar8,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_16__);
      plVar14 = *(long **)(param_2 + 0x18);
      if (plVar14 != (long *)0x0) {
        lVar15 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_2__) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03678510;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar14,*(long *)
                                       Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_2__
                              ,0);
LAB_03678510:
        plVar14 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
        puVar5 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_24__;
        puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_20__;
        puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_18__;
        puVar2 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
        ;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar15 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03678598;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar1,0);
LAB_03678598:
          uVar12 = (*(code *)*puVar9)(plVar14,puVar9[1]);
          if ((uVar12 & 1) == 0) {
            if (plVar14 == (long *)0x0) {
              return;
            }
            lVar15 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar12 == 0) goto LAB_036787d4;
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_036787bc;
          }
          lVar15 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_036785f4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar4,0);
LAB_036785f4:
          uVar7 = (*(code *)*puVar9)(plVar14,puVar9[1]);
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = FUN_02b302f0(*(long *)(param_1 + 0x30),uVar7,*(undefined8 *)puVar3);
          if ((uVar12 & 1) == 0) {
            lVar16 = *(long *)(param_1 + 0x30);
            plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                            Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_23__
                                           ,2);
            lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_03678954();
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if ((lVar15 != 0) &&
               (lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            {
              uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar8,0);
            }
            if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar10[4] = lVar15;
            thunk_FUN_01f51358(plVar10 + 4,lVar15);
            lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_03678954();
            if ((lVar15 != 0) &&
               (lVar11 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            {
              uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar8,0);
            }
            if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar10[5] = lVar15;
            thunk_FUN_01f51358(plVar10 + 5,lVar15);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b300fc(lVar16,uVar7,plVar10,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_17__);
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar15 = FUN_02b3005c(*(long *)(param_1 + 0x30),uVar7,
                                  *(undefined8 *)
                                   Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_10__
                                 );
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(param_1 + 0x48) * 8 + 0x20);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar10 = *(long **)(param_1 + 0x28);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar16 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar9 = (undefined8 *)(lVar16 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                  goto LAB_03678774;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,9);
LAB_03678774:
            bVar6 = (*(code *)*puVar9)(plVar10,uVar7,lVar15 + 0x14,puVar9[1]);
            *(byte *)(lVar15 + 0x10) = bVar6 & 1;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_036787bc:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_036787f0;
    }
  }
LAB_036787d4:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar14,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_036787f0:
  (*(code *)*puVar9)(plVar14,puVar9[1]);
  return;
}


