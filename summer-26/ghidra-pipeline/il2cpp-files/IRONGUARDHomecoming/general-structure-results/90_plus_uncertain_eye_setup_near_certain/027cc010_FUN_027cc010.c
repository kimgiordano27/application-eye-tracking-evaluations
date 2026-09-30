/*
FUNCTION_NAME: FUN_027cc010
ENTRY_POINT: 027cc010
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x027cc8cc) */
/* WARNING: Removing unreachable block (ram,0x027cc6dc) */
/* WARNING: Removing unreachable block (ram,0x027cc8b8) */

void FUN_027cc010(undefined8 *param_1,long *param_2,uint param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  long local_b8;
  undefined4 local_b0 [4];
  long *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_048305f4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerUpEvent__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_DragEventsProcessor_UnregisterCallbacksFromTarget__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsWithRenderingLayersPass_Setup__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    DAT_048305f4 = 1;
  }
  local_b8 = 0;
  if (param_2 != (long *)0x0) {
    lVar10 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0xb8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_027cc144;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_027cc144:
    plVar12 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
    puVar6 = 
    Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsWithRenderingLayersPass_Setup__;
    puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar4 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar11 = (undefined8 *)((ulong)local_b0 | 4);
    do {
      lVar15 = *plVar12;
      lVar10 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_027cc1cc;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,0);
LAB_027cc1cc:
                    /* try { // try from 027cc1cc to 028cc4df has its CatchHandler @ 027cc1cc
                       catch() { ... } // from try @ 027cc1cc with catch @ 027cc1cc
                       catch() { ... } // from try @ 027cc5f0 with catch @ 027cc1cc
                       catch() { ... } // from try @ 027cc63c with catch @ 027cc1cc
                       catch() { ... } // from try @ 027cc678 with catch @ 027cc1cc */
      uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar12 == (long *)0x0) break;
        lVar10 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 == 0) goto LAB_027cc7d0;
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_027cc7b8;
      }
      lVar10 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 200);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar15 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_027cc250;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,0);
LAB_027cc250:
      (*(code *)*puVar13)(local_b0,plVar12,puVar13[1]);
      plVar9 = local_a0;
      uVar7 = local_b0[0];
      local_78 = *puVar11;
      local_70 = *(undefined4 *)(puVar11 + 1);
      lVar10 = param_1[1];
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      local_88 = local_78;
      local_80 = local_70;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_98 = local_78;
      local_90 = local_70;
      lVar15 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0xd8);
      *(undefined4 *)(puVar11 + 1) = local_90;
      *puVar11 = local_98;
      FUN_02aefee0(lVar10,local_b0[0],local_b0,uVar14);
      if ((param_3 & 1) != 0) {
        plVar19 = (long *)*param_1;
        if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *plVar19;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
               ) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar18 + 2) * 0x10 + 0x138);
              goto LAB_027cc370;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar19,*(long *)
                                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                               ,2);
LAB_027cc370:
        (*(code *)*puVar13)(plVar19,uVar7,puVar13[1]);
      }
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      if (plVar9 != (long *)0x0) {
        lVar10 = param_1[3];
        if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = FUN_02b088e0(lVar10,uVar7,&local_b8,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__
                             );
        if ((uVar16 & 1) == 0) {
          lVar10 = param_1[3];
          if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          auVar20 = FUN_029ea538(*(undefined8 *)
                                  Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerUpEvent__
                                );
          local_b8 = auVar20._0_8_;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(local_b8,auVar20._8_8_,local_b8);
          }
          FUN_02b07154(lVar10,uVar7,local_b8,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_DragEventsProcessor_UnregisterCallbacksFromTarget__
                      );
        }
        lVar10 = *(long *)(param_4 + 0x20);
        uVar1 = *(ushort *)(lVar10 + 0x135);
        if ((uVar1 & 1) == 0) {
          FUN_01ecaf44();
          lVar10 = *(long *)(param_4 + 0x20);
          uVar1 = *(ushort *)(lVar10 + 0x135);
        }
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0xb8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar15 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_027cc4b8;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_027cc4b8:
        plVar19 = (long *)(*(code *)*puVar13)(plVar9,puVar13[1]);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_027cc4cc:
        lVar15 = *plVar19;
        lVar10 = *(long *)puVar5;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
                    /* try { // try from 027cc4e0 to 028cc547 has its CatchHandler @ 027cc604 */
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_027cc518;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar19,lVar10,0);
LAB_027cc518:
        uVar16 = (*(code *)*puVar13)(plVar19,puVar13[1]);
        if ((uVar16 & 1) != 0) {
          lVar10 = *(long *)(param_4 + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 200);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          lVar15 = *plVar19;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
                    /* try { // try from 027cc56c to 028cc5af has its CatchHandler @ 027cc608 */
              if (*(long *)(piVar18 + -2) == lVar10) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_027cc59c;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar19,lVar10,0);
LAB_027cc59c:
          (*(code *)*puVar13)(local_b0,plVar19,puVar13[1]);
          uVar8 = local_b0[0];
          lVar10 = param_1[2];
          uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
          if ((uVar1 & 1) == 0) {
            FUN_01ecaf44();
            uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
          }
          if ((uVar1 & 1) == 0) {
                    /* try { // try from 027cc5d8 to 028cc5db has its CatchHandler @ 027cc600 */
            FUN_01ecaf44();
          }
                    /* try { // try from 027cc5dc to 028cc5ef has its CatchHandler @ 027cc60c */
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
                    /* try { // try from 027cc5f0 to 028cc623 has its CatchHandler @ 027cc1cc */
          FUN_02b0154c(lVar10,uVar8,uVar7,*(undefined8 *)puVar6);
          lVar10 = local_b8;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027cc5d8 with catch @ 027cc600
                        */
          if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027cc4e0 with catch @ 027cc604
                        */
            FUN_01ecaf44();
          }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027cc56c with catch @ 027cc608
                        */
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027cc5dc with catch @ 027cc60c
                        */
          lVar15 = *(long *)(lVar10 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
                    /* try { // try from 027cc624 to 028cc63b has its CatchHandler @ 027cc670 */
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                    /* try { // try from 027cc63c to 028cc65f has its CatchHandler @ 027cc1cc */
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = uVar8;
          }
          else {
            FUN_030ba904(lVar10,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 027cc660 to 028cc66f has its CatchHandler @ 027cc670 */
          }
          goto LAB_027cc4cc;
        }
        if (plVar19 != (long *)0x0) {
                    /* catch() { ... } // from try @ 027cc624 with catch @ 027cc670
                       catch() { ... } // from try @ 027cc660 with catch @ 027cc670 */
          lVar10 = *plVar19;
                    /* try { // try from 027cc674 to 028cc677 has its CatchHandler @ 027cc680 */
                    /* try { // try from 027cc678 to 028cc683 has its CatchHandler @ 027cc1cc */
          uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027cc674 with catch @ 027cc680
                        */
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_027cc6c4;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_01ecb238(plVar19,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_027cc6c4:
          (*(code *)*puVar13)(plVar19,puVar13[1]);
        }
        lVar10 = *(long *)(param_4 + 0x20);
        uVar1 = *(ushort *)(lVar10 + 0x135);
        if ((uVar1 & 1) == 0) {
          FUN_01ecaf44();
          lVar10 = *(long *)(param_4 + 0x20);
          uVar1 = *(ushort *)(lVar10 + 0x135);
        }
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
        FUN_027cc010(param_1,plVar9,0,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0xb0));
      }
    } while( true );
  }
  goto LAB_027cc7fc;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_027cc7b8:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_027cc7ec;
    }
  }
LAB_027cc7d0:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_027cc7ec:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_027cc7fc:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


